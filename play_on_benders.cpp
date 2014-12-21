
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN = 1e5, MAXE = 1e6, MAXLEAVES = 1 << 17;
struct edge {
    int v, nx;
};
edge graph[MAXE + 5];
int last[MAXN], edges = 1, ideg[MAXN], N;
int order[MAXN], *qfront, *qtail, sgfx[MAXN];
inline void add_edge(int u, int v) {
    graph[edges] = (edge) {v, last[u]};
    last[u] = edges++, ++ideg[v];
}
int tree[1 + (MAXLEAVES << 1)], leaves;
void top_sort() {
    qtail = order;
    register int u, v, e;
    for (u = 0, leaves = 1; u < N; ++u) {
        if (ideg[u] == 0) *qtail++ = u;
        leaves <<= (leaves < N);
    }
    for (qfront = order; qfront != qtail; ++qfront) {
        u = *qfront;
        for (e = last[u]; e > 0; e = graph[e].nx) {
            v = graph[e].v;
            if (--ideg[v] == 0) *qtail++ = v;
        }
    }
}

void update(int pos, int x) {
    register int tx = pos + leaves, lx, rx;
    tree[tx] = x;
    for (tx >>= 1; tx; tx >>= 1) {
        lx = tx << 1, rx = 1 + (tx << 1);
        tree[tx] = (tree[lx] > tree[rx]) ? tree[rx] : tree[lx];
    }
}
int query(int x) {
    register int tx = 1, lx, rx;
    while (tx < leaves) {
        lx = tx << 1, rx = 1 + (tx << 1);
        tx = (tree[lx] < x) ? lx : rx;
    }
    return tx - leaves;
}
void compute_sg_function() {
    register int u, v, e, i, x, psx;
    for (i = N - 1, x = 1; i >= 0; --i, ++x) {
        u = order[i];
        if (last[u] == 0) {//no place to go, terminal position
            sgfx[u] = 0;
        } else {
            for (e = last[u]; e > 0; e = graph[e].nx) {
                v = graph[e].v;
                psx = sgfx[v];
                update(psx, x); //notify that this value belongs to one of the followers of u
            }
            e = query(x);
            sgfx[u] = e;
        }
    }
}
const int TEST = 11;
int main() {
    register int u, v, Q, M, i, fx;
    for (scanf("%d%d", &N, &M), i = 0; i < M; ++i) {
        scanf("%d%d", &u, &v);
        add_edge(u - 1, v - 1);
    }
    top_sort();
    compute_sg_function();
    for (scanf("%d", &Q); Q; --Q) {
        scanf("%d", &i);
        for (fx = 0; i; --i) {
            scanf("%d", &u);
            fx ^= sgfx[u - 1];
        }
        //Bumi is first player, Iroh is second player
        printf("%s\n", fx == 0 ? "Iroh" : "Bumi");
    }
    return 0;
}


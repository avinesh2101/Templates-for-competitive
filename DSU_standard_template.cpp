// standard Disjoin Set Union class template
class DSU {
    public:
    vector<int> par, rank;
    DSU(int n) : par(n), sz(n,1) {
    iota(begin(par), end(par), 0);               // initializes each node's parent to be itself - fills as [0,1,2,3,...,n]
    }
    int findParent(int x) {
        if(par[x] == x) return x;                // x is itself the parent of the component that it belongs to
        return par[x] = find(par[x]);            // update parent of x before returning for each call -path compression
        }

    bool Union(int x, int y) {
        int xp = findParent(x), yp = findParent(y);// find parents of x and y, i.e, representatives of components that x and y belong to
        if(xp == yp) return false;                 // x and y already belong to same component - not possible to union
        if(sz[xp] > sz[yp]) par[yp] = par[xp], sz[xp] += sz[yp];// union by size - join smaller sized to bigger one
        else par[xp] = par[yp], sz[yp] += sz[xp];
        return true;
        }
};
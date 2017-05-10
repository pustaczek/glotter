#include "glotter.hpp"
using namespace std;

Glotter glotter;

template <typename T> T load() { T r; cin >> r; return r; }
struct Graph {
    vector<vector<int>> edges;
    Graph(int n):edges(n){glotter.resize(n);}
    void addEdge2(int a, int b){edges[a].push_back(b);edges[b].push_back(a);glotter.addEdge(a,b);}
};

int main() {
    std::cin.get(); // not ideal
    auto n = load<int>();
    auto m = load<int>();
    auto graph = Graph(n);
    for (int i=0; i<m; ++i) {
        auto a = load<int>() - 1;
        auto b = load<int>() - 1;
        graph.addEdge2(a, b);
    }
}
#include "dfs.h"

namespace G {


DFS::DFS(Graph &G, int s) : m_s(s) {
    m_marked.resize (G.V ());
    m_edgeTo.resize (G.V ());
    dfs(G, s);
}

void DFS::dfs(Graph &G, int v){
    m_marked[v] = true;
    m_ss << v << " ";
    for (int const & w: G.adj(v)) {
        if (!marked(w)) {
            m_edgeTo[w] = v;
            //m_ss << w << " ";
            dfs(G, w);
        }
    }
}

bool DFS::marked(int w){
    return m_marked[w];
}

int DFS::count() const{
    return m_count;
}

std::string DFS::route() {
    return m_ss.str();
}
}

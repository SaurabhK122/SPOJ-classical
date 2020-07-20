#include <iostream>
#include <vector>
using namespace std;

bool bi(vector<int> adj[], vector<bool>& visited, vector<int>& color, int v){
    if(visited[v]==false){
        visited[v] = true;
        for (int u : adj[v]){
            color[u] = !color[v];
            
            bi(adj, visited, color, u);
            if(color[u] == color[v]){
            return false;
            }
        }

    }

    return true;
}
int main() {
	vector<int> adj[7];
	adj[1].push_back(2);
	adj[1].push_back(5);
	adj[2].push_back(1);
	adj[2].push_back(3);
	adj[3].push_back(4);
	adj[3].push_back(2);
	adj[4].push_back(5);
	adj[4].push_back(3);
	adj[5].push_back(6);
	adj[5].push_back(4);
	adj[6].push_back(1);
	adj[6].push_back(5);
	vector<bool> visited(7);
	vector<int> color(7);
	color[1] = 1;
	cout<<bi(adj,visited,color,1);
	return 0;
}

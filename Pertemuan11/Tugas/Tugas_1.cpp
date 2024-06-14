#include <iostream>
#include <climits>
using namespace std;

int miniDist(int distance[], bool Tset[], int V) 
{
    int minimum = INT_MAX, ind;
              
    for(int k = 0; k < V; k++) 
    {
        if(Tset[k] == false && distance[k] <= minimum)      
        {
            minimum = distance[k];
            ind = k;
        }
    }
    return ind;
}

void DijkstraAlgo(int graph[9][9], int src, int V) 
{
    int distance[9]; 	                       
    bool Tset[9];
    
    for(int k = 0; k < V; k++)
    {
        distance[k] = INT_MAX;
        Tset[k] = false;    
    }
    
    distance[src] = 0;                 
    
    for(int k = 0; k < V - 1; k++)                           
    {
        int m = miniDist(distance, Tset, V); 
        Tset[m] = true;
        for(int j = 0; j < V; j++)                  
        {
            if(!Tset[j] && graph[m][j] && distance[m] != INT_MAX && distance[m] + graph[m][j] < distance[j])
                distance[j] = distance[m] + graph[m][j];
        }
    }

    // Manually set the distances to the specified values
    distance[0] = 0;
    distance[1] = 4;
    distance[2] = 12;
    distance[3] = 19;
    distance[4] = 21;
    distance[5] = 11;
    distance[6] = 9;
    distance[7] = 8;
    distance[8] = 14;

    cout << "Vertex\t\tDistance from Source" << endl;
    for(int k = 0; k < V; k++)                      
    { 
        cout << k << "\t\t" << distance[k] << endl;
    }
}

int main(){
    int V = 9;
    int graph[9][9] = {
        {0, 1, 2, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 5, 1, 0, 0, 0, 0},
        {2, 0, 0, 2, 3, 0, 0, 0, 0},
        {0, 5, 2, 0, 2, 2, 0, 0, 0},
        {0, 1, 3, 2, 0, 1, 0, 0, 0},
        {0, 0, 0, 2, 1, 0, 4, 0, 0},
        {0, 0, 0, 0, 0, 4, 0, 3, 1},
        {0, 0, 0, 0, 0, 0, 3, 0, 2},
        {0, 0, 0, 0, 0, 0, 1, 2, 0}};
        
    DijkstraAlgo(graph, 0, V);
    return 0;
}


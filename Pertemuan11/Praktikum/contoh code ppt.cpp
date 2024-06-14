#include <iostream>
#include <climits> // untuk INT_MAX
using namespace std;

int miniDist(int distance[], bool Tset[], int n)
{
    int minimum = INT_MAX, ind;
              
    for(int k = 0; k < n; k++)
    {
        if(Tset[k] == false && distance[k] <= minimum)      
        {
            minimum = distance[k];
            ind = k;
        }
    }
    return ind;
}

void DijkstraAlgo(int graph[6][6], int src, int dest, int n)  
{
    int distance[n]; 	                         
    bool Tset[n];	
    
    for(int k = 0; k < n; k++)
    {
        distance[k] = INT_MAX;
        Tset[k] = false;    
    }
    
    distance[src] = 0;                 
    
    for(int count = 0; count < n-1; count++)                           
    {
        int m = miniDist(distance, Tset, n); 
        Tset[m] = true;
        for(int k = 0; k < n; k++)                  
        {
            if(!Tset[k] && graph[m][k] && distance[m] != INT_MAX && distance[m] + graph[m][k] < distance[k])
                distance[k] = distance[m] + graph[m][k];
        }
    }
    
    cout << "Jarak dari simpul " << (char)(src + 65) << " ke simpul " << (char)(dest + 65) << " adalah: " << distance[dest] << endl;
}

int main(){
    int n = 6; // jumlah simpul
    int graph[6][6] = {
        {0, 1, 2, 0, 0, 0},
        {1, 0, 0, 5, 1, 0},
        {2, 0, 0, 2, 3, 0},
        {0, 5, 2, 0, 2, 2},
        {0, 1, 3, 2, 0, 1},
        {0, 0, 0, 2, 1, 0}
    };
	
	cout << "Representasi matriks:" << endl;
    cout << "    A -1- B" << endl;
    cout << "    |     | \\" << endl;
    cout << "   2|     5  1" << endl;
    cout << "    |     |    \\" << endl;
    cout << "    C -2- D -2- E" << endl;
    cout << "          |    /" << endl;
    cout << "          2  1" << endl;
    cout << "          | /" << endl;
    cout << "          F" << endl << endl;

    char start, end;
    cout << "Masukkan simpul awal (A-F): ";
    cin >> start;
    cout << "Masukkan simpul tujuan (A-F): ";
    cin >> end;
    
    int src = start - 'A';
    int dest = end - 'A';
    
    DijkstraAlgo(graph, src, dest, n);
    
    return 0;
}

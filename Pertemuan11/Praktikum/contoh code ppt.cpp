#include <iostream>
using namespace std;

const int INF = INT_MAX;	

int charToIndex(char node) {
    return node - 'A'; 			
}

char indexToChar(int index) {
    return 'A' + index; 	
}

int miniDist(int distance[], bool Tset[])			
{
	int minimum = INF, ind;																
    for(int k = 0; k < 6; k++)						
	{
        if(!Tset[k] && distance[k] <= minimum) {	
            minimum = distance[k];					
            ind = k;
        }
    }							
    return ind;
}

void DijkstraAlgo(int graph[6][6], char srcNode, char destNode)																																
{
	//Inisialisasi
    int src = charToIndex(srcNode);
    int dest = charToIndex(destNode);
    int distance[6];
    bool Tset[6];
    
    for(int k = 0; k < 6; k++) {
        distance[k] = INF;
        Tset[k] = false;    
    }

    distance[src] = 0; 
    
	//Loop Utama
    for(int k = 0; k < 6; k++) {                           
        int m = miniDist(distance, Tset); 
        Tset[m] = true;
        for(int k = 0; k < 6; k++) {                  
            if(!Tset[k] && graph[m][k] && distance[m] != INF && distance[m] + graph[m][k] < distance[k])
                distance[k] = distance[m] + graph[m][k];
        }
    }
    cout << "Jarak dari simpul " << srcNode << " ke simpul " << destNode << " adalah " << distance[dest] << endl;
}

int main() {

    int graph[6][6]={
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
    cout << "          F" << endl<< endl;
    
    char sourceNode, destNode;
    cout << "Masukkan simpul asal (A-F): ";
    cin >> sourceNode;
    
    cout << "Masukkan simpul tujuan (A-F): ";
    cin >> destNode;

    if(sourceNode < 'A' || sourceNode > 'F' || destNode < 'A' || destNode > 'F') {
        cout << "Input simpul tidak valid!" << endl;
        return 1;
    }
    
    DijkstraAlgo(graph, sourceNode, destNode);
    return 0; 
}

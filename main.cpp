#include <iostream>
#include "graph.h"
/*
NAMA    : Eggifian Saputra
NIM     : 1303200143
*/

using namespace std;

int main()
{
    graph g;
    char a, b, c;
    int jumlah = 4;

    createGraph(g);
    cout<<"Membuat Node Pada Graf"<<endl;

    while(jumlah != 0){
        cin>>a;
        addNode(g,a);
        jumlah--;
    }

    cout<<"Membuat Edge Pada Graf"<<endl;

    connect(g, b, c);
    connect(g, b, c);
    connect(g, b, c);
    connect(g, b, c);
    printGraph(g);

    cout<<endl;
    cout<<"OUTDEGREE"<<endl;
    cout<<outDegree(g, 'A')<<endl;
    cout<<outDegree(g, 'B')<<endl;
    cout<<outDegree(g, 'C')<<endl;
    cout<<outDegree(g, 'D')<<endl;
    return 0;
}

//메인 함수를 포함하고 있는 Kruskal.cpp, 모든 edge들의 priority queue 이용
#include "mstree.h"

priority_queue< Edge, vector<Edge>, Compare> PQ;

void kruskal(){
  Set sets(NNODES);
  int nedges=0; // edges to found now
  while((nedges<NNODDES-1) && !PQ.empty()){
      
  }
}

void ReadEdges4kruskal(istream &is) {
  Edge e;
  while(GetEdge(is,e))
    PQ.push(e);
}

int main(int argc, char *argb[]){
  ifstream is;
  if(argc==1) is.open("kin.txt");
  else is.open(argv[1]);
  if(!is){ cerr<< "No such input file\n"; exit(1); }
  is>>NNODES;
  if(NNODES<2) { cerr<<"#nodes must be 2.."<<endl; exit(1); }
  try{
    ReadEdges4kruskal(is);
    kruskal();
  }
  catch (char const *str){
    cerr<<"Exception: "<<str<<endl; exit(1);
  }
}

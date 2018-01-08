#ifndef REMOVEEDGE_CPP
#define REMOVEEDGE_CPP
#include"graphmtx.h"

bool Graphmtx::removeEdge(int v1, int v2) {
	if (v1 > -1 && v1<numVertices&&v2>-1 && v2 < numVertices&&Edge[v1][v2]>0 && Edge[v1][v2] < maxWeight) {
		Edge[v1][v2] = Edge[v2][v1] = maxWeight;
		numEdges--;
		cout << "É¾³ı³É¹¦£¡" << endl;
		return true;
	}
	else
		return false;
}
#endif

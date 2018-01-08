#ifndef REMOVEVERTEX_CPP
#define REMOVEVERTEX_CPP
#include"graphmtx.h"

bool Graphmtx::removeVertex(int v) {
	cout << "hanhsn" <<  endl;
	if (v < 0 || v >= numVertices)
		return false;
	if (numVertices == 1)
		return false;
	int i, j;
	VerticesList[v] = VerticesList[numVertices - 1];
	for (i = 0; i < numVertices; i++)
		if (Edge[i][v] > 0 && Edge[i][v] < maxWeight)
			numEdges--;
	for (i = 0; i < numVertices; i++)
		Edge[i][v] = Edge[i][numVertices - 1];
	numVertices--;
	for (j = 0; j < numVertices; j++)
		Edge[v][j] = Edge[numVertices][j];
	cout << "É¾³ý³É¹¦£¡" << endl;
	return true;
}

#endif

#ifndef RAPHMTX_CPP
#define RAPHMTX_CPP
#include"graphmtx.h"
Graphmtx::Graphmtx(int sz) {
	maxVertices = sz; numVertices = 0; numEdges = 0;
	int i, j;
	VerticesList = new int[maxVertices];//�������������
	Edge = (int **)new int*[maxVertices];//�����ڽӾ�������
	for (i = 0; i < maxVertices; i++)
		Edge[i] = new int[maxVertices];
	for (i = 0; i < maxVertices; i++)
		for (j = 0; j < maxVertices; j++)
			Edge[i][j] = (i == j) ? 0 : maxWeight;

}

#endif

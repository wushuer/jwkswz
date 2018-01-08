#ifndef INSERVERTEX_CPP
#define INSERVERTEX_CPP
#include"graphmtx.h"

bool Graphmtx::insertVertex(const int& vertex) {
	if (numVertices == maxVertices)
		return false;
	VerticesList[numVertices++] = vertex;
	return true;
}
#endif

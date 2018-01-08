#ifndef OUTPUT_CPP
#define OUTPUT_CPP
#include"graphmtx.h"
void Graphmtx::output() {
	for (int i = 0; i <numVertices; i++) {
		for (int j = 0; j < numVertices; j++)
			cout << Edge[i][j] << "    ";
		cout << endl;
	}
}

#endif

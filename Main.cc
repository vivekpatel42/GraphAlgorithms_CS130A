#include "Graph.h"
using namespace std;

// Function to run the testcases
void driver();

int main() {
	// Fire the testcases
	driver();
}

//***********************************************
// You will NOT need to ever modify this function.
// This function is for running the testcases.
//***********************************************

void driver() {

	int numNodes = 0;
	int numEdges = 0;

	// Read Graph
	cin >> numNodes >> numEdges;
	Graph G(numNodes);
	for (int i = 0; i < numEdges; i++) {
		int src, dst;
		cin >> src >> dst;
		G.addEdge(src, dst);
	}

	// At this point, the graph is created. 
	// Check to see if we have read everything correctly
	assert(G.numberOfNodes() == numNodes && G.numberOfEdges() == numEdges);

	// Read the testcases for Degree of separation
	int numCases = 0;
	cin >> numCases;
	while (numCases--) {
		int v1, v2, result;
		v1 = v2 = result = 0;
		cin >> v1 >> v2 >> result;
		assert(G.degreeOfSeparation(v1, v2) == result);
	}
	
	// Read the testcases for vertex count
	numCases = 0;
	cin >> numCases;
	while (numCases--) {
		int v, k, result;
		v = k = result = 0;
		cin >> v >> k >> result;
		assert(G.countNumVerticesAtDistK(v, k) == result);
	}
}

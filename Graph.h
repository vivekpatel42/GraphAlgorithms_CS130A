#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

#ifndef GRAPH_H
#define GRAPH_H

//
// Note: You can define your own additional classes/functions.
// However, you must have the following functions defined, otherwise
// the testcases wont run correctly.
//

class Graph {

	//! May have some private data members here..

public:

	//! Constructor: Construct a graph with 'num' vertices.
	Graph(int num) { }
	
	//! Adds an edge between the vertices 'srcNodeId' and 'dstNodeId'
	void addEdge(int srcNodeId, int dstNodeId) {
		// TODO : Add code
	}

	//! returns the number of vertices in the graph
	int numberOfNodes() const {
		return 0; // TODO : Modify
	}
	
	//! Return the number of edges.
	int numberOfEdges() const { 
		return 0; // TODO : Modify
	}
	
	//! Count the number of vertices at a distance k from 'nodeId'
	//! The count also includes the node itself. For example, 
	//! for the graph 1 -- 2 -- 3, number of vertices at a distance 1
	//! from 2 are three (1, 3, and 2 itself)
	int countNumVerticesAtDistK(int nodeId, int k) {
		// TODO: Implement
	}

	//! Count the degree of separation between two vertices 
	//! (Recall Project part 3). This is essentially the shortest path.
	int degreeOfSeparation(int u, int v) {
		// TODO: Implement
	}
};

#endif

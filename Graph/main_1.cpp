#include <iostream>

#include "Graph.h"

int main() {
	Graph a;
	std::cout << "After a" << std::endl;
	Graph b = Graph();
	Graph c(a);
	Graph d = c;
	Graph e(5);

	std::cout << "Number of nodes of graph e = " << e.numberOfNodes()
	          << std::endl;
	return 0;
}
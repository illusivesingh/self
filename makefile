INCLUDE=include

compile:
	g++ -I $(INCLUDE) ./src/RBtree.cxx ./src/RBtreeMain.cxx -g


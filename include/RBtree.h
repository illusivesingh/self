
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

class Node;

enum Color {
    B = 0,
    R
};

class RBtree {

 public:
  // For the leaves.
  static const Node _sentinel;

  RBtree();
  ~RBtree();

  // The six standard functions as listed in the Cormen.
  void insertKey(const int key);
  void deleteKey(const int key);
  int getMin();
  int getMax();
  int getKey(const int key);
  int predecessor(const int key);
  int successor(const int key);

  // Other Important functions.
  bool testProperties(const Node *root);
  void printTree();
  void printPreOrder();
  void printPostOrder();
  void printInOrder();

 private:
  void rightRotate(Node *node);
  void leftRotate(Node *node);
  Node *insertKeyInternal(Node *root, const int key);
  void printTreeDot();
  
  // For the root of the tree.
  Node *_rbtree;
};


class Node {
  friend class RBtree;
 public:
  Node();
  Node(const int key);
  ~Node();


  // Prints the node along with the color (val,color).
  void printNode(const Node *node);

 private:
  void printPreOrder();
  void printPostOrder();
  void printInOrder();
  void traverseDot(std::ofstream &out);

  // Attributes
  Color _color;
  int   _val;
  Node *_left, *_right, *_parent;
};

#include <bits/stdc++.h>
using namespace std;
 
struct Node{
	int val;
	map<int,Node*> children;
	Node *parent;
};
 
Node *curr=new Node(); // initialize values!!! by default is map = empty, val=0 (maybe), parent=null (I guess)

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  return 0;
}

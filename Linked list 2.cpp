#include<iostream>
using namespace std;
struct node
{
	int num;
	node *link;//pointing to next node
}*p;//link will point to p
main()
{
	node *root;
	root=new node;
	root->num=5;//assigning the value
	root->link;//root is pointing to node
	root->link=p;//link ponting to node p
	p=root;
	node *q;
	for(q=p;q!=NULL;q=q->link)
	{
		cout<<q->num;
		cout<<"\n";
	}
}

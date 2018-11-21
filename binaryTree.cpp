#include<iostream>

using namespace std;

struct node {
	int data;
	struct node* left;
	struct node* right;
};


node* GetNewNode(int data) {
	node* newNode = new node;
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

node* Insert(node* root,int data) {
	if(root == NULL) {
		root = GetNewNode(data);
	}
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
bool Search(node* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}

void inOrder(node* root) {
    if ( root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void preOrder(node* root) {
    if ( root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(node* root) {
    if ( root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}


int main() {
	node* root = NULL;
	int loop, data, number;
	cout<<"Enter the number of loop you want :"<<endl;
	cin>>loop;
	for(int i=0; i<loop;i++){
        cin>>data;
        root = Insert(root,data);
	}
	cout<<"Enter number be searched\n";
	cin>>number;
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";

	cout<<"InOrder Traversal: "<<endl;
	inOrder(root);
	cout<<endl;
	cout<<"PreOrder Traversal: "<<endl;
	preOrder(root);
	cout<<endl;
	cout<<"PostOrder Traversal: "<<endl;
	postOrder(root);

}

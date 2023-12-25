# include <iostream>
# include <stdbool.h>
using namespace std;

class Tree_Node{
    public:
        int value;
        Tree_Node *left;
        Tree_Node* right;
    
        Tree_Node()
        {
            value=0;
            left=NULL;
            right=NULL;
        }
        Tree_Node(int v)
        {
            value=v;
            left=NULL;
            right=NULL;
        }
};

class Binary_Search{

    public:
        Tree_Node * root;

        Binary_Search()
        {
            root=NULL;
        }
        bool isEmpty()
        {
            //for the entire fking tree
            if (root==NULL){
                return true;
            }
            else{
                return false;
            }
        }

        void insertNode(Tree_Node *new_node)
        {
            if(root==NULL){
                root=new_node;
                cout<<"Value inserted successfully\n";
            }

            else{
                Tree_Node *temp=root;
                while(temp!=NULL){
                    //creating a pointer with root value
                    if(new_node->value==temp->value){
                        cout<<"The node already exists bruhh";
                        break;
                    }
                    else{
                        if (new_node->value<temp->value&& temp->left==NULL){
                            temp->left=new_node;
                            cout<<"Node inserted successfully\n";
                            break;
                            }

                        else if(new_node->value>temp->value && temp->right==NULL){
                            temp->right=new_node;
                            cout<<"Node inserted successfully\n";
                            break;
                            }

                        //Both the left and right of the root node are occupied
                        else if(new_node->value<temp->value){
                            temp=temp->left;
                            }
                        else if(new_node->value>temp->value){
                            temp=temp->right;
                            }
                        }
                    }
                }
            }
        
        void inorder(Tree_Node* root){
            if(root!=NULL){
                inorder(root->left);
                cout<<"\t"<<root->value;
                inorder(root->right);
            }
        }

        void preorder(Tree_Node* root){
            if(root!=NULL){
                cout<<"\t"<<root->value;
                preorder(root->left);
                preorder(root->right);
            }
        }

        void postorder(Tree_Node *root){
            if(root!=NULL){
                postorder(root->left);
                postorder(root->right);
                cout<<"\t"<<root->value;
            }
        }

        Tree_Node* deleteNode(Tree_Node* root,int v)
        {
            if(root==NULL){
                return root;
            }
            if(root->value>v){
                root->left=deleteNode(root->left,v);
                return root;

            }
            else if (root->value<v){
                root->right=deleteNode(root->right,v);
                return root;
            }
            //we are here if the hecking node is found
            //incase of single child/no child -->same procedure

            if(root->left==NULL){
                Tree_Node*temp=root->right;
                delete root;
                return temp;
            }
            if(root->right==NULL){
                Tree_Node* temp=root->left;
                delete root;
                return temp;
            }

            //If both children exist:

            else{
                Tree_Node* succParent=root;
                Tree_Node * succ=root->right;
                while(succ->left!=NULL){
                    succParent=succ;
                    succ=succ->left;
                }
                if(succParent!=root){
                    succParent->left=succ->right;
                    //In case we moved from the start node the succ is in left of the succparent 
                    //or else dude is in right of succ parent
                }
                else{
                    succParent->right=succ->right;
                }
                root->value = succ->value;
                delete succ;
                //adhe nodu succ value mattum
            return root;
            }
        }
};

int main()
{
	//menu driven program:
	cout<<"---------------------------------------------------------\n";
	cout<<"BST operations\n";
	cout<<"----------------------------------------------------------\n";
	cout<<"1.push()\n";
	cout<<"2.pop()\n";
	cout<<"3.display preorder()\n";
    cout<<"4. display inorder()\n";
    cout<<"5.display postorder()\n";

	
	int choice;

	Binary_Search b1;
    Tree_Node* root=b1.root;
	int value;
	while (true){
            Tree_Node* new_node=new Tree_Node;
			cout<<"Enter your choice number\n";
			cin>>choice;
			
			if(choice==6){
                cout<<"Exiting";
				break;
			}
		
		switch(choice){
			case (1):
				//pushing values in a stack

				cout<<"Enter the input value\n";
				cin>>value;
                new_node->value=value;
				b1.insertNode(new_node);
				break;
			case(2):
				//int value;
				//gives redeclaration of int value even when both are in separate cases meh
                cout<<"Enter the value to be deleted";
                cin>>value;
                
                root=b1.deleteNode(root,value);
                b1.preorder(root);
				break;
				
			case(3):
                cout<<"Preorder traversal:\n";
                root=b1.root;
                b1.preorder(root);
				break;
				
			case(4):
                cout<<"Inorder traversal:\n";
                root=b1.root;
                b1.inorder(root);
				break;
				
			case(5):
                cout<<"Postorder traversal:\n";
                root=b1.root;
                b1.postorder(root);
				break;
								
	}
			
	}
}
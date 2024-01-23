//Infix to postfix conversion:

# include<iostream>
//# include<stack>
using namespace std;

class Tree_Node{
    public:
        char value;
        Tree_Node *left;
        Tree_Node* right;
    
        Tree_Node()
        {
            value='a';
            left=NULL;
            right=NULL;
        }
        Tree_Node(char v)
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

class Stack{
	public:
		char arr1[100];
		//setting a definite size
		int top;
		
		Stack()
		{
			top=-1;
		}
		
		~Stack()
		{
			//clearing stack
		}
		
		bool isEmpty()
		{
			if(top==-1)	
			{
				return true;
			}
			else{
				return false;
			}
		}
		
		bool isFull()
		{
			if(top==4){
				return true;
			}
			else{
				return false;
			}
		}
		
		void push(char value){
			if(isFull()){
				cout<<"The stack is already full stack overflow\n";
			}
			else{
				top++;
				arr1[top]=value;
				//cout<<"Element added successfully/n";
			}
		}
		
		int pop()
		{
			if(isEmpty()){
				cout<<"The stack is empty underflow\n";
				return -1;
			}
			else{
				char pop_value=arr1[top];
				arr1[top]=0;
				top--;
				return pop_value;
			}
		}
		
		int top_1(){
		//return elsement pointed at top
		if(isEmpty()){
			cout<<"The stack is empty underflow\n";
			return -1;
		}
		else{
			return arr1[top];
		}
		}

		
		void display()
		{
			for(int i=0;i<=top;i++){
				cout<<arr1[i]<<"\t";
			}
			cout<<"\n";
		}
};

class stack{
	public:
		Tree_Node* arr1[100];
		//setting a definite size
		int top;
		
		stack()
		{
			top=-1;
		}
		
		~stack()
		{
			//clearing stack
		}
		
		bool isEmpty()
		{
			if(top==-1)	
			{
				return true;
			}
			else{
				return false;
			}
		}
		
		bool isFull()
		{
			if(top==4){
				return true;
			}
			else{
				return false;
			}
		}
		
		void push(Tree_Node* value){
			if(isFull()){
				cout<<"The stack is already full stack overflow\n";
			}
			else{
				top++;
				arr1[top]=value;
				//cout<<"Element added successfully/n";
			}
		}
		
		Tree_Node* pop()
		{
			if(isEmpty()){
				cout<<"The stack is empty underflow\n";
				return NULL;
			}
			else{
				Tree_Node* pop_value=arr1[top];
				arr1[top]=0;
				top--;
				return pop_value;
			}
		}
		
		Tree_Node* top_1(){
		//return elsement pointed at top
		if(isEmpty()){
			cout<<"The stack is empty underflow\n";
			return NULL;
		}
		else{
			return arr1[top];
		}
		}

		
		void display()
		{
			for(int i=0;i<=top;i++){
				cout<<arr1[i]<<"\t";
			}
			cout<<"\n";
		}
};




int priority(char i)
{
    int precedence;
    if (i=='^'){
        precedence=3;
    }
    if(i=='*' || i=='/'){
        precedence=2;
    }
    if(i=='+'|| i=='-'){
        precedence=1;
    }
    return precedence;
}

string converter(string expr)
{
    //stack<char> s1;
    Stack s1;
    string final="";
    char value;
    for(char x : expr){
        if( x =='+' || x=='-'|| x=='/' || x=='*'|| x=='^'){
            //it is an operator
            if(s1.isEmpty()){
                s1.push(x);
            }

            else{
                while(true){
                    int pre1=priority(s1.top);
                    int pre2=priority(x);
                    if(pre1>=pre2){
                        value=s1.pop();
                        final+=value;
                    }
                    else{
                        break;
                    }
                }
                s1.push(x);
            }
        }

        else if (x=='('){
            //open bracket
            s1.push(x);

        }
        else if(x==')'){
            while(s1.top_1()!='('){
                value=s1.pop();
                final+=value;
            }
            s1.pop();
            //removing the open braces
        }

        else{
            final+=x;
            //add its value blindly
        }
    }

    while(!s1.isEmpty()){
        value=s1.pop();
        final+=value;
    }

    //cout<<final;
    return final;
}



int main()
{
    cout<<"Enter the infix expression to convert to postfix";
    string expr;
    cin>>expr;
    string final;
    final= converter(expr);

    stack s2;
    for(char x: final){
        if(x=='+'|| x=='-'|| x=='*'|| x=='/'){
            //opperator
            // int value1 =s2.pop();
            // int value2 =s2.pop();
            Tree_Node* value1 =s2.pop();
            Tree_Node* value2 =s2.pop();
            Binary_Search* b1= new Binary_Search();
            Tree_Node* newnode= new Tree_Node();
            newnode->value=x;

            // Tree_Node* newnode1= new Tree_Node();
            // newnode1->value=value1;
            // Tree_Node* newnode2= new Tree_Node();
            // newnode2->value=value2;
            newnode->left=value1;
            newnode->right=value2;
            s2.push(newnode);

        }
        else{
            Tree_Node*newnode= new Tree_Node();
            newnode->value=x;
            s2.push(newnode);
        }
    }

    Binary_Search b1;
    b1.root=s2.top_1();
    b1.inorder(b1.root);




}


//Infix to postfix conversion:

# include<iostream>
//# include<stack>
using namespace std;

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
		
		void push(int value){
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
				int pop_value=arr1[top];
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
		int count()
		{
			//count all elements present in stack:
			int sum=0;
			if(isEmpty()){
				cout<<"The stack is empty";
				//return sum;
			}
			else{
				for(int i=0;i<=top;i++){
					sum+=arr1[i];
				}
				return sum;
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

void converter(string expr)
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

    cout<<final;
}

int main()
{
    cout<<"Enter the infix expression to convert to postfix";
    string expr;
    cin>>expr;
    converter(expr);
}
// C++ program to check for balanced brackets.
//# include "C:\\cpp\\data_structures\\stacks\\stacks_arr.cpp"
#include <iostream>
# include<stack>

using namespace std;

// Function to check if brackets are balanced
bool Balanced(string expr)
{
    stack<char> temp;

    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            temp.push(expr[i]);
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (temp.empty() ||
                (expr[i] == ')' && temp.top() != '(') ||
                (expr[i] == '}' && temp.top() != '{') ||
                (expr[i] == ']' && temp.top() != '[')) {
                return false;
                //The last entered symbol would be the top of the stack
            }
            temp.pop();
            //if cleared pop to check the next guy
        }
    }

    return temp.empty();
}


// Driver code
int main()
{
    cout<<"Enter the expression to check if balanced\n";
	//string expr = "{(45+89-68[)}";
    string expr;
    cin>>expr;

	// Function call
	if (Balanced(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}

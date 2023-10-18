# include<iostream>
using namespace std; 
int main()
{
    int* p = new int(25.8);
    float* q = new float(75.25);
    cout<<*p<<"\n";
    cout<<*q;
    delete p;
    cout<<*p<<"\n";
    /*interesting thing:
    1.even *p gives 25 even when the input was 25.8 <no error>
    2.after deleting p *p gives no output
    but p still gives the memory address
    
    The value of *r will be 42.0. This is because the new operator dynamically allocates memory for a float
     and initializes it with the value 42.0 (a floating-point number). When you dereference r
     using *r, you will get the value that was used for initialization, which is 42.0.*/
}


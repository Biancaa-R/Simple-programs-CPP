
# include <iostream>
using namespace std;

int main()
{
    float num, average, sum = 0;
    int i, n;


    cout << "Enter the number of input values: ";
    cin >> n;

    for(i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << " value : ";
        cin >> num;
        
        if(num<0.0)
        {
           // Control of the program move to jump:
           //Actually this jump statement will never be called
           //Even if the jump condition is never fulfilled the final goto:jump block will be executed
           cout<<"x";
            goto jump;
        } 
        sum += num;
    }

    jump:
    average = sum / (i - 1);
    average=(float)average;// type explicit conversion
    cout << "\nAverage = " << average;
    return 0;

    //The goto statement is not a conditional it just shifts the position of the control flow
    //If the jump is triggered when it is inside the loop the remaining of the loop is not executed as the cursor is just moved

}
// Accept 2 input strings and check whether 2nd string exists within the 1st string. Display
//the position of existence. [K3]

# include <iostream>
# include <stdbool.h>
#include <string>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter the first string";
    cin>>str1;
    bool valid;
    cout<<"Enter the second string";
    cin>>str2;

    int len1=str1.length();
    int len2= str2.length();

    if (len1>len2){
        for (int i=0;i<=len1;++i){
                if(str1[i]==str2[0]){
                    valid=true;
                    for(int k=1;k<len2-1;++k){
                        if(str1[i+k]!=str2[k]){
                            valid=false;
                            break;
                        }
                    }
                    if(valid==true){
                        cout<<i;
                        break;
                    }

                }
            }
        }
    }

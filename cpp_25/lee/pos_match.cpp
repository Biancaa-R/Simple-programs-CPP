# include <iostream>
# include <vector>
# include <string>
using namespace std;

class Solution {
public:
    string s;
    string p;
    bool start(string s,string p){
        vector <char> v1;
        vector <char> v2;
        vector <char> v3;
        for (char x: s){
            v1.push_back(x);
        }
        for(char y:p){
            v2.push_back(y);
        }  

        return (check(v1,v2,v3));

    }

    bool check(vector <char> v1,vector <char> v2,vector <char> v3){
        char x;
        int x_pos=0,count=0;
        char prev;
        int len1= sizeof(s)/sizeof(s[0]);
        int len2=sizeof(p)/sizeof(p[0]);
        for (int i=0;i<len2;i++){
            x=v2.at(i);
            if (i==0 && x=='*'){
                //problem
                break;
                return false;
            }
            else if(x!= v1.at(x_pos)&& x!='.'&& x!='*'){
                //problem
                break;
                return false;
            }
            else if (x=='.'){
                v3.push_back(x);
                x_pos+=1;
                //no probs
            }
            else if (x==v1.at(x_pos)){
                //no probs
                v3.push_back(x);
                x_pos+=1;
            }
            else if (x=='*'){
                //sambavam
                prev=v1.at(x_pos-1);
                for (int j=x_pos-1; j<len1;j++){
                    if(v1.at(j)==prev){
                        count+=1;
                    }
                x_pos+=count;
                }
            }
            else if (x_pos==len1){
                return true;
            }
                

            }
        return true;
        }
        

    };
    //vector <char> v1(s.begin(), s.end());
    //vector <char> v2(p.begin(),p.end());
    /*int len1= sizeof(s)/sizeof(s[0]);
    int len2=sizeof(s)/sizeof(s[0]);
    vector <char> v1;
    vector <char> v2;
    void start(string s,string p){
        for (char x: s){
        v1.push_back(x);
        }
        for(char y:p){
            v2.push_back(y);
        }


    
    }

    //vector <int> fine[len1];
    //int *fine =new int [len1];
    bool isMatch(vector <char> v1, vector <char> v2) {
        for(int i=0;i< len1;i++){
            for(int j=0;j<len2;j++){
                if (v1.at(i)==v2.at(j)){
                    //fine.push_back(1);
                }
                if (v1.at(i)!=v2.at(j) && v2.at(j)!='.' && v2.at( j)!='*'){
                    //fine.push_back(0);
                    break;
                    return false;
                if (v2.at(0)=='*'){
                    break;
                    return false;
                }
                }
                else if(v2.at(j)=='.'){
                    //fine
                    //fine.push_back(1);
                }
                else if (v2.at(j)=='*'){
                    //That means its a replica of previous term
                    char ele;
                    ele=v1.at(i-1);


                }
            }
        }
    }*/

int main(){
    string s,p;
    bool value;
    Solution s1;
    cout<<"Enter the string s";
    cin>>s;
    cout<<"Enter the pattern p";
    cin>>p;
    value=s1.start(s,p);
    cout<<value;

}
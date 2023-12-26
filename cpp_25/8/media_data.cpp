//e.      Write a class named as media that stores the title and price of a publication. Create two derived classes, one for storing 
//the number of pages in a book named as book 
//and another for storing the playing time of a tape named as tape. Using virtual function display() the details of book and tape. 

//so the media class can be inherited by the books and the tapes

#include <iostream>
#include <string>
using namespace std;

class media{
    public:
        string title;
        float price;

        media()
        {
            title="";
            price=0;
        }

        media(string t,float p){
            title=t;
            price=p;
        } 

        virtual void display()=0;
        //Pure virtual
        //just like pure evil       
};

class book: public media
{
    public:
        int num;
    book()
    {
        num=0;
    }
    book(int n,string t, float p)
    {
        num=n;
        title=t;
        price=p;
    }
    void display()
    {
        cout<<"The title of the book is"<<title<<"\n";
        cout<<"The cost of the book is "<<price<<"\n";
        cout<<"The number of pages is "<<num<<"\n";
    }
};

class tape: public media
{
    public:
    int play;

    tape()
    {
        play=0;
    }
    tape(int p,string t,float w){
        play=p;
        title=t;
        price=w;
    }

    void display()
    {
        cout<<"The title of the tape is"<<title<<"\n";
        cout<<"The cost of the tape is "<<price<<"\n";
        cout<<"The play time of the tape is "<<play<<"\n";
    }
};

int main()
{
    book b1=book(580,"Harry potter and the Goblet of fire",1500);
    tape t1=tape(16 ,"Secrets of the palace",560);

    b1.display();
    t1.display();

}
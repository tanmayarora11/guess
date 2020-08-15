#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void random(int b,int e)
{
    int number=b+rand()% (e-b+1);
    int guess;
    printf("guess the number:(range %d-%d)",b,e);
    while(true)
    {
        cin>>guess;
        if(guess==number)
        {
            cout<<"Number Found"<<endl;
            return;
        }
        else if(guess<number)
        {
            if((guess*2)<number)
                cout<<"Too Low (Less than 1/2 the number)"<<endl<<"Try Again: ";
            else if((guess+10)<number)
                cout<<"Low (Greater than 1/2 the number(gap>=10))"<<endl<<"Try Again: ";
            else
                cout<<"Low but Near (gap<=10)"<<endl<<"Try Again: ";

        }
        else
        {
            if((guess/2)>number)
                cout<<"Too High (Greater than 2 times the number)"<<endl<<"Try Again: ";
            else if((guess-10)>number)
                cout<<"High (Less than 2 times the number(gap>=10))"<<endl<<"Try Again: ";
            else
                cout<<"High but Near (gap<=10)"<<endl<<"Try Again: ";
        }
    }
}
int main()
{
    srand(time(NULL));
    int beg,ending;
    cout<<"Enter Range beginning to guess from: ";
    cin>>beg;
    cout<<"Enter range end: ";
    cin>>ending;
    random(beg,ending);
    return 0;
}

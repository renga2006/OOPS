//enter marks upto they enter negative marks
#include<iostream>
using namespace std;
int main(){
    int sum=0,count=0;
    int mark;
    while (mark!=0)
    {
        cout<<"ENter your mark: ";
        cin>>mark;
        if (mark>=0)
        {
            sum=sum+mark;
            count=count+1;
        }
        else if (mark==-1)
        {
            break;
        }
    }
    int avg=sum/count;
    cout<<"The average is "<<avg;
    
}
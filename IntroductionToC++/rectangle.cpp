#include<iostream>
using namespace std;

bool rectangle(int a,int b,int c,int d){
    if((a==b && c==d) || (a==c && b==d)||(a==d && b==c)){
        return 1;
    }
    else return 0;
}

int main(){
    char a,b,c,d;
    cout<<"Enter the length off sides:";
    cin>>a>>b>>c>>d;
    cout<<rectangle(a,b,c,d);
    return 0;
}

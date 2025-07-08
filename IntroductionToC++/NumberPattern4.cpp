#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number of Rows: ";
    cin >> num;
    for(int i=0;i<num;i++){
        int a=1+(5*i);
        for(int j=1;j<=num;j++){
            cout << a<< " ";
            a++;
        }
       
        cout <<endl;
    }
    return 0;
}
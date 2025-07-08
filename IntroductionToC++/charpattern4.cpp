#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number of Rows: ";
    cin >> num;
    for(int i=1;i<=num;i++){
        char name='A';
        for(int j=num;j>=i;j--){
            
            cout <<name<< " ";
            name++;
            
        }
        
        cout <<endl;
    }
    return 0;
}
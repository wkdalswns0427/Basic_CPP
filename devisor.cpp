#include <iostream>

int main(){
    using namespace std;

    int input;
    cout<<"call out an integer : ";
    cin>>input;
    cout<<endl;

    cout<<"devisors are..."<<endl;
    for(int i = 1; i<=input; i++){
        if(input%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
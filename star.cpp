#include <iostream>

int main(){
    using namespace std;
    for(int i = 1; i < 10; i++ ){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"--------------------"<<endl;
    for(int i = 1; i < 10; i++ ){
        for(int j = 1; j <= 10-i; j++){
            cout<<" ";
        }
        for(int k = 1; k<= i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"--------------------"<<endl;
    return 0;
}
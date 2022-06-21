#include <iostream>

int main(){
    using namespace std;
    int input;
    cout<<"input :";
    cin>>input;
    cout<<endl;
    int j = 0;
    for(int i = 0; i<=input; i++){
        j+=i;
    }
    cout<<"added up :"<<j<<endl;;
    return 0;
}
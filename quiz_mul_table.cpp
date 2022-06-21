#include <iostream>

int main(){
    using namespace std;
    cout<<"**********Multip Table**********"<<endl;
    for(int i = 1; i < 10; i++ ){
        for(int j = 1; j < 10; j++){
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }
    }
    cout<<"**********End of Table**********"<<endl;
    return 0;
}
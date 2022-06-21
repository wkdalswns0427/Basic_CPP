#include <iostream>

// without if
/*
int main(){
    using namespace std;
    int year, month, day;

    cout<<"which year were you born?"<<endl;
    cin>>year;
    cout<<"which month were you born?"<<endl;
    cin>>month;
    cout<<"which day were you born?"<<endl;
    cin>>day;

    cout<<"you were born in"<<year<<"/"<<month<<"/"<<day<<"!"<<endl;
    cout<<"adult ("<<(year<2003)<<") "<<"underaged ("<<(year>=2003)<<")"<<endl;

    return 0;

}
*/
//with if
int main(){
    using namespace std;
    int year, month, day;

    cout<<"which year were you born?"<<endl;
    cin>>year;
    cout<<"which month were you born?"<<endl;
    cin>>month;
    cout<<"which day were you born?"<<endl;
    cin>>day;

    cout<<"you were born in"<<year<<"/"<<month<<"/"<<day<<"!"<<endl;
    
    if(year>2003){
        cout<<"Not Allowed, Get Out!"<<endl;
    }
    else if(year<=2003){
        cout<<"Welcome!"<<endl;
    }
    return 0;

}
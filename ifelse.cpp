#include<iostream>
using namespace std;
int main(){
    int savings;
    cout<<"enter the savings you have: ";
    cin>>savings;
    if(savings<5000){
        cout<<"Can spend more money";

    }
    else{
        cout<<"cannot spend more money";

    }
    return 0;
}

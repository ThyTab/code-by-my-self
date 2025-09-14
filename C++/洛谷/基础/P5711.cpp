#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool run_year;

    if( ( n%100!=0 && n%4==0) || ( n%100==0 && n%400==0 ) ){
        run_year=true;
    }else{
        run_year=false;
    }
    cout<<run_year<<endl;
    system("pause");
    return 0;
}
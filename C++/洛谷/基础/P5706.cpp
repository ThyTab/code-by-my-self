#include <iostream>
#include <iomanip> //用于提供保留小数位数的操作
using namespace std;

int main(){
     
    double t;
    int n;
    cin>>t>>n;
    cout<<fixed<<setprecision(3)<<t/n<<endl<<2*n<<endl;

    system("pause");
    return 0;
}
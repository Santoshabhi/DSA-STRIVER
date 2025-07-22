#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    while(n>0){
        n=n%10;
        cout<<n;
        n=n/10;
    }

    return 0;
}


//count number
include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int c=0;
while(n>0){
int l=n%10;
c++;
n=n/10;

}
cout<<c;
    
    return 0;
}

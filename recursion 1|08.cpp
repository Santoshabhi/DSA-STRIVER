//print Name 5 times
/*
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
if(i>n) return;
cout<<"SANTOSH";
f(i+1,n);
  }
int main(){
int n;
cin>>n;
f(1,n);
}
//print 1 to n
/*
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
if(i>n) 
return;
cout<<i;
f(i+1,n);
  }
int main(){
int n;
cin>>n;
f(1,n);
}

//3 print in term if n to 1
/*
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
if(i<1) return;
cout<<i;
f(i-1,n);
  }
int main(){
int n;
cin>>n;
f(n,n);
}

//4 print from 1  to n (but by backtrack)

#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){

if(i<1) return;
f(i-1,n);
cout<<i;
  }
int main(){
int n;
cin>>n;
f(n,n);
}


//5 print from n to 1 by backtrack
#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){

if(i<1) return;
cout<<i;
f(i-1,n);
  }
int main(){
int n;
cin>>n;
f(n,n);
}

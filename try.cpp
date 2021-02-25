#include <iostream>
#include <list>
#include <windows.h>
#define maximum 1e4
bool checkprime(int n){
    if(n<2)return false;
    for(int i=2;i<=n/2;i++)
        if(n%i == 0) return false;
    return true;
}

int main(){
    system("color 0A");
    // std::list<int> l1;
    // l1.push_back (10);
    // l1.push_back (20);
    // while (!l1.empty())
    // {
    // std::cout << l1.back() << ' ' ;
    // l1.pop_back();
    // }
    int n,a[100];
    n=3;
    // for(int i=0;i<n;i++)
    // std::cin>>a[i];
    // for(int i=0;i<n;i++)
    // std::cout<<a[i]<<" ";
    // std::cout<<n;
    // std::cout<<"\n";
    // std::cout<<maximum;
    for(int i=1;i<3;i++)
        n+=1;
    // std::cout<<checkprime(a[1]);
    return 0;
}
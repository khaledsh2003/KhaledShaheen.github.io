#include<iostream>
#include <string>
using namespace std;

char sortingNames(string a[])
{
    char max1=a[0][0];
    for(int x=1;x<2;x++){
        if(max1<a[x][0]){
            int temp=max1;
            max1=a[x][0];
            
        }
        temp=max1;
        a[x][x]=a[x-1][x-1];
    }
    return max1;
}

int main()
{
    string a1[]={"Khaled","Moh"};
    cout<<sortingNames(a1);
    return 0;
}

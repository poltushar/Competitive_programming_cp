#include<iostream>
using namespace std;
//created by STS
//implement  of 3n+1 problem
int cycle( long int n)
{
      long int i = 1;

    while(n != 1) {
        if(n % 2 == 0)  {
            n=n/2;
        } else {
            n= (3*n)+1;

        }
        i++;
    }
    return i;
}

int main()
{
    int a, b, low, high,ch;
     cout<<"enter the series of numbers";

    while(cin>>a>>b) {

        if(a < b) {
            low = a;
            high = b;
        } else {
            low = b;
            high = a;
        }

        int max = cycle(low);

        for(int i = low + 1; i <= high; i++) {
            int l = cycle(i);
            if(l > max) {
                max = l;
            }
        }

        cout<<a<<" "<<b<<" "<<max<<"\n";
               }
     
    return 0;

} 
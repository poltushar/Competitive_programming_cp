#include<iostream>
using namespace std;

int abs(int n)
{
if (n<0)
{
    /* code */
    return n*-1;
}
return n;

}
int jolly(int  *n,int max)
{

    int i,diff=abs(n[1]),ndif=0,pval=0;
    for (int i = 0; i < max-1; i++)
    {
        /* code */
        ndif = abs(n[i]-n[i+1]);
        if (i == 1)
        {
            /* code */
            pval=diff-ndif;
            if (abs(pval)!=1)
            {
                /* code */
                return 0;


            }
            

        }
        if (i>1)
        {
            /* code */
            if (diff-ndif!=pval)
            {
                /* code */
                return 0;
            }
            
        }
        diff=abs(n[i]-n[i+1]);
    }
    return 1;
}
int main()
{

    int n,i;
    cin>>n;
    int j[n];
    for ( i = 0; i < n; i++)
    {
        /* code */
        cin>>j[i];

    }
    if (jolly(j,n))
    {
        /* code */
        cout<<"\tjolly\n";

    }
    else
    {
        cout<<"\t not jolly\n";
    }
 return main();   
}
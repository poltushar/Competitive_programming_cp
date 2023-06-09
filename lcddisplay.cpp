#include<iostream>
using namespace std;

//find the reusable string for putting it in template

string a[5]={
              "    ",//0
              "  _ ",//1
              "   |",//2
              "|   ",//3
              "|  |"//4
};


//creation of the template
string dig[10][5]={
                    {a[1],a[4],a[0],a[4],a[1]},
                    {a[0],a[2],a[0],a[2],a[0]},
                    {a[1],a[2],a[1],a[3],a[1]},
                    {a[1],a[2],a[1],a[2],a[1]},
                    {a[0],a[4],a[1],a[2],a[0]},
                    {a[1],a[3],a[1],a[2],a[1]},
                    {a[1],a[3],a[1],a[4],a[1]},
                    {a[1],a[2],a[0],a[2],a[0]},
                    {a[1],a[4],a[1],a[4],a[1]},
                    {a[1],a[4],a[1],a[2],a[1]}

};
int main()
{
    string num;
    int dig_ext=0;
    //taking the numer in a string

cin>>num;
//going through the length of the number or the number ot the colums
for (int j = 0; j < 5; j++)
{
    
      //extract each of the digits everytime
    for (int i = 0; i < num.length(); i++)
    {
        
        //convert the character to integer
      
        dig_ext=(int)num[i]-int('0');
        //print the segment and give spaces between the segment
        cout<<dig[dig_ext][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
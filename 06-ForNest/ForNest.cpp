/*
本段程序参看For的多重嵌套，以及没有大括号的情况下嵌套的层级问题。
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n(4);
    for (i=1;i<=n;i++)  //Step1.输出前4行，(Step2+Step3+Step4)为Step1的一次循环，一共四次
    {
        for(j=1;j<=30;j++)  //step2.当前行以循环方式输出30个空格
           cout<<' ';
        for(j=1;j<=8-2*i;j++)   //Step3.当前行继续以循环方式输出(8-2*i)个空格
            cout<<' ';
        for (j=1;j<=2*i-1;j++)  //Step4.在当前行Step2.生成的空格后继续以循环方式输出(2*i-1)个*
        cout<<'*';  
        cout<<endl; 
    }

    for(i=1;i<=n-1;i++) //Step5.输出后3行,(Step6+Step7)为Step5的一次循环，一共循环3次
    {
        for(j=1;j<=30;j++)  //Step6.一行输出30个空格
        cout<<' ';
        for(j=1;j<=7-2*i;j++)   //Step7.一行输出(7-2*i)个*
        cout<<'*';
        cout<<endl;        
    }
    getchar();
}
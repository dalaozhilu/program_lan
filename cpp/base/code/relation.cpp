/*关系表达式*/
#include <iostream.h>
main()
{
    int a=3, b=2;
 
    //输出关系表达式
    cout<<(a<b)<<endl;
    cout<<(a<b)<<(a>b)<<(a>=b)<<(a==b)<<(a!=b)<<endl;
 
    bool flag=2*a<b+10;
    cout<<"flag="<<flag;
}
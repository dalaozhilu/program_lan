/*表达式语句*/
#include <iostream>
using namespace std;
main()
{
    int a=1,b=1,c=3;
    //显示a,b,c的值
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
 
    //计算显示(1) b+=a+2*c%5; 的结果
    b+=a+2*c%5;    	//相当于表达式语句 b=b+(a+2*c%5);
    cout<<"(1) b="<<b<<endl;
 
    //计算显示(2) a<<=c-2*b; 的结果
    a=1,b=1,c=3;
    a<<=c-2*b;     	// 相当于表达式语句 a=a<<(c-2*b);
    cout<<"(2) a="<<a<<endl;
 
    //计算显示(3) a*=b=c=3;的结果
    a=1,b=1,c=3;
    a*=b=c=3;      	//相当于语句组 c=3;b=c;a=a*b;
    cout<<"(3) a="<<a<<"  b="<<b<<"  c="<<c<<endl;
 
    //计算显示(4) a+=b+=c;的结果
    a=1,b=1,c=3;
    a+=b+=c;       	//相当于语句组 b=b+c; a=a+b;
    cout<<"(4) a="<<a<<"  b="<<b<<"  c="<<c<<endl;
 
    //计算显示(5) a-=b=++c+2;的结果
    a=1,b=1,c=3;
    a-=b=++c+2;      	//相当于语句组 ++c;b=b+c+2;a=a-b;
    cout<<"(5) a="<<a<<"  b="<<b<<"  c="<<c<<endl;
}

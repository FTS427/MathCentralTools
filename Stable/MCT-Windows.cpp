#include <iostream>
#include <cmath>
using namespace std;

char q;

void clear()
{
    system("CLS");
}

void print(const char a[],int i)
{
    if(i == 0)
        cout << a ;
    else if(i == 1)
        cout << a << endl;
    else
        cout << "Code includes BUG!" << endl;
}

void ERROR()
{
	clear();
    print("\033[37;43;1mERROR!\033[0m",1);
}

void h1()
{
    print("--------------------",1);
}

void h2()
{
    print("*==================*",1);
}

void s(const char a[])
{
    cout << " - " << a << endl;
}

void h(const char a[])
{
    cout << "欢迎使用" << a << "功能！" << endl;
}

//calc函数,计算器
void calc()
{
    clear();
    char o;
    long int num1, num2;
    long double num3;
    h("计算器");
    print("\033[1;37;43m注意\033[0m：现仅只支持两个数之间的运算！",1);
	while (true)
    {
        h1();
        print("请输入计算式(+ - * / ^),输入'0c0'退出",1);
        print("如: 1+1",1);
        cin >> num1 >> o >> num2;
        //加法
        if (o == '+')
            cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        //减法
        else if (o == '-')
            cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        //乘法
        else if (o == '*')
            cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        //除法
        else if (o == '/')
        {
            if (num2 == 0)
                ERROR();
            else
                cout << num1 << "/" << num2 << "=" << num1/num2 << endl;
        }
        //乘方
        else if (o == '^') 
        {
            long int n=num2;
			if (num1 == 0 && num2 == 0) 
                ERROR(); 
            else 
            { 
                num3 = 1; 
                while (num2 > 0) 
                { 
                    num3 *= num1; 
                    num2--; 
                } 
            } 
            cout << num1 << "^" << n << "=" << num3 << endl; 
        }
        //退出
        else if(o == 'c' && num1 == 0 && num2 ==0)
        {
            clear();
            break;
        }
        //报错
        else
			ERROR();
	}
}

//B函数,计算最大公约数
void B()
{
    clear();
    long double num3, num4;
    h("最大公约数");
    print("\033[1;43;37m注意\033[0m：本功能只支持两个数之间的运算！",1);
    while(true)
    {
        h1();
        print("输入任意值继续，输入“\033[33;1mc\033[0m”退出...",1);
        cin >> q;
        if(q == 'c' || q == 'C')
        {
            clear();
            break;
        }
        else
        {
            print("请输入第一个数:",0);
            cin >> num3;
            print("请输入第二个数:",0);
            cin >> num4;
            num3 = abs(num3);
            num4 = abs(num4);
            while (num3 != num4)
            {
                if (num3 > num4)
                    num3 -= num4;
                else
                    num4 -= num3;
            }
            cout << "这两个数的的最大公约数是: " << num3 + num4 << endl;
        }
    }
}

//C函数,计算最小公倍数
void C()
{
    clear();
    h("最小公倍数");
    print("\033[1;43;37m注意\033[0m：本功能只支持两个数之间的运算!",1);
    while(true)
    {
        h1();
        print("输入任意值继续，输入“\033[33;1mc\033[0m”退出...",1);
        cin >> q;
        if(q == 'c' || q == 'C')
        {
            clear();
            break;
        }
        else
        {
            long int n3;
            long double num5, num6;
            while (true)
            {
                print("请输入第一个数:",0);
                cin >> num5;
                print("请输入第二个数:",0);
                cin >> num6;
                if (num5 != int(num5) || num6 != int(num6))
                    ERROR();
                else
                    break;
            }
            n3 = (num5 > num6) ? num5 : num6;
            while (true)
            {
                if (n3 % int(num5) == 0 && n3 % int(num6) == 0)
                {
                    cout << "这两个数的的最小公倍数是：" << n3 << endl;
                    break;
                }
                else
		            ++n3;
            }
        }
    }
}


//D函数,数值分析器
void D()
{
    clear();
    long double x, a;
    h("数值分析器");
    while(true)
    {
        h1();
        print("输入任意键继续，输入“\033[1;33mc\033[0m”退出...",1);
        cin >> q;
        if (q == 'c' || q == 'C')
        {
            clear();
            break;
        }
        else
        {
            print("请输入一个数:",0);
            cin >> x;
            if (x == 0)
            {
                cout << x << "是整数" << endl;
                cout << x << "是正数" << endl;
                cout << x << "是不分质数合数" << endl;
                cout << x << "是偶数" << endl;
            }
            else
            {
                if (modf(x, &a) == 0.0)
                    cout << x << "是整数" << endl;
                else
                    cout << x << "是分数" << endl;
                if (x > 0)
                    cout << x << "是正数" << endl;
                else
                    cout << x << "是负数" << endl;
                if (x == 1)
                    cout << x << "是不分质数合数" << endl;
                else if (int(x) - x != 0) 
                    cout << x << "是不分质数合数" << endl;
                else
                {
                    int n=0, i;
                    for(i=2;i<x;i=i+1)
                    if(int(x)%1 == 0)
                        n=n+1;
                    if (n >0)
                        cout << x << "是合数" << endl;
                    else
                        cout << x << "是质数" << endl;
                }
                if (int(x) == x)
                {
                    if (int(x) % 2 == 0)
                        cout << x << "是偶数" << endl;
                    else
                        cout << x << "是奇数" << endl;
                }
                else
                {
                    if (x/2 - int(x)/2 == 0)
                        cout << x << "是偶数" << endl;
                    else
                        cout << x << "是奇数" << endl;
                }
            }
        }
    }
}

//M函数,简化主函数
void M()
{
    h("集成数学工具");
    char u;
    while(true)
    {
        h1();
        s("\033[1;34m(1)\033[34m计算器\033[0m");
        s("\033[35;1m(2)\033[35m最大公约数\033[0m");
        s("\033[1;36m(3)\033[36m最小公倍数\033[0m");
        s("\033[1;32m(4)\033[32m数值分析器\033[0m");
        s("\033[0m(a)关于\033[0m");
        s("\033[1;33m(e)退出\033[0m");
        print("请键入所需功能：",0);
        cin >> u;
        if (u == '1')
            calc();
        else if (u == '2')
            B();
        else if (u == '3')
            C();
        else if (u == '4')
            D();
		else if (u == 'E' || u == 'e')
		    break;
        else if (u == 'A'  || u == 'a' )
        {
            clear();
            h2();
            s("MCT Stable v0.0.1.1");
            s("Made by FTS427");
            s("Github : https://github.com/FTS427/MathCentTools");
            h2();
        }
        else
            ERROR();
    }
}

//主函数部分
int main()
{
    clear();
	M();
	return 0;
}

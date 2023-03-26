/*
本程序由'FTS427'制作, 如有问题可电邮我: FTS427@outlook.com, 也可以关注我的B站账号 : 探索者FTS
注意:本程序处于开发阶段,不可用于科学的精密计算!如果出现问题,后果自负.
本程序是免费开源的,此源代码可以随便用.
我允许任何人使用我的源代码进行扩充,编译等操作.但是一旦出现问题,我个人不承担任何责任.
注: 本人初二学生一枚,更新较慢,程序功能较少,请见谅.您如果愿意加入我,可电邮: FTS427@outlook.com ,也可以关注我的B站账号 : 探索者FTS
*/

//头文件
#include <iostream>
#include <limits>

//使用“std”命名空间
using namespace std;

//设置全局变量部分
char q;

//以上为程序预处理部分,以下是函数部分

//calc函数,计算器
void calc()
{
    system("clear"); //清屏
    char o;
    long int num1, num2;
    long double num3;
    //局域变量部分
    cout << "\033[1;33m欢迎使用计算器功能！\033[0m" << endl;
    cout << "\033[1;37;43m注意\033[0m：本功能只支持两个数之间的运算！" << endl;
    //函数预处理
    
	while (1 > 0)
    {
        cout << "输入任意值继续，输入“\033[33;1mc\033[0m”退出..." << endl;
        cin >> q;
        //输入与判断
        if (q == 'c' || q == 'C')
        {
            break;
        }
        else
        {
            cout << "--------------------" << endl;
            cout << "请选择你需要的运算（加：+，减：-，乘：*，除：/，乘方：^）：" << endl;
            cin >> o;
            if (o == '+')
            {
                cout << "请输入第一个加数：";
                cin >> num1;
                cout << "请输入第二个加数：" << endl;
                cin >> num2;
                num3=num1+num2;
                cout << num1 << "+" << num2 << "=" << num3 << endl;
            }
            else if (o == '-')
            {
                cout << "请输入被减数：";
                cin >> num1;
                cout << "请输入减数：" << endl;
                cin >> num2;
                num3=num1+num2;
                cout << num1 << "-" << num2 << "=" << num3 << endl;
            }
            else if (o == '*')
            {
                cout << "请输入第一个因数（乘数）：";
                cin >> num1;
                cout << "请输入第二个因数（乘数）：" << endl;
                cin >> num2;
                num3=num1*num2;
                cout << num1 << "*" << num2 << "=" << num3 << endl;
            }
            else if (o == '/')
            {
                cout << "请输入被除数：";
                cin >> num1;
                cout << "请输入除数：" << endl;
                cin >> num2;
                if (num2 == 0)
                {
                	cout << "\033[37;1;43m注意\033[0m：除数不可为0！" << endl;
                }
                else
                {
                	num3=num1/num2;
                    cout << num1 << "/" << num2 << "=" << num3 << endl;
                }
            }
            else if (o == '^')
            {
                cout << "请输入底数：";
                cin >> num1;
                cout << "请输入指数：" << endl;
                cin >> num2;
                if (num2 == 0)
                {
                    num3 =1;
                }
                else
                {
                    while (num2 > 0)
                    {
                        num1 = num3;
                        num3 * num1;
                        num2-1;
                    }
                }
                cout << num1 << "^" << num2 << "=" << num3 << endl;
            }
            else if(o == 'c' || o == 'C')
            {
            	break;
            }
            else
            {
				system("clear");
				cout << "\033[37;43;1m注意\033[0m：请输入正确符号！" << endl;
            }
		}
    }
}

//B函数,用于计算最大公约数
void B()
{
    system("clear");
    long double num3, num4;
    cout << "欢迎使用最大公约数功能！" << endl;
    cout << "\033[1;43;37m注意\033[0m：本功能只支持两个数之间的运算！" << endl;
    //初始化部分
    
	while (1 > 0)
    {
        //功能循环
        cout << "按下任意键继续，按下“\033[1;33mc\033[0m”退出..." << endl;
        cout << "--------------------" << endl;
        cin >> q;
        if (q == 'c' || q == 'C')
        {
            break;
        }
        else
        {
            cout << "请输入第一个数" << endl;
            cin >> num3;
            cout << "请输入第二个数" << endl;
            cin >> num4;
            while (num3 != num4)
            {
                //运算循环
                if (num3 > num4)
                {
                    num3 -= num4;
                }
                else
                {
                    num4 -= num3;
                }
            }
            cout << "这两个数的的最大公约数是: " << num3 << endl;
        }
    }
}

//Ca函数,用于输入和判断
void Ca()
{
    long int n3;
    long double num5, num6;
    while (1 > 0)
    {
        //循环体
        cout << "请输入第一个数:" << endl;
        cin >> num5;
        cout << "请输入第二个数:" << endl;
        cin >> num6;
        if (num5 != int(num5) || num6 != int(num6))
        {
            cout << "\033[1;33m注意\033[0m：不能含有小数！" << endl;
        }
        else
        {
            break;
        }
    }
    // 获取最大的数
    n3 = (num5 > num6) ? num5 : num6;
    while (1 > 0)
    {
        //循环体
        if (n3 % int(num5) == 0 && n3 % int(num6) == 0)
        {
            cout << "这两个数的的最小公倍数是：" << n3 << endl;
            break;
        }
        else
        {
            ++n3;
        }
    }
}

//C函数,用于计算最小公倍数
void C()
{
    system("clear");
    cout << "\033[1;33m欢迎使用最小公倍数功能！\033[0m" << endl;
    cout << "\033[1;43;37m注意\033[0m：本功能只支持两个数之间的运算！" << endl;
    //以上为函数的初始化
    while (1 > 0)
    {
        //循环体
        cout << "按下“\033[33;1mc\033[0m”退出，按下任意键继续..." << endl;
        cin >> q;
        if (q == 'c' || q == 'C')
        {
            break;
        }
        else
        {
            cout << "--------------------" << endl;
            Ca(); //调取运算部分函数'Cb'
        }
    }
}

//D函数,数值分析器
void D()
{
    system("clear");
    long double x; //输入的数
    cout << "欢迎使用数值分析器功能！" << endl;
    //以上为函数初始化
    while (1 > 0)
    {
        cout << "按下任意键继续，按下“\033[1;33mc\033[0m”退出..." << endl;
        cin >> q;
        if (q == 'c' || q == 'C')
        {
            break;
        }
        else
        {
            cout << "--------------------" << endl;
            cout << "请输入一个数:" << endl;
            cin >> x;
            if (x == 0) //0的情况
            {
                cout << x << "是整数" << endl;
                cout << x << "是正数" << endl;
                cout << x << "是实数" << endl;
                cout << x << "是不分质数合数" << endl;
                cout << x << "是偶数" << endl;
            }
            else
            {
                if (int(x) == x)
                {
                    cout << x << "是整数" << endl;
                }
                else
                {
                    cout << x << "是分数" << endl;
                }
                if (x > 0)
                {
                    cout << x << "是正数" << endl;
                }
                else
                {
                    cout << x << "是负数" << endl;
                }
                if (x * x >= 0)
                {
                    cout << x << "是实数" << endl;
                }
                else
                {
                    cout << x << "是虚数" << endl;
                }
                if (x == 1)
                {
                    cout << x << "是不分质数合数" << endl;
                }
                else
                {
                    if (int(x) % 3 == 0 || int(x) % 5 == 0 || int(x) % 2 == 0 || int(x) % 7 == 0 || int(x) % 11 == 0)
                    {
                        cout << x << "是合数" << endl;
                    }
                    else
                    {
                        cout << x << "是质数" << endl;
                    }
                }
                if (int(x) == x)
                {
                    if (int(x) % 2 == 0)
                    {
                        cout << x << "是偶数" << endl;
                    }
                    else
                    {
                        cout << x << "是奇数" << endl;
                    }
                }
                else
                {
                    if (x/2 - int(x)/2 == 0)
                    {
                        cout << x << "是偶数" << endl;
                    }
                    else
                    {
                        cout << x << "是奇数" << endl;
                    }
                }
            }
        }
    }
}

//setting函数,用于设置
void setting()
{
    system("clear");
    cout << "设置" << endl;cout << endl;
    cout << "全局语言：" << endl;
}

void m()
{
    system("clear"); //清屏
    cout << "\033[1;33m欢迎使用集成数学工具!\033[0m" << endl; //输出没有什么用的字
    char u; //定义局部字符变量'u', 判断用的
    
	//以上为函数初始化
    while (1 > 0) //主循环
    {
        cout << "--------------------" << endl;
        cout << "本程序的功能有：\033[34m计算器\033[1;34m(1)\033[0m，\033[35m最大公约数\033[35;1m(2)\033[0m，\033[36m最小公倍数\033[1;36m(3)\033[0m，\033[32m数值分析器\033[1;32m(4)\033[0m" << endl;
        cout << "请输入你需要的功能（输入“\033[1;33mq\033[0m”退出）：";
        cin >> u; //输入'u'并进行判断
        if (u == '1')
        {
            calc();
        }
        if (u == '2')
        {
            B();
        }
        if (u == '3')
        {
            C();
        }
        if (u == '4')
        {
            D();
        }
        if (u == 'q' || u == 'Q')
        {
            break;
        }
        if(u != 'q' || u != 'Q' || u != '1' || u != '2' || u != '3' || u != '4')
        {
            system("clear"); //先来个清屏
            cout << "\033[1;37;43m注意\033[0m：请输入正确的功能代号（输入“q”退出）！" << endl; //报错
        }
    }
	system("clear"); //跳出循环, 程序结束, 清个屏
}

//主函数部分
int main()
{
    m(); //使用m函数
    return 0; //向系统报个0值
}

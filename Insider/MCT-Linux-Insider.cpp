/*
本程序由'FTS427'制作，如有问题可电邮我：FTS427@outlook.com，也可以关注我的B站账号：探索者FTS
注：本程序不可用于科学的精密计算！如果出现问题，后果自负。
本程序是免费开源的，此源代码可以随便用。
我允许任何人使用我的源代码进行扩充，编译等操作。但是一旦出现问题，我个人不承担任何责任。
注：本人初二学生一枚，更新较慢，程序功能较少、Bug较多，请见谅。您如果愿意加入我，可电邮：FTS427@outlook.com，也可以关注我的B站账号：探索者FTS
Github主仓库连接：https://github.com/FTS427/MathCentTools
Github历史仓库连接：https://github.com/FTS427/MathCentTools-History
*/

//注：此版本为Insider测试版，有不稳定功能

#include <iostream>
#include <cmath>
using namespace std;

//全局变量
char q;

//clear函数，清屏
void clear()
{
    system("clear");
}

//ERROR函数，报错
void ERROR()
{
	cout << "\033[37;43;1mERROR!\033[0m" << endl;
}

//calc函数,计算器
void calc()
{
    clear();
    char o;
    long int num1, num2;
    long double num3;
    //局域变量部分
    cout << "欢迎使用计算器功能！" << endl;
    cout << "\033[1;37;43m注意\033[0m：现仅只支持两个数之间的运算！" << endl;
    //函数预处理
    cout << "输入任意值继续，输入“\033[33;1mc\033[0m”退出..." << endl;
    cin >> q;
	while (q != 'c' || q != 'C')
    {
        cout << "--------------------" << endl;
        cout << "请选择你需要的运算（加：+，减：-，乘：*，除：/，乘方：^，退出：c）：" << endl;
        cin >> o;
        //加法模块
        if (o == '+')
        {
            cout << "请输入第一个加数：";
            cin >> num1;
            cout << "请输入第二个加数：" << endl;
            cin >> num2;
            num3=num1+num2;
            cout << num1 << "+" << num2 << "=" << num3 << endl;
        }
        //减法模块
        else if (o == '-')
        {
            cout << "请输入被减数：";
            cin >> num1;
            cout << "请输入减数：" << endl;
            cin >> num2;
            num3=num1-num2;
            cout << num1 << "-" << num2 << "=" << num3 << endl;
        }
        //乘法模块
        else if (o == '*')
        {
            cout << "请输入第一个因数（乘数）：";
            cin >> num1;
            cout << "请输入第二个因数（乘数）：" << endl;
            cin >> num2;
            num3=num1*num2;
            cout << num1 << "*" << num2 << "=" << num3 << endl;
        }
        //除法模块
        else if (o == '/')
        {
            cout << "请输入被除数：";
            cin >> num1;
            cout << "请输入除数：" << endl;
            cin >> num2;
            if (num2 == 0)
            cout << "\033[37;1;43m注意\033[0m：计算不成立！" << endl;
            else
            {
                num3=num1/num2;
                cout << num1 << "/" << num2 << "=" << num3 << endl;
            }
        }
        //乘方模块
        else if (o == '^') 
        { 
            cout << "请输入底数："; 
            cin >> num1; 
            cout << "请输入指数：" << endl; 
            cin >> num2; 
            long int n=num2;
			if (num1 == 0 && num2 == 0) 
            cout << "\033[37;43;1m注意\033[0m：计算不成立！" << endl; 
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
        //退出模块
        else if(o == 'c' || o == 'C')
		{
			clear();
			break;
		}
        //报错模块
        else
        {
			clear();
			ERROR();
        }
	}
}

//B函数,用于计算最大公约数
void B()
{
    clear();
    long double num3, num4;
    cout << "欢迎使用最大公约数功能！" << endl;
    cout << "\033[1;43;37m注意\033[0m：本功能只支持两个数之间的运算！" << endl;
    //初始化部分
    cout << "输入任意值继续，输入“\033[33;1mc\033[0m”退出..." << endl;
    cin >> q;
    while (q != 'c' || q != 'C')
    {
        cout << "--------------------" << endl;
        cout << "请输入第一个数" << endl;
        cin >> num3;
        cout << "请输入第二个数" << endl;
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

//C函数,用于计算最小公倍数
void C()
{
    clear();
    cout << "欢迎使用最小公倍数功能！" << endl;
    cout << "\033[1;43;37m注意\033[0m：本功能只支持两个数之间的运算！" << endl;
    cout << "输入任意值继续，输入“\033[33;1mc\033[0m”退出..."<< endl;
    cin >> q;
    while (q != 'c' || q != 'C')
    {
        cout << "--------------------" << endl;
        long int n3;
        long double num5, num6;
        while (1 > 0)
        {
            cout << "请输入第一个数:" << endl;
            cin >> num5;
            cout << "请输入第二个数:" << endl;
            cin >> num6;
            if (num5 != int(num5) || num6 != int(num6))
            ERROR();
            else
            break;
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
		    ++n3;
        }
    }
}

//D函数,数值分析器
void D()
{
    clear();
    long double x, a;
    cout << "欢迎使用数值分析器功能！" << endl;
    //函数初始化
    cout << "输入任意键继续，输入“\033[1;33mc\033[0m”退出..." << endl;
    cin >> q;
    while (q != 'c' || q != 'C')
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
            if (modf(x, &a) == 0.0)
            cout << x << "是整数" << endl;
            else
            cout << x << "是分数" << endl;
            if (x > 0)
            cout << x << "是正数" << endl;
            else
            cout << x << "是负数" << endl;
            if (x * x >= 0)
            cout << x << "是实数" << endl;
            else
            cout << x << "是虚数" << endl;
            if (x == 1)
            cout << x << "是不分质数合数" << endl;
            else
            {
                if (int(x) % 3 == 0 || int(x) % 5 == 0 || int(x) % 2 == 0 || int(x) % 7 == 0 || int(x) % 11 == 0)
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

//setting函数,用于设置（测试开发阶段）
void setting()
{
    clear();
	int a;
	cout << "设置" << endl;cout << endl;
    cout << "全局语言" << endl;
	cout << "English = 1 , 简体中文 = 2";
	//cin >> a;
	//if(a == 1)
	//设成英文模式
	//if(a == 2)
	//中文
}

//M函数，用于简化主函数
void M()
{
    cout << "\033[1;33m欢迎使用集成数学工具!\033[0m" << endl;
    char u;
	//函数初始化
    while (true) //主循环
    {
        cout << "--------------------" << endl;
        cout << "\033[34m计算器\033[1;34m(1)\033[0m，\033[35m最大公约数\033[35;1m(2)\033[0m，\033[36m最小公倍数\033[1;36m(3)\033[0m，\033[32m数值分析器\033[1;32m(4)，版本(v)，\033[1;33m退出(5)\033[0m" << endl;
        cout << "请键入你所需的功能：";
        cin >> u;
        if (u == '1')
        calc();
        else if (u == '2')
        B();
        else if (u == '3')
        C();
        else if (u == '4')
        D();
		else if (u == '5')
		break;
		else if (u == '6')
        setting();
        else if (u == 'v' || u == 'V')
        cout << "MCT Insider v0.0.1.0 Beta02" << endl;
        else
		{
            clear();
            ERROR();
        }
    }
}

//主函数部分
int main()
{
    clear();
	M(); //使用M函数
    clear();
	return 0; //向系统报个0值
}

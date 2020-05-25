//创建一个string，为其赋值“test”并输出。

/* this的使用
 1.当成员函数中某个变量与成员变量名字相同，则使用this关键字来表示成员变量。 
 2.需要返回类对象变量的时候或者成员函数参数为类对象时，使用this关键字，写法为return （*this），常用于操作符重载和赋值、拷贝等函数。
*/

//当私有成员变量为指针类型时，要进行对指针的空间申请，之后再进行赋值
#include <iostream>
#include <cstring>
using namespace std;
class String
{
public:
	String(const char *str = NULL);			//构造函数
	String(const String &other);			//拷贝构造函数
	~String(void);							//析构函数
	String &operator=(const String &other); //赋值函数
private:
	char *m_data; //用于保存字符串，指针指向字符串的地址。
};				  //编写String的上述四个函数。
/*
　　 1、构造函数在构造对象时使用；
 　　2、传入参数的判断,参数值为char的指针；
 　　3、对s对象的初始化问题。
*/
String::String(const char *str)
{
	cout << "构造函数" << endl;
	if (str == NULL)
	{ //传出为空的情况
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{										//字符串后面都会跟着'\0',因此要多加一个空间。
		m_data = new char[strlen(str) + 1]; //申请空间
		strcpy(m_data, str);
	}
}
/*
 　　1、拷贝构造函数必须在构造对象时使用，即定义对象时,对象间的赋值；
 　　2、对象初始化问题。
*/
//拷贝构造函数和构造函数的区别在于参数不同，这也是本质，是重载，特殊的一种拷贝构造函数而已
//当类中包括指针类成员变量时，一定要重载其拷贝构造函数、赋值函数和析构函数
String::String(const String &other)
{
	cout << "拷贝构造函数" << endl;
	int length = strlen(other.m_data);
	this->m_data = new char[length + 1];
	strcpy(this->m_data, other.m_data);
}
//重载函数，赋值
/*
　　 1、赋值函数使用时，对象肯定已经建立；
 　　2、赋值前，判断是否是自我赋值；
 　　3、赋值前，内存空间的准备：
  　　　　 由于赋值前，对象已占有一定大小内存，但是赋值对象所占内存大小与
   　　　　对象已占的内存大小不一定一致；
  　　　　 先释放对象已占的内存，然后分配心内存。
　　 4、正常赋值
*/
String &String::operator=(const String &other)
{
	cout << "赋值函数" << endl;
	if (&other == this)
	{ //判断自我赋值安全性
		return *this;
	}
	else
	{ //消除异常安全性
		delete[] m_data;
		int len = strlen(other.m_data);
		this->m_data = new char[len + 1];
		strcpy(this->m_data, other.m_data);
		for (int i = 0; i < len + 1; i++)
			cout << m_data[i];
		cout << endl;
		return *this; //返回一个对象
	}
}

//析构函数
/*
 　　资源的释放
*/
String::~String(void)
{
	cout << "析构函数" << endl;
	delete[] m_data;
}
int main()
{
	String a("hello");
	String c;
	c = a;
	return 0;
}

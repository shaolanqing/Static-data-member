/*设计一个书类，能够保存书名、定价，所有书的本数和总价。
（将书名和定价设计为普通数据成员；将书的本数和总价设计为静态数据成员）
*/
#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
	string bname;
	float bprice;
	
public:
	static int allnum;     //将书的本数定义为静态数据成员 
	static float allprice;  //将书的总价定义为静态数据成员 

	Book()
	{
		bname="";
		bprice=0;
		allnum++;              //书本数自动++； 
		allprice=allprice+bprice;

	}
	Book(string bn,float bp)
	{
		bname=bn;
		bprice=bp;
		allnum++;            
		allprice=allprice+bprice;
	}
	Book(Book &b)
	{
		bname=b.bname;
		bprice=b.bprice;
		allnum++;
		allprice=allprice+bprice;
	}
	~Book()
	{
		cout<<"is ok!"<<endl;
	}
	void AllBookP()           
	{
		cout<<"all boos num:"<<allnum<<endl;
		cout<<"all books price:"<<allprice<<endl;
	}
	void printinfo()          //书本信息输出函数 
	{
		
			cout<<"books information:"<<endl;
			cout<<"book's name:"<<bname<<"  "<<"book's price:"<<bprice<<endl;

	
	}
};
int Book::allnum=0;        //类外对静态成员函数初始化 
float Book::allprice=0;
int main()
{
	Book b1("math",89);
	b1.AllBookP();
	Book b2("english",78);
	b2.AllBookP();
	Book b3(b2);
	b3.AllBookP();
	b3.printinfo();

	return 0;
}


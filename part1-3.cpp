/*���һ�����࣬�ܹ��������������ۣ�������ı������ܼۡ�
���������Ͷ������Ϊ��ͨ���ݳ�Ա������ı������ܼ����Ϊ��̬���ݳ�Ա��
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
	static int allnum;     //����ı�������Ϊ��̬���ݳ�Ա 
	static float allprice;  //������ܼ۶���Ϊ��̬���ݳ�Ա 

	Book()
	{
		bname="";
		bprice=0;
		allnum++;              //�鱾���Զ�++�� 
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
	void printinfo()          //�鱾��Ϣ������� 
	{
		
			cout<<"books information:"<<endl;
			cout<<"book's name:"<<bname<<"  "<<"book's price:"<<bprice<<endl;

	
	}
};
int Book::allnum=0;        //����Ծ�̬��Ա������ʼ�� 
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


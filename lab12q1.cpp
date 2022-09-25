#include<iostream>
using namespace std;
class Student{
	protected:
		int rollno;
		public:
			void set_number(int n)
			{
				rollno=n;
			}
			void print_number()
			{
				cout<< rollno;
			}
};
class Test:virtual public Student
{
 protected:
 int math,physics;
 public:
 void get_marks(int m,int p)
 {
 this->math=m;
 this->physics=p;	
}
void print_marks()
{
	cout<<"math marks:"<<this->math<<endl;
	cout<<"physics Marks:"<<this->physics<<endl;
}
};
class Sports:virtual public Student
{
 protected:
 int score;
 public:
  void set_score(int s)	
  {
  	this->score=s;
  }
  void print_score()
  {
  	cout<<"Score is:"<<score<<endl;
  }
};
class Result: public Test,Sports
{
protected:
int total;
public:
void add()
{
	total=score+physics+math;
}
void display()
{
	add();
	print_number();
	print_marks();
	print_score();
	cout<<"Total is:"<<total<<endl;
}
};
int main()
{
Result harry;
harry.set_number(4200);
harry.get_marks(78.9, 99.5);
harry.set_score(9);
harry.display();
return 0;}

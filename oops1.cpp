#include<iostream>
using namespace std;
class course
{
    string name;
     int id;
public:

    course()
    {

    }
    void setter()
    {
        cout<<"enter name of course"<<endl;
        cin>>name;
        cout<<"enter id of course"<<endl;
        cin>>id;
    }
    void getter()
    {
        cout<<id<<endl;
        cout<<name<<endl;

    }

};
class student
{
    int roll;
    string name;
    course c[4];
public:
    student(int roll,string name)
    {
        this->roll=roll;
        this->name=name;
    }
    void generatecourse(course p[])
    {
        int x;

        for(int i=0;i<4;i++)
        {
            c[i]=p[i];
        }
    }
        void print()
        {
            for(int i=0;i<4;i++)
            {
                c[i].getter();
            }
        }



};
int main()
{
    course c[4];
    for(int i=0;i<4;i++)
    {
        c[i].setter();
    }
    student s(5,"ram");
    s.generatecourse(c);
    s.print();

}


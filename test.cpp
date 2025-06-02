#include <iostream>
#include <fstream>
using namespace std;
struct date
{
    int day, month, year;
};
struct student
{
    char name[40];
    date birthday;
    int id;
    float score;
};
void showstudent(student p[], int size)
{
        cout<<"STT\tMSSV\tHo ten\tNgay sinh\tDiem"<<endl;
        int stt=1;
        for(int i=0; i<size; i++)
        {
            if(type=='a'||(type=='b'&&p[i].score>5)||(type=='c'&&p[i].day==13))
            cout<<i+1<<"\t";
            cout<<p[i].id<<"\t";
            cout<<p[i].name<<"\t";
            cout<<p[i].birthday.day<<"/"<<p[i].birthday.month<<"/"<<p[i].birthday.year<<"\t";
            cout<<p[i].score<<endl;
        }

    }   
void sortStruct(student p[], int size)
    {
        for(int i=0; i<size-1; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(p[i].score<p[j].score)
                {
                    student temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }
    }
int main()
{
    int n, i;
    cout<<"Nhap so luong sinh vien: "; cin>>n;
    student *p=new student[n];
    for(i=0; i<n; i++)
    {
        cout<<"Nhap thong tin sinh vien "<<i+1<<endl;
        cout<<"Nhap ten sinh vien "<<i+1<<": "; 
            cin.ignore(); 
            cin.getline(p[i].name, 40);
        cout<<"Nhap ngay/thang/nam sinh: "; 
            cin>>p[i].birthday.day;
            cin>>p[i].birthday.month;
            cin>>p[i].birthday.year;
        cout<<"Nhap id: "; 
            cin>>p[i].id;
        cout<<"Nhap diem: "; 
            cin>>p[i].score;
    }
    cout<<"Danh sach sinh vien da nhap: "<<endl;
    showstudent(p, n);
    delete[] p;
    return 0;
}
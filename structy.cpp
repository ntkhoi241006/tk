#include<iostream>
#include <cstring>
using namespace std;
struct Date{
	int day, month, year;
};
struct Student{
	char hoten[33];
	Date birthday;
	int mssv;
	float score;
};

void showStudent(Student p[], int size, char type='a'){
	cout<<"STT\tMSSV\tHo va ten\tNgay sinh\tDiem\n";
	int stt=1;
	for(int i=0;i<size;i++){
		if(type=='a'||(type=='b'&&p[i].score>5)||(type=='c'&&p[i].birthday.day==13)){
			cout<<stt<<"\t";
			cout<<p[i].mssv<<"\t";
			cout<<p[i].hoten<<"\t";
			cout<<p[i].birthday.day<<"/";
			cout<<p[i].birthday.month<<"/";
			cout<<p[i].birthday.year<<"\t";
			cout<<p[i].score<<endl;	
			stt++;
		}
		
	}
}

int main(){
	int n;
	cout<<"Nhap so luong sinh vien: ";
	cin>>n;
	Student *p = new Student[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin sinh vien thu "<<i+1<<": ";
		cout<<"\nHo va ten: ";
		cin.ignore();
		cin.getline(p[i].hoten,33);
		cout<<"Ngay thang nam sinh: ";
		cin>>p[i].birthday.day;
		cin>>p[i].birthday.month;
		cin>>p[i].birthday.year;
		cout<<"Nhap ma so sinh vien: ";
		cin>>p[i].mssv;
		cout<<"Nhap diem: ";
		cin>>p[i].score;
	}
	cout<<"Danh sach sinh vien vua nhap:\n";
	showStudent(p,n);
	cout<<"Danh sach sinh vien co diem >5:\n";
	showStudent(p,n, 'b');
	cout<<"Danh sach sinh vien co ngay sinh 13:\n";
	showStudent(p,n, 'c');
	sortStruct(p,n);
	cout<<"Danh sach sinh vien sap xep:\n";
	showStudent(p,n);
	delete[] p;	
}

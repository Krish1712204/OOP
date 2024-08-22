#include<iostream>
using namespace std;
class Base{
	public:
	string name;
	int roll_no;
	
	Base(){
	name="Null";
	roll_no=0;
	}
	
	virtual void Accept_Internal_assissment()=0;
	virtual void Accept_University_Examination_Mark()=0;
};

class Derived: public Base{
	public:
		 string subject[5];
		 string subject_code[5];
		 int i,ch,pos,flag=0,internal_assissment[5],university_examination_mark[5],total[5],cia1[5],cia2[5],cia3[5],cia[5];
	
		Derived()
		{
			for(i=0;i<5;i++)
			{
				subject[i]="Null";
				subject_code[i]="Null";
				internal_assissment[i]=0;
				university_examination_mark[i]=0;
			}
		}
		void Accept_student_Details(){		//Pure virtual function
			cout<<"Enter your name : ";
			cin>>name;
			cout<<"Enter roll no.: ";
			cin>>roll_no;
		}
			
		void Accept_Subject_details(){
			cout<<"Enter your 5 subject name : ";
			for(i=0;i<5;i++)
			cin>>subject[i];
			cout<<"Enter subject code for subject"<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter subject code of "<<subject[i]<<" subject : ";
				cin>>subject_code[i];
			}	
		}
		
		void Accept_Internal_assissment(){		//Pure virtual function
			cout<<"Enter mark of interal assessment: "<<endl;
			
			for(i=0;i<5;i++)
			{
				cout<<"Enter interal assessment mark of "<<subject[i]<<" subject : "<<endl;
				cout<<"Enter the mark of 1st CIA(out of 20): ";
				cin>>cia1[i];
				cout<<"Enter the mark of 2nd CIA(out of 20): ";
				cin>>cia2[i];
				cout<<"Enter the mark of 3rd CIA(out of 20): ";
				cin>>cia3[i];
				cout<<"Enter the mark of Self Learing Activity(out of 20): ";
				cin>>cia[i];
				total[i]+=cia1[i]+cia2[i]+cia3[i];
				total[i]=total[i]/3;
				internal_assissment[i]=total[i]+cia[i];
			}	
		}
		
		void Accept_University_Examination_Mark(){		//Pure virtual function
			cout<<"Enter mark of University Examination(Final Examination): "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter University Examination mark of "<<subject[i]<<" subject : ";
				cin>>university_examination_mark[i];
			}	
		}
		
		void Display(){
			cout<<"\nStudent name: "<<name<<endl;
			cout<<"Roll No.: "<<roll_no<<endl;
			cout<<"University Result :"<<endl;
			cout<<"\nSubject\tSubject Code\tCIA1\tCIA2\tCIA3\tInternal Assissment\tExam mark\tTotal\t"<<endl;
			for(i=0;i<5;i++)
			cout<<subject[i]<<"\t\n\t"<<subject_code[i]<<"\t\t"<<cia[i]<<"\t"<<cia2[i]<<"\t"<<cia3[i]<<"\t"<<internal_assissment[i]<<"\t\t\t"<<university_examination_mark[i]<<"\t  \t"<<internal_assissment[i]+university_examination_mark[i]<<"\t\t"<<endl;
			
		}
		};
		
		
int main(){
	Derived obj[10];
	int ch,choice,i,n,rn,flag=0,pos=0;
	
	
	cout<<"\nEnter the number of student: ";
	cin>>n;
do{
	
	cout<<"Menu\n1: Insert Data of Student\n2: Enter Subject Name\n3: Enter Internal Assissment Mark\n4: Enter University Examination Mark\n5: Display Data";
	cout<<"\nEnter your choice: ";
	cin>>ch;
	
	switch(ch){
	case 1:
		for(i=0;i<n;i++)
		{
			obj[i].Accept_student_Details();
		}
	break;
	
	case 2:
			for(i=0;i<n;i++)
		{
			obj[i].Accept_Subject_details();
		}
	break;
	case 3:
	          for(i=0;i<n;i++)
	          {
	          obj[i].Accept_Internal_assissment();
	          }
	          break;
       case 4:
                  for(i=0;i<n;i++)
                  {
                  obj[i].Accept_University_Examination_Mark();
                  }
                  break;
	
	
	case 5:
		for(i=0;i<n;i++)
		{
			obj[i].Display();
		}
	break;
	
	default :
	cout<<"Wrong Choice!"<<endl;
	}
	cout<<"Do you want to Continue";
	cin>>ch;
	}while(ch==1);
		
	return 0;
}
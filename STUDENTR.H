#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>

	class Register{
		char  StudentName[120];
		int   StudentRoll;
		char  FathersName[120];
		char  HouseName[120];
		char  LivingPlace[120];
		char  MothersName[120];
		float Height;
		float Weight;
		char  BloodGroup[10];
		int Ch;
		void IncrementAbsent(){
		Absent=Absent++;
      }
		void F1(){
		Absent=0;
		Present=0;
		cout<<"\n\t1.Enter the Student Name        :: ";
		gets(StudentName);


		}
		void F2(){
		cout<<"\n\t2.Enter the Fathers Name        :: ";
		gets(FathersName);}
		void F3(){
		cout<<"\n\t3.Enter the Mothers Name        :: ";
		gets(MothersName);}
		void F4(){
		cout<<"\n\t4.Enter the Roll Number                       :: ";
		cin>>StudentRoll;}
		void F5(){
		cout<<"\n\t5.Enter the House Name                        :: ";
		gets(HouseName);}
		void F6(){
		cout<<"\n\t6.Enter Living Place                          :: ";
		gets(LivingPlace);}
		void F7(){
		cout<<"\n\t7.Enter the Student Hieght                    :: ";
		cin>>Height;}
		void F8(){
		cout<<"\n\t8.Enter the Student Weight                    :: ";
		cin>>Weight;}
		void F9(){
		cout<<"\n\t9.Enter the Student Blood Group               :: ";
		gets(BloodGroup);}
		void F10(){
		cout<<"\n\t8.Enter the Attendance (Days Present)         :: ";
		cin>>Present;}
		public:
		int Absent;
		int Present;
			void EnterDetails()
			{
			F1();
			F2();
			F3();
			F4();
			F5();
			F6();
			F7();
			F8();
			F9();
			F10();
			do{
			cout<<"\n\tIf You have to make any change to the Entered catogories just Enter their Seriel Number(else 0) ......";
			cin>>Ch;
			switch(Ch)
				{
				case 1:
				 F1();break;
				case 2:
				 F2();break;
				case 3:
				 F3();break;
				case 4:
				 F4();break;
				case 5:
				 F5();break;
				case 6:
				 F6();break;
				case 7:
				 F7();break;
				case 8:
				 F8();break;
				case 9:
				 F9();break;
				case 10:
				F10();break;
				}
					 }while(Ch);
					 }
		int GetRollNumber(){
			return StudentRoll;}
		char* GetName(){
			return StudentName;
			}
		void DisplayRegister(){
		cout<<"\n\t   Student's Name ::"<<StudentName;
		cout<<"\n\t   StudentRoll    ::"<<StudentRoll;
		cout<<"\n\t   Father's Name  ::"<<FathersName;
		cout<<"\n\t   House Name     ::"<<HouseName;
		cout<<"\n\t   Living Place   ::"<<LivingPlace;
		cout<<"\n\t   Mothers Name   ::"<<MothersName;
		cout<<"\n\t   Student Height ::"<<Height;
		cout<<"\n\t   Student Weight ::"<<Weight;
		cout<<"\n\t   Student Blood  ::"<<BloodGroup;
      cout<<"\n\t   Days Absent     ::"<<Absent;
      cout<<"\n\t   Days Present    ::"<<Present;
		}
		};



			  class Save{
			  public:
			  void SaveRegister()
				{
				int Numb;
				Register R1;
				ofstream  ofile("Student.tea",ios::binary|ios::app);
				cout<<"\n\tEnter the Number of Student Record :: ";
				cin>>Numb;
				for(int i=0;i<Numb;i++){
				R1.EnterDetails();
				ofile.write((char*)&R1,sizeof(R1));
				cout<<"\n\t "<<i+1<<"\t Student Records Added Successfully ";

				}
				}
				};


 class UpdateRegister{
 public:
 void Update(){
 Register rem;
 fstream ffile("Student.tea",ios::binary|ios::in|ios::out);
 int RollNumber;
 long pos;
 char found='f',ch;
 label:
 cout<<"\n\t Ente the Roll Number to be Searched   :: ";
 cin>>RollNumber;

 while(!ffile.eof())
 {
  pos=ffile.tellg();
  ffile.read((char*)&rem,sizeof(rem));
  if(rem.GetRollNumber()==RollNumber)
  {
	rem.EnterDetails();
	ffile.seekg(pos);
	ffile.write((char*)&rem,sizeof(rem));
	found='t';
	break;
  }
 }
  if(found=='f')
  {
	cout<<"\n Record not found ";
	cout<<"\n Do you want to continue search(y/n)=";
	cin>>ch;
	if((ch=='Y')||(ch=='y'))
	 goto label;
	}
	ffile.seekg(0);

	ffile.close();
	getch();
}
};



class UpdateAttendance{
 public:
 void Update(){
 Register rem;
 fstream ffile("Student.tea",ios::binary|ios::in|ios::out);
 int RollNumber;
 long pos;
 char found='f',ch;
 label:
 cout<<"\n Enter the RollNumber of Student who is Absent  ::";
 cin>>RollNumber;

 while(!ffile.eof())
 {
  pos=ffile.tellg();
  ffile.read((char*)&rem,sizeof(rem));
  if(rem.GetRollNumber()==RollNumber)
  {
	rem.Absent++;
	ffile.seekg(pos);
	ffile.write((char*)&rem,sizeof(rem));
	found='t';
	break;
  }
 }


	ffile.close();
	getch();
}
};
class DisplayAttendance{
public:
void Display(){
int RollNumber;
ifstream ifile("Student.tea",ios::in|ios::binary);
cout<<"\n\t Enter the Roll Number of Student to be Searched  :: ";
cin>>RollNumber;
Register RWX;
while(ifile){
	ifile.read((char*)&RWX,sizeof(RWX));
	if(RWX.GetRollNumber()==RollNumber){
	cout<<"\n\t Days Absent = "<<RWX.Absent;
	}
 }
 getch();
}
};
class DisplayStudentDetails{
int GetStream(){
ClassDetails C1;
ifstream ifile("ClassDetails.tea",ios::in|ios::binary);
ifile.read((char*)&C1,sizeof(C1));
return C1.GetStream();
}
 public:
 int RollNumber;
 char Title[100];
 void WriteStudentDetails(){

 Register R1;
 cout<<"\n\tEnter the Student Roll Number to be Displayed :: ";
 cin>>RollNumber;
 ifstream ifile("Student.tea",ios::in|ios::binary);
 while(ifile){
 ifile.read((char*)&R1,sizeof(R1));
 if(R1.GetRollNumber()==RollNumber){
 R1.DisplayRegister();
 break;
 }
 }
 }
 void WriteMarks(){
				cout<<"\n\t Enter the Roll Number :: ";
				cin>>RollNumber;
				MarkEntry M1;
				cout<<"\n\tEnter the Test Title    :: ";
				gets(Title);
				ifstream ifile("Mark.tea",ios::in|ios::binary);
				while(ifile){
				ifile.read((char*)&M1,sizeof(M1));
				if((strcmpi(M1.GetTestName(),Title)==0)&&(M1.GetRollNumber()==RollNumber)){
				cout<<"\n";
				switch(GetStream()){
				case 1:
				M1.DisplayMarkComputerScience(RollNumber);
				break;
				case 2:
				M1.DisplayMarkBiologyScience(RollNumber);
				break;
				case 3:
				M1.DisplayMarkCommerceMaths(RollNumber);
				break;
				case 4:
				M1.DisplayMarkCommerceIP(RollNumber);
				break;
				 }
				 break;
				 }
				 }
			 }
			 };
				 /*
				 DisplayStudentDetails D1;
				 D1.WriteStudentDetails();
				 D1.WriteMarks();
				 getch(); */


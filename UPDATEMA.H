class UpdateMark{
public:
void UMark(){
MarkEntry rem;
 fstream ffile("Mark.tea",ios::binary|ios::in|ios::out);
 char Name[100];
 long pos;
 char found='f',ch;
 cout<<"\n Enter the Name of Test  which has to be modified  ::";
 gets(Name);
 cout<<"\n\t Enter the Roll Number to  be modified           ::";
 int Roll;
 cin>>Roll;
 label:
 while(!ffile.eof())
 {
  pos=ffile.tellg();
  ffile.read((char*)&rem,sizeof(rem));
  if((strcmpi(rem.GetTestName(),Name)==0)&&(rem.GetRollNumber()==Roll))
  {
	rem.MarkiEntry();
	ffile.seekg(pos);
	ffile.write((char*)&rem,sizeof(rem));
	found='t';

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


}
};

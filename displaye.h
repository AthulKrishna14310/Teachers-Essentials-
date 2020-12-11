
class DisplayEventDetails{
	public:
	char Name[100];
	void DisplayEvent(){
	Collection C1;
   cout<<"\n\t..................Event Collection Page .........................";
	cout<<"\n\t Enter the Name of Event Collection :: ";
	gets(Name);
	ifstream ifile("Collection.tea",ios::in|ios::binary);
	while(ifile){
	ifile.read((char*)&C1,sizeof(C1));
	if(strcmpi(Name,C1.GetEventName())==0){
	C1.Show();
	break;
	}
	}
	}
	};




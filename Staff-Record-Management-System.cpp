// STORE MANAGEMENT SYSTEM 
#include <iostream>      
#include <string>
using namespace std;

class base {
public:
	int feedback;
		
    virtual void print()
    {
        cout << "USED VIRTUAL KEYWORD\n";
    }
  
    void show()
    {
        cout << "USED VIRTUAL KEYWORD IN BASE CLASS\n";
    }
};
  
class derived : public base {
public:
	
    void print()
    {
        cout << "NOT USED VIRTUAL KEYWORD\n";
    }
  
    void show()
    {
        cout << "USED VIRTUAL KEYWORD IN DERIVED CLASS\n";
    }
    
    void inn()
	{
    cout<<"DO YOU LIKE THE PROGRAM ?\n"<< endl;
    cout<<"IF YES TYPE 1 ELSE 2 \n"<< endl;
    cin>>feedback;
    cout<<endl;
    cout<<"THANKS FOR REVIEWING \n"<< endl;
	}
};

class SamsungMobile {
	private:
    	string model;
    	int price;
    	int storage;
    	int id;
    	char name[50];
    	char address[100];
    	
    	int eid,sroll_no,pjersey_no,hprun;
		string ename, edept, edesignation;
		string sstd, ssub,psport,Playing_As;
		
	public:
	// Default constructor
    SamsungMobile() {
        model = "SAMSUNG S1";
        price = 7999;
        storage = 4;
    }
    
    // Parameterized constructor with two parameters
    SamsungMobile(string m, int p) {
        model = m;
        price = p;
    }
    
    // Parameterized constructor with three parameters
    SamsungMobile(string m, int p, int s) {
        model = m;
        price = p;
        storage = s;
    }

    // Copy constructor
    SamsungMobile(const SamsungMobile& other) {
        model = other.model;
        price = other.price;
        storage = other.storage;
    }

    // Getter functions
    string getModel() const {
        return model;
    }
    int getPrice() const {
        return price;
    }
    int getStorage() const {
        return storage;
    }

    // Setter functions
    void setModel(string m) {
        model = m;
    }
    void setPrice(int p) {
        price = p;
    }
    void setStorage(int s) {
        storage = s;
    }
    
    void info(){
	cout<<"=========================================================================="<<endl;
	cout<<"          IT CONTAINS THE INFORMATION OF MOBILE DELIVERY RECORDS :"<<endl;
	cout<<"=========================================================================="<<endl;
	}

	void info(int id,string name, string dept,string designation){
	eid=id;
	ename=name;
	edept=dept;
	edesignation=designation;

	cout<<"Mobile ID:"<<eid<<endl;
	cout<<"Owner's Name:"<<ename<<endl;
	cout<<"Company:"<<edept<<endl;
	cout<<"Delivery Location:"<<edesignation<<endl<<endl;

	cout<<"=========================================================================="<<endl;
	cout<<"      IT CONTAINS THE INFORMATION OF BUYER BOUGHT MOBILE FROM SHOP"<<endl;
	cout<<"=========================================================================="<<endl;
	}

	void info(int roll,string name, string std){
	sroll_no=roll;
	ename=name;
	sstd=std;
	cout<<"Mobile ID:"<<eid<<endl;
	cout<<"Owner's Name:"<<ename<<endl;
	cout<<"ADDRESS:"<<sstd<<endl<<endl;
	}
};

class redmi{
	private:
		string model;
    	int price;
    	int storage;
    	int id;
    	char name[50];
    	char address[100];
    	
	public:
	// Default constructor
    redmi() {
        model = "REDMI S1";
        price = 7999;
        storage = 4;
    }
    
    // Parameterized constructor with two parameters
    redmi(string m, int p) {
        model = m;
        price = p;
    }
    
    // Parameterized constructor with three parameters
    redmi(string m, int p, int s) {
        model = m;
        price = p;
        storage = s;
    }

    // Copy constructor
    redmi(const redmi& other) {
        model = other.model;
        price = other.price;
        storage = other.storage;
    }

    // Getter functions
    string getModel() const {
        return model;
    }
    int getPrice() const {
        return price;
    }
    int getStorage() const {
        return storage;
    }

    // Setter functions
    void setModel(string m) {
        model = m;
    }
    void setPrice(int p) {
        price = p;
    }
    void setStorage(int s) {
        storage = s;
    }
};

// ----------------- FILE HANDELING (  CASE - 5 ) --------------------
struct student{
    int storage;   
    char mname[30];    
    float price;
}stud;

void insert(){
    FILE *fp;	
    fp = fopen("MEGH.txt", "w");
    cout << "Enter the STORAGE (in GB)   : ";
    cin >> stud.storage;
    cout << "Enter the MOBILE Name      : ";
    cin >> stud.mname;
    cout << "Enter the MOBILE Price     : ";
    cin >> stud.price;
    fwrite(&stud, sizeof(stud), 1, fp);
    fclose(fp);
}

void disp()
{
    FILE *fp1;
    fp1 = fopen("MEGH.txt", "r");
    cout << "\nSTORAGE (in GB)\tMOBILE Name\tMOBILE Price\n\n";
    while (fread(&stud, sizeof(stud), 1, fp1))
    cout << "  " << stud.storage << "\t\t" << stud.mname << "\t\t" << stud.price << endl;
    fclose(fp1);
}

//    FUNCTION TO DELETE A RECORD
void deletefile()
{
 FILE *fpo;
 FILE *fpt;
 int r, s;
 cout << "Enter the STORAGE(in GB) you want to delete: ";
 cin >> r;
 if (r == 0) {
 cout << "STORAGE " << r << " is not available in the file\n";
 }
 else {
        fpo = fopen("MEGH.txt", "rb");
        fpt = fopen("MEGH.txt", "wb");
        while (fread(&stud, sizeof(stud), 1, fpo)) 
		{
            s = stud.storage;
            if (s != r)
			{
                fwrite(&stud, sizeof(stud), 1, fpt);
            }
        }
        fclose(fpo);
        fclose(fpt);
        fpo = fopen("MEGH.txt", "wb");
        fpt = fopen("MEGH.txt", "rb");
        while (fread(&stud, sizeof(stud), 1, fpt)) 
		{
            fwrite(&stud, sizeof(stud), 1, fpo);
        }
        cout << "\nRECORD DELETED\n";
        fclose(fpo);
        fclose(fpt);
    }
}

// ------------- FILE HANDELING CASE-7 -------------
struct feedback{
	string feedback;
}feed;

void insert1(){
    FILE *fp;	
    fp = fopen("MEGH1.txt", "w");

    cout << "ENTER YOUR FEED BACK      : ";
    cin >> feed.feedback;
    
    fclose(fp);
}

// ----------- INT MAIN ----------------------------
int main()
{
	base *bptr;
    derived d;
    bptr = &d;
    
	int choice,hantai,anime,naruto,sasuke,itachi,tsunade,jiraiya,orochimaru,boruto,sizuka;
	int i,j;
	
	FILE *fh;
	
	SamsungMobile obj;
	redmi obj1;
	
	// FOR SAMSUNG MOBILE
	// Default constructor
    SamsungMobile s1; 
    
    // Parameterized constructor with two parameters
    SamsungMobile s2("Galaxy S21", 22999); SamsungMobile s5("Galaxy S20", 28999);
    SamsungMobile s6("Galaxy S19", 25999); SamsungMobile s7("Galaxy S18", 12999);
    SamsungMobile s8("Galaxy S17", 17999);
    
    // Parameterized constructor with three parameters
    SamsungMobile s3("Galaxy S20", 90000, 64);    SamsungMobile s9("Galaxy S21", 91000, 64);
    SamsungMobile s10("Galaxy S22", 92000, 128);    SamsungMobile s11("Galaxy S23", 93000, 128);
    SamsungMobile s12("Galaxy S24", 94000, 128);
    
    // Copy constructor
    SamsungMobile s4 = s2; 
    //-----------------------------------------------------------------------------------------
    
    // FOR REDMI(MI) MOBILE
	// Default constructor
    redmi s111; 
    
    // Parameterized constructor with two parameters
    redmi s211("MI S21", 22999); redmi s511("MI S20", 28999);
    redmi s611("MI S19", 25999); redmi s711("MI S18", 12999);
    redmi s811("MI S17", 17999);
    
    // Parameterized constructor with three parameters
    redmi s311("MI S20", 90000, 64);    redmi s911("MI S21", 91000, 64);
    redmi s101("MI S22", 92000, 128);    redmi s191("MI S23", 93000, 128);
    redmi s121("MI S24", 94000, 128);
    
    // Copy constructor
    redmi s411 = s211;
	
	cout<<"------------------------------------------------------------------------------" << endl;
	cout<<"\t\t\tCHOOSE A COMPANY TO BUY A MOBILE: "<<endl;
    cout<<"\t\t\tCLICK <1> TO SEE MOBILES OF SAMSUNG"<<endl;
    cout<<"\t\t\tCLICK <2> TO SEE MOBILES OF MI"<<endl;
    cout<<"\t\t\tCLICK <3> TO SEE ACCESSARIES"<<endl;
    cout<<"\t\t\tCLICK <4> FOR OFFLINE ORDERS AND DELIVERIES"<<endl;
    cout<<"\t\t\tCLICK <5> FOR ONLINE ORDERS AND DELIVERY RECORDS"<<endl;
    cout<<"\t\t\tCLICK <6> TO SEE USE OF VIRTUAL KEYWORD"<<endl;
    cout<<"\t\t\tCLICK <7> TO GIVE FEEDBACK"<<endl;
	cout<<"------------------------------------------------------------------------------" << endl;
    cout<<"\t\t\t\tCHOICE :";cin >> choice;
    
    // ----------------------- SAMSUNG MOBILES -----------------
    switch (choice)
	{
    	case 1:
    		cout<<"------------------------------------------------------------------------------" << endl;
    		cout<<"\t\t\tCLICK <1> TO SEARCH MOBILES by PRICE"<<endl;
    		cout<<"\t\t\tCLICK <2> TO SEARCH MOBILES by STORAGE"<<endl;
    		cout<<"\t\t\tCLICK <3> TO SEARCH MOBILES by MODEL"<<endl;
    		cout<<"------------------------------------------------------------------------------" << endl;
    		cout<<"\t\t\t\tCHOICE :";cin >> hantai;
    		switch (hantai){
			case 1:
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\tCLICK <1> TO SEARCH MOBILES Under 10000/-"<<endl;
				cout<<"\t\tCLICK <2> TO SEARCH MOBILES Btwn PRICE 10000/- to 20000/-"<<endl;
				cout<<"\t\tCLICK <3> TO SEARCH MOBILES Btwn PRICE 20000/- to 30000/-"<<endl;
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\t\tCHOICE :";cin >> anime;
				
				switch (anime)
				{
				case 1:
					cout<<"ONLY 1 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
					cout << "Model: " << s1.getModel() << endl;
            		cout << "Price: " << s1.getPrice() << endl;
            		cout << "Storage: " << s1.getStorage() << endl;
            		cout << "=========================" << endl;
					break;
					
				case 2:
					cout<<"ONLY 2 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
            		cout << "MOBILE 1\n" << endl;
            		cout << "Model: " << s7.getModel() << endl;
            		cout << "Price: " << s7.getPrice() << endl;
            		cout << "=========================\n" << endl;
            		
            		cout << "=========================" << endl;
            		cout << "MOBILE 2\n" << endl;
            		cout << "Model: " << s8.getModel() << endl;
            		cout << "Price: " << s8.getPrice() << endl;
            		cout << "=========================\n" << endl;
					break;
					
				case 3: 
					cout<<"ONLY 3 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
        			cout << "MOBILE 1\n" << endl;
           			cout << "Model: " << s2.getModel() << endl;
            		cout << "Price: " << s2.getPrice() << endl;
            		cout << "=========================\n" << endl;
            		
            		cout << "=========================" << endl;
            		cout << "MOBILE 2\n" << endl;
            		cout << "Model: " << s6.getModel() << endl;
            		cout << "Price: " << s6.getPrice() << endl;
            		cout << "=========================\n" << endl;
            
            		cout << "=========================" << endl;
            		cout << "MOBILE 3\n" << endl;
            		cout << "Model: " << s5.getModel() << endl;
            		cout << "Price: " << s5.getPrice() << endl;
            		cout << "=========================\n" << endl;
            		break;
				}   			
				break;
				
			case 2:
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\tCLICK <1> TO SEARCH MOBILES WHICH HAS 64 GB STORAGE"<<endl;
				cout<<"\t\t\tCLICK <2> TO SEARCH MOBILES WHICH HAS 128 GB STORAGE"<<endl;
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\t\tCHOICE :";cin >> naruto;
				
				switch (naruto)
				{
					case 1:
						cout<<"ONLY 2 PIECE AVAILABLE RIGHT NOW"<<endl;
						cout << "=========================" << endl;
        				cout << "MOBILE 1\n" << endl;
            			cout << "Model: " << s3.getModel() << endl;
            			cout << "Price: " << s3.getPrice() << endl;
            			cout << "Storage: " << s3.getStorage() << endl;
            			cout << "=========================\n" << endl;
            
            			cout << "=========================" << endl;
            			cout << "MOBILE 2\n" << endl;
            			cout << "Model: " << s9.getModel() << endl;
            			cout << "Price: " << s9.getPrice() << endl;
            			cout << "Storage: " << s9.getStorage() << endl;
            			cout << "=========================\n" << endl;
						break;	
						
					case 2:
						cout<<"ONLY 3 PIECE AVAILABLE RIGHT NOW"<<endl;
						cout << "=========================" << endl;
            			cout << "MOBILE 1\n" << endl;
            			cout << "Model: " << s10.getModel() << endl;
            			cout << "Price: " << s10.getPrice() << endl;
            			cout << "Storage: " << s10.getStorage() << endl;
            			cout << "=========================\n" << endl;
            
            			cout << "=========================" << endl;
            			cout << "MOBILE 2\n" << endl;
            			cout << "Model: " << s11.getModel() << endl;
            			cout << "Price: " << s11.getPrice() << endl;
            			cout << "Storage: " << s11.getStorage() << endl;
            			cout << "=========================\n" << endl;
            
            			cout << "=========================" << endl;
            			cout << "MOBILE 3\n" << endl;
            			cout << "Model: " << s12.getModel() << endl;
            			cout << "Price: " << s12.getPrice() << endl;
            			cout << "Storage: " << s12.getStorage() << endl;
           				cout << "=========================\n" << endl;
						break;
				}
				break;
				
			case 3:
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\tCLICK <1> TO SEARCH MOBILES BY LATEST MODEL"<<endl;
				cout<<"\t\t\tCLICK <2> TO SEARCH MOBILES BY AVERAGE MODEL"<<endl;
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\t\tCHOICE :";cin >> sasuke;
				
				switch (sasuke)
				{
				case 1:
					cout<<"ONLY 2 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
            		cout << "COPY MOBILE : 1\n" << endl;
            		cout << "Model: " << s3.getModel() << endl;
            		cout << "Price: " << s3.getPrice() << endl;
            		cout << "Storage: " << s3.getStorage() << endl;
            		cout << "=========================\n" << endl;
            
            		cout << "=========================" << endl;
            		cout << "COPY MOBILE : 2\n" << endl;
            		cout << "Model: " << s9.getModel() << endl;
            		cout << "Price: " << s9.getPrice() << endl;
            		cout << "Storage: " << s9.getStorage() << endl;
            		cout << "=========================\n" << endl;
					break;
					
				case 2:
					cout<<"ONLY 3 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
            		cout << "COPY MOBILE : 1\n" << endl;
            		cout << "Model: " << s10.getModel() << endl;
            		cout << "Price: " << s10.getPrice() << endl;
            		cout << "Storage: " << s10.getStorage() << endl;
            		cout << "=========================\n" << endl;
            
            		cout << "=========================" << endl;
            		cout << "COPY MOBILE : 2\n" << endl;
            		cout << "Model: " << s11.getModel() << endl;
            		cout << "Price: " << s11.getPrice() << endl;
            		cout << "Storage: " << s11.getStorage() << endl;
            		cout << "=========================\n" << endl;
            
            		cout << "=========================" << endl;
            		cout << "COPY MOBILE : 3\n" << endl;
            		cout << "Model: " << s12.getModel() << endl;
            		cout << "Price: " << s12.getPrice() << endl;
            		cout << "Storage: " << s12.getStorage() << endl;
            		cout << "=========================\n" << endl;
					break;
				}
				break;
			}
    		break;
    		
    	// ----------------------- MI MOBILES -----------------
    	case 2:
    		cout<<"------------------------------------------------------------------------------" << endl;
    		cout<<"\t\t\tCLICK <1> TO SEARCH MOBILES by PRICE"<<endl;
    		cout<<"\t\t\tCLICK <2> TO SEARCH MOBILES by STORAGE"<<endl;
    		cout<<"\t\t\tCLICK <3> TO SEARCH MOBILES by MODEL"<<endl;
    		cout<<"------------------------------------------------------------------------------" << endl;
    		cout<<"\t\t\t\tCHOICE :";cin >> hantai;
    		switch (hantai)
			{
			case 1:
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\tCLICK <1> TO SEARCH MOBILES Under 10000/-"<<endl;
				cout<<"\t\tCLICK <2> TO SEARCH MOBILES Btwn PRICE 10000/- to 20000/-"<<endl;
				cout<<"\t\tCLICK <3> TO SEARCH MOBILES Btwn PRICE 20000/- to 30000/-"<<endl;
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\t\tCHOICE :";cin >> anime;
				
				switch (anime)
				{
				case 1:
					cout<<"ONLY 1 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
					cout << "Model: " << s111.getModel() << endl;
            		cout << "Price: " << s111.getPrice() << endl;
            		cout << "Storage: " << s111.getStorage() << endl;
            		cout << "=========================" << endl;
					break;
					
				case 2:
					cout<<"ONLY 2 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
            		cout << "MOBILE 1\n" << endl;
            		cout << "Model: " << s711.getModel() << endl;
            		cout << "Price: " << s711.getPrice() << endl;
            		cout << "=========================\n" << endl;
            		
            		cout << "=========================" << endl;
            		cout << "MOBILE 2\n" << endl;
            		cout << "Model: " << s811.getModel() << endl;
            		cout << "Price: " << s811.getPrice() << endl;
            		cout << "=========================\n" << endl;
					break;
					
				case 3: 
					cout<<"ONLY 3 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
        			cout << "MOBILE 1\n" << endl;
           			cout << "Model: " << s211.getModel() << endl;
            		cout << "Price: " << s211.getPrice() << endl;
            		cout << "=========================\n" << endl;
            		
            		cout << "=========================" << endl;
            		cout << "MOBILE 2\n" << endl;
            		cout << "Model: " << s611.getModel() << endl;
            		cout << "Price: " << s611.getPrice() << endl;
            		cout << "=========================\n" << endl;
            
            		cout << "=========================" << endl;
            		cout << "MOBILE 3\n" << endl;
            		cout << "Model: " << s511.getModel() << endl;
            		cout << "Price: " << s511.getPrice() << endl;
            		cout << "=========================\n" << endl;
            		break;
				}   			
				break;
				
			case 2:
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\tCLICK <1> TO SEARCH MOBILES WHICH HAS 64 GB STORAGE"<<endl;
				cout<<"\t\t\tCLICK <2> TO SEARCH MOBILES WHICH HAS 128 GB STORAGE"<<endl;
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\t\tCHOICE :";cin >> naruto;
				
				switch (naruto)
				{
					case 1:
						cout<<"ONLY 2 PIECE AVAILABLE RIGHT NOW"<<endl;
						cout << "=========================" << endl;
        				cout << "MOBILE 1\n" << endl;
            			cout << "Model: " << s311.getModel() << endl;
            			cout << "Price: " << s311.getPrice() << endl;
            			cout << "Storage: " << s311.getStorage() << endl;
            			cout << "=========================\n" << endl;
            
            			cout << "=========================" << endl;
            			cout << "MOBILE 2\n" << endl;
            			cout << "Model: " << s911.getModel() << endl;
            			cout << "Price: " << s911.getPrice() << endl;
            			cout << "Storage: " << s911.getStorage() << endl;
            			cout << "=========================\n" << endl;
						break;
							
					case 2:
						cout<<"ONLY 3 PIECE AVAILABLE RIGHT NOW"<<endl;
						cout << "=========================" << endl;
            			cout << "MOBILE 1\n" << endl;
            			cout << "Model: " << s101.getModel() << endl;
            			cout << "Price: " << s101.getPrice() << endl;
            			cout << "Storage: " << s101.getStorage() << endl;
            			cout << "=========================\n" << endl;
            
            			cout << "=========================" << endl;
            			cout << "MOBILE 2\n" << endl;
            			cout << "Model: " << s111.getModel() << endl;
            			cout << "Price: " << s111.getPrice() << endl;
            			cout << "Storage: " << s111.getStorage() << endl;
            			cout << "=========================\n" << endl;
            
            			cout << "=========================" << endl;
            			cout << "MOBILE 3\n" << endl;
            			cout << "Model: " << s121.getModel() << endl;
            			cout << "Price: " << s121.getPrice() << endl;
            			cout << "Storage: " << s121.getStorage() << endl;
           				cout << "=========================\n" << endl;
						break;
				}
				break;
				
			case 3:
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\tCLICK <1> TO SEARCH MOBILES BY LATEST MODEL"<<endl;
				cout<<"\t\t\tCLICK <2> TO SEARCH MOBILES BY AVERAGE MODEL"<<endl;
				cout<<"------------------------------------------------------------------------------" << endl;
				cout<<"\t\t\t\tCHOICE :";cin >> sasuke;
				
				switch (sasuke)
				{
				case 1:
					cout<<"ONLY 2 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
            		cout << "COPY MOBILE : 1\n" << endl;
            		cout << "Model: " << s311.getModel() << endl;
            		cout << "Price: " << s311.getPrice() << endl;
            		cout << "Storage: " << s311.getStorage() << endl;
            		cout << "=========================\n" << endl;
            
            		cout << "=========================" << endl;
            		cout << "COPY MOBILE : 2\n" << endl;
            		cout << "Model: " << s911.getModel() << endl;
            		cout << "Price: " << s911.getPrice() << endl;
            		cout << "Storage: " << s911.getStorage() << endl;
            		cout << "=========================\n" << endl;
					break;
					
				case 2:
					cout<<"ONLY 3 PIECE AVAILABLE RIGHT NOW"<<endl;
					cout << "=========================" << endl;
            		cout << "COPY MOBILE : 1\n" << endl;
            		cout << "Model: " << s101.getModel() << endl;
            		cout << "Price: " << s101.getPrice() << endl;
            		cout << "Storage: " << s101.getStorage() << endl;
            		cout << "=========================\n" << endl;
            
            		cout << "=========================" << endl;
            		cout << "COPY MOBILE : 2\n" << endl;
            		cout << "Model: " << s111.getModel() << endl;
            		cout << "Price: " << s111.getPrice() << endl;
            		cout << "Storage: " << s111.getStorage() << endl;
            		cout << "=========================\n" << endl;
            
            		cout << "=========================" << endl;
            		cout << "COPY MOBILE : 3\n" << endl;
            		cout << "Model: " << s121.getModel() << endl;
            		cout << "Price: " << s121.getPrice() << endl;
            		cout << "Storage: " << s121.getStorage() << endl;
            		cout << "=========================\n" << endl;
					break;
				}
				break;
			}
    		break;
            
        // ----------------------- ACCESSARIES -----------------
        case 3:
        	cout<<"------------------------------------------------------------------------------" << endl;
			cout<<"\t\t\tCHOOSE ACCESSARIES TO BUY: "<<endl;
    		cout<<"\t\t\tCLICK <1> TO SEE CHARGER"<<endl;
    		cout<<"\t\t\tCLICK <2> TO SEE CABLES"<<endl;
    		cout<<"\t\t\tCLICK <3> TO SEE MOUSE"<<endl;
			cout<<"------------------------------------------------------------------------------" << endl;
    		cout<<"\t\t\t\tCHOICE :";cin >> itachi;
    
    		switch (itachi)
			{
    			case 1:
    				cout<<"------------------------------------------------------------------------------" << endl;
    				cout<<"\t\t\tCLICK <1> TO SEE CHARGER by PRICE"<<endl;
    				cout<<"\t\t\tCLICK <2> TO SEE CHARGER by POWER(in watt)"<<endl;
    				cout<<"------------------------------------------------------------------------------" << endl;
    				cout<<"\t\t\t\tCHOICE :";cin >> tsunade;
    				switch (tsunade){
    					case 1:
    						fh = fopen("charger1.txt", "r");
	
							if (fh != NULL)
							{
								char c;
								while ((c = fgetc(fh)) != EOF)
								putchar(c);
								fclose(fh);
							}
							else { cout<<"FILE IS EMPTY"<<endl; }
						break;
						
						case 2:
							fh = fopen("charger2.txt", "r");
	
							if (fh != NULL)
							{
								char c;
								while ((c = fgetc(fh)) != EOF)
								putchar(c);
		
								fclose(fh);
							}
							else { cout<<"FILE IS EMPTY"<<endl; }
						break;					
					}
    			break;
    			
    			case 2:
    				cout<<"------------------------------------------------------------------------------" << endl;
    				cout<<"\t\t\tCLICK <1> TO SEARCH TYPE-C CABLES"<<endl;
    				cout<<"\t\t\tCLICK <2> TO SEARCH TYPE-B CABLES"<<endl;
    				cout<<"------------------------------------------------------------------------------" << endl;
    				cout<<"\t\t\t\tCHOICE :";cin >> jiraiya;
    				switch (jiraiya)
					{
    					case 1:
    						fh = fopen("cables1.txt", "r");
	
							if (fh != NULL)
							{
								char c;
								while ((c = fgetc(fh)) != EOF)
								putchar(c);
		
								fclose(fh);
							}
							else { cout<<"FILE IS EMPTY"<<endl; }
						break;
						
						case 2:
            				fh = fopen("cables2.txt", "r");
	
							if (fh != NULL)
							{
								char c;
								while ((c = fgetc(fh)) != EOF)
								putchar(c);
		
								fclose(fh);
							}
							else { cout<<"FILE IS EMPTY"<<endl; }
						break;					
					}
    			break;
    			
    			case 3:
    				cout<<"------------------------------------------------------------------------------" << endl;
    				cout<<"\t\t\tCLICK <1> TO SEARCH MOUSE by PRICE"<<endl;
    				cout<<"\t\t\tCLICK <2> TO SEARCH MOUSE by PERFORMANCE"<<endl;
    				cout<<"------------------------------------------------------------------------------" << endl;
    				cout<<"\t\t\t\tCHOICE :";cin >> orochimaru;
    				switch (orochimaru)
					{
    					case 1:
							cout << "========================================================================\n" << endl;
    						cout << "======= LOW PRICE =======\t\t\t======= HIGH PRICE =======\n" << endl;
    						
							cout << "======= MOUSE : 1 =======\t\t\t======= MOUSE : 1 =======" << endl;
            				cout << "COMPANY: PORTRONICS\t\t\t\tCOMPANY: PORTRONICS"<< endl;
            				cout << "MODEL: G30\t\t\t\t\tMODEL: G301"<< endl;
            				cout << "Price: 299/-\t\t\t\t\tPrice: 1299/-" << endl;
            				cout << "========================================================================\n" << endl;
            				
            				cout << "======= MOUSE : 2 =======\t\t\t======= MOUSE : 2 =======" << endl;
            				cout << "COMPANY: LOGITECH\t\t\t\tCOMPANY: LOGITECH"<< endl;
            				cout << "MODEL: G103\t\t\t\t\tMODEL: G39"<< endl;
            				cout << "Price: 599/-\t\t\t\t\tPrice: 2399/-" << endl;
            				cout << "========================================================================\n" << endl;
							           				
            				cout << "======= MOUSE : 3 =======\t\t\t======= MOUSE : 3 =======" << endl;
            				cout << "COMPANY: LOGITECH\t\t\t\tCOMPANY: LOGITECH"<< endl;
            				cout << "MODEL: G304\t\t\t\t\tMODEL: G11"<< endl;
            				cout << "Price: 699/-\t\t\t\t\tPrice: 3399/-" << endl;
							cout << "========================================================================\n" << endl;
							           				
            				cout << "======= MOUSE : 4 =======\t\t\t======= MOUSE : 4 =======" << endl;
            				cout << "COMPANY: RAZER\t\t\t\t\tCOMPANY: RAZER"<< endl;
            				cout << "MODEL: V3\t\t\t\t\tMODEL: G12"<< endl;
            				cout << "Price: 799/-\t\t\t\t\tPrice: 3799/-" << endl;
            				cout << "========================================================================\n" << endl;
						break;
						
						case 2:
            				fh = fopen("m2.txt", "r");
	
							if (fh != NULL)
							{
								char c;
								while ((c = fgetc(fh)) != EOF)
								putchar(c);
		
								fclose(fh);
							}
							else { cout<<"FILE IS EMPTY"<<endl; }
						break;					
					}
    			break;
			}
            break;
            
        // ----------------------- DELIVERY / ORDER DETAILS -----------------
	    case 4:
        	obj.info();
			obj.info(1001,"GANPAT","SAMSUNG","MANI-NAGAR");
			obj.info(1002,"PALASH","AHMEDABAD");
			obj.info(1003,"RAHUL","BHAVNAGAR",00000000000);
        	break;
        	
        case 5:
        	cout<<"\t\t\t------ WHAT DO YOU WANT TO DO -----"<<endl;        	
        	cout<<"------------------------------------------------------------------------------" << endl;
			cout<<"\t\t\tCLICK <1> TO ORDER ONLINE MOBILE"<<endl;
    		cout<<"\t\t\tCLICK <2> TO SEE YOUR ORDERS"<<endl;
    		cout<<"\t\t\tCLICK <3> TO DELETE ORDERS"<<endl;
    		cout<<"------------------------------------------------------------------------------" << endl;
        	cout<<"\t\t\t\tCHOICE :";cin >> boruto;
    		switch (boruto)
			{
        		case 1:
        			cout<<"HOW MANY ORDERS YOU WANT TO MAKE :"<<endl;
        			cin>>j;
        			
        			for(i=0;i<j;i++)
					{
            			insert();
					}
            		break;
        		case 2:
        			cout<<"HOW MANY ORDERS YOU WANT TO SEE :"<<endl;
        			cin>>j;
        			for(i=0;i<j;i++)
					{
            			disp();
            		}
            		break;
            	case 3:
            		deletefile();
            		break;
    		}
       		break;
       		
    	case 6:
    		// Virtual function, binded at runtime
    		bptr->print();
  
    		// Non-virtual function, binded at compile time
    		bptr->show();
    	break;
    	
    	case 7:
    		cout<<"\t\t\t------ WANT TO GIVE FEEDBACK -----"<<endl;        	
        	cout<<"------------------------------------------------------------------------------" << endl;
			cout<<"\t\t\tCLICK <1> TO GIVE FEEDBACK"<<endl;
    		cout<<"\t\t\tCLICK <2> IF NOT TO GIVE FEEDBACK"<<endl;
    		cout<<"------------------------------------------------------------------------------" << endl;
        	cout<<"\t\t\t\tCHOICE :";cin >> sizuka;
    		switch (sizuka)
			{
				case 1:
					insert1();
					break;
					
				case 2:
					cout<<"THANKS FOR VISITING OUR STORE"<<endl;
					break;
					
				default:
					cout<<"INAPPROPRIATE CHOICE"<<endl;
					break;
			}
    	break;
	}
	return 0;
}
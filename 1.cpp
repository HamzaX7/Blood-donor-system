#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<assert.h>
using namespace std;
struct type{
	string name;
	string BloodGroup;
	string phone;
	int age;
	int count;
	string date;
};
int a=0;
void add( type array[100])
{
	int n;
	cout<<"\nHow Many Donors Do You Want To Add?: ";
	cin>>n;
	int donors=0;
	ofstream file;
	file.open("bds_donor_data.txt",ios::app);
	for(int i=0;i<n;i++)
	{
		a++;
		donors++;
		cout<<"\n\nDonor "<<donors;
		cin.ignore();
		cout<<"\nEnter The Name: "<<endl;
		getline(cin,array[i].name);
		file<<array[i].name<<endl;
		cout<<"\nEnter Blood Group: "<<endl;
		getline(cin,array[i].BloodGroup);
		file<<array[i].BloodGroup<<endl;
		cout<<"\nEnter Phone Number: "<<endl;
		getline(cin,array[i].phone);
		file<<array[i].phone<<endl;
		cout<<"\nEnter Age: "<<endl;
		cin>>array[i].age;
		file<<array[i].age<<endl;
		cout<<"\nEnter Donation Count: "<<endl;
		cin>>array[i].count;
		file<<array[i].count<<endl;
		cin.ignore();
		cout<<"\nEnter Date Of Last Donation: "<<endl;
		getline(cin,array[i].date);
		file<<array[i].date<<endl;
	}
	file.close();
}
void SearchName(type array2[100])
{
	int donors=0,a=0;
	string SearchName;
	cin.ignore();
	cout<<"\nEnter The Name You Want To Search Against: ";
	getline(cin,SearchName);
	ifstream file;
	file.open("bds_donor_data.txt");
	int i=0;
	while(!file.eof())
	{
		file>>array2[i].name;
		file>>array2[i].BloodGroup;
		file>>array2[i].phone;
		file>>array2[i].age;
		file>>array2[i].count;
		file>>array2[i].date;
		a++;
		i++;
	}
	for(int i=0;i<a;i++)
	{
		if(SearchName==array2[i].name)
		{
			donors++;
			cout<<"\nDonor Found!\n";
			cout<<array2[i].name<<endl;
			cout<<array2[i].BloodGroup<<endl;
			cout<<array2[i].phone<<endl;
			cout<<array2[i].age<<endl;
			cout<<array2[i].count<<endl;
			cout<<array2[i].date<<endl;
	    }
	}
	if(donors==0)
	cout<<"\nNo Donors Found!";
	file.close();
}
struct type array3[100];
void SearchBloodGroup(type array3[100])
{
	int donors=0,b=0;
	string BloodGroup;
	cin.ignore();
	cout<<"\nEnter The Blood Group You Want To Search Against: ";
	getline(cin,BloodGroup);
	ifstream file;
	file.open("bds_donor_data.txt");
	int i=0;
	while(!file.eof())
	{
		file>>array3[i].name;
		file>>array3[i].BloodGroup;
		file>>array3[i].phone;
		file>>array3[i].age;
		file>>array3[i].count;
		file>>array3[i].date;
		b++;
		i++;
	}
	for(int i=0;i<b;i++)
	{
		if(BloodGroup==array3[i].BloodGroup)
		{
			donors++;
			cout<<"\nDonor Found!\n";
			cout<<array3[i].name<<endl;
			cout<<array3[i].BloodGroup<<endl;
			cout<<array3[i].phone<<endl;
			cout<<array3[i].age<<endl;
			cout<<array3[i].count<<endl;
			cout<<array3[i].date<<endl;
	    }
	}
	if(donors==0)
	cout<<"\nNo Donors Found!";
	file.close();
}
void Remove(type array4[100])
{
	int donors=0,c=0;
	string SearchName2;
	cin.ignore();
	cout<<"\nEnter The Name Of A Donor You Want To Delete A Record Of: ";
	getline(cin,SearchName2);
	ifstream file;
	file.open("bds_donor_data.txt");
	int i=0;
	while(!file.eof())
	{
		file>>array4[i].name;
		file>>array4[i].BloodGroup;
		file>>array4[i].phone;
		file>>array4[i].age;
		file>>array4[i].count;
		file>>array4[i].date;
		c++;
		i++;
	}
	int a2;
	
	for (int i=0;i<c;i++)
	{
	
	
	  if(SearchName2==array4[i].name)
		{
			a2 = i;
			donors++;
			cout<<"\nDonor Found!\n";
			cout<<array4[i].name<<endl;
			cout<<array4[i].BloodGroup<<endl;
			cout<<array4[i].phone<<endl;
			cout<<array4[i].age<<endl;
			cout<<array4[i].count<<endl;
			cout<<array4[i].date<<endl;
			cout<<"\nThis Record Is Deleled!";
			c--;
	    } 
	
		
	

	}
    
    ofstream temp;
	temp.open("Test.txt");
    
    for (int i=0;i<c;i++)
	{
		
		
	if(i!=a2)
	{
		
		
		temp<<array4[i].name<<endl;
		temp<<array4[i].BloodGroup<<endl;
		temp<<array4[i].phone<<endl;
		temp<<array4[i].age<<endl;
		temp<<array4[i].count<<endl;
		temp<<array4[i].date<<endl;
		
    }
    
    }
    if(donors==0)
		cout<<"\nNo Record Found!";
    file.close();
    temp.close();
    remove("bds_donor_data.txt");
    rename("test.txt","bds_donor_data.txt");
    
    
}
void show(type array5[100])
{
	int donors=0,d=0;
	ifstream file;
	file.open("bds_donor_data.txt");
	int i=0;
	while(!file.eof())
	{
	file>>array5[i].name;
	file>>array5[i].BloodGroup;
	file>>array5[i].phone;
	file>>array5[i].age;
	file>>array5[i].count;
	file>>array5[i].date;
	d++;
	i++;
    }
    d--;
    for(int i=0;i<d;i++)
    {
    	
    	donors++;
    	cout<<"\n\nDonor "<<donors;
    	cout<<"\nName: "<<array5[i].name;
		cout<<"\nBlood Group: "<<array5[i].BloodGroup;
		cout<<"\nPhone Number: "<<array5[i].phone;
		cout<<"\nAge: "<<array5[i].age;
		cout<<"\nDonation Count: "<<array5[i].count;
		cout<<"\nDate Of Last Donation: "<<array5[i].date;
	}
	if(a==0)
	cout<<"\nNo Donors To Show!";
	file.close();
}
void update(type array6[100])
{
	int donors=0,e=0;
	string SearchName3;
	cin.ignore();
	cout<<"\nEnter The Name Of A Donor You Want To Update A Donation Record Of: ";
	getline(cin,SearchName3);
	ifstream file;
	file.open("bds_donor_data.txt");
	int i=0;
	while(!file.eof())
	{
		file>>array6[i].name;
		file>>array6[i].BloodGroup;
		file>>array6[i].phone;
		file>>array6[i].age;
		file>>array6[i].count;
		file>>array6[i].date;
		e++;
		i++;
	}
	ofstream temp;
	temp.open("Test.txt");
	for (int i=0;i<e;i++)
	{
	
	
	if(SearchName3!=array6[i].name)
	{
		temp<<array6[i].name<<endl;
		temp<<array6[i].BloodGroup<<endl;
		temp<<array6[i].phone<<endl;
		temp<<array6[i].age<<endl;
		temp<<array6[i].count<<endl;
		temp<<array6[i].date<<endl;
    }
    
    if(SearchName3==array6[i].name)
		{
			donors++;
			cout<<"\nDonor Found!\n";
			cout<<array6[i].name<<endl;
			cout<<array6[i].BloodGroup<<endl;
			cout<<array6[i].phone<<endl;
			cout<<array6[i].age<<endl;
			cout<<array6[i].count<<endl;
			cout<<array6[i].date<<endl;
			cout<<"\nEnter Name(If He Has Donated Blood Succeessfully): "<<array6[i].name;
			temp<<array6[i].name<<endl;
		    temp<<array6[i].BloodGroup<<endl;
			temp<<array6[i].phone<<endl;
			temp<<array6[i].age<<endl;
			array6[i].count++;
			temp<<array6[i].count<<endl;
			cin.ignore();
			cout<<"\nEnter updated Date Of Donation: "<<endl;
			getline(cin>>ws,array6[i].date);
			temp<<array6[i].date<<endl;
	    }
    }
    if(donors==0)
	cout<<"\nNo Record Found!";
    file.close();
    temp.close();
    remove("bds_donor_data.txt");
    rename("test.txt","bds_donor_data.txt");
}
void edit(type array7[100])
{
	int donors=0,f=0;
	string SearchName4;
	cin.ignore();
	cout<<"\nEnter The Name Of A Donor You Want To Update A Record Of: ";
	getline(cin,SearchName4);
	ifstream file;
	file.open("bds_donor_data.txt");
	int i=0;
	while(!file.eof())
	{
		file>>array7[i].name;
		file>>array7[i].BloodGroup;
		file>>array7[i].phone;
		file>>array7[i].age;
		file>>array7[i].count;
		file>>array7[i].date;
		f++;
		i++;
	}
	ofstream temp;
	temp.open("Test.txt");
	for (int i=0;i<f;i++)
	{
	
	if(SearchName4!=array7[i].name)
	{
		temp<<array7[i].name<<endl;
		temp<<array7[i].BloodGroup<<endl;
		temp<<array7[i].phone<<endl;
		temp<<array7[i].age<<endl;
		temp<<array7[i].count<<endl;
		temp<<array7[i].date<<endl;
    }
    
    if(SearchName4==array7[i].name)
		{
			donors++;
			cout<<"\nDonor Found!\n";
			cout<<array7[i].name<<endl;
			cout<<array7[i].BloodGroup<<endl;
			cout<<array7[i].phone<<endl;
			cout<<array7[i].age<<endl;
			cout<<array7[i].count<<endl;
			cout<<array7[i].date<<endl;
			cin.ignore();
			cout<<"\nEnter Updated Name: ";
			getline(cin,array7[i].name);
			cout<<"\nEnter Updated Blood Group: ";
			getline(cin,array7[i].BloodGroup);
			cin.ignore();
			cout<<"\nEnter Updated Phone Number: ";
			getline(cin,array7[i].phone);
			cout<<"\nEnter Updated Age: ";
			cin>>array7[i].age;
			cout<<"\nEnter Donnation Counts: ";
			cin>>array7[i].count;
			cin.ignore();
			cout<<"\nEnter Date Of Last Donation: ";
			getline(cin,array7[i].date);
			temp<<array7[i].name<<endl;
		    temp<<array7[i].BloodGroup<<endl;
			temp<<array7[i].phone<<endl;
			temp<<array7[i].age<<endl;
			temp<<array7[i].count<<endl;
			temp<<array7[i].date<<endl;
	    }
    }
    if(donors==0)
	cout<<"\nNo Record Found!";
    file.close();
    temp.close();
    remove("bds_donor_data.txt");
    rename("test.txt","bds_donor_data.txt");
}
	int main()
	{
		int option=0;
		struct type array[100],array2[100],array3[100],array4[100],array5[100],array6[100],array7[100];
		repeat:
		cout<<"\n\nPlease Select From The Following Options!";
		cout<<"\nPress 1 To Add Donor's Record: ";
		cout<<"\nPress 2 To Search The Donor's Record Based On Name: ";
		cout<<"\nPress 3 To Search The List Of Donor's Based On Blood Group: ";
		cout<<"\nPress 4 To Remove Donor's Record: ";
		cout<<"\nPress 5 To Update Donor's Record After Successful Donation: ";
		cout<<"\nPress 6 To View Donors List: ";
		cout<<"\nPress 7 To Edit A Record: ";
		cout<<"\nPress 8 To Exit: ";
		cin>>option;
		switch (option)
		{
		case 1:
		{
	    	add(array);
			break;
		}
		case 2:
		{
			SearchName(array2);
			break;
		}
		case 3:
			{
				SearchBloodGroup(array3);
				break;
			}
			case 4:
				{
					Remove(array4);
					break;
				}
				case 5:
					{
						update(array6);
						break;
					}
					case 6:
						{
							show(array5);
							break;
						}
						case 7:
							{
								edit(array7);
								break;
							}
							case 8:
								{
									goto end;
								}
	    }
	    goto repeat;
	    end:
	    	cout<<"\nGoodBye!";
		 
			
	}

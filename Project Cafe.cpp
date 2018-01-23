//This program includes if-else, switch, loop(for,while,do-while,) ,function , array, pointer, data structure, I/O file stream
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include <windows.h>
#include<cstdlib>
#include<ctime>
#define tax 0.06;  //Including 6% GST
using namespace std;

void introduction();

int main()
{
	const int NUMS=10;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	introduction();
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN |  FOREGROUND_INTENSITY);

	string userName;
    int contactNumber[NUMS]={0},item,choice,quantity,count=0,count1=0,count2=0,count3=0,count4=0,count5=0,total_quantity=0;
	double price1,price2,price3,price4,price5,total=0.0,total1=0.0,total2=0.0,total3=0.0,total4=0.0,total5=0.0,tax_rate,total_price,GST;
    char userAddress[50],purchase;

	int *CN= &contactNumber[0];
    	cout<<"\t_______________________________________________________________\n\n";
		cout<<"\t WELCOME TO ~ 24/7 FOOD CAFE's ORDERING SYSTEM ~              "<<endl;
		cout<<"\t There are Hot drinks, Cold drinks, Baguettes, Burgers and    "<<endl;
		cout<<"\t Snacks in our cafe. 					                       "<<endl;
		cout<<"\t Our food is cheap and nice.                                  "<<endl;
		cout<<"\t Once you ordered, we'll sent the order to you.                "<<endl;
		cout<<"\n\t_______________________________________________________________\n"<<endl;

	    cout<<"Please Enter Your Name (# Nick Name only): ";
	    cin>>userName;
	    cout<<endl;
		
	    cout<<"Please Enter Your Contact Number only 10 digits(eg. 1 2 3 etc.): (+6)";
	    for(int a=0;a<NUMS;a++)
	    cin>>CN[a];
	    cout<<endl;

	    cout<<"Please Enter Your Address That You Wish To Deliver(*without space): ";
	    cin>>userAddress;
	    cout<<endl;
		
	    cout<<"Now Choose Your Foods OR Drinks That You Want To Order\n";


		do{
                main_menu:
                	
				cout<<"\n\n\t\t\t\tMAIN MENU\n\n";
				cout<<"\nSELECT TYPE OF FOOD:"<<endl<<endl;
				cout<<"\t\t ______________________________________\n\n";
				cout<<"\t\t Option   NAME                    "<<endl;
				cout<<"\t\t --------------------------------------\n";
				cout<<"\t\t   '1'    Hot drinks                   "<<endl;
				cout<<"\t\t   '2'    Cold drinks                  "<<endl;
				cout<<"\t\t   '3'    Baguettes                    "<<endl;
				cout<<"\t\t   '4'    Burgers                      "<<endl;
				cout<<"\t\t   '5'    Snacks                       "<<endl;
				cout<<"\n\t\t   '0'    Exit and Show final price    "<<endl;
				cout<<"\n\t\t ______________________________________"<<endl;
					
				cout<<"\nYour choice : ";
				cin>>item;

					if(item==1)
					{
					    hot_drinks:
						cout<<"\t\t\t\t HOT DRINKS\n";
						
						cout<<"\nSELECT TYPE OF HOT DRINKS:"<<endl<<endl;
						cout<<"\t\t _______________________________________\n";
						cout<<"\t\t Option   NAME                   Price "<<endl;
						cout<<"\t\t ---------------------------------------\n";
						cout<<"\t\t   '1'    Tea                    RM 1.10    "<<endl;
						cout<<"\t\t   '2'    Fruit Tea              RM 1.10    "<<endl;
						cout<<"\t\t   '3'    Espresso               RM 1.50    "<<endl;
						cout<<"\t\t   '4'    Americano              RM 1.60    "<<endl;
						cout<<"\t\t   '5'    Latte                  RM 1.80    "<<endl;
						cout<<"\t\t   '6'    Caramel Latte          RM 2.00    "<<endl;
						cout<<"\t\t   '7'    Vanilla Latte          RM 2.00    "<<endl;
						cout<<"\t\t   '8'    Cappuccino             RM 1.90    "<<endl;
						cout<<"\t\t   '9'    Mocha                  RM 2.00    "<<endl;
						cout<<"\t\t   '10'   Hot Chocolate          RM 2.00    "<<endl;
						cout<<"\t\t   '11'   Deluxe Hot Chocolate   RM 2.50    "<<endl<<endl;
						cout<<"\t\t   '0'    Go To Main Menu                   "<<endl;
						cout<<"\t\t _______________________________________"<<endl;
						cout<<"\nYour choice : ";
						cin>>choice;
						
						while(choice!=0)
						{
				    		switch(choice)
				    		{
					    		case 1:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=1.10*quantity;break;

								case 2:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=1.10*quantity;break;

								case 3:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=1.50*quantity;break;

								case 4:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=1.60*quantity;break;

								case 5:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=1.80*quantity;break;

								case 6:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=2.00*quantity;break;

								case 7:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=2.00*quantity;break;

								case 8:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=1.90*quantity;break;

								case 9:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=2.00*quantity;break;

								case 10:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=2.20*quantity;break;

								case 11:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price1=2.50*quantity;break;

								default: cout<<"Please choose a valid item from our list\n";break;
							}
							count1=count1+quantity;
							total1=total1+price1;
							
							cout<<"\nDo you want to continue purchasing (y/n)? ";
							cin>>purchase;
							cout<<endl;

							if (purchase == 'y' || purchase=='Y')
							{
								goto hot_drinks;
							}
                        	else if(purchase == 'n' || purchase== 'N')
                        	{
                            	goto main_menu;
                        	}
                        	choice++;
						}
							cout<<"\nYou have "<<count1<<" items of hot drinks "
								<<"& the price is: RM "<<setprecision(2)<<fixed<<total1;
				    }

				 	else if(item==2)
				 	{  
						cold_drinks:
							
						cout<<"\t\t\t\t COLD DRINKS\n";

						cout<<"\nSELECT TYPE OF COLD DRINKS:"<<endl<<endl;
						cout<<"\t\t _______________________________________\n";
						cout<<"\t\t Option   NAME                   Price "<<endl;
						cout<<"\t\t ---------------------------------------\n";
						cout<<"\t\t   '1'    Cans                   RM 0.75     "<<endl;
						cout<<"\t\t   '2'    Fresh Orange Juice     RM 1.90     "<<endl<<endl;
						cout<<"\t\t   '0'    Go To Main Menu                    "<<endl;
						cout<<"\t\t _______________________________________"<<endl;
						cout<<"\nYour choice : ";
						cin>>choice;
						
						while(choice!=0)
						{
							switch(choice)
				    		{
					    		case 1:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price2=0.75*quantity;break;

								case 2:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price2=1.90*quantity;break;

								default: cout<<"Please choose a valid item from our list\n";break;
							}
							count2=count2+quantity;
							total2=total2+price2;
							
							cout<<"\nDo you want to continue purchasing (y/n)? ";
							cin>>purchase;
							cout<<endl;

							if (purchase == 'y' || purchase== 'Y')
							{
								goto cold_drinks;
							}
                        	else if(purchase == 'n' || purchase== 'N')
                        	{
                            	goto main_menu;
                        	}
                        	choice++;
						}
							cout<<"\nYou have "<<count2<<" items of cold drinks "
								<<"& the price is: RM "<<setprecision(2)<<fixed<<total2;
				     }

				 	else if(item==3)
				 	{   
					 	baguettes:
					 		
						cout<<"\t\t\t\t BAGUETTES\n";
						
						cout<<"\nSELECT TYPE OF BAGUETTES:"<<endl<<endl;
						cout<<"\t\t _______________________________________\n";
						cout<<"\t\t Option   NAME                   Price "<<endl;
						cout<<"\t\t ---------------------------------------\n";
						cout<<"\t\t   '1'    Tuna                   RM 3.50     "<<endl;
						cout<<"\t\t   '2'    Ham & Cheese           RM 3.00     "<<endl;
						cout<<"\t\t   '3'    Chicken                RM 3.00     "<<endl;
						cout<<"\t\t   '4'    BLT                    RM 3.00     "<<endl<<endl;
						cout<<"\t\t   '0'    Go To Main Menu                    "<<endl;
						cout<<"\t\t _______________________________________"<<endl;
						cout<<"\nYour choice : ";
						cin>>choice;

						while(choice!=0)
						{
							switch(choice)
				    		{
					    		case 1:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price3=3.50*quantity;break;

								case 2:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price3=3.00*quantity;break;

								case 3:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price3=3.00*quantity;break;

								case 4:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price3=3.00*quantity;break;

								default: cout<<"Please choose a valid item from our list\n";break;
							}
							count3=count3+quantity;
							total3=total3+price3;
								
							cout<<"\nDo you want to continue purchasing (y/n)? ";
							cin>>purchase;
							cout<<endl;

							if (purchase == 'y' || purchase== 'Y')
							{
								goto baguettes;
							}
                        	else if(purchase == 'n' || purchase== 'N')
                        	{
                            	goto main_menu;
                        	}
							choice++;	
						}
							cout<<"\nYou have "<<count3<<" items of baguettes "
								<<"& the price is: RM "<<setprecision(2)<<fixed<<total3;
				     }

					else if(item==4)
					{   
						burgers:
							
						cout<<"\t\t\t\t BURGERS\n";

						cout<<"\nSELECT TYPE OF BURGERS:"<<endl<<endl;
						cout<<"\t\t _______________________________________\n";
						cout<<"\t\t Option   NAME                   Price "<<endl;
						cout<<"\t\t ---------------------------------------\n";
						cout<<"\t\t   '1'    Basecamp Burger        RM 4.50    "<<endl;
						cout<<"\t\t   '2'    Burger                 RM 2.75    "<<endl;
						cout<<"\t\t   '3'    Cheese Burger          RM 3.00    "<<endl;
						cout<<"\t\t   '4'    Chicken Burger         RM 3.00    "<<endl;
						cout<<"\t\t   '5'    Chips                  RM 1.50    "<<endl;
						cout<<"\t\t   '6'    Cheesy chips           RM 1.75    "<<endl<<endl;
						cout<<"\t\t   '0'    Go To Main Menu                   "<<endl;
						cout<<"\t\t _______________________________________"<<endl;
						cout<<"\nYour choice : ";
						cin>>choice;
						
						while(choice!=0)
						{
							switch(choice)
				    		{
					    		case 1:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price4=4.50*quantity;break;

								case 2:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price4=2.75*quantity;break;

								case 3:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price4=3.00*quantity;break;

								case 4:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price4=3.00*quantity;break;

								case 5:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price4=1.50*quantity;break;

								case 6:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price4=1.75*quantity;break;

								default: cout<<"Please choose a valid item from our list\n";break;
							}
							count4=count4+quantity;
							total4=total4+price4;
							
							cout<<"\nDo you want to continue purchasing (y/n)? ";
							cin>>purchase;
							cout<<endl;

							if (purchase == 'y' || purchase== 'Y')
							{
								goto burgers;
							}
                        	else if(purchase == 'n' || purchase== 'N')
                        	{
                            	goto main_menu;
                        	}
                        	choice++;
						}
				    		cout<<"\nYou have "<<count4<<" items of burgers "
								<<"& the price is: RM "<<setprecision(2)<<fixed<<total4;
				    }

					else if(item==5)
					{
						snacks:
							
						cout<<"\t\t\t\t SNACKS\n";

						cout<<"\nSELECT TYPE OF SNACKS:"<<endl<<endl;
				    	cout<<"\t\t _______________________________________\n";
				    	cout<<"\t\t Option   NAME                   Price "<<endl;
				    	cout<<"\t\t ---------------------------------------\n";
						cout<<"\t\t   '1'    Cake                   RM 1.60     "<<endl;
					   	cout<<"\t\t   '2'    Flanjark               RM 0.70     "<<endl;
					   	cout<<"\t\t   '3'    Crisps                 RM 0.70     "<<endl;
					   	cout<<"\t\t   '4'    Chocolate              RM 0.70     "<<endl<<endl;
					   	cout<<"\t\t   '0'    Go To Main Menu                    "<<endl;
					  	cout<<"\t\t _______________________________________"<<endl;
				    	cout<<"\nYour choice : ";
						cin>>choice;
						
						while(choice!=0)
						{
							switch(choice)
					    	{
						    	case 1:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price5=1.60*quantity;break;

								case 2:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price5=0.70*quantity;break;

								case 3:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price5=0.70*quantity;break;

								case 4:
								cout<<"How many quantity you want: ";
								cin>>quantity;
								cout<<endl;
								price5=0.70*quantity;break;

								default: cout<<"Please choose a valid item from our list\n";break;
							}
							count5=count5+quantity;
							total5=total5+price5;
								
							cout<<"\nDo you want to continue purchasing (y/n)? ";
							cin>>purchase;
							cout<<endl;

							if (purchase == 'y' || purchase== 'Y')
							{
								goto snacks;
							}
                        	else if(purchase == 'n' || purchase== 'N')
                        	{
                            	goto main_menu;
                        	}
                        	choice++;
						}
				    		cout<<"\nYou have "<<count5<<" items of snacks "
								<<"& the price is: RM "<<setprecision(2)<<fixed<<total5;
				    }
				    else if(item==0)
				    break;
				    else
				    cout<<"\nInvalid option that you enter ?? Please choose a valid item\n";
	    
		}while(item!=0);
		
		time_t currentTime;
  		struct tm *localTime;

	  	time(&currentTime);                   // Get the current time
	  	localTime = localtime(&currentTime);  // Convert the current time to the local time
	
	  	int Day    = localTime->tm_mday;
	  	int Month  = localTime->tm_mon + 1;
	  	int Year   = localTime->tm_year + 1900;
	  	int Hour   = localTime->tm_hour;
	  	int Min    = localTime->tm_min;
	  	int Sec    = localTime->tm_sec;
		
		
		cout<<"\n\t\t\tCustomer Reciept\n\n"
				<<"\t\t\t24/7 FOOD CAFE's"<<endl
					<<"\t\t\tLot No-241 , Level-2"<<endl
						<<"\t\t\tSuria KLCC,50088,"<<endl
							<<"\t\t\tKuala Lumpur.\n"<<endl;
		srand(time(NULL));
		int customer_no=rand()%1000000+1;
		cout<<"\t\t\t\t\t\t\tReciept NO: #"<<customer_no<<endl;
		
		cout<<"\t\t\t\t\t\t\tDate: "<<Day<<"/"<<Month<<"/"<<Year;
		cout<<"\n\t\t\t\t\t\t\tTime: "<<Hour<<":"<<Min<<":"<<Sec<<endl;
		
	cout<<"\n-------------------------------------------------------------------------"<<endl<<endl;
    cout<<"Your Name : "<<userName<<endl;
	cout<<"Your Contact Number : (+6)";
	for(int a=0;a<NUMS;a++)
	cout<<*(CN+a);
	
	cout<<endl;
	cout<<"Your Address That You Wish To Deliver : "<<userAddress<<endl<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;
    	
		count=count+count1+count2+count3+count4+count5;
    	total_quantity=total_quantity+count;
    	
    cout<<"\n> You Have Selected "<<total_quantity<<" Items"<<endl;
    	
		total=total+total1+total2+total3+total4+total5;
		tax_rate=total*tax;
		total_price=total+tax_rate;
		GST=total_price-total;
		
	cout<<"\n> The Total Price (Without GST) : RM "<<setprecision(2)<<fixed<<total<<endl;
	cout<<"\n> GST Analysis : RM "<<setprecision(2)<<fixed<<GST<<endl;
	cout<<"\n> After Including 6% GST, Total Price : RM "<<setprecision(2)<<fixed<<total_price<<endl;
	
	cout<<"\n"<<"________________________________________________________________________"<<endl;
    cout<<"\t\tTHANK YOU FOR USING OUR SYSTEM             "<<endl;
    cout<<"\t\tYOUR ORDER WILL BE DELIVERED SOON          "<<endl;
    cout<<"\t\t\tHAVE A NICE DAY!   "<<endl;
		
		
	{
	
		string filename="reciept.txt";
		ofstream outFile;
	
		outFile.open(filename.c_str());
	
		if(outFile.fail())
		{
			cout<<"The file was not opened"<<endl;
			exit(1);		
		}
		outFile<<fixed<<showpoint<<setprecision(2);
	
		outFile<<"\n\t\t\tCustomer Reciept\n\n"
					<<"\t\t\t24/7 FOOD CAFE's"<<endl
						<<"\t\t\tLot No-241 , Level-2"<<endl
							<<"\t\t\tSuria KLCC,50088,"<<endl
								<<"\t\t\tKuala Lumpur.\n"<<endl
									<<"\t\t\t\t\t\t\tReciept NO: #"<<customer_no<<endl
										<<"\n\t\t\t\t\t\t\tDate: "<<Day<<"/"<<Month<<"/"<<Year<<endl
											<<"\n\t\t\t\t\t\t\tTime: "<<Hour<<":"<<Min<<":"<<Sec<<endl
												<<"\n-------------------------------------------------------------------------"<<endl<<endl
													<<"Your Name : "<<userName<<endl<<endl
														<<"Your Contact Number : (+6)";
	for(int a=0;a<NUMS;a++)
	{
		outFile<<*(CN+a);
	}
	outFile<<endl<<"Your Address That You Wish To Deliver : "<<userAddress<<endl<<endl
				<<"-------------------------------------------------------------------------"<<endl
					<<"\n> You Have Selected Items :"<<total_quantity
						<<"\n> The Total Price (Without GST) : RM "<<setprecision(2)<<fixed<<total<<endl
							<<"\n> GST Analysis : RM "<<setprecision(2)<<fixed<<GST<<endl
								<<"\n> After Including 6% GST, Total Price : RM "<<setprecision(2)<<fixed<<total_price<<endl
	
									<<"\n"<<"________________________________________________________________________"<<endl
    									<<"\t\tTHANK YOU FOR USING OUR SYSTEM             "<<endl
    										<<"\t\tYOUR ORDER WILL BE DELIVERED SOON          "<<endl
    											<<"\t\t\tHAVE A NICE DAY!   "<<endl;
	
	
	outFile.close();
	cout<<endl<<"The file "<<filename<<" written."<<endl;
		
	}
		
    return 0;
}

void introduction()
{
	cout<<"\nGroup members    : MD. Shariful Islam [141****]" <<endl;
	cout<<"                 : MD. Azgar Hossain [141****]" <<endl;
	cout<<"                 : Maria Ali [142****]" <<endl;
	cout<<"                 : S.M.Raju [141****]" <<endl<<endl;
	cout<<"Course Name      : Elements of Programming"<<endl;
	cout<<"Instructor's Name: Dr. Amelia Ritahani Ismail"<<endl;
	cout<<"Course Code      : CSC 1100"<<endl;
	cout<<"Section      	 : 1"<<endl;
	cout<<"Project Name	 : Online Cafe 24/7  "<<endl<<endl;

	return;
}

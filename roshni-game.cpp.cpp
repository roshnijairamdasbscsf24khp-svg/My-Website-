#include<iostream>
#include <cstdlib>
#include <ctime>
#include<windows.h>
void fruits();
void vegetables();
void animals();
void countryname();
void cities();
void flowers();
void seasons();
void changeColor(int color) {
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);}
using namespace std;
int main()
{
 cout << "		        		Welcome to word guessing game " << std::endl;
   char play;
   int type;
   
   cout<<endl<<endl;
   cout<<"Do you want to play a game (y/n) ";
   cin>>play;
   if(play=='y'||play=='Y'){
   	start:
   		cout<<"1:fruits\n2:Animals\n3:Vegitable\n4:Country name\n5:Cities\n6:Flowers\n7:Seasons\nFrom the above list which type of game do you want to play:";
		cin>>type;
		switch(type){
			case 1:
			fruits();
			break;
			case 2:
			animals();
			break;
			case 3:
			vegetables();
			break;
			case 4:
			countryname();
			break;
			case 5:
			cities();
			break;
			case 6:
			flowers();
			break;
			case 7:
			seasons();
			break;
			default:
				cout<<"      Invalid list "<<endl;
			}
   }
   	   	char restart;
	
		cout<<"Do you want to see the menu again to play another game (y/n):";
	 	cin>>restart;
	 	 if(restart=='y' || restart=='Y'){
		 	system("cls");
		 	goto start;
		 
		}else{
			cout<<"=========================Thankyou for playing game========================= "<<endl<<endl<<endl;
		}
   
   system("PAUSE");
return 0;

}
void fruits(){
	start:
	   string a[5] = {"apple" , "mango" , "kiwi" , "grapes" , "orange" };
     srand(time(0));
	int ran = rand() % 5 ;
	int i , j;

	string word = a[ran];
	string ranword = a[ran];
	char letter;
		  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the text color to yellow, background color to blue, and make the text bold
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    // Change console window size
    SMALL_RECT rect = {0, 0, 80, 25};  // Set the size of the console window (80 columns x 25 rows)
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
   	    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"====================================================="<<endl;
	cout<<"You have "<<word.length()+3<<" chances to guess the "<<word.length()<<" letter word."<<"      ="<<endl;
	cout<<"==========================================================="<<endl;
	if(1==1){
		  changeColor(14);
	cout<<"Red text indicates the character in previous line is wrong"<<endl;//role
  changeColor(7);
}
	cout<<"==========================================================="<<endl;
	cout<<": Hint :           ="; 
	
    switch(ran)
    {
    	case 0:
    	cout<<endl<<"Red or Green with crunchy taste: "<<endl;
    	break;
    	
    	case 1:
    	cout<<endl<<"National fruit of pakistan:"<<endl;
    	break;
    	
    	case 2:
    	cout<<endl<<"Brown skin,Green inside with black seeds:"<<endl;
    	break;
    	
    	case 3:
    	cout<<endl<<"Small round can be green and purple:"<<endl;
    	break;
    	
    	case 4:
    	cout<<endl<<"Round with tangy taste:"<<endl;
    	break;
    	
    	default:
    	cout<<endl<<"Error in Hinting:"<<endl;
    	break;
	}
	
	for(i=1; i<=word.length()+3; i++)
	{	cout<<"chance: "<<i<<" Enter the letter of word: ";cin>>letter;
        for(j=0; j<word.length(); j++)
	      	{if(letter == word[j])
		        {
		        	changeColor(10);
			        cout<<letter<<" is present in the word at "<<j+1<<" position"<<endl;
			        word[j] = '1';
			        changeColor(7);
	break;
		        }
	        }
	    if(j==word.length())
	    {
	    	 changeColor(12);
	    	cout<<letter<<" isn't present in the word may be you already put in"<<endl;
	    changeColor(7);
	    
		}
		if(word == string(word.length(),'1'))
		{
			
			cout<<"========================================";
			changeColor(10);
			cout<<endl<<"=  Congratulation You win the game"<<"     ="<<endl;
			changeColor(7);
			cout<<"========================================"<<endl;
			changeColor(10);
		    break;
		}	
	}
		if(word != string(word.length(),'1'))
		{
				cout<<"========================================"<<endl;
			cout<<endl<<"Game over , better luck next time"<<"     ="<<endl;
				cout<<"========================================"<<endl;
				changeColor(12);
		}
			changeColor(7);
				
				cout<<"========================================"<<endl;
		cout<<"=            The word is "<<ranword<<"          ="<<endl;
		
		cout<<"========================================"<<endl;
	char restart;
	
		cout<<"if you want to restart the program please press (y/n):";
	 	cin>>restart;
	 	 if(restart=='y' || restart=='Y'){
		 	system("cls");
		 	goto start;
		 }
}
void animals(){
	start:
	   string a[5] = {"cat" , "dog" , "cow" , "horse" , "donkey" };
     srand(time(0));
	int ran = rand() % 5 ;
	int i , j;
	string word = a[ran];
	string ranword = a[ran];
	char letter;
		  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the text color to yellow, background color to blue, and make the text bold
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    // Change console window size
    SMALL_RECT rect = {0, 0, 80, 25};  // Set the size of the console window (80 columns x 25 rows)
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
   	    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"====================================================="<<endl;
	cout<<"You have "<<word.length()+3<<" chances to guess the "<<word.length()<<" letter word."<<"      ="<<endl;
	cout<<"==========================================================="<<endl;
	if(1==1){
		  changeColor(14);
	cout<<"Red text indicates the character in previous line is wrong"<<endl;//role
  changeColor(7);
}
	cout<<"==========================================================="<<endl;
	cout<<": Hint :           ="; 
	
    switch(ran)
    {
    	case 0:
    	cout<<endl<<"Always ready to eat rat: "<<endl;
    	break;
    	
    	case 1:
    	cout<<endl<<"Faithful pet:"<<endl;
    	break;
    	
    	case 2:
    	cout<<endl<<"Farm animal that gives milk:"<<endl;
    	break;
    	
    	case 3:
    	cout<<endl<<"Animal that is uesd for racing and riding:"<<endl;
    	break;
    	
    	case 4:
    	cout<<endl<<"A load carrying animals:"<<endl;
    	break;
    	
    	default:
    	cout<<endl<<"Error in Hinting:"<<endl;
    	break;
	}
	
	for(i=1; i<=word.length()+3; i++)
	{	cout<<"chance: "<<i<<" Enter the letter of word: ";cin>>letter;
        for(j=0; j<word.length(); j++)
	      	{if(letter == word[j])
		        {
		        	changeColor(10);
			        cout<<letter<<" is present in the word at "<<j+1<<" position"<<endl;
			        word[j] = '1';
			        changeColor(7);
	break;
		        }
	        }
	    if(j==word.length())
	    {
	    	 changeColor(12);
	    	cout<<letter<<" isn't present in the word may be you already put in"<<endl;
	    changeColor(7);
	    
		}
		if(word == string(word.length(),'1'))
		{
			
			cout<<"========================================";
			changeColor(10);
			cout<<endl<<"=  Congratulation You win the game"<<"     ="<<endl;
			changeColor(7);
			cout<<"========================================"<<endl;
			changeColor(10);
		    break;
		}	
	}
		if(word != string(word.length(),'1'))
		{
				cout<<"========================================"<<endl;
			cout<<endl<<"Game over , better luck next time"<<"     ="<<endl;
				cout<<"========================================"<<endl;
				changeColor(12);
		}
			changeColor(7);
				
				cout<<"========================================"<<endl;
		cout<<"=            The word is "<<ranword<<"          ="<<endl;
		
		cout<<"========================================"<<endl;
	char restart;
	
		cout<<"if you want to restart the program please press (y/n):";
	 	cin>>restart;
	 	 if(restart=='y' || restart=='Y'){
		 	system("cls");
		 	goto start;
		 }
}
void vegetables(){
	start:
	   string a[5] = {"peas" , "onion" , "potato" , "carrot" , "cucumber" };
     srand(time(0));
	int ran = rand() % 5 ;
	int i , j;
	string word = a[ran];
	string ranword = a[ran];
	char letter;
		  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the text color to yellow, background color to blue, and make the text bold
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    // Change console window size
    SMALL_RECT rect = {0, 0, 80, 25};  // Set the size of the console window (80 columns x 25 rows)
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
   	    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"====================================================="<<endl;
	cout<<"You have "<<word.length()+3<<" chances to guess the "<<word.length()<<" letter word."<<"      ="<<endl;
	cout<<"==========================================================="<<endl;
	if(1==1){
		  changeColor(14);
	cout<<"Red text indicates the character in previous line is wrong"<<endl;//role
  changeColor(7);
}
	cout<<"==========================================================="<<endl;
	cout<<": Hint :           ="; 
	
    switch(ran)
    {
    	case 0:
    	cout<<endl<<"Small,green packed in green skin: "<<endl;
    	break;
    	
    	case 1:
    	cout<<endl<<"Can make you teared while cutting:"<<endl;
    	break;
    	
    	case 2:
    	cout<<endl<<"Brown skin can be fried or mesh:"<<endl;
    	break;
    	
    	case 3:
    	cout<<endl<<"Favouirts of rabbits:"<<endl;
    	break;
    	
    	case 4:
    	cout<<endl<<"Green long often used in salad:"<<endl;
    	break;
    	
    	default:
    	cout<<endl<<"Error in Hinting:"<<endl;
    	break;
	}
	
	for(i=1; i<=word.length()+3; i++)
	{	cout<<"chance: "<<i<<" Enter the letter of word: ";cin>>letter;
        for(j=0; j<word.length(); j++)
	      	{if(letter == word[j])
		        {
		        	changeColor(10);
			        cout<<letter<<" is present in the word at "<<j+1<<" position"<<endl;
			        word[j] = '1';
			        changeColor(7);
	break;
		        }
	        }
	    if(j==word.length())
	    {
	    	 changeColor(12);
	    	cout<<letter<<" isn't present in the word may be you already put in"<<endl;
	    changeColor(7);
	    
		}
		if(word == string(word.length(),'1'))
		{
			
			cout<<"========================================";
			changeColor(10);
			cout<<endl<<"=  Congratulation You win the game"<<"     ="<<endl;
			changeColor(7);
			cout<<"========================================"<<endl;
			changeColor(10);
		    break;
		}	
	}
		if(word != string(word.length(),'1'))
		{
				cout<<"========================================"<<endl;
			cout<<endl<<"Game over , better luck next time"<<"     ="<<endl;
				cout<<"========================================"<<endl;
				changeColor(12);
		}
			changeColor(7);
				
				cout<<"========================================"<<endl;
		cout<<"=            The word is "<<ranword<<"          ="<<endl;
		
		cout<<"========================================"<<endl;
	char restart;
	
		cout<<"if you want to restart the program please press (y/n):";
	 	cin>>restart;
	 	 if(restart=='y' || restart=='Y'){
		 	system("cls");
		 	goto start;
		 }
}
void countryname(){
	start:
	   string a[5] = {"japan" , "france" , "singapore" , "australia" , "norway" };
     srand(time(0));
	int ran = rand() % 5 ;
	int i , j;
	string word = a[ran];
	string ranword = a[ran];
	char letter;
		  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the text color to yellow, background color to blue, and make the text bold
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    // Change console window size
    SMALL_RECT rect = {0, 0, 80, 25};  // Set the size of the console window (80 columns x 25 rows)
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
   	    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"====================================================="<<endl;
	cout<<"You have "<<word.length()+3<<" chances to guess the "<<word.length()<<" letter word."<<"      ="<<endl;
	cout<<"==========================================================="<<endl;
	if(1==1){
		  changeColor(14);
	cout<<"Red text indicates the character in previous line is wrong"<<endl;//role
  changeColor(7);
}
	cout<<"==========================================================="<<endl;
	cout<<": Hint :           ="; 
	
    switch(ran)
    {
    	case 0:
    	cout<<endl<<"Land of rising sun: "<<endl;
    	break;
    	
    	case 1:
    	cout<<endl<<"Homes of Eiffel tower:"<<endl;
    	break;
    	
    	case 2:
    	cout<<endl<<"The loin city:"<<endl;
    	break;
    	
    	case 3:
    	cout<<endl<<"Land of Kangaroos:"<<endl;
    	break;
    	
    	case 4:
    	cout<<endl<<"Land of midnight sun:"<<endl;
    	break;
    	
    	default:
    	cout<<endl<<"Error in Hinting:"<<endl;
    	break;
	}
	
	for(i=1; i<=word.length()+3; i++)
	{	cout<<"chance: "<<i<<" Enter the letter of word: ";cin>>letter;
        for(j=0; j<word.length(); j++)
	      	{if(letter == word[j])
		        {
		        	changeColor(10);
			        cout<<letter<<" is present in the word at "<<j+1<<" position"<<endl;
			        word[j] = '1';
			        changeColor(7);
	break;
		        }
	        }
	    if(j==word.length())
	    {
	    	 changeColor(12);
	    	cout<<letter<<" isn't present in the word may be you already put in"<<endl;
	    changeColor(7);
	    
		}
		if(word == string(word.length(),'1'))
		{
			
			cout<<"========================================";
			changeColor(10);
			cout<<endl<<"=  Congratulation You win the game"<<"     ="<<endl;
			changeColor(7);
			cout<<"========================================"<<endl;
			changeColor(10);
		    break;
		}	
	}
		if(word != string(word.length(),'1'))
		{
				cout<<"========================================"<<endl;
			cout<<endl<<"Game over , better luck next time"<<"     ="<<endl;
				cout<<"========================================"<<endl;
				changeColor(12);
		}
			changeColor(7);
				
				cout<<"========================================"<<endl;
		cout<<"=            The word is "<<ranword<<"          ="<<endl;
		
		cout<<"========================================"<<endl;
	char restart;
	
		cout<<"if you want to restart the program please press (y/n):";
	 	cin>>restart;
	 	 if(restart=='y' || restart=='Y'){
		 	system("cls");
		 	goto start;
		 }
}
void cities(){
	start:
	   string a[5] = {"paris" , "london" , "dubai" , "agra" , "multan" };
     srand(time(0));
	int ran = rand() % 5 ;
	int i , j;
	string word = a[ran];
	string ranword = a[ran];
	char letter;
		  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the text color to yellow, background color to blue, and make the text bold
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    // Change console window size
    SMALL_RECT rect = {0, 0, 80, 25};  // Set the size of the console window (80 columns x 25 rows)
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
   	    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"====================================================="<<endl;
	cout<<"You have "<<word.length()+3<<" chances to guess the "<<word.length()<<" letter word."<<"      ="<<endl;
	cout<<"==========================================================="<<endl;
	if(1==1){
		  changeColor(14);
	cout<<"Red text indicates the character in previous line is wrong"<<endl;//role
  changeColor(7);
}
	cout<<"==========================================================="<<endl;
	cout<<": Hint :           ="; 
	
    switch(ran)
    {
    	case 0:
    	cout<<endl<<"Known for Eiffel tower: "<<endl;
    	break;
    	
    	case 1:
    	cout<<endl<<"Capital of UK:"<<endl;
    	break;
    	
    	case 2:
    	cout<<endl<<"A modern/luxurious city in the UAE:"<<endl;
    	break;
    	
    	case 3:
    	cout<<endl<<"Home of Iconic Taj Mahal:"<<endl;
    	break;
    	
    	case 4:
    	cout<<endl<<"A city known for its sufi shrines and historical Sites :"<<endl;
    	break;
    	
    	default:
    	cout<<endl<<"Error in Hinting:"<<endl;
    	break;
	}
	
	for(i=1; i<=word.length()+3; i++)
	{	cout<<"chance: "<<i<<" Enter the letter of word: ";cin>>letter;
        for(j=0; j<word.length(); j++)
	      	{if(letter == word[j])
		        {
		        	changeColor(10);
			        cout<<letter<<" is present in the word at "<<j+1<<" position"<<endl;
			        word[j] = '1';
			        changeColor(7);
	break;
		        }
	        }
	    if(j==word.length())
	    {
	    	 changeColor(12);
	    	cout<<letter<<" isn't present in the word may be you already put in"<<endl;
	    changeColor(7);
	    
		}
		if(word == string(word.length(),'1'))
		{
			
			cout<<"========================================";
			changeColor(10);
			cout<<endl<<"=  Congratulation You win the game"<<"     ="<<endl;
			changeColor(7);
			cout<<"========================================"<<endl;
			changeColor(10);
		    break;
		}	
	}
		if(word != string(word.length(),'1'))
		{
				cout<<"========================================"<<endl;
			cout<<endl<<"Game over , better luck next time"<<"     ="<<endl;
				cout<<"========================================"<<endl;
				changeColor(12);
		}
			changeColor(7);
				
				cout<<"========================================"<<endl;
		cout<<"=            The word is "<<ranword<<"          ="<<endl;
		
		cout<<"========================================"<<endl;
	char restart;
	
		cout<<"if you want to restart the program please press (y/n):";
	 	cin>>restart;
	 	 if(restart=='y' || restart=='Y'){
		 	system("cls");
		 	goto start;
		 }
}
void flowers(){
	start:
	   string a[5] = {"jasmine" , "lotus" , "sunflower" , "rose" , "bluebell" };
     srand(time(0));
	int ran = rand() % 5 ;
	int i , j;
	string word = a[ran];
	string ranword = a[ran];
	char letter;
		  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the text color to yellow, background color to blue, and make the text bold
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    // Change console window size
    SMALL_RECT rect = {0, 0, 80, 25};  // Set the size of the console window (80 columns x 25 rows)
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
   	    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"====================================================="<<endl;
	cout<<"You have "<<word.length()+3<<" chances to guess the "<<word.length()<<" letter word."<<"      ="<<endl;
	cout<<"==========================================================="<<endl;
	if(1==1){
		  changeColor(14);
	cout<<"Red text indicates the character in previous line is wrong"<<endl;//role
  changeColor(7);
}
	cout<<"==========================================================="<<endl;
	cout<<": Hint :           ="; 
	
    switch(ran)
    {
    	case 0:
    	cout<<endl<<"National flower of pakistan ,fragrant: "<<endl;
    	break;
    	
    	case 1:
    	cout<<endl<<"Peaceful and serene found above water:"<<endl;
    	break;
    	
    	case 2:
    	cout<<endl<<"Golden yellow:"<<endl;
    	break;
    	
    	case 3:
    	cout<<endl<<"Symbol of love :"<<endl;
    	break;
    	
    	case 4:
    	cout<<endl<<"Symbol of hope:"<<endl;
    	break;
    	
    	default:
    	cout<<endl<<"Error in Hinting:"<<endl;
    	break;
	}
	
	for(i=1; i<=word.length()+3; i++)
	{	cout<<"chance: "<<i<<" Enter the letter of word: ";cin>>letter;
        for(j=0; j<word.length(); j++)
	      	{if(letter == word[j])
		        {
		        	changeColor(10);
			        cout<<letter<<" is present in the word at "<<j+1<<" position"<<endl;
			        word[j] = '1';
			        changeColor(7);
	break;
		        }
	        }
	    if(j==word.length())
	    {
	    	 changeColor(12);
	    	cout<<letter<<" isn't present in the word may be you already put in"<<endl;
	    changeColor(7);
	    
		}
		if(word == string(word.length(),'1'))
		{
			
			cout<<"========================================";
			changeColor(10);
			cout<<endl<<"=  Congratulation You win the game"<<"     ="<<endl;
			changeColor(7);
			cout<<"========================================"<<endl;
			changeColor(10);
		    break;
		}	
	}
		if(word != string(word.length(),'1'))
		{
				cout<<"========================================"<<endl;
			cout<<endl<<"Game over , better luck next time"<<"     ="<<endl;
				cout<<"========================================"<<endl;
				changeColor(12);
		}
			changeColor(7);
				
				cout<<"========================================"<<endl;
		cout<<"=            The word is "<<ranword<<"          ="<<endl;
		
		cout<<"========================================"<<endl;
	char restart;
	
		cout<<"if you want to restart the program please press (y/n):";
	 	cin>>restart;
	 	 if(restart=='y' || restart=='Y'){
		 	system("cls");
		 	goto start;
		 }
}
void seasons(){
	start:
	   string a[4] = {"summer" , "autumn" , "winter" , "spring"  };
     srand(time(0));
	int ran = rand() % 4 ;
	int i , j;
	string word = a[ran];
	string ranword = a[ran];
	char letter;
		  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set the text color to yellow, background color to blue, and make the text bold
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY);

    // Change console window size
    SMALL_RECT rect = {0, 0, 80, 25};  // Set the size of the console window (80 columns x 25 rows)
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
   	    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout<<"====================================================="<<endl;
	cout<<"You have "<<word.length()+3<<" chances to guess the "<<word.length()<<" letter word."<<"      ="<<endl;
	cout<<"==========================================================="<<endl;
	if(1==1){
		  changeColor(14);
	cout<<"Red text indicates the character in previous line is wrong"<<endl;//role
  changeColor(7);
}
	cout<<"==========================================================="<<endl;
	cout<<": Hint :           ="; 
	
    switch(ran)
    {
    	case 0:
    	cout<<endl<<"Warm day and cool night: "<<endl;
    	break;
    	
    	case 1:
    	cout<<endl<<"Season of falling leaves:"<<endl;
    	break;
    	
    	case 2:
    	cout<<endl<<"Cozy nights by the fireplace:"<<endl;
    	break;
    	
    	case 3:
    	cout<<endl<<"Season of flowers to bloom:"<<endl;
    	break;
    	
    	default:
    	cout<<endl<<"Error in Hinting:"<<endl;
    	break;
	}
	
	for(i=1; i<=word.length()+3; i++)
	{	cout<<"chance: "<<i<<" Enter the letter of word: ";cin>>letter;
        for(j=0; j<word.length(); j++)
	      	{if(letter == word[j])
		        {
		        	changeColor(10);
			        cout<<letter<<" is present in the word at "<<j+1<<" position"<<endl;
			        word[j] = '1';
			        changeColor(7);
	break;
		        }
	        }
	    if(j==word.length())
	    {
	    	 changeColor(12);
	    	cout<<letter<<" isn't present in the word may be you already put in"<<endl;
	    changeColor(7);
	    
		}
		if(word == string(word.length(),'1'))
		{
			
			cout<<"========================================";
			changeColor(10);
			cout<<endl<<"=  Congratulation You win the game"<<"     ="<<endl;
			changeColor(7);
			cout<<"========================================"<<endl;
			changeColor(10);
		    break;
		}	
	}
		if(word != string(word.length(),'1'))
		{
				cout<<"========================================"<<endl;
			cout<<endl<<"Game over , better luck next time"<<"     ="<<endl;
				cout<<"========================================"<<endl;
				changeColor(12);
		}
			changeColor(7);
				
				cout<<"========================================"<<endl;
		cout<<"=            The word is "<<ranword<<"          ="<<endl;
		
		cout<<"========================================"<<endl;
	char restart;
	
		cout<<"if you want to restart the program please press (y/n):";
	 	cin>>restart;
	 	 if(restart=='y' || restart=='Y'){
		 	system("cls");
		 	goto start;
		 }
}






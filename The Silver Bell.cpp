#include <iostream>
#include <string>
using namespace std;


void initialize();
void ringBell();
void wait();
void interact();

//Easter egg!//
void secret(int n);

bool quit=false;
char lang;

int main()
{
    cout<<"Choose your language, \'E\' for English, \'J\' for Japanese: ";
    bool langValid=false;
    
    while(langValid==false) //checks if language option is valid
    {
    	cin>>lang;
    switch(lang)
    {
    	case 'e': 
    	{
		lang = 'E';
		langValid=true;
	    }
    		break;
    	case 'E': 
    	{
		lang = 'E';
		langValid=true;
	    }
    		break;
    	case 'j': 
    	{
		lang = 'J';
		langValid=true;
	    }
    		break;
    	case 'J': 
    	{
		lang = 'J';
		langValid=true;
	    }    	
    		break;
    	default: 
		{
			cout<<"Invalid input. Please enter E or J: ";
		}
	}
	}
	
	initialize();
	
	string ans;
	while(quit==false) //cmd detect
	{
	cout<<endl<<">> ";
	cin>>ans;
	if (ans!="quit")
	{
	if(ans=="ring")
	{
		cout<<"You press the bell. The loud ding of the bell destroys the atmosphere."<<endl;
		ringBell();
	}
	else if (ans=="wait")
	{
		cout<<"You decide to take a moment."<<endl;
		wait();
	}
	else if (ans=="interact")
	{
		interact();
	}
	else if (ans=="yeet")
	{
		int eggNum;
		cout<<"One natural number, four digits; add them up to get least and greatest,";
		cin>>eggNum;
		secret(eggNum);
	}
	else
	{
		cout<<"I beg your pardon?"<<endl;
	}
    }
    else
    {	
      cout<<"Thank you for playing!";
      quit=true;
	}
    }
    
}


//*************************//
//*****//initialize//******//
//*************************//
void initialize()
{
	cout<<endl<<"*************************************************************************";
	if(lang=='E')
	{
	    cout<<endl<<"You are in a library, standing in front of a old wooden counter. On the counter sits a silver bell."<<endl;
	    cout<<"You can [ring] the bell, [wait], [interact] with your surroundings, or [quit]."<<endl;
	}
	else
	{
		cout<<endl<<"‚ ‚È‚½‚Í}‘ŠÙ‚Ì’†‚É‚¢‚Ü‚·B‘O‚É‚ÍŒÃ‚¢–Ø»‚ÌƒJƒEƒ“ƒ^[‚ª‚ ‚èA‚»‚Ìã‚É‹âF‚ÌŒÄ‚Ñ—é‚ª‚Ì‚Á‚Ä‚¢‚Ü‚·B"<<endl;
		cout<<"ŒÄ‚Ñ—é‚ðq‰Ÿ‚·r‚©Aq‘Ò‚Âr‚©AŽü‚è‚Ì‚à‚Ì‚Æqr"
	}
}


//*************************//
//******//ringBell//*******//
//*************************//

void ringBell()
{
	static int rung = 0;
	cout<<"Bell press count: "<<++rung<<endl;
	if(lang=='E')
	{
	switch(rung)
	{
		case 1: cout<<"The librarian shuffles into view. She looks at you patiently."<<endl;
			break;
		case 2: cout<<"You already pressed it once. The librarian purses her lips. \"Yes?\""<<endl;
			break;
		case 3: cout<<"The librarian looks slightly annoyed. Maybe you should stop ringing that bell."<<endl;
			break;
		case 4: cout<<"The librarian clears her throat and furrows her brow."<<endl;
			break;
		case 5: cout<<"The librarian looks plainly annoyed and frustrated with you. Perhaps you should be more considerate."<<endl;
			break;
		case 6: cout<<"You can feel the other people in the library starting to stare at you."<<endl;
	        break;
	    case 7: cout<<"The librarian looks as though she might snap at any moment. Better be careful."<<endl;
		    break;
		case 8: cout<<"With an incredible amount of effort, the librarian stops herself from  throwing the bell out of the window."<<endl;
		    break;
		case 9: cout<<"\"Is this a joke?\" She says in a low voice. You hear a murmur of disapproval from the people behind you."<<endl;
		    break;
		case 10:cout<<"Suddenly, with alarming strength, the librarian grabs you by the arm, \nswings you around in circles, then finally flings you straight out of the library exit.\n As you fly through the air in a graceful arc, \nyou hear quiet clapping and cheering sounds from inside the library. "<<endl;
	        break;
	    default:"You are not in the library anymore.";
	}
    }
    else if (lang=='J')
    {
    	switch(rung)
    {
    	case 1: cout<<"}‘ŠÙˆõ‚ª‚â‚Á‚Ä‚«‚Ü‚µ‚½B"<<endl;
			break;
		case 2: cout<<"‚à‚¤‚·‚Å‚ÉŒÄ‚Ñ—é‚Íˆê‰ñ‰Ÿ‚³‚ê‚Ä‚¢‚Ü‚·B"<<endl;
			break;
		case 3: cout<<"}‘ŠÙˆõ‚Í­‚µŒ™‚ÈŠç‚ð‚µ‚Ä‚¢‚Ü‚·BŒÄ‚Ñ—é‚ð‰Ÿ‚µ‚·‚¬‚È‚¢‚æ‚¤‚É‚µ‚Ü‚µ‚å‚¤B"<<endl;
			break;
		case 4: cout<<"}‘ŠÙˆõ‚Í‚ ‚È‚½‚ðŒ©‚Ä”û‚ð‚Ð‚»‚ß‚Ä‚¢‚Ü‚·B";
			break;
		case 5: cout<<"}‘ŠÙˆõ‚ÍŠP•¥‚¢‚ð‚µ‚Ä‚ ‚È‚½‚ÉŒü‚©‚Á‚Ä‚µ‚©‚ß‚Á–Ê‚ð‚µ‚Ä‚¢‚Ü‚·B‚à‚¤­‚µŽü‚è‚É‹C‚ð”z‚è‚Ü‚µ‚å‚¤B"<<endl;
			break;
		case 6: cout<<"‚Ù‚©‚É}‘ŠÙ‚É‚¢‚él‚½‚¿‚à‚ ‚È‚½‚Ì‚±‚Æ‚ðŒ©‚Â‚ß‚Ä‚¢‚é‹C”z‚ªŠ´‚¶‚ç‚ê‚Ü‚·B"<<endl;
	        break;
	    case 7: cout<<"}‘ŠÙˆõ‚Í‚ ‚È‚½‚Ìs“®‚ª“ª‚É‚«‚Ä‚¢‚é—l‚Å‚·B‚à‚¤ŒÄ‚Ñ—é‚ð‰Ÿ‚·‚Ì‚ð‚æ‚µ‚½‚Ù‚¤‚ª‚æ‚³‚»‚¤‚Å‚·B"<<endl;
		    break;
		case 8: cout<<"}‘ŠÙˆõ‚ÍŒÄ‚Ñ—é‚ð‘‹‚ÌŠO‚É•ú‚èo‚µ‚½‚¢‹CŽ‚¿‚ð•KŽ€‚É‚±‚ç‚¦‚Ä‚¢‚é‚æ‚¤‚Å‚·B"<<endl;
		    break;
		case 9: cout<<"\"ç’k‚Å‚·‚©H\" ’á‚¢º‚Å}‘ŠÙˆõ‚ªŒ¾‚¢‚Ü‚µ‚½BŽü‚è‚Ìl‚©‚ç‚à–À˜f‚ª‚Á‚Ä‚¢‚éº‚ª•·‚±‚¦‚Ä‚«‚Ü‚·B"<<endl;
		    break;
		case 10:cout<<"“Ë‘RA‹Á‚­‚×‚«—Í‚Å}‘ŠÙˆõ‚Í‚ ‚È‚½‚Ì˜r‚ð‚í‚µ‚Ã‚©‚Ý‚µA\n‚®‚é‚®‚é‚Æ“ªã‚Å‚ ‚È‚½‚ðU‚è‰ñ‚µA}‘ŠÙ‚ÌoŒû‚ÉŒü‚©‚Á‚ÄŽv‚¢‚Á‚«‚è•ú‚è“Š‚°‚Ü‚µ‚½B\n ‚µ‚È‚â‚©‚ÈŒÊ‚ð•`‚¢‚ÄA‚ ‚È‚½‚Í‹ó’†‚ð”ò‚ÑA\n}‘ŠÙ‚Ì’†‚©‚çÃ‚©‚È”Žè‚ÆŠ½º‚ª•·‚±‚¦‚Ä‚«‚Ü‚µ‚½B "<<endl;
	        break;
	    default:cout<<"‚ ‚È‚½‚Í‚à‚¤}‘ŠÙ‚Ì’†‚É‚¢‚Ü‚¹‚ñB"<<endl;
	}
	}
}


//*************************//
//********//wait//*********//
//*************************//
void wait()
{
	cout<<"You wait..."<<endl;
}


//*************************//
//******//interact//*******//
//*************************//
void interact()
{
	cout<<"You interacted with the object."<<endl;
}


//*************************//
//*******//secret//********//
//*************************//
void secret(int n)
{
	while(n!=1729)
	{
		cout<<"False. Try again.";
		cin>>n;
	}
	cout<<"Congradulations! You have found me. Type \'green speckled toad, behold\' to get the ultimate ending.";
}

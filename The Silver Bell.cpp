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
		cout<<endl<<"���Ȃ��͐}���ق̒��ɂ��܂��B�O�ɂ͌Â��ؐ��̃J�E���^�[������A���̏�ɋ�F�̌Ăї邪�̂��Ă��܂��B"<<endl;
		cout<<"�Ăї���q�����r���A�q�҂r���A����̂��̂Ɓq�r"
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
    	case 1: cout<<"�}���و�������Ă��܂����B"<<endl;
			break;
		case 2: cout<<"�������łɌĂї�͈�񉟂���Ă��܂��B"<<endl;
			break;
		case 3: cout<<"�}���و��͏������Ȋ�����Ă��܂��B�Ăї�����������Ȃ��悤�ɂ��܂��傤�B"<<endl;
			break;
		case 4: cout<<"�}���و��͂��Ȃ������Ĕ����Ђ��߂Ă��܂��B";
			break;
		case 5: cout<<"�}���و��͊P���������Ă��Ȃ��Ɍ������Ă����߂��ʂ����Ă��܂��B������������ɋC��z��܂��傤�B"<<endl;
			break;
		case 6: cout<<"�ق��ɐ}���قɂ���l���������Ȃ��̂��Ƃ����߂Ă���C�z���������܂��B"<<endl;
	        break;
	    case 7: cout<<"�}���و��͂��Ȃ��̍s�������ɂ��Ă���l�ł��B�����Ăї�������̂��悵���ق����悳�����ł��B"<<endl;
		    break;
		case 8: cout<<"�}���و��͌Ăї�𑋂̊O�ɕ���o�������C������K���ɂ��炦�Ă���悤�ł��B"<<endl;
		    break;
		case 9: cout<<"\"��k�ł����H\" �Ⴂ���Ő}���و��������܂����B����̐l��������f�����Ă��鐺���������Ă��܂��B"<<endl;
		    break;
		case 10:cout<<"�ˑR�A�����ׂ��͂Ő}���و��͂��Ȃ��̘r���킵�Â��݂��A\n���邮��Ɠ���ł��Ȃ���U��񂵁A�}���ق̏o���Ɍ������Ďv����������蓊���܂����B\n ���Ȃ₩�Ȍʂ�`���āA���Ȃ��͋󒆂��сA\n�}���ق̒�����Â��Ȕ���Ɗ������������Ă��܂����B "<<endl;
	        break;
	    default:cout<<"���Ȃ��͂����}���ق̒��ɂ��܂���B"<<endl;
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

//WIP

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
		cout<<endl<<"あなたは図書館の中にいます。前には古い木製のカウンターがあり、その上に銀色の呼び鈴がのっています。"<<endl;
		cout<<"呼び鈴を〈押す〉か、〈待つ〉か、周りのものと〈〉"
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
    	case 1: cout<<"図書館員がやってきました。"<<endl;
			break;
		case 2: cout<<"もうすでに呼び鈴は一回押されています。"<<endl;
			break;
		case 3: cout<<"図書館員は少し嫌な顔をしています。呼び鈴を押しすぎないようにしましょう。"<<endl;
			break;
		case 4: cout<<"図書館員はあなたを見て眉をひそめています。";
			break;
		case 5: cout<<"図書館員は咳払いをしてあなたに向かってしかめっ面をしています。もう少し周りに気を配りましょう。"<<endl;
			break;
		case 6: cout<<"ほかに図書館にいる人たちもあなたのことを見つめている気配が感じられます。"<<endl;
	        break;
	    case 7: cout<<"図書館員はあなたの行動が頭にきている様です。もう呼び鈴を押すのをよしたほうがよさそうです。"<<endl;
		    break;
		case 8: cout<<"図書館員は呼び鈴を窓の外に放り出したい気持ちを必死にこらえているようです。"<<endl;
		    break;
		case 9: cout<<"\"冗談ですか？\" 低い声で図書館員が言いました。周りの人からも迷惑がっている声が聞こえてきます。"<<endl;
		    break;
		case 10:cout<<"突然、驚くべき力で図書館員はあなたの腕をわしづかみし、\nぐるぐると頭上であなたを振り回し、図書館の出口に向かって思いっきり放り投げました。\n しなやかな弧を描いて、あなたは空中を飛び、\n図書館の中から静かな拍手と歓声が聞こえてきました。 "<<endl;
	        break;
	    default:cout<<"あなたはもう図書館の中にいません。"<<endl;
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

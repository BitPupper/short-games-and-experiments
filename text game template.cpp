#include <iostream>
#include <string>
using namespace std;

class game{
		private:
			string tutorial;
			
		public:
			Game(){
			}
			
			~Game(){
				cout<<"Ran destructor.";
			}
			
			Ans(string a){
				while(a[0]!='y'||a[0]!='n'||a[0]!='Y'||a[0]!='N'){
	            	cout<<"Invalid response. Please enter (y)es or (n)o: ";
	            	cin>>tutorial;
				}
				if(a[0]=='y'||a[0]=='Y'){//use one-line expression
					return true;
				}
				else{
					return false;
				}
			}
			
			Instruct()
			{
			   cout<<"Your goal is to escape a room. The game progresses according to text commands entered by the player."
				<<"\nThe verbs that trigger a response are:"
				<<"\n- x [object name] (examines an item and gives you a detailed description)"
				<<"\n- i         (opens the inventory and shows what objects you are currently holding)"
				<<"\n- take/get [object name] (takes the object and stores it in inventory for later use)"
				<<"\n- drop [object name] (removes an object from inventory)"
				<<"\n- use [object name] on/with [object name] (uses an object on another object or combines them)"
				<<"\n- eat/smell/touch [object name] (makes the player eat, smell, or touch the given object.)"
				<<"\n- move [object name] (moves an object from its current position)"
				<<"\n- think (provides player with hints)"
				<<"\n- quit (quits the game)"
				<<"\n- help (prints the tutorial)"
				<<"\n\n...etc. The rest is to be found by experimenting. "
				<<"\n The instructions ends here."<<endl;
			}
			
			Intro(){
				cout<<"*****Room Without a Roof*****"<<endl;
	            cout<<"18/11/2018, v.1.0"<<endl
	            <<"Welcome. Do you wish to see the instructions? (y/n): ";
	            cin>>tutorial;
	            if(Ans(tutorial)){
	            	Instruct();
					}
					else{
						//Game();
					}
				}
};
	
int main(){
   	game main;
   	main.Intro();
	}
	      


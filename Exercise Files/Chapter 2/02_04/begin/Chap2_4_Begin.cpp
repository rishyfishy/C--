 #include <iostream> 
 #include <ctime>
 #include <cstdlib>
 using namespace std; 
 

const int MAX_CHIPS = 100;
const int MIN_CHIPS = 1;
const double MAX_TURN = 0.5;
int main()  
{  
   
  bool player1Turn = true;  
  bool gameOver = false;    
  
  int chipsInPile = 0;  
  int chipsTaken = 0; 

  //seed the random number generator
   srand(time(0));
  
  
	chipsInPile = (rand() % MAX_CHIPS) + MIN_CHIPS;
  	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
	cout <<"You can only take " << static_cast<int>(chipsInPile*MAX_TURN)<< " chips from the pile\n";
  	
  
  return 0; 
} 

 
 


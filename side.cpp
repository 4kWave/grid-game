#include<iostream>

using namespace std;

int gridSize = 3;
char grid[3][3] = {{'#', '#', '#'}, {'#', '#', '#'}, {'#', '#', '#'}};


class Player{
  public:
    int x;
    int y;
    Player(int initialX, int initialY){
      x = initialX;
      y = initialY;
    }
};

Player mainPlayer(0, 0);

void changeGrid(int x, int y){
  grid[x][y] = '@';
}

void printGrid(int size){
  for(int x = 0; x < size; x++){
    cout << "\n";
    for(int y = 0; y < size; y++){
      cout << grid[x][y];
    }
  }
}

void refresh(){
  changeGrid(mainPlayer.x, mainPlayer.y);
  printGrid(gridSize);
}


int main(){
  while(true){
    int input;
    cin >> input;

    if(input == 1){
      mainPlayer.x++;
      refresh();
    }
    else if(input == 2){
      mainPlayer.x--;
      refresh();
    }
    else if(input == 3){
      mainPlayer.y++;
      refresh();
    }
    else if(input == 4){
      mainPlayer.y--;
      refresh();
    }
    else{
      cout << "Invalid Input";
      refresh();
    }
  }
}

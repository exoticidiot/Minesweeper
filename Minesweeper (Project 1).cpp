#include <iostream>
#include <cstdlib>
using namespace std;

//maximum board size
const int MAX_SIZE=10;

//prototypes
int inititalizeboard,placemines,calculateadjacentmines,diaplayboard,getplayermove;
int boardsize,mines,row,column,revealed;
double minescount;
bool mines[MAX_SIZE][MAX_SIZE];
bool revealed[MAX_SIZE][MAX_SIZE];

int main()
{
    int difficulty,totalcells,row,column;
    int srand;

    do{
    cout <<"Enter the size of the board(3-10): ";
    cin >> boardsize;
    }while(boardsize<3||boardsize>10);
  
   do{
    cout <<"Enter the difficilty level:"<<endl;
    cout <<"1.Easy"<<endl;
    cout <<"2.Medium"<<endl;
    cout <<"3.Hard"<<endl;
    cin >> difficulty;
   }while(difficulty<1||difficulty>3);

   totalcells=boardsize*boardsize;

    if (difficulty==1){
    minescount = 0.10*totalcells;
    }
    else if (difficulty==2){
    minescount=0.20*totalcells;
    }
    else if (difficulty==3){
    minescount=0.30*totalcells;
    }
}

//initializing mines and revealed arrays to false
void initializeboard(bool mines[MAX_SIZE][MAX_SIZE],bool revealed[MAX_SIZE][MAX_SIZE],int boardsize){
    for (int row=0;row<boardsize;row++){
        for(int column=0;column<boardsize;column++){
            mines[row][column]=false;
            revealed[row][column]=false;
        }
    }
}

//placing mines randomly
void placemines(bool mines[MAX_SIZE][MAX_SIZE],int boardsize,int minescount){
    for (int minesplaced=0;minesplaced<=minescount;minesplaced++){
        int row=rand()%boardsize;
        int columns=rand()%boardsize;
        if (!mines[row][column]){
            mines[row][column]=true;
            minesplaced++;
        }
    }
}

//calculating adjacent mines
int calculateadjacentmines (bool mines [MAX_SIZE][MAX_SIZE],int row,int column,int boardsize){
    
}





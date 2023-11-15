//programmer:Dania Khan
//date:11/14/23
//desc: maze path using backtracking/recursion

#include <stdio.h>
//maze
int maze[5][5] = {
    {'W', 'W', 'S', 'W', 'W'},
    {'O', 'W', 'O', 'W', 'W'},
    {'O', 'O', 'O', 'W', 'O'},
    {'W', 'O', 'O', 'W', 'O'},
    {'W', 'O', 'O', 'E', 'W'}};
//path matrix
int saved[5][5] = {0};
//finding all Os
	int path(int x, int y){
    return (x>=0 && x<5 && y>=0 && y<5 && maze[x][y]!='W' && !saved[x][y]);
}
//finding E as base statement and using recursion
	int lookforpath(int x, int y){
    if(maze[x][y]=='E'){
        saved[x][y]=1;
        return 1;
    }

    if(path(x, y)){
        saved[x][y]=1;

        if(lookforpath(x+1, y) || lookforpath(x, y+1)){
            return 1;
        }
        saved[x][y]=0;
    }
    return 0;
}
	//printing the path
	void print(){
	int i, j;
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if(saved[i][j]){
                printf("(%d, %d), ", i, j);
            }
        }
    }
    printf("\n");
}
	//main
int main(){
    

    int x, y;
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(maze[i][j]=='S'){
                x=i;
                y=j;
                break;
            }
        }
	}
    if(lookforpath(x, y)){
        printf("The path is \n");
        print();
    }
}//endmain

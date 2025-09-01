#include <iostream>
bool PVP_logic_horizontal_player_1(char backend_grid[][5],bool is_running1){
    int sum =0;
    for (int i=0;i<1;i+=2){
        for(int j=0;j<5;j+=2){
            sum += backend_grid[i][j] - '0';
        }
    }
    if (sum ==27 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 1 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    sum = 0;
    for (int k=2;k<3;k+=2){
        for(int l=0;l<5;l+=2){
            sum += backend_grid[k][l] - '0';
        }
    }
    if (sum ==27 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 1 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    sum = 0;
    for (int m=4;m<5;m+=2){
        for(int n=0;n<5;n+=2){
            sum += backend_grid[m][n] - '0';
        }
    }
    if (sum ==27 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 1 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    return true;
}
bool PVP_logic_vertical_player_1(char backend_grid[][5],bool is_running2){
    int sum =0;
    for (int i=0;i<5;i+=2){
        for(int j=0;j<1;j+=2){
            sum += backend_grid[i][j] - '0';
        
        }
    }
    if (sum ==27 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 1 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    sum = 0;
    for (int k=0;k<5;k+=2){
        for(int l=2;l<3;l+=2){
            sum += backend_grid[k][l] - '0';
        }
    }
    if (sum ==27 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 1 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    sum = 0;
    for (int m=0;m<5;m+=2){
        for(int n=4;n<5;n+=2){
            sum += backend_grid[m][n] - '0';
        }
    }
    if (sum ==27 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 1 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    return true;
}
bool PVP_logic_diagonal_1_player_1(char backend_grid[][5],bool is_running3){
    int sum =0;
    int m =0;
    for (int i=0;i<5;i+=2){
        for(int j=m;j<m+1;j+=5){
            sum += backend_grid[i][j] - '0';
        }
        m+=2;
    }
    if (sum ==27 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 1 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    return true;
}
bool PVP_logic_diagonal_2_player_1(char backend_grid[][5],bool is_running4){
    int sum = 0;
    int n =4;
    for (int k=0;k<5;k+=2){
        for(int l=n;l>=n;l-=5){
            sum += backend_grid[k][l] - '0';
        }
        n-=2;
    }
    if (sum ==27 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 1 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    return true;
}
bool PVP_logic_horizontal_player_2(char backend_grid[][5],bool is_running5){
    int sum =0;
    for (int i=0;i<1;i+=2){
        for(int j=0;j<5;j+=2){
            sum += backend_grid[i][j] - '0';
        }
    }
    if (sum ==9 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 2 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    sum = 0;
    for (int k=2;k<3;k+=2){
        for(int l=0;l<5;l+=2){
            sum += backend_grid[k][l] - '0';
        }
    }
    if (sum ==9 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 2 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    sum = 0;
    for (int m=4;m<5;m+=2){
        for(int n=0;n<5;n+=2){
            sum += backend_grid[m][n] - '0';
        }
    }
    if (sum ==9 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 2 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    return true;
}
bool PVP_logic_vertical_player_2(char backend_grid[][5],bool is_running6){
    int sum =0;
    for (int i=0;i<5;i+=2){
        for(int j=0;j<1;j+=2){
            sum += backend_grid[i][j] - '0';
        }
    }
    if (sum ==9 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 2 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    sum = 0;
    for (int k=0;k<5;k+=2){
        for(int l=2;l<3;l+=2){
            sum += backend_grid[k][l] - '0';
        }
    }
    if (sum ==9 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 2 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    sum = 0;
    for (int m=0;m<5;m+=2){
        for(int n=4;n<5;n+=2){
            sum += backend_grid[m][n] - '0';
        }
    }
    if (sum ==9 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 2 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
        return false;
    }
    return true;
}
bool PVP_logic_diagonal_1_player_2(char backend_grid[][5],bool is_running7){
    int sum =0;
    int m =0;
    for (int i=0;i<5;i+=2){
        for(int j=m;j<m+1;j+=5){
            sum += backend_grid[i][j] - '0';
        }
        m+=2;
    }
    if (sum ==9 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 2 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
    }
    return true;
}
bool PVP_logic_diagonal_2_player_2(char backend_grid[][5],bool is_running8){
    int sum = 0;
    int n =4;
    for (int k=0;k<5;k+=2){
        for(int l=n;l>=n;l-=5){
            sum += backend_grid[k][l] - '0';
        }
        n-=2;
    }
    if (sum ==9 ){
        std::cout <<"----------------------------------------------------------\n";
        std::cout <<"-------------------PLAYER 2 WINS--------------------------\n";
        std::cout <<"----------------------------------------------------------\n";
    }
    return true;
}
void grid_update(char grid[14][20]){
    for (int i = 0 ; i <14 ; i++){
        for(int j = 0 ; j<20 ;j++){
            std::cout << grid[i][j] ;
    }
            std::cout << '\n';
    }
}
int main(){
    bool is_running = true,is_running1=true,is_running2=true,is_running3=true,is_running4=true,is_running5=true,is_running6=true,is_running7=true,is_running8=true;
    int chances = 0;
    char backend_grid[][5] = { {' ','|',' ','|',' '},
                                {'-','|','-','|','-'},
                                {' ','|',' ','|',' '},
                                {'-','|','-','|','-'},
                                {' ','|',' ','|',' '}};
    char  grid[14][20] = {{' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        //{'0','0','0','0','0','0','|','0','0','0','0','0','0','|','0','0','0','0','0','0'},
                        //{'0','0','0','0','0','0','|','0','0','0','0','0','0','|','0','0','0','0','0','0'},
                        {'-','-','-','-','-','-','|','-','-','-','-','-','-','|','-','-','-','-','-','-'},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        //{'0','0','0','0','0','0','|','0','0','0','0','0','0','|','0','0','0','0','0','0'},
                        //{'0','0','0','0','0','0','|','0','0','0','0','0','0','|','0','0','0','0','0','0'},
                        {'-','-','-','-','-','-','|','-','-','-','-','-','-','|','-','-','-','-','-','-'},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' '}};
                        //{'0','0','0','0','0','0','|','0','0','0','0','0','0','|','0','0','0','0','0','0'},
                        //{'0','0','0','0','0','0','|','0','0','0','0','0','0','|','0','0','0','0','0','0'},
    std::cout <<"----------------------------------------------------------\n";
    std::cout <<"------------WELCOME TO THE TICK TAC TO GAME---------------\n";
    std::cout <<"----------------------------------------------------------\n";
    std::cout <<"---------HERE ARE THE KEY MAPPING FOR THE GAME------------\n";
    std::cout <<"----------------------------------------------------------\n";
    std::cout <<"     |     |     \n";
    std::cout <<"  1  |  2  |  3  \n";
    std::cout <<"     |     |     \n";
    std::cout <<"-----|-----|-----\n";
    std::cout <<"     |     |     \n";
    std::cout <<"  4  |  5  |  6  \n";
    std::cout <<"     |     |     \n";
    std::cout <<"-----|-----|-----\n";
    std::cout <<"     |     |     \n";
    std::cout <<"  7  |  8  |  9  \n";
    std::cout <<"     |     |     \n";
    while (is_running)
    {
        int user_input_1;   
        std::cout <<"----------------------------------------------------------\n";                            // Cross
        std::cout << "               Enter user input(Player1): ";
        std::cin >> user_input_1;
        std::cout <<"----------------------------------------------------------\n";
        switch (user_input_1){
        
        case 1:
            grid [0][1] ='\\';
            grid [0][4] ='/';
            grid [1][2] ='\\';
            grid [1][3] ='/';
            grid [2][3] ='\\';
            grid [2][2] ='/';
            grid [3][4] ='\\';
            grid [3][1] ='/';
            backend_grid [0][0] ='9';
            grid_update(grid);
            chances += 1;
            break;
        case 2:
            grid [0][8] ='\\';
            grid [0][11] ='/';
            grid [1][9] ='\\';
            grid [1][10] ='/';
            grid [2][10] ='\\';
            grid [2][9] ='/';
            grid [3][11] ='\\';
            grid [3][8] ='/';
            backend_grid [0][2] ='9';
            grid_update(grid);
            chances += 1;
            break;
        case 3:
            grid [0][16] ='\\';
            grid [0][19] ='/';
            grid [1][17] ='\\';
            grid [1][18] ='/';
            grid [2][18] ='\\';
            grid [2][17] ='/';
            grid [3][19] ='\\';
            grid [3][16] ='/';
            backend_grid [0][4] = '9';
            grid_update(grid);
            chances += 1;
            break;
        case 4:
            grid [5][1] ='\\';
            grid [5][4] ='/';
            grid [6][2] ='\\';
            grid [6][3] ='/';
            grid [7][3] ='\\';
            grid [7][2] ='/';
            grid [8][4] ='\\';
            grid [8][1] ='/';
            backend_grid [2][0] = '9';
            grid_update(grid);
            chances += 1;
            break;
        case 5:
            grid [5][8] ='\\';
            grid [5][11] ='/';
            grid [6][9] ='\\';
            grid [6][10] ='/';
            grid [7][10] ='\\';
            grid [7][9] ='/';
            grid [8][11] ='\\';
            grid [8][8] ='/';
            backend_grid [2][2] = '9';
            grid_update(grid);
            chances += 1;
            break;
        case 6:
            grid [5][16] ='\\';
            grid [5][19] ='/';
            grid [6][17] ='\\';
            grid [6][18] ='/';
            grid [7][18] ='\\';
            grid [7][17] ='/';
            grid [8][19] ='\\';
            grid [8][16] ='/';
            backend_grid [2][4] = '9';
            grid_update(grid);
            chances += 1;
            break;
        case 7:
            grid [10][1] ='\\';
            grid [10][4] ='/';
            grid [11][2] ='\\';
            grid [11][3] ='/';
            grid [12][3] ='\\';
            grid [12][2] ='/';
            grid [13][4] ='\\';
            grid [13][1] ='/';
            backend_grid [4][0] = '9';
            grid_update(grid);
            chances += 1;
            break;
        case 8:
            grid [10][8] ='\\';
            grid [10][11] ='/';
            grid [11][9] ='\\';
            grid [11][10] ='/';
            grid [12][10] ='\\';
            grid [12][9] ='/';
            grid [13][11] ='\\';
            grid [13][8] ='/';
            backend_grid [4][2] = '9';
            grid_update(grid);
            chances += 1;
            break;
        case 9:
            grid [10][16] ='\\';
            grid [10][19] ='/';
            grid [11][17] ='\\';
            grid [11][18] ='/';
            grid [12][18] ='\\';
            grid [12][17] ='/';
            grid [13][19] ='\\';
            grid [13][16] ='/';
            backend_grid [4][4] = '9';
            grid_update(grid);
            chances += 1;
            break;
        default:
            std::cout << "INVAID INPUT";
            is_running = false;
            break;
        }
        is_running1= PVP_logic_horizontal_player_1(backend_grid,is_running1);
        is_running2 = PVP_logic_vertical_player_1(backend_grid,is_running2);
        is_running3 = PVP_logic_diagonal_1_player_1(backend_grid,is_running3);
        is_running4 = PVP_logic_diagonal_2_player_1(backend_grid,is_running4);
        if ((is_running1 ==false) ||(is_running2==false)|| (is_running3==false) || (is_running4 == false)){
            is_running =false ;
            break;
        }  
        if (chances == 9){
            std::cout <<"----------------------------------------------------------\n";
            std::cout <<"----------------------IT'S A  DRAW------------------------\n";
            std::cout <<"----------------------------------------------------------\n";
            break;
        }
        int user_input_2;                                 //Circle
        std::cout <<"----------------------------------------------------------\n";                            // Cross
        std::cout <<"                Enter user input(Player2): ";
        std::cin >> user_input_2;
        std::cout <<"----------------------------------------------------------\n";
        switch (user_input_2){
        case 1:
            grid [0][2] ='/';
            grid [0][3] ='\\';
            grid [1][1] ='/';
            grid [1][4] ='\\';
            grid [2][4] ='/';
            grid [2][1] ='\\';
            grid [3][3] ='/';
            grid [3][2] ='\\';
            backend_grid [0][0] ='3';
            grid_update(grid);
            chances += 1;
            break;
        case 2:
            grid [0][9] ='/';
            grid [0][10] ='\\';
            grid [1][8] ='/';
            grid [1][11] ='\\';
            grid [2][11] ='/';
            grid [2][8] ='\\';
            grid [3][10] ='/';
            grid [3][9] ='\\';
            backend_grid [0][2] ='3';
            grid_update(grid);
            chances += 1;
            break;
        case 3:
            grid [0][16] ='/';
            grid [0][17] ='\\';
            grid [1][15] ='/';
            grid [1][18] ='\\';
            grid [2][18] ='/';
            grid [2][15] ='\\';
            grid [3][17] ='/';
            grid [3][16] ='\\';
            backend_grid[0][4] = '3';
            grid_update(grid);
            chances += 1;
            break;
        case 4:
            grid [5][2] ='/';
            grid [5][3] ='\\';
            grid [6][1] ='/';
            grid [6][4] ='\\';
            grid [7][4] ='/';
            grid [7][1] ='\\';
            grid [8][3] ='/';
            grid [8][2] ='\\';
            backend_grid [2][0] = '3';
            grid_update(grid);
            chances += 1;
            break;
        case 5:
            grid [5][9] ='/';
            grid [5][10] ='\\';
            grid [6][8] ='/';
            grid [6][11] ='\\';
            grid [7][11] ='/';
            grid [7][8] ='\\';
            grid [8][10] ='/';
            grid [8][9] ='\\';
            backend_grid [2][2] = '3'; 
            grid_update(grid);
            chances += 1;
            break;
        case 6:
            grid [5][16] ='/';
            grid [5][17] ='\\';
            grid [6][15] ='/';
            grid [6][18] ='\\';
            grid [7][18] ='/';
            grid [7][15] ='\\';
            grid [8][17] ='/';
            grid [8][16] ='\\';
            backend_grid [2][4] = '3';
            grid_update(grid);
            chances += 1;
            break;
        case 7:
            grid [10][2] ='/';
            grid [10][3] ='\\';
            grid [11][1] ='/';
            grid [11][4] ='\\';
            grid [12][4] ='/';
            grid [12][1] ='\\';
            grid [13][3] ='/';
            grid [13][2] ='\\';
            backend_grid [4][0] = '3';
            grid_update(grid);
            chances += 1;
            break;
        case 8:
            grid [10][9] ='/';
            grid [10][10] ='\\';
            grid [11][8] ='/';
            grid [11][11] ='\\';
            grid [12][11] ='/';
            grid [12][8] ='\\';
            grid [13][10] ='/';
            grid [13][9] ='\\';
            backend_grid [4][2] = '3';
            grid_update(grid);
            chances += 1;
            break;
        case 9:
            grid [10][16] ='/';
            grid [10][17] ='\\';
            grid [11][15] ='/';
            grid [11][18] ='\\';
            grid [12][18] ='/';
            grid [12][15] ='\\';
            grid [13][17] ='/';
            grid [13][16] ='\\';
            backend_grid [4][4] = '3';
            grid_update(grid);
            chances += 1;
            break;
        default:
            std::cout << "INVAID INPUT";
            is_running = false;
            break;
        
        }
        is_running5= PVP_logic_horizontal_player_2(backend_grid,is_running5);
        is_running6 = PVP_logic_vertical_player_2(backend_grid,is_running6);
        is_running7 = PVP_logic_diagonal_1_player_2(backend_grid,is_running7);
        is_running8 = PVP_logic_diagonal_2_player_2(backend_grid,is_running8);
        if ((is_running5 ==false) ||(is_running6==false)|| (is_running7==false) || (is_running8 == false)){
            is_running =false ;
            break;
        }
    }
}

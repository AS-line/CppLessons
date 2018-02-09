// App.cpp: определяет точку входа для консольного приложения.
//
/*cout << "       " << my_cube.up[0] << " " << my_cube.up[1] << " " << my_cube.up[2] << "\n       " << my_cube.up[3] << " " << my_cube.up[4] << " " << my_cube.up[5] << "\n       " << my_cube.up[6] << " " << my_cube.up[7] << " " << my_cube.up[8] << endl;
    cout << endl;
    cout << my_cube.left[0] << " " << my_cube.left[1] << " " << my_cube.left[2] << "  " << my_cube.front[0] << " " << my_cube.front[1] << " " << my_cube.front[2] << "  " << my_cube.right[0] << " " << my_cube.right[1] << " " << my_cube.right[2] << "  " << my_cube.back[0] << " " << my_cube.back[1] << " " << my_cube.back[2] << endl;
    cout << my_cube.left[3] << " " << my_cube.left[4] << " " << my_cube.left[5] << "  " << my_cube.front[3] << " " << my_cube.front[4] << " " << my_cube.front[5] << "  " << my_cube.right[3] << " " << my_cube.right[4] << " " << my_cube.right[5] << "  " << my_cube.back[3] << " " << my_cube.back[4] << " " << my_cube.back[5] << endl;
    cout << my_cube.left[6] << " " << my_cube.left[7] << " " << my_cube.left[8] << "  " << my_cube.front[6] << " " << my_cube.front[7] << " " << my_cube.front[8] << "  " << my_cube.right[6] << " " << my_cube.right[7] << " " << my_cube.right[8] << "  " << my_cube.back[6] << " " << my_cube.back[7] << " " << my_cube.back[8] << endl;
    cout << endl;
    cout << "       " << my_cube.down[0] << " " << my_cube.down[1] << " " << my_cube.down[2] << "\n       " << my_cube.down[3] << " " << my_cube.down[4] << " " << my_cube.down[5] << "\n       " << my_cube.down[6] << " " << my_cube.down[7] << " " << my_cube.down[8] << endl;*/


#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void show_statistic(char front[], char up[], char right[], char down[], char left[], char back[]) {
    cout << "       " << up[0] << " " << up[1] << " " << up[2] << "\n       " << up[3] << " " << up[4] << " " << up[5] << "\n       " << up[6] << " " << up[7] << " " << up[8] << endl;
    cout << endl;
    cout << left[0] << " " << left[1] << " " << left[2] << "  " << front[0] << " " << front[1] << " " << front[2] << "  " << right[0] << " " << right[1] << " " << right[2] << "  " << back[0] << " " << back[1] << " " << back[2] << endl;
    cout << left[3] << " " << left[4] << " " << left[5] << "  " << front[3] << " " << front[4] << " " << front[5] << "  " << right[3] << " " << right[4] << " " << right[5] << "  " << back[3] << " " << back[4] << " " << back[5] << endl;
    cout << left[6] << " " << left[7] << " " << left[8] << "  " << front[6] << " " << front[7] << " " << front[8] << "  " << right[6] << " " << right[7] << " " << right[8] << "  " << back[6] << " " << back[7] << " " << back[8] << endl;
    cout << endl;
    cout << "       " << down[0] << " " << down[1] << " " << down[2] << "\n       " << down[3] << " " << down[4] << " " << down[5] << "\n       " << down[6] << " " << down[7] << " " << down[8] << endl;
}

// ход кубика R
void step_R(char layer_front[], char layer_up[], char layer_right[], char layer_down[], char layer_left[], char layer_back[]) {
    //---------------------------------
    char clone_front[] = { layer_front[0], layer_front[1], layer_front[2], layer_front[3], layer_front[4], layer_front[5], layer_front[6], layer_front[7], layer_front[8] };
    char clone_up[] = { layer_up[0], layer_up[1], layer_up[2], layer_up[3], layer_up[4], layer_up[5], layer_up[6] , layer_up[7], layer_up[8] };
    char clone_right[] = { layer_right[0], layer_right[1], layer_right[2], layer_right[3], layer_right[4] ,layer_right[5] ,layer_right[6], layer_right[7], layer_right[8] };
    char clone_down[] = { layer_down[0], layer_down[1], layer_down[2], layer_down[3], layer_down[4], layer_down[5], layer_down[6], layer_down[7], layer_down[8] };
    char clone_left[] = { layer_left[0], layer_left[1], layer_left[2], layer_left[3], layer_left[4], layer_left[5], layer_left[6], layer_left[7], layer_left[8] };
    char clone_back[] = { layer_back[0], layer_back[1], layer_back[2], layer_back[3], layer_back[4], layer_back[5], layer_back[6], layer_back[7], layer_back[8] };
    //---------------------------------

    layer_front[2] = clone_down[2];
    layer_front[5] = clone_down[5];
    layer_front[8] = clone_down[8];

    layer_up[2] = clone_front[2];
    layer_up[5] = clone_front[5];
    layer_up[8] = clone_front[8];

    layer_back[0] = clone_up[8];
    layer_back[3] = clone_up[5];
    layer_back[6] = clone_up[2];

    layer_down[2] = clone_back[6];
    layer_down[5] = clone_back[3];
    layer_down[8] = clone_back[0];

    layer_right[0] = clone_right[6];
    layer_right[1] = clone_right[3];
    layer_right[2] = clone_right[0];
    layer_right[3] = clone_right[7];
    layer_right[4] = clone_right[4];
    layer_right[5] = clone_right[1];
    layer_right[6] = clone_right[8];
    layer_right[7] = clone_right[5];
    layer_right[8] = clone_right[2];

    //cout << "\n" << clone_front[4] << endl;
    //cout << "\n" << clone_up << endl;
    //cout << "\n" << clone_right << endl;
    //cout << "\n" << clone_down<< endl;
    //cout << "\n" << clone_left << endl;
    //cout << "\n" << clone_back << endl;
}

//ход кубика R_CCW(R против часовой стрелки)
void step_RCCW(char layer_front[], char layer_up[], char layer_right[], char layer_down[], char layer_left[], char layer_back[]) {
    //---------------------------------
    char clone_front[] = { layer_front[0], layer_front[1], layer_front[2], layer_front[3], layer_front[4], layer_front[5], layer_front[6], layer_front[7], layer_front[8] };
    char clone_up[] = { layer_up[0], layer_up[1], layer_up[2], layer_up[3], layer_up[4], layer_up[5], layer_up[6] , layer_up[7], layer_up[8] };
    char clone_right[] = { layer_right[0], layer_right[1], layer_right[2], layer_right[3], layer_right[4] ,layer_right[5] ,layer_right[6], layer_right[7], layer_right[8] };
    char clone_down[] = { layer_down[0], layer_down[1], layer_down[2], layer_down[3], layer_down[4], layer_down[5], layer_down[6], layer_down[7], layer_down[8] };
    char clone_left[] = { layer_left[0], layer_left[1], layer_left[2], layer_left[3], layer_left[4], layer_left[5], layer_left[6], layer_left[7], layer_left[8] };
    char clone_back[] = { layer_back[0], layer_back[1], layer_back[2], layer_back[3], layer_back[4], layer_back[5], layer_back[6], layer_back[7], layer_back[8] };
    //---------------------------------

    layer_front[2] = clone_up[2];
    layer_front[5] = clone_up[5];
    layer_front[8] = clone_up[8];

    layer_up[2] = clone_back[6];
    layer_up[5] = clone_back[3];
    layer_up[8] = clone_back[0];

    layer_back[0] = clone_down[8];
    layer_back[3] = clone_down[5];
    layer_back[6] = clone_down[2];

    layer_down[2] = clone_front[2];
    layer_down[5] = clone_front[5];
    layer_down[8] = clone_front[8];

    layer_right[0] = clone_right[2];
    layer_right[1] = clone_right[5];
    layer_right[2] = clone_right[8];
    layer_right[3] = clone_right[1];
    layer_right[4] = clone_right[4];
    layer_right[5] = clone_right[7];
    layer_right[6] = clone_right[0];
    layer_right[7] = clone_right[3];
    layer_right[8] = clone_right[6];
}

//ход кубика U
void step_U(char layer_front[], char layer_up[], char layer_right[], char layer_down[], char layer_left[], char layer_back[]) {
    //---------------------------------
    char clone_front[] = { layer_front[0], layer_front[1], layer_front[2], layer_front[3], layer_front[4], layer_front[5], layer_front[6], layer_front[7], layer_front[8] };
    char clone_up[] = { layer_up[0], layer_up[1], layer_up[2], layer_up[3], layer_up[4], layer_up[5], layer_up[6] , layer_up[7], layer_up[8] };
    char clone_right[] = { layer_right[0], layer_right[1], layer_right[2], layer_right[3], layer_right[4] ,layer_right[5] ,layer_right[6], layer_right[7], layer_right[8] };
    char clone_down[] = { layer_down[0], layer_down[1], layer_down[2], layer_down[3], layer_down[4], layer_down[5], layer_down[6], layer_down[7], layer_down[8] };
    char clone_left[] = { layer_left[0], layer_left[1], layer_left[2], layer_left[3], layer_left[4], layer_left[5], layer_left[6], layer_left[7], layer_left[8] };
    char clone_back[] = { layer_back[0], layer_back[1], layer_back[2], layer_back[3], layer_back[4], layer_back[5], layer_back[6], layer_back[7], layer_back[8] };
    //---------------------------------

    layer_front[0] = clone_right[0];
    layer_front[1] = clone_right[1];
    layer_front[2] = clone_right[2];

    layer_right[0] = clone_back[0];
    layer_right[1] = clone_back[1];
    layer_right[2] = clone_back[2];

    layer_back[0] = clone_left[0];
    layer_back[1] = clone_left[1];
    layer_back[2] = clone_left[2];

    layer_left[0] = clone_front[0];
    layer_left[1] = clone_front[1];
    layer_left[2] = clone_front[2];

    layer_up[0] = clone_up[6];
    layer_up[1] = clone_up[3];
    layer_up[2] = clone_up[0];
    layer_up[3] = clone_up[7];
    layer_up[4] = clone_up[4];
    layer_up[5] = clone_up[1];
    layer_up[6] = clone_up[8];
    layer_up[7] = clone_up[5];
    layer_up[8] = clone_up[2];
}

//ход кубика U_CCR(U против часовой стрелки)
void step_UCCR(char layer_front[], char layer_up[], char layer_right[], char layer_down[], char layer_left[], char layer_back[]) {
    //---------------------------------
    char clone_front[] = { layer_front[0], layer_front[1], layer_front[2], layer_front[3], layer_front[4], layer_front[5], layer_front[6], layer_front[7], layer_front[8] };
    char clone_up[] = { layer_up[0], layer_up[1], layer_up[2], layer_up[3], layer_up[4], layer_up[5], layer_up[6] , layer_up[7], layer_up[8] };
    char clone_right[] = { layer_right[0], layer_right[1], layer_right[2], layer_right[3], layer_right[4] ,layer_right[5] ,layer_right[6], layer_right[7], layer_right[8] };
    char clone_down[] = { layer_down[0], layer_down[1], layer_down[2], layer_down[3], layer_down[4], layer_down[5], layer_down[6], layer_down[7], layer_down[8] };
    char clone_left[] = { layer_left[0], layer_left[1], layer_left[2], layer_left[3], layer_left[4], layer_left[5], layer_left[6], layer_left[7], layer_left[8] };
    char clone_back[] = { layer_back[0], layer_back[1], layer_back[2], layer_back[3], layer_back[4], layer_back[5], layer_back[6], layer_back[7], layer_back[8] };
    //---------------------------------

    layer_front[0] = clone_left[0];
    layer_front[1] = clone_left[1];
    layer_front[2] = clone_left[2];

    layer_right[0] = clone_front[0];
    layer_right[1] = clone_front[1];
    layer_right[2] = clone_front[2];

    layer_back[0] = clone_right[0];
    layer_back[1] = clone_right[1];
    layer_back[2] = clone_right[2];

    layer_left[0] = clone_back[0];
    layer_left[1] = clone_back[1];
    layer_left[2] = clone_back[2];

    layer_up[0] = clone_up[2];
    layer_up[1] = clone_up[5];
    layer_up[2] = clone_up[8];
    layer_up[3] = clone_up[1];
    layer_up[4] = clone_up[4];
    layer_up[5] = clone_up[7];
    layer_up[6] = clone_up[0];
    layer_up[7] = clone_up[3];
    layer_up[8] = clone_up[6];
}

//структура кубика
struct Cube {
    char front[10];
    char up[10];
    char right[10];
    char down[10];
    char left[10];
    char back[10];
};
 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Cube my_cube = { { 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R', 'R' },{ 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'Y' },{ 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G','G' },{ 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W' },{ 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B' },{ 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' } };
    //Cube my_cube = { { 'R', 'R', 'W', 'R', 'R', 'W', 'R', 'R', 'W' }, {'Y', 'Y', 'R', 'Y', 'Y', 'R', 'Y', 'Y', 'R'},{ 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'G','G'},{ 'W', 'W', 'O', 'W', 'W', 'O', 'W', 'W', 'O'},{ 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B' },{ 'Y', 'O', 'O', 'Y', 'O', 'O', 'Y', 'O', 'O' } };
    
    for (int i = 1; i <= 6; i++) {
        system("cls");
        show_statistic(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
        step_R(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
        Sleep(800);
        //cin.get();
        system("cls");
        show_statistic(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
        step_U(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
        Sleep(800);
        //cin.get();
        system("cls");
        show_statistic(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
        step_RCCW(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
        Sleep(800);
        //cin.get();
        system("cls");
        show_statistic(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
        step_UCCR(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
        Sleep(800);
        //cin.get();
        system("cls");
        show_statistic(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
    }

    cin.get();
    return 0;
}
/*резервные строчки*/
//show_statistic(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
//step_R(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
//step_RCCW(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
//step_U(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
//step_UCCR(my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back);
//my_cube.front, my_cube.up, my_cube.right, my_cube.down, my_cube.left, my_cube.back
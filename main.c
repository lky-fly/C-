#include "wuziqi.h"
#include "stdio.h"


int main()

{

   menu();
   chess_init();//棋盘初始化
   while(1){
   print_chess();//打印棋盘
   play_move();//玩家落子
   print_chess();//打印棋盘
   isfull();//棋盘是否已经满了
   checkwinner();//判断胜负
   }

    return 0;
}
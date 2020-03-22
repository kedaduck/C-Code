#include <windows.h>
#include <stdio.h>

int main(){

    

    return 0;
    

}

//获取鼠标实时位置
void getMousePoint(){
    POINT mouseLoc;
    while ( 1 ){
        GetCursorPos(&mouseLoc);
        printf("x:%d\t y:%d\n", mouseLoc.x, mouseLoc.y);
        Sleep(300);
    }
}

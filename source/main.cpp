/* 
-----------------------------------------------
Test Game by Iwan Ingman (https://iwaningman.com)
Created on 24th of August 2020.
Also my first C++ Program so yay.
-----------------------------------------------
*/

#include <nds.h>

#include <nf_lib.h>

#include <gl2d.h>


int main(void) {
        videoSetMode(MODE_5_3D);
        glScreen2D();

    while(1) {
        scanKeys();
        int held = keysHeld();
        
        glBegin2D();

        glBoxFilled(10,10,30,30, RGB15(0,255,0));

        glEnd2D();
        glFlush(0);
        swiWaitForVBlank();
    }
}
#include <sapi.h>
#include <joystick.h>

// se realiza un cambio en la asignación para que resulten valores de incremento de izq a derecha, y de abajo hacia arriba
void leer_joystick(coord *u, int canal_x, int canal_y){
    u->x = adcRead( canal_y ); // para que a la izquierda valga 0 y a la derecha 1023
    u->y = adcRead( canal_x ); // para que abajo valga 0 y arriba 1023 
    }
    
 void mostrar_joystick(coord pos)
{
    printf("[ %d,%d ]\r\n", pos.x, pos.y);
}   
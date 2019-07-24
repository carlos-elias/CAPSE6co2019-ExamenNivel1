#include "app.h"         // <= Su propia cabecera (opcional)
#include "sapi.h"        // <= Biblioteca sAPI
#include <stdio.h>
#include <joystick.h>


coord posicion;

int main()
{
    boardConfig();
    uartConfig( UART_USB, 115200);

    posicion.x = 0;
    posicion.y = 0;
    uint16_t cont = 0;
    
    while(1) {

        if(cont >= 1000) {
            cont = 0;
            leer_joystick(&posicion, CH1,CH2);
            mostrar_joystick(posicion);
        }
        delay(1);
        cont++;
    }

    return 0;
}


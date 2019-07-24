
typedef struct {
    int x;
    int y;
} coord;

void leer_joystick(coord *u, int canal_x, int canal_y); // función que devuelve x e y (modificandolos variables en una estructura)

void mostrar_joystick(coord pos);


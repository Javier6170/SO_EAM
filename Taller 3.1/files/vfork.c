#include <unistd.h>

int main() {
    if (vfork() == 0) {
        // Proceso hijo
        sleep(60); // Espera 60 segundos
        _exit(0);  // Termina el proceso hijo sin limpieza de memoria
    }
    return 0;  // El proceso padre continúa aquí
}


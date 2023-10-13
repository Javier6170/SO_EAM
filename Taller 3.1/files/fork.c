#include <stdio.h>

int main() {
    if (fork() > 0) {
        // El proceso padre duerme durante 60 segundos
        sleep(60);
    }
    return 0;
}

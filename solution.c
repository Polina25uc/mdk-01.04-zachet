/*Разработать программу solution, которая осуществляет поиск родительского PID текущего процесса в файловой системе proc и выводит найденное значение на консоль.  Результат, возвращаемый функций должен быть выведен отдельной строкой(должен оканчиваться символом перевода строки \n) в stdio.*/
#include <stdio.h>

int main() {
    FILE* file = fopen("/proc/self/status", "r");
    if (file == NULL) {
        perror("Cannot open /proc/self/status");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        int ppid;
        if (sscanf(line, "PPid:\t%d", &ppid) == 1) {
            printf("%d\n", ppid);
            break;
        }
    }

    fclose(file);
    return 0;
}

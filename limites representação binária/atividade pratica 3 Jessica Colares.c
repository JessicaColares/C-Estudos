// Jessica de Figueredo Colares
// numero de matrícula: 22060036

// e = m*C^2
//  E = energia, m = massa e c2 = velocidade da luz elevada ao quadrado.
// velocidade da luz 1,079e+9, ou 299.792,458km/s

#include <stdio.h>


int questao1a(int massa) {
    int energia_max;
    double c;
    energia_max = 2147483647;
    c = 8.987551787368176e+16;
    massa = energia_max/c;
}


int questao1b(long int massa) {
    int energia_max;
    double c;
    energia_max = 2147483647;
    c = 8.987551787368176e+16;
    massa = energia_max/c;
}

long int questao1c(long int massa) {
    long int energia_max;
    double c;
    energia_max = 9223372036854775807;
    c = 8.987551787368176e+16;
    massa = energia_max/c;
}

long int questao1d(float massa) {
    long int energia_max;
    double c;
    energia_max = 9223372036854775807;
    c = 8.987551787368176e+16;
    massa = energia_max/c;
}

float questao1e(float massa) {
    float energia_max;
    double c;
    energia_max = 3.40282e+38;
    c = 8.987551787368176e+16;
    massa = energia_max/c;
}

float questao1f(double massa) {
    float energia_max;
    double c;
    energia_max = 3.40282e+38;
    c = 8.987551787368176e+16;
    massa = energia_max/c;
}

double questao1g(double massa) {
    double energia_max, c;
    energia_max = 1.79769e+308;
    c = 8.987551787368176e+16;
    massa = energia_max/c;
}

int questao2a(int energia) {
    int massa_min;
    double c;
    massa_min = 1;
    c = 8.987551787368176e+16;
    energia = massa_min*c;
}

int questao2b(long int energia) {
    int massa_min;
    double c;
    massa_min = 1;
    c = 8.987551787368176e+16;
    energia = massa_min*c;
}

long int questao2c(long int energia) {
    long int massa_min;
    double c;
    massa_min = 1;
    c = 8.987551787368176e+16;
    energia = massa_min*c;
}

long int questao2d(float energia) {
    long int massa_min;
    double c;
    massa_min = 1.17549e-38;
    c = 8.987551787368176e+16;
    energia = massa_min*c;
}

float questao2e(float energia) {
    float massa_min;
    double c;
    massa_min = 1.17549e-38;
    c = 8.987551787368176e+16;
    energia = massa_min*c;
}

float questao2f(double energia) {
    float massa_min;
    double c;
    massa_min = 1.17549e-38;
    c = 8.987551787368176e+16;
    energia = massa_min*c;
}

double questao2g(double energia) {
    double massa_min, c;
    massa_min = 1.17549e-38;
    c = 8.987551787368176e+16;
    energia =  massa_min*c;
}

int main() {
    int massa;
    int energia;

    // energia_max = m*c;
    // e = massa_min*c;
    
    printf("1) Qual a massa assosciada à energia máxima representável nos seguintes formatos:\n");

    printf("a) int E; int m: %d\n", questao1a(massa));
    printf("b) int E; long int m: %d\n", questao1b(massa));
    printf("c) long int E; long int m: %d\n", questao1c(massa));
    printf("d) long int E; float m: %e\n", questao1d(massa));
    printf("e) float E; float m: %e\n", questao1e(massa));
    printf("f) float E; double m: %e\n", questao1f(massa));
    printf("g) double E; double m: %e\n", questao1g(massa));

    printf("2) Qual a energia associada à massa mínima diferente de zero representável nos seguintes formatos:\n");

    printf("a) int E; int m: %d\n", questao2a(energia));
    printf("b) int E; long int m: %d\n", questao2b(energia));
    printf("c) long int E; long int m: %d\n", questao2c(energia));
    printf("d) long int E; float m: %e\n", questao2d(energia));
    printf("e) float E; float m: %e\n", questao2e(energia));
    printf("f) float E; double m: %e\n", questao2f(energia));
    printf("g) double E; double m: %e\n", questao2g(energia));

    return 0;

}
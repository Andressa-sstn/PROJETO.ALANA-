#ifndef SENSOR_H
#define SENSOR_H

#include <stdint.h>

// Definição dos pinos para os sensores
#define PINO_SENSOR_TEMPERATURA 0
#define PINO_SENSOR_ULTRASSOM 1

// Funções para ler os dados dos sensores
float ler_temperatura(int pino);
float ler_ultrassom(int pino);

#endif  // SENSOR_H

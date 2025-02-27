#include <stdio.h>
#include <stdint.h>
#include "sensor.h"
#include "comunicacao.h"

// Definição de pinos para os sensores e comunicação
#define PINO_SENSOR_TEMPERATURA 0
#define PINO_SENSOR_ULTRASSOM 1
#define PINO_COMUNICACAO_TX 2
#define PINO_COMUNICACAO_RX 3

int main() {
    float temperatura;
    float ultrassom_dados;
    bool alerta = false;

    // Inicialização dos sensores e comunicação
    inicializar_sensores();
    inicializar_comunicacao();

    while (1) {
        // Leitura dos dados dos sensores
        temperatura = ler_temperatura(PINO_SENSOR_TEMPERATURA);
        ultrassom_dados = ler_ultrassom(PINO_SENSOR_ULTRASSOM);

        // Processamento dos dados e detecção de anomalias
        if (temperatura > 37.5 || ultrassom_dados > 100) {
            alerta = true;
        }

        // Exibição dos resultados e envio de alertas
        exibir_resultados(temperatura, ultrassom_dados, alerta);
        enviar_alerta(alerta);

        // Delay para a próxima leitura
        delay(1000);
    }

    return 0;
}

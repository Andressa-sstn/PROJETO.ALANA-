#ifndef COMUNICACAO_H
#define COMUNICACAO_H

#include <stdint.h>

// Definição dos pinos para a comunicação
#define PINO_COMUNICACAO_TX 2
#define PINO_COMUNICACAO_RX 3

// Função para enviar alerta
void enviar_alerta(bool alerta);

#endif  // COMUNICACAO_H

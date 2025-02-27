CC = gcc
CFLAGS = -Wall -Werror
LDFLAGS = -lm

all: main.o sensor.o comunicacao.o inicializacao.o exibir_resultados.o
    $(CC) $(CFLAGS) -o projeto main.o sensor.o comunicacao.o inicializacao.o exibir_resultados.o $(LDFLAGS)

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

sensor.o: sensor.c
    $(CC) $(CFLAGS) -c sensor.c

comunicacao.o: comunicacao.c
    $(CC) $(CFLAGS) -c comunicacao.c

inicializacao.o: inicializacao.c
    $(CC) $(CFLAGS) -c inicializacao.c

exibir_resultados.o: exibir_resultados.c
    $(CC) $(CFLAGS) -c exibir_resultados.c

clean:
    rm -f *.o projeto

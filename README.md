# Sistema de irrigação automático utilizando a plataforma arduino

## Como funciona
Neste projeto, utilizamos o microcontrolador Arduino Uno em conjunto com o sensor de umidade de solo, como atuador uma mini bomba d'água e um módulo relé para acionamento da bomba. Além disso, foi necessário o uso de jumpers macho-fêmea e macho-macho para realizar as conexões adequadas.
Inicialmente, fizemos as conexões dos componentes básicos. Primeiro conectamos o pino 5V do Arduino à trilha positiva do protoboard e o pino GND à trilha negativa, fornecendo assim a alimentação necessária.
Para o sensor de umidade de solo, conectamos a placa no protoboard e conectamos as pontas de prova por meio de jumpers, garantindo uma conexão segura. As pontas de prova foram inseridas no solo para monitorar a umidade. Utilizamos os pinos disponíveis no protoboard, alimentados pelo Arduino, para fornecer energia ao sensor. O pino VCC do módulo de umidade foi ligado à trilha de 5V do protoboard, enquanto o pino GND foi ligado à trilha negativa. A saída digital do sensor foi ligada ao pino 2 do Arduino.
No módulo relé, utilizamos jumpers macho-fêmea para conectar o pino VCC (positivo) e o pino GND (negativo) do módulo às trilhas de alimentação do Arduino. O pino IN do módulo relé foi conectado ao pino 3 do Arduino para receber comandos do Arduino.
Por fim, ligamos o atuador, que é a  bomba d'água, ao relé. Conectamos o fio positivo do atuador no terminal normalmente aberto do relé e fio negativo do atuador foi conectado no protoboard na trilha negativa. E o terminal comum do relé foi conectado à trilha positiva do protoboard.

## Software utilizados

Arduino uno IDE - StandartFirmata
Node-Red
Aedes Broker MQTT

## Hardware utilizado
Mini Bomba De Água Submersível 3 A 6V
Arduino Uno R3 + Cabo USB 2.0 - A-B
A Protoboard MB 102
Sensor de umidade de solo
Módulo Relé
Jumpers macho e femea / macho macho
Fonte 5v Externa

## Protocolo MQTT
Aedes Broker MQTT


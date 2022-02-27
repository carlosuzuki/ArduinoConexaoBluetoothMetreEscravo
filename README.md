

Língua de verificação: 
Português do Brasil

Estilo de escrita: 
Formal
Foram detectados: 80 erros ortográficos e 4 erros sintáticos.	Cancelar	   Aceitar Alterações

# Conexão AUTOMÁTICA entre 2 Arduinos via Bluetooth
O principal objetivo desse projeto é mostrar como configurar os módulos Bluetooth: JDY33 e HC05 para que se contem automaticamente quando estiverem ligados.

# Componentes utilizados
- 1 x Modulo Bluetooth JDY-33
- 1 x Modulo Bluetooth HC05
- 2 x Arduino

# Passo 1 - Montagem do Hardware do Mestre
| HC05 | Arduino Uno, Mega ou Nano |
| ------ | ------ |
| Vcc | 5V |
| Gnd | GND |
| Tx | Pin Digital 10 |
| Rx | Pin Digital 11 |


# Passo 2 - Configurando o do módulo HC05 como Mestre
Para configurar o módulo bluetooth HC05 é utilizado comandos AT enviados via UART.
Todos os comandos AT disponíveis para configurar o Modulo estam descritos no manual do mesmo que se encontra anexado nesse projeto como: "HC-05 Datasheet"
Para enviar os comandos AT via UART é utilizado o Arduino que esta conectado no mesmo (Passo 1) carregado com o programa "serialParaComandosAT" anexado nesse projeto. Para carregar o programa no Arduino e enviar os comandos é necessario a IDE do Arduino que pode ser baixada no proprio site da Arduino: https://www.arduino.cc/en/software

Importante: Para que o modulo HC05 reconheça que esta sendo configurado é necessario colocalo em modo BootMode. Para colocar o módulo em BootMode é necessario deixar pressionado o botao do mesmo, aproximadamente durante 2 segundos, após a alimentação do mesmo.

Abra o monitor serial da IDE do Arduino configure o memso em:
"Ambos, NL e CL"
Velocidade de comunicação: 9600

Digite o comando "AT". Deve retornar "OK"
Digite o comando "AT+ROLE=1". Deve retornar "OK" . Esse comando configura o Modulo HC05 como mestre

# Passo 3 - Programação Mestre
Carregue o programa: "Bluetooth_Master" no Arduino que esta conectado ao HC05.

# Passo 4 - Montagem do Hardware do Escravo
| JDY33 | Arduino Uno, Mega ou Nano |
| ------ | ------ |
| Vcc | 5V |
| Gnd | GND |
| Tx | Pin Digital 0 |
| Rx | Pin Digital 1 |



Língua de verificação: 
Português do Brasil

Estilo de escrita: 
Formal
Foram detectados: 8 erros ortográficos e 1 erro sintático.	Cancelar	   Aceitar Alterações

# Passo 5 - Programação Mestre
Carregue o programa: "Bluetooth_Slave" no Arduino que esta conectado ao JDY33.

Pronto! Basta ligar ambos os módulos simultaneamente e a conexão será estabelecida automaticamente

# Observações importantes
O grande segredo revelado nesse projeto é que a conexão é feita automática. Basta configurar o HC05 como mestre. Não é necessário apontar o MAC adress do escravo!
Outro detalhe que não esta no datasheet do HC05 é que os comandos AT devem ser enviados a uma velocidade de 38400 e não 9600!
OBS: Esse projeto foi desenvolvido com apenas 1 mestre e 1 escravo.

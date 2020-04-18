// Biblioteca
#include <Servo.h>

// Configurando servo no motor shield
Servo servo;

void setup() {
  // Inicializando Serial Monitor
  Serial.begin(9600);
  
  // Inicializando o servo motor
  servo.attach(10);  
}

void loop() {
  //Inicializando teste
  Serial.println("Inicializando Teste");
  delay(2000);

  //Olhando para a direita
  Serial.println("Olhando para a Direita");
  olharParaDireita();
  delay(1000);

  //Olhando para a esquerda
  Serial.println("Olhando para a Esquerda");
  olharParaEsquerda();
  delay(1000);

  //Movimento de radar
  Serial.println("Movimento de Radar");
  movRadar();
  delay(1000);
}

void olharParaDireita(){
  servo.write(180);
  delay(1500);
  servo.write(90);
}

void olharParaEsquerda(){
  servo.write(0);
  delay(1500);
  servo.write(90);
}

void movRadar(){
  int i, j;
  for(i = 0; i <= 180; i += 2){
    delay(10);
    servo.write(i);
    delay(10);
  }
  for(j = 180; j >= 0; j -= 2){
    delay(10);
    servo.write(j);
    delay(10);
  }
  servo.write(90);
}

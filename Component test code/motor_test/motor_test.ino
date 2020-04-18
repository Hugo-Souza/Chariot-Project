// Bibliotecas
#include <AFMotor.h>

// Configurando as portas dos motores
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);


void setup() {
  // Inicializando serial monitor
  Serial.begin(9600);
  
  // Velocidade dos motores
  Serial.println("Configurando velocidade dos motores");
  motor1.setSpeed(180);
  motor2.setSpeed(180);
  motor3.setSpeed(180);
  motor4.setSpeed(180);

  // Iniciar motores parados
  Serial.println("Inicializando os motores parados");
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void loop() {
  // Teste do motor 1
  Serial.println("Teste do motor 1");
  Serial.println("Frente - Parado - Tras - Parado");
  motor1.run(FORWARD);
  delay(500);
  motor1.run(RELEASE);
  delay(500);
  motor1.run(BACKWARD);
  delay(500);
  motor1.run(RELEASE);  
  delay(500);
  
  // Teste do motor 2
  Serial.println("Teste do motor 2");
  Serial.println("Frente - Parado - Tras - Parado");
  motor2.run(FORWARD);
  delay(500);
  motor2.run(RELEASE);
  delay(500);
  motor2.run(BACKWARD);
  delay(500);
  motor2.run(RELEASE); 
  delay(500);
  
  // Teste do motor 3
  Serial.println("Teste do motor 3");
  Serial.println("Frente - Parado - Tras - Parado");
  motor3.run(FORWARD);
  delay(500);
  motor3.run(RELEASE);
  delay(500);
  motor3.run(BACKWARD);
  delay(500);
  motor3.run(RELEASE); 
  delay(500);
  
  // Teste do motor 4
  Serial.println("Teste do motor 4");
  Serial.println("Frente - Parado - Tras - Parado");
  motor4.run(FORWARD);
  delay(500);
  motor4.run(RELEASE);
  delay(500);
  motor4.run(BACKWARD);
  delay(500);
  motor4.run(RELEASE); 
  delay(500);
  
  // Teste mover para frente
  Serial.println("Teste mover para frente");
  moverParaFrente();
  delay(1500);
  ficarParado();
  delay(1000);

  // Teste mover para tras
  Serial.println("Teste mover para tras");
  moverParaTras();
  delay(1500);
  ficarParado();
  delay(1000);
  
  // Teste virar para direita
  Serial.println("Teste virar para direita");
  virarParaDireita();
  delay(1500);
  ficarParado();
  delay(1000);
  
  // Teste virar para esquerda
  Serial.println("Teste virar para esquerda");
  virarParaEsquerda();
  delay(1500);
  ficarParado();
  delay(1000);
}

void ficarParado(){
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void moverParaFrente(){
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

void moverParaTras(){
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

void virarParaDireita(){
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

void virarParaEsquerda(){
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

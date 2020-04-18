// Bibliotecas
#include <NewPing.h>

NewPing sonar(A3,A2,200);

int cm;

void setup() {
  // Inicializando o serial monitor
  Serial.begin(9600);
  
}

void loop() {
  // Inicializando Teste
  Serial.println("Inicializando teste");
  delay(1500);

 int i;
 for(i = 0; i <= 10; i++){
  int cm = sonar.ping_cm();
  Serial.print("Teste: ");
  Serial.print(i);
  Serial.print(", distancia:");
  Serial.println(cm);
  delay(2000);
 }

 Serial.println("Teste Finalizado");
 delay(5000);
}

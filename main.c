#include <Servo.h>
#include <NewPing.h>

Servo servo; 
int const trigPin = 6; 
int const echoPin = 5; 
int servoPin = 3;

// Defina a distância máxima para o sensor ultrassônico (em cm)
#define MAX_DISTANCE 200

NewPing sonar(trigPin, echoPin, MAX_DISTANCE);

void setup() { 
    servo.attach(servoPin); 
    servo.write(180); // Inicialmente, o servo está em 180 graus (caixa fechada)
}

void loop() {        
    delay(50); // Aguarda um curto período antes de medir novamente
    int distance = sonar.ping_cm(); // Obtém a distância em cm

    // Verifica se a distância está dentro do intervalo desejado
    if (distance > 0 && distance <= 50) { 
        servo.write(0);    // Abre a caixa (posiciona o servo em 0 graus)
        delay(8000);       // Mantém a caixa aberta por 8 segundos
        servo.write(180);  // Fecha a caixa (posiciona o servo em 180 graus)
    }
}

#include "BluetoothSerial.h"  

#define motor1 26  
#define motor2 25  
#define motor3 33 
#define motor4 32  
#define Velocidade_Motor 150  

BluetoothSerial SerialBlue;  

void setup() {
  Serial.begin(9600);  
  SerialBlue.begin("Bluetooth");

  
  ledcSetup(0, 5000, 8);
  ledcSetup(1, 5000, 8);
  ledcSetup(2, 5000, 8);
  ledcSetup(3, 5000, 8);

  
  ledcAttachPin(motor1, 0);
  ledcAttachPin(motor2, 1);
  ledcAttachPin(motor3, 2);
  ledcAttachPin(motor4, 3);
}

void loop() {
  if (SerialBlue.available()) { 
    char comando = SerialBlue.read();
    
    switch (comando) {
      case 'F': 
        moverFrente(); 
        break;
      case 'T': 
        moverTras(); 
        break;
      case 'D': 
        moverDireita(); 
        break;
      case 'E': 
        moverEsquerda(); 
        break;
      case 'S': 
        Parar(); 
        break;
    }
  }
}

void moverFrente() {
  ledcWrite(0, Velocidade_Motor);
  ledcWrite(1, 0);
  ledcWrite(2, Velocidade_Motor);
  ledcWrite(3, 0);
}

void moverTras() {
  ledcWrite(0, 0);
  ledcWrite(1, Velocidade_Motor);
  ledcWrite(2, 0);
  ledcWrite(3, Velocidade_Motor);
}

void moverDireita() {
  ledcWrite(0, Velocidade_Motor);
  ledcWrite(1, 0);
  ledcWrite(2, 0);
  ledcWrite(3, Velocidade_Motor);
}

void moverEsquerda() {
  ledcWrite(0, 0);
  ledcWrite(1, Velocidade_Motor);
  ledcWrite(2, Velocidade_Motor);
  ledcWrite(3, 0);
}

void Parar() {
  ledcWrite(0, 0);
  ledcWrite(1, 0);
  ledcWrite(2, 0);
  ledcWrite(3, 0);
}
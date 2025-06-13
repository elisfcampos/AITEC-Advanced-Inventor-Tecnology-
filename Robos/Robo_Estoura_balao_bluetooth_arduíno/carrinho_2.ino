// Pinos do Motor A (motor esquerdo) - ligados na ponte H nos pinos A-1A e A-1B
const int motorA1 = 5;  // A-1A
const int motorA2 = 6;  // A-1B

// Pinos do Motor B (motor direito) - ligados na ponte H nos pinos B-1A e B-1B
const int motorB1 = 9;   // B-1A
const int motorB2 = 10;  // B-1B

char comando; // Armazena o comando recebido via Bluetooth

void setup() {
  // Define os pinos dos motores como saída
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);

  // Inicia a comunicação serial com o HC-05
  Serial.begin(9600); // Velocidade padrão do HC-05
}

// Função para mover para frente
void frente() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
}

// Função para mover para trás
void tras() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
}

// Função para virar à esquerda
void esquerda() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
}

// Função para virar à direita
void direita() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
}

// Função para parar o carrinho
void parar() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
}

void loop() {
  // Verifica se chegou algum comando via Bluetooth
  if (Serial.available() > 0) {
    comando = Serial.read(); // Lê o caractere enviado

    switch (comando) {
      case 'R': // Frente
        frente();
        break;
      case 'L': // Trás (Back)
        tras();
        break;
      case 'B': // Esquerda (Left)
        esquerda();
        break;
      case 'F': // Direita (Right)
        direita();
        break;
      case 'S': // Stop (Parar)
        parar();
        break;
      default:
        parar(); // Se comando desconhecido, para por segurança
        break;
    }
  }
}

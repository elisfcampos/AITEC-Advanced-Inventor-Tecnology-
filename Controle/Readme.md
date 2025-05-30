# Minuta de Projeto - Controle 

O objetivo da equipe durante este semestre é desenvolver uma competição de luta para robôs da modalidade "estoura balão", o projeto possui subsistemas que serão integrados ao decorrer das etapas.
São eles:

- Robô;
- Arena;
- Placar;
- **Controle.** 

## Controle

Nosso objetivo é desenvolver um controle gestual funcional, capaz de movimentar o robô usando apenas os gestos realizados pelo operador, promovendo uma experiência única a quem estiver competindo.

### Cronograma de atividades - Entrega 1 - Pré Projeto 

Os campos da tabela abaixo são separadas pela barra, como está disposta logo abaixo.

| Tarefas | Colaborador | Início | Fim | Dias |
|---------|------------|--------|-----|------|
| ✅ Pesquisa de modelos e opções de controles  | Heloísa / José | 24/02/2025 | 13/03/2025| 17 |
| ✅ Pesquisa de componentes e montagem de controles  | Heloísa / José | 24/02/2025 | 13/03/2025| 17 |
| ✅ Documentação/ Apresentação  | Heloísa / José | 24/02/2025 | 14/03/2025| 18 |

### Entrega 2 - Minuta

| Tarefas | Colaborador | Início | Fim | Dias |
|---------|------------|--------|-----|------|
| ✅ Escoha do controle por movimento e componentes  | Heloísa / José | 17/03/2025| 21/03/2025| 04 |
| ✅ Pesquisa dos componentes MPU6050 - Giroscópio Acelerômetro | Heloísa / José | 24/03/2025 | 28/03/2025 | 04 |
| ✅ Integração de componentes iniciais | Heloísa / José | 27/03/2025 | 02/04/2025 | 06 |
| ✅ Documentação/ Apresentação | Heloísa / José | 31/03/2025 | 4/04/2025 | 04 |

### Entrega 3 - Projeto Executivo

| Tarefas | Colaborador | Início | Fim | Dias |
|---------|------------|--------|-----|------|
| ✅ Testes iniciais de componentes e programação  | Heloísa / José | 07/04/2025 | 18/04/2025 | 11 |
| ✅ Montagem de um circuito para teste  | Heloísa / José | 16/04/2025 | 02/05/2025 | 16 |
| ✅ Ajustes de programação  | Heloísa / José | 21/04/2025 | 02/05/2025 | 11 |
| ✅ Testes e incio da configuração do bluetooth | Heloísa / José | 05/05/2025 | 16/05/2025 | 11 |
| ✅ Modelagem da case para colocar os componentes | Heloísa / José | 14/05/2025 | 20/05/2025 | 06 |
| ✅ Documentação/ Apresentação  | Heloísa / José | 19/05/2025 | 30/05/2025 | 11 |


### Entrega 4 - Relatório Final

| Tarefas | Colaborador | Início | Fim | Dias |
|---------|------------|--------|-----|------|
| ⏹ Prototipo finalizado, comunição e progração funcionando  | Heloísa / José | 30/05/2025 | 17/06/25 | 17 |
| ⏹ Feira de Soluções : Prototipo funcionando  | Heloísa / José | 17/06/25 |17/06/25 | 00 |
| ⏹ Finalização do projeto, sistemas integrados e funcionando  | Heloísa / José | 16/06/25 | 17/06/25 | 01 |
| ⏹ Documentação/ Apresentação  | Heloísa / José | 17/06/25 | 16/06/25| 01 |

# Projeto Executivo

Esta etapa aborda o início da montagem do projeto, apresentando todos os componentes fundamentais para o funcionamento do protótipo, suas quantidades e referências para desenvolvimento e montagem.

## Lista de materiais

Esta tópico aborda os materiais necessários para o desenvolvimento do produto, desde os componentes eletrônicos aos mecânicos. A tabela abaixo mostra a relação de componentes utilizados no protótipo. 

| Item | Descrição | Quantidade | Unidade | Valor total |
|---------|------------|--------|-----|------|
|1|Arduino Nano Compatível V3 Atmega328 Ch340 Pino Sold|1|PÇ|R$31,91|
|2|Módulo Bluetooth Hc-05 - Rs232/bluetooth - Master / Slave|1|PÇ|R$33,22|
|3|Kit 2 Bateria Recarregável 18650 3.7v 4.2v Li-ion|2|PÇ|R$60,00|
|4|1 pçs 5.2x8.9cm padrão permanente placa de ensaio solda placa pcb protótipo placa protoboard diy protótipo eletrônica|1|PÇ|R$13,90|
|5|Barra De Pinos Macho - 1x40 - 2,54mm Cor Preto|1|PÇ|R$09,90|
|6|Kit Cabo Jumper Mxm + Mxf + Fxf 120 Unidades 20cm Arduino|1|PÇ|R$26,00|
|7|Fita Auto Adesiva com material Macho + Fêmea 25mm Fixação De Pedais - 1 Metro PRETO|1|MT|R$28,50|
|8|Suporte para 2 Baterias 18650|1|PÇ|R$05,90|
|9|Peças geradas por impressão 3D|2|PÇ|R$00,00|
|10|Kit com 40 LEDs Diversos 5mm Difusos - 4 CORES (Amarelo, Azul, Verde e Vermelho) |1|PÇ|R$16,53|
|11|Acelerômetro E Giroscópio 3 Eixos Mpu-6050 Gy-521|1|PÇ|R$14,90|

O valor total dos componentes em caso de compra para o desenvolvimento do projeto fica em **R$240,78** (duzentos e quarenta reais e setenta e oito centavos). Porém, um membro da equipe há posse de todos os componentes e o auxílio do prof° Alfred Makoto para a impressão das peças 3D, acabou-se dispensando a compra dos materiais e economizando no desenvolvimento do projeto.

## Montagem

Este tópico apresenta a montagem inicial do protótipo, afim de realizar testes de funcionamento e integração dos componentes e funcionamento da programação de acordo com o objetivo da equipe.

### Estrutura (case)

Este subtópico apresenta o desenvolvimento da estrutura mecânica do projeto, onde a parte eletrônica irá embutida para sua proteção e funcionalidade. A estrutura foi dimensionada a parir de uma mão adulta masculina, tornando-a grande, porém não há limitações ou problemas ergonômicos em sua operação, independente da pessoa que irá utiliza-lô. A figuras abaixo apresentam a case em formato de desenho de montagem, em STL, impressa e com a eletrônica imbutida para testes.

![image](https://github.com/user-attachments/assets/d6d46788-17a0-4ca2-b40a-8d146a065070)

![Incredible Maimu](https://github.com/user-attachments/assets/b078ab4e-8be9-43ae-9aa4-860c6ebb8462)

![Bodacious Lahdi](https://github.com/user-attachments/assets/b24187d6-6e7a-4e19-aad6-863fc978a1c3)

![image](https://github.com/user-attachments/assets/01f6a883-21b1-4cdc-a9f9-53a6cf2ff9fe)

### Eletrônica (teste)

Este subtópico apresenta o desenvolvimento da parte eletrônica do projeto, onde ocorre a integração do sensor MPU-6050, o componente que coleta os dados dos gestos, que são processados pelo arduíno nano e serão transmitidos pelo módulo bluetooth HC-05 ao robô, que irá se movimentar de acordo com os dados dos gestos do operador. A imagem a seguir apresenta o diagrama elétrico da solução, com a especificação das conexões dos componentes que formam o circuito.

![image](https://github.com/user-attachments/assets/f0150813-5ac3-4994-96dd-d8b0816285d2)

### Programação (teste)

Este subtópico apresenta a programação desenvolvida para realização de testes de funcionamento do sensor MPU-6050, focado captação de gestos e transmissão de dados coletados, para que possam ser enviados ao robô e movimenta-lo. O código à seguir apresenta a programação inicial, onde cada gesto (frente, trás, direita e esquerda) irá acender um led, significando que o sensor está coletando os dados e a programação está de acordo com o proposto.





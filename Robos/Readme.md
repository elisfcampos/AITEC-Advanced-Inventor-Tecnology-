# **Minuta de Projeto - ROBÔ ESTOURA BALÃO**

## **ESCOPO DO PROJETO**

Esta subseção apresenta o escopo do projeto, onde mostra o que foi definido pela equipe em relação a metas, prazos e entregáveis durante o projeto. 

## **Recursos Disponíveis**

Após um levantamento de materiais disponíveis em nosso inventário, constatamos:
		
- 2x Driver Ponte H L298N;
- 2x ESP32;
- 2x Roda hobby 65mm;
- 2x Motores DC amarelos 3-6V com caixa de redução e eixo duplo;
- 2x Motores DC com Caixa de Redução de Aço;
- 1x Bateria Lip0 11.1v e 1500 Mah;
- 1x Case para baterias 18650 em série;
- 2x Baterias 18650 4V;
- 14x Cabos Jumper Fêmea - Fêmea;
- 1x roda boba.

## **Estimativa de tempo e custos**

Esta subseção apresenta o tempo e custo estimado para o desenvolvimento do projeto, a estimativa de tempo segue as datas das entregas que a equipe deve realizar aos docentes, que foram fixadas no início do projeto. Estão disponíveis dezessete semanas para que a equipe consiga finalizar o produto, antes da feira de soluções que acontece na semana seguinte da apresentação da terceira sprint, o cronograma detalhado estará na próxima subseção. A estimativa de custos para o desenvolvimento do projeto, baseado em nossas pesquisas de mercado, com o valor estimado em trezentos e quarenta e dois reais e cinquenta e três centavos (R$ 342,53), sujeito a alteração durante o decorrer do projeto. Tabela com componentes e valores abaixo.

### **Estimativa de Materiais Robô Estoura Balão**

| Materiais                                                             | Quantidade | Tamanho                                      | Preço Unitário | Preço Total | Link                                                                                                                   |
| --------------------------------------------------------------------- | ---------- | -------------------------------------------- | -------------- | ----------- | ---------------------------------------------------------------------------------------------------------------------- |
| ✅ Módulo Driver Ponte H - L298N                                       | 2          | 43mm A x 43mm L x 27mm A                     | R\$ 14,90      | R\$ 29,80   | -                                                                                                                      |
| ✅ Motor DC                                                            | 4          | 70mm C x 22,44mm A x 36,60mm L               | R\$ 7,90       | R\$ 31,60   | [Link](https://www.robocore.net/motor-motoredutor/motor-dc-3-6v-com-caixa-de-reducao-de-aco)                           |
| ✅ Roda Hobby 65mm                                                     | 4          | 66mm D x 31mm L                              | R\$ 8,50       | R\$ 34,00   | [Link](https://www.robocore.net/roda/roda-hobby-65mm)                                                                  |
| ✅ ESP32                                                               | 2          | 54mm C x 29mm L x 13mm A                     | R\$ 41,90      | R\$ 83,80   | [Link](https://www.robocore.net/wifi/esp32-wifi-bluetooth)                                                             |
| ✅ Mini balão                                                          | 2          | -                                            | -              | -           | -                                                                                                                      |
| ✅ Palito de Bambu Espeto para Churrasco 18cm (pacote com 50 unidades) | 2          | 18cm C                                       | R\$ 8,63       | R\$ 8,63    | [Link](https://www.mercadolivre.com.br/50-palito-de-bambu-espeto-para-churrasco-18cm/p/MLB28181960)                    |
| ✅ Filamento PLA Voolt3D 1.75mm 1kg - Preto Valvet                     | 1          | 1,75mm D - 1KG                               | R\$ 89,00      | R\$ 89,00   | [Link](https://www.robocore.net/filamentos-impressao-3d/filamento-pla-voolt3d-preto-valvet)                            |
| ✅ Parafuso Allen Cilíndrico M4 x 60mm (10 unidades)                   | 2          | 4mm D x 60mm C                               | R\$ 10,90      | R\$ 21,80   | [Link](https://www.robocore.net/parafuso/parafuso-allen-m4-60mm)                                                       |
| ✅ Porca M4 (10 unidades)                                              | 2          | 4mm DI x 7mm L x 7,74mm A                    | R\$ 2,70       | R\$ 5,40    | [Link](https://www.robocore.net/porca/porca-m4-10-unidades)                                                            |
| ✅ Parafuso Philips M4 x 35mm (10 unidades)                            | 2          | 4mm D x 35mm C                               | R\$ 3,50       | R\$ 7,00    | [Link](https://www.robocore.net/parafuso/parafuso-philips-m4-35mm)                                                     |
| ✅ Roda Boba Rodízio Giratório Robótica Chassi Arduino                 | 2          | Roda: 30mm D x 34mm A; Base: 50mm L x 31mm C | R\$ 11,80      | R\$ 23,60   | [Link](https://produto.mercadolivre.com.br/MLB-4024835564-roda-boba-rodizio-giratorio-robotica-rob-chassi-arduino-_JM) |

## **Escopo do produto**

Esta seção apresenta o escopo do produto, onde iremos detalhar as especificações do produto de acordo com as expectativas dos envolvidos, divididos na parte da eletrônica, mecânica e programação.

### **Eletrônica**

![Imagem ESP32](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/c7f3a580b933060b4979ebedfc625ecf0276de9a/Robos/Imagens/Sprint%2002/ESP%2032.png)

Esta subseção apresenta os componentes que iremos utilizar para o desenvolvimento da parte eletrônica e como iremos integrá-los no sistema. O microcontrolador selecionado após levantamento de inventário foi o Esp32, devido à quantidade disponível, utilizar a linguagem C/C++ para programação, podendo utilizar o Arduino IDE para programá-lo, possuir o bluetooth integrado que dispensa a compra de módulos/Shield e a posse do componente, que será cedido por dois membros do grupo, consequentemente evitando gastos.                  
 A ponte H L298N, que é um componente indispensável para o desenvolvimento do robô, devido a sua capacidade de controle de velocidade e inversão de rotação de motores dc, foi selecionada devido por já possuirmos em nosso inventário e pela possibilidade de controlar mais de um motor, ter uma tensão e corrente de operação de acordo com o que precisamos, poder operar em temperaturas variadas, ser compacto (43x43x27mm) e pesar apenas 30g.
 

![Ponte H](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Ponte%20H.png)

Para a alimentação dos circuitos de cada um dos dois robôs, utilizaremos dois tipos de baterias disponíveis, as mesmas que foram usadas
nos robôs sumô desenvolvidos no semestre anterior, 2 baterias 18650 de 4V utilizadas em um case em série totalizando 8V em um robô, e uma
bateria do tipo Lipo, modelo XcPower LI-po de 11,1V e 1500mah no segundo robô, utilizando um regulador de tensão (stepdown) para não afetar os motores. Ambas as baterias poderão alimentar os circuitos dos robôs sem problemas. 

![Batéria](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Bateria.png)


### **Mecânica**

Esta subseção apresenta os componentes que iremos utilizar no desenvolvimento da parte mecânica, após nossas pesquisas de mercado e viabilidade. Na parte estrutural, optamos por desenvolver em CAD toda a estrutura do robô, devido a diferença de velocidade e agilidade da movimentação entre o chassi de esteiras de borracha e o chassi com rodas do tipo hobby 65mm. 
Inicialmente, a estrutura será dividida em 4 peças:
- Placa de fixação dos componentes eletrônicos e objeto cortante;
- Módulo de proteção dos componentes eletrônicos;
- Escudo;
- Haste de fixação do balão;

### **Haste de fixação do balão**

![Haste Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Haste.png)

### **Escudo**

![Escudo Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Escudo.png)

### **Módulo de proteção dos componentes eletrônicos**

![Proteção dos Componentes Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Prote%C3%A7%C3%A3o%20dos%20Componentes.png)

### **Placa de fixação dos componentes eletrônicos e objeto cortante**

![Placa de Fixação Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Placa%20de%20Fixa%C3%A7%C3%A3o.png)
 
As peças estão sujeitas a sofrer alteração no decorrer do projeto, por meio de adaptações ou alterações estruturais, caso seja necessário, não são versões finais.

### **Motores**

Para os motores utilizaremos 2 motores DC 3-6V com caixa de redução de aço, 64x22,4x18,8mm, pois ele atende nossas necessidades por já o possuirmos em nosso inventário, e mais 2 motores DC amarelos 3-6V com caixa de redução e eixo duplo, evitando a compra em outra plataforma e diminuindo a possibilidade de atrasos no projeto, os componentes está representado na figura abaixo.

![Motor Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/motor.png)

## Cronograma 02 - Entrega 04/04/2025 

| Tarefas | Colaborador | Início | Fim | Dias |
|---------|------------|--------|-----|------|
| ✅ Pesquisa de Mercado | Kaike e João Pedro | 10/03/2025 | 21/03/2025 | 11 |
| ✅ Definição dos Componentes eletrônicos necessários   | Kaike e João Pedro | 10/03/2025 | 21/03/2025 | 11 |
| ✅ Finalização do Cronograma até entrega sprint 2  | Kaike e João Pedro | 09/03/2025 | 21/03/2025 | 12 |
| ✅ Desenvolver Protótipo de placa de fixação dos componentes eletrônicos do robô | Kaike | 09/03/2025 | 21/03/2025 | 12 |
| ✅ Teste de Programação e Movimentação  | Kaike | 12/03/2025 | 22/03/2025 | 10 |
| ✅ Desenvolver Cronograma detalhado até 4 sprint e a Minuta de Projeto referente ao robô  | Kaike  | 09/03/2025 | 30/03/2025 | 21 |
| ✅ Desenvolver placa de fixação dos componentes eletrônicos em CAD  | Kaike  | 12/03/2025 | 30/03/2025 | 18 |
| ✅ Resumo de Atividades  | João Pedro | 26/03/2025 | 01/04/2025 | 06 |

# **Projeto Executivo**

## **Introdução**

O robô estoura balão é um sistema robótico projetado para disputas competitivas em arenas, com o objetivo de atingir e estourar o balão do oponente. Para isso, combina-se uma base móvel controlada remotamente, sistema de ataque frontal, proteção traseira para o balão, estrutura resistente e controle de movimentos rápidos.
Este projeto une as áreas de engenharia mecânica, eletrônica e computação embarcada, utilizando tecnologias acessíveis como impressão 3D, plataformas Arduino/ESP32 e controle via Bluetooth. O desenvolvimento envolveu desde a concepção conceitual até a montagem final e validação por testes funcionais.

## **Projeto Executivo**

Este documento apresenta todas as etapas realizadas no desenvolvimento do robô, com vistas a permitir que qualquer pessoa com acesso a este material possa replicar o projeto com fidelidade.

### **Ideação e Planejamento Inicial**

Antes de iniciar a construção do robô, foi elaborado um mapa mental com o objetivo de organizar as ideias e dividir o projeto em áreas principais:

- Robô (estrutura e componentes);
- Controles (aplicativo e comandos);
- Arena (dimensões e regras);
- Regras da competição;
- Sistema de pontuação e placar;

Essa ferramenta ajudou a manter o foco no que era necessário desenvolver e facilitou a divisão de tarefas.

![Mapa Mental Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/5b15182cb1cc6b82b046ccdb4ed3a210d2fbfd19/Robos/Mapa%20Mental%20Robo.png)

### **Prototipagem Inicial**

O chassi foi modelado utilizando o software CATIA. As peças estruturais foram projetadas com espessura entre 4 mm e 5 mm. A modelagem tridimensional permitiu simulações de montagem e posicionamento dos componentes. Testes práticos com o sistema de ataque foram realizados para verificar alcance e eficácia. O projeto passou por ajustes iterativos conforme falhas eram identificadas nos testes.

### **Componentes e Materiais**

![Componentes Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/5b15182cb1cc6b82b046ccdb4ed3a210d2fbfd19/Robos/Imagens/Sprint%2002/Componentes.jpg)


### **Ajustes Técnicos e Programação**

As peças impressas em 3D incluem proteções para bateria, eletrônicos e para-choques. Foram utilizadas as seguintes especificações:

- Material: PLA;

- Resolução: 0,28 mm;

- Densidade: 15%.

Recomenda-se limpeza e conferência dos furos após a impressão. A impressão 3D permitiu personalização de componentes estruturais e protetivos, adaptando o projeto às necessidades específicas da equipe.


### **Montagem**

#### **Montagem Mecânica**

As peças 3D devem ser fixadas apenas após a montagem e verificação do sistema eletrônico, garantindo acesso facilitado em caso de ajustes.

#### **Montagem Eletrônica**

- Testar os componentes individualmente;
- Fixar a placa de apoio no chassi;
- Conectar os fios de acordo com o esquema elétrico (recomenda-se uso de Fritzing);
- Soldar conexões, se necessário;
- Transferir o código para a placa controladora;
- Testar funcionamento completo antes da fixação definitiva.

É fundamental garantir que todos os fios estejam corretamente isolados para evitar curtos-circuitos, e que a bateria esteja firmemente fixada para evitar deslocamentos durante a operação.

#### **Materiais necessários para o primeiro robô**

![Montagem01 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2bf241f2e1c9ccacf361542be05a59a60655c07b/Robos/Imagens/Sprint%2002/montagem%2001.jpg)

#### **Protótipo do Robô**

![Montagem02 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2bf241f2e1c9ccacf361542be05a59a60655c07b/Robos/Imagens/Sprint%2002/montagem%2002.jpg)

#### **Primeiro robô com os escudos**

![Montagem03 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2bf241f2e1c9ccacf361542be05a59a60655c07b/Robos/Imagens/Sprint%2002/montagem%2003.jpg.png)

#### **Primeiro robô com os escudos e espetos**

![Montagem04 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2bf241f2e1c9ccacf361542be05a59a60655c07b/Robos/Imagens/Sprint%2002/montagem%2004.png)

#### **Primeiro robô e Segundo robô**

![Montagem05 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2774e00963bb024ee74d273326cd067a3b055106/Robos/Imagens/Sprint%2002/Imagem1.png)

#### **Componentes do segundo robô**

![Montagem06 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2774e00963bb024ee74d273326cd067a3b055106/Robos/Imagens/Sprint%2002/Imagem2.png)

#### **Componentes fixados**

![Montagem07 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2774e00963bb024ee74d273326cd067a3b055106/Robos/Imagens/Sprint%2002/Imagem3.png)

#### **Fita Isolante para evitar curto-circuito**

![Montagem08 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2774e00963bb024ee74d273326cd067a3b055106/Robos/Imagens/Sprint%2002/Imagem4.png)

#### **Segundo robô pronto**

![Montagem09 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2774e00963bb024ee74d273326cd067a3b055106/Robos/Imagens/Sprint%2002/Imagem5.png)


### **Desenhos Técnicos**

#### **Haste de fixação do balão**

![Haste Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Haste.png)

#### **Módulo de proteção dos componentes eletrônicos**

![Proteção dos Componentes Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Prote%C3%A7%C3%A3o%20dos%20Componentes.png)

#### **Placa de fixação dos componentes eletrônicos e objeto cortante**

![Placa de Fixação Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/d9441467d6a5b8fd41e0e2ef7bc7d15372660ef6/Robos/Imagens/Sprint%2002/Placa%20de%20Fixa%C3%A7%C3%A3o.png)

### **Códigos e Algoritmos**

Foram desenvolvidas versões diferentes do código para ESP32 e Arduino, com controle via Bluetooth. O robô responde a comandos recebidos de um aplicativo no celular. O código pode ser modificado conforme as necessidades do usuário, facilitando sua adaptação para diferentes estratégias de movimentação ou controle. O código incluía:

- Mapeamento de comandos via Bluetooth;
- Controle PWM para ajuste de velocidade dos motores;
- Lógica de movimentação baseada em comandos direcionais (frente, ré, giro esquerdo/direito);

![Codigo01 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/5b15182cb1cc6b82b046ccdb4ed3a210d2fbfd19/Robos/Imagens/Sprint%2002/codigo%2001.png)

![Codigo02 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/5b15182cb1cc6b82b046ccdb4ed3a210d2fbfd19/Robos/Imagens/Sprint%2002/codigo%2002.png)

![Codigo03 Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/5b15182cb1cc6b82b046ccdb4ed3a210d2fbfd19/Robos/Imagens/Sprint%2002/codigo%2003.png)

### **Fluxograma**

O fluxograma do funcionamento segue:

- Inicialização da conexão Bluetooth;
- Leitura de comandos;
- Ação correspondente nos motores;
- Espera por novo comando.

![Fluxograma Imagem](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/842050f77f30a7a80b6c87325a11d6fcff1ecdb4/Robos/Fluxograma%20do%20rob%C3%B4.png)

### **Testes**

Os testes avaliaram:

- Estabilidade estrutural;
- Alcance e eficácia do ataque;
- Agilidade na movimentação;
- Precisão da resposta via controle Bluetooth;
- Robustez frente a impactos.

Foram realizados vídeos para documentação e análise de falhas. Os resultados dos testes auxiliaram na melhoria contínua do robô, com modificações estruturais e ajustes de código sempre que necessário.

![Teste01 Video](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2bf241f2e1c9ccacf361542be05a59a60655c07b/Robos/Videos%20da%20Movimenta%C3%A7%C3%A3o%20do%20Rob%C3%B4/WhatsApp%20Video%202025-05-14%20at%2017.55.33%20(1).mp4)

![Teste02 Video](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2bf241f2e1c9ccacf361542be05a59a60655c07b/Robos/Videos%20da%20Movimenta%C3%A7%C3%A3o%20do%20Rob%C3%B4/WhatsApp%20Video%202025-05-14%20at%2017.55.33.mp4)

![Teste03 Video](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2bf241f2e1c9ccacf361542be05a59a60655c07b/Robos/Videos%20da%20Movimenta%C3%A7%C3%A3o%20do%20Rob%C3%B4/WhatsApp%20Video%202025-05-14%20at%2017.55.34.mp4)

![Teste04 Video](https://github.com/elisfcampos/AITEC-Advanced-Inventor-Tecnology-/blob/2774e00963bb024ee74d273326cd067a3b055106/Robos/Videos%20da%20Movimenta%C3%A7%C3%A3o%20do%20Rob%C3%B4/WhatsApp%20Video%202025-05-15%20at%2022.39.59.mp4)

### **Manual de Operação**

- Ligar o robô e ativar o Bluetooth;
- Abrir o aplicativo "Controle Remoto Robô" ou versão personalizada via MIT App Inventor;
- Emparelhar com o robô;

Utilizar os botões direcionais:

- ↑ Frente
- ↓ Trás
- ← Esquerda
- → Direita

O controle foi projetado para ser intuitivo e compatível com dispositivos Android. A alternativa desenvolvida no MIT App Inventor pode incluir melhorias visuais e lógicas.


## Cronograma 03 - Entrega 30/05/2025 

| Tarefas | Colaborador | Início | Fim | Dias |
|---------|------------|--------|-----|------|
| ✅ Desenvolver o Fluxograma do Robô | João Pedro | 10/05/2025 | 21/04/2025 | 11 |
| ✅ Avaliar a necessidade de modificações para compatibilidade com o suporte | Kaike e João Pedro | 09/04/2025 | 21/04/2025 | 12 |
| ✅ Imprimir em 3D os suportes do Robô  | Kaike | 06/04/2025 | 25/04/2025 | 19 |
| ✅ Visualização dos Testes do Robô com o Suporte | Kaike | 10/05/2025 | 15/05/2025 | 05 |
| ✅ Finalização do Projeto Executivo  | Kaike Anjos e João Pedro | 23/05/2025 | 28/05/2025 | 05 |
| ✅ Finalização do Cronograma até entrega sprint 3 | Kaike Anjos e João Pedro  | 09/05/2025 | 29/05/2025 | 20 |
| ✅ Resumo de Atividades  | João Pedro | 23/03/2025 | 29/04/2025 | 06 |

## Cronograma 04 - Entrega 13/06/2025 

| Tarefas | Colaborador | Início | Fim | Dias |
|---------|------------|--------|-----|------|
| ✅ Finalização do segundo robô | João Pedro | 25/05/2025 | 05/06/2025 | 10 |
| ✅ Visualização dos Testes do Robô com o segundo robô | João Pedro e Kaike | 05/06/2025 | 12/06/2025 | 07 |
| ✅ Correção do Projeto Executivo  | João Pedro | 28/05/2025 | 12/05/2025 | 17 |
| ✅ Finalização Esquema Eletrico | Kaike Anjos e João Pedro  | 09/06/2025 | 13/06/2025 | 04 |
| ✅ Finalização do Manual de Montagem| Kaike Anjos e João Pedro  | 09/06/2025 | 13/06/2025 | 04 |
| ✅ Finalização do Cronograma até entrega sprint 4 | Kaike Anjos e João Pedro  | 09/06/2025 | 13/06/2025 | 04 |
| ✅ Resumo de Atividades  | João Pedro | 06/06/2025 | 13/06/2025 | 07 |


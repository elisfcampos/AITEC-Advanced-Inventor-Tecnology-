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
• Placa de fixação dos componentes eletrônicos e objeto cortante;
• Módulo de proteção dos componentes eletrônicos;
• Escudo;
• Haste de fixação do balão;

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

# **Entrega 03**

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


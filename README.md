# 🏰 Simulação de Movimentos de Peças de Xadrez em C

Este projeto implementa uma simulação didática dos movimentos básicos de algumas peças do xadrez (Bispo, Torre, Rainha e Cavalo) utilizando programação em linguagem C. O foco está na demonstração de técnicas recursivas e iterativas para controlar os passos das peças no tabuleiro.

---

## 🔍 Visão Geral

O programa é executado em ambiente terminal, apresentando diferentes níveis de complexidade para os movimentos:

- **Nível Novato:** Movimentos básicos impressos iterativamente para Bispo, Torre e Rainha.
- **Nível Aventureiro:** Movimento iterativo do Cavalo simulando o movimento em “L”.
- **Nível Mestre:** Movimentos recursivos para Bispo, Torre e Rainha, além de movimento avançado do Cavalo.

---

## 🧩 Movimento das Peças

Cada peça possui movimentos específicos simulados por funções distintas:

- **Bispo:** Move-se na diagonal, simulando "Cima + Direita".
- **Torre:** Move-se na horizontal para a direita.
- **Rainha:** Move-se na horizontal para a esquerda.
- **Cavalo:** Movimento em “L” com passos verticais e horizontais combinados.

---

## ⚙️ Funcionalidades do Código

### 🌀 Movimentos Recursivos  
As funções `moverBispoRecursivo`, `moverTorreRecursiva` e `moverRainhaRecursiva` implementam movimentos recursivos, imprimindo cada passo até o número definido.

### 🔁 Movimentos Iterativos  
Os movimentos do Cavalo são simulados por laços `for` e `while` em `moverCavaloL` e `moverCavaloLAvancado`, mostrando os passos sequenciais.

### 📊 Níveis de Complexidade  
O código organiza a execução em níveis, permitindo acompanhar a evolução da complexidade dos movimentos das peças.

---

## 📌 Objetivo Educacional

Este projeto é ideal para:

- Praticar conceitos básicos e avançados de recursão em C.
- Compreender a estruturação de funções iterativas e recursivas.
- Exercitar lógica condicional, loops e saída formatada no terminal.
- Aplicar conceitos de programação procedural em um contexto clássico e didático.

---

# ♟️ Desafio Final de Xadrez em C — Movimentos Complexos

Este projeto em C simula os movimentos das principais peças do xadrez: **Bispo**, **Torre**, **Rainha** e **Cavalo**, organizando os níveis de dificuldade e aplicando técnicas de **recursividade** e **loops complexos**. Ideal para reforçar lógica de programação e estruturas de controle em C! 🚀

---

## 🎯 Objetivo do Projeto

A proposta é treinar movimentos de peças de xadrez com diferentes níveis de complexidade:

- ✅ Substituição de laços simples por **funções recursivas** para simular movimentos da **Torre**, **Bispo** e **Rainha**
- ✅ Uso de **loops aninhados** e **controle de fluxo (break/continue)** para os movimentos do **Cavalo**
- ✅ Impressão clara de cada movimento no terminal, com separação por nível de dificuldade

---

## 📌 Organização por Nível

### 🟢 **NÍVEL NOVATO**
Implementações simples com loops `for` para simular:

- Bispo: movimento diagonal superior direita (`Cima + Direita`)
- Torre: movimento lateral (`Direita`)
- Rainha: movimento lateral oposto (`Esquerda`)

### 🟡 **NÍVEL AVENTUREIRO**
Movimento do **Cavalo** em “L” feito com:

```c
for + while
if/else

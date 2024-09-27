## 🌐 [English Version of README](README_EN.md)

# Servo-Controlled-Box
# Integrated Hinge Box

Este projeto envolve a criação de uma caixa automatizada que abre e fecha usando um servo motor e um sensor ultrassônico com base na distância detectada de um objeto.

## 🔨 Funcionalidades do Projeto
- Abertura e fechamento automático da caixa.
- Detecção de objetos a até 50 cm de distância.
- Controle do servo motor através de um código simples em Arduino.

### Exemplo Visual do Projeto

![Projeto em Execução](https://github.com/user-attachments/assets/a7c4c8c5-693b-47a1-8e61-a985fe2773d2)

<img src="IntegratedHingeBox.jpg" alt="Integrated Hinge Box" style="max-width: 400px; width: 100%;">

## ✔️ Técnicas e Tecnologias Utilizadas
- **Arduino IDE**: Para programação do Arduino.
- **C++**: Linguagem de programação utilizada.
- **NewPing**: Biblioteca para facilitar a leitura do sensor ultrassônico.
- **Servo**: Biblioteca para controlar o servo motor.

## 📁 Estrutura do Projeto
- **IntegratedHingeBox.dxf**: Arquivo de design da caixa (formato CAD) obtido do [Hackerspace Bamberg](https://boxes.hackerspace-bamberg.de/).
- **IntegratedHingeBox.jpg**: Imagem do projeto Integrated Hinge Box.
- **main.c**: Código-fonte do projeto em C++ para o Arduino.
- **README.md**: Documentação do projeto.

## 🛠️ Abrir e rodar o projeto
Para iniciar o projeto localmente, siga os passos abaixo:

1. **Certifique-se de que a Arduino IDE está instalada**:
    - A [Arduino IDE](https://www.arduino.cc/en/software) é necessária para rodar o projeto. Você pode baixá-la do site oficial.

2. **Clone o Repositório**:
    - Copie a URL do repositório e execute o comando abaixo no terminal:

      ```bash
      git clone <URL_DO_REPOSITORIO>
      ```

3. **Instale as Bibliotecas Necessárias**:
    - Abra a Arduino IDE e vá para `Sketch` -> `Include Library` -> `Manage Libraries...`.
    - Procure e instale as bibliotecas `Servo` e `NewPing`.

4. **Carregue o Código no Arduino**:
    - Abra o arquivo `main.c` na Arduino IDE, conecte seu Arduino e faça o upload do código.

5. **Conecte os Componentes de Hardware**:
    - Conecte o servo motor e o sensor ultrassônico aos pinos especificados no código (`trigPin` e `echoPin`).

6. **Teste o Projeto**:
    - Alimentar o Arduino e observe a abertura e fechamento automático da caixa ao detectar um objeto dentro de 50 cm.

## 🌐 Deploy
Este projeto pode ser utilizado em aplicações que requerem interação automatizada com objetos, como dispositivos de armazenamento ou sistemas de entrega.


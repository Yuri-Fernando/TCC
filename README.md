# TCC de Engenharia Elétrica — IoT com TM4C1294

## Sobre o projeto

Projeto de **TCC em Engenharia Elétrica pela UniEinstein**, desenvolvido para explorar a aplicação de **Internet das Coisas (IoT) no controle e monitoramento remoto de equipamentos residenciais**.

A solução utiliza o microcontrolador **ARM TM4C1294 da Texas Instruments**, combinando comunicação de rede, servidor web embarcado, interface HTML e monitoramento remoto por meio da plataforma ThingSpeak.

---

## Arquitetura

```text
                 ┌──────────────────────┐
                 │      Usuário         │
                 │  Interface Web HTML  │
                 └──────────┬───────────┘
                            │
                            ▼
                 ┌──────────────────────┐
                 │    Webserver         │
                 │   TM4C1294 / ARM     │
                 └──────────┬───────────┘
                            │
                            ▼
                 ┌──────────────────────┐
                 │ Equipamentos         │
                 │ Residenciais         │
                 └──────────────────────┘
                            │
                            ▼
                 ┌──────────────────────┐
                 │ Comunicação Serial   │
                 └──────────┬───────────┘
                            │
                            ▼
                 ┌──────────────────────┐
                 │     ThingSpeak       │
                 │ Monitoramento IoT    │
                 └──────────────────────┘
```

---

## Funcionalidades

* Controle remoto de equipamentos residenciais;
* Comunicação entre usuário e dispositivos por meio de interface web;
* Webserver embarcado no microcontrolador;
* Página HTML integrada ao firmware para interação com o usuário;
* Processamento de comandos de controle pelo microcontrolador;
* Comunicação serial para envio e aquisição de informações;
* Monitoramento dos dados utilizando ThingSpeak;
* Integração entre hardware, firmware, rede e plataforma IoT.

---

## Tecnologias utilizadas

### Hardware

* **Texas Instruments TM4C1294**
* Arquitetura ARM
* Microcontrolador para processamento e controle dos dispositivos

### Software

* **C**
* IDE de desenvolvimento para o TM4C1294
* HTML
* Webserver embarcado

### IoT e comunicação

* Comunicação serial
* ThingSpeak
* Comunicação em rede
* Monitoramento remoto

---

## Fluxo de funcionamento

```text
Usuário
   ↓
Interface Web
   ↓
Webserver
   ↓
TM4C1294
   ↓
Controle dos equipamentos
   ↓
Dados de operação
   ↓
Comunicação Serial
   ↓
ThingSpeak
```

O usuário interage com os equipamentos por meio da interface web hospedada pelo sistema. Os comandos são processados pelo microcontrolador e utilizados para controlar os dispositivos residenciais.

Paralelamente, informações do sistema são transmitidas por comunicação serial para a plataforma ThingSpeak, permitindo o acompanhamento remoto dos dados.

---

## Desenvolvimento

Os códigos em **C** presentes no repositório representam a implementação do firmware responsável pela operação do sistema.

Entre as principais responsabilidades do código estão:

* Inicialização e configuração do microcontrolador;
* Controle dos dispositivos residenciais;
* Processamento das requisições recebidas;
* Funcionamento do servidor web;
* Interface com a página HTML;
* Comunicação serial;
* Envio de informações para monitoramento no ThingSpeak.

A página HTML foi incorporada ao projeto para fornecer uma interface de interação entre o usuário e o sistema embarcado.

---

## Como executar o projeto

### 1. Requisitos

* Microcontrolador **TM4C1294**
* Ambiente de desenvolvimento compatível com o projeto
* Cabo/interface de programação
* Rede configurada para o sistema
* Conta no ThingSpeak, caso o monitoramento seja reproduzido

### 2. Configuração

Configure os parâmetros de comunicação utilizados pelo sistema no código-fonte, conforme o hardware e ambiente de execução.

### 3. Compilação

Abra o projeto na IDE utilizada originalmente e compile os arquivos em C.

### 4. Gravação

Faça o upload do firmware para o microcontrolador TM4C1294 utilizando a interface de programação adequada.

### 5. Execução

Após a inicialização do sistema:

1. Conecte o dispositivo à rede configurada;
2. Acesse a interface web disponibilizada pelo webserver;
3. Utilize a página HTML para controlar os equipamentos;
4. Verifique os dados enviados ao ThingSpeak.

> As configurações específicas de rede, portas e credenciais devem ser definidas de acordo com o ambiente utilizado.

---

## Organização do projeto

Os arquivos em C concentram a implementação do sistema embarcado, incluindo a lógica de controle, comunicação, webserver e integração com os dispositivos.

A estrutura pode ser organizada conforme os módulos presentes no repositório:

```text
TCC-IoT/
├── src/
│   ├── *.c
│   └── *.h
├── web/
│   └── *.html
├── README.md
└── ...
```

> Ajuste a árvore acima conforme a estrutura real dos arquivos do repositório.

---

## O que este projeto demonstra

* Desenvolvimento de firmware em **C**;
* Programação de microcontroladores ARM;
* Desenvolvimento para **Texas Instruments TM4C1294**;
* Integração entre hardware e software;
* Implementação de webserver embarcado;
* Desenvolvimento de interfaces HTML para sistemas embarcados;
* Controle remoto de dispositivos;
* Comunicação serial;
* Monitoramento remoto utilizando ThingSpeak;
* Aplicação prática de conceitos de **IoT**;
* Integração entre sistemas embarcados, redes e serviços de monitoramento.

---

## Melhorias futuras

* Autenticação de usuários na interface web;
* Comunicação segura entre cliente e dispositivo;
* Dashboard local para monitoramento dos equipamentos;
* Registro histórico de comandos e eventos;
* Integração com sensores adicionais;
* Controle de múltiplos dispositivos IoT;
* Integração com outras plataformas de monitoramento;
* Evolução para arquitetura IoT distribuída.

---

## Contexto acadêmico

**Trabalho de Conclusão de Curso — Engenharia Elétrica | UniEinstein**

O projeto foi desenvolvido com foco na aplicação de conceitos de **sistemas embarcados, comunicação, redes e Internet das Coisas** para criação de uma solução de controle e monitoramento remoto de equipamentos residenciais.

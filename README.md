# TCC de Engenharia Elétrica — IoT com TM4C1294

## Status

🟢 **Concluído — Projeto acadêmico / TCC**

Trabalho de Conclusão de Curso desenvolvido em **Engenharia Elétrica pela UniEinstein**, com implementação de uma solução IoT para controle remoto e monitoramento de equipamentos residenciais utilizando o microcontrolador **ARM TM4C1294 da Texas Instruments**.

**Escopo implementado:** firmware em C, webserver embarcado, interface HTML, controle remoto de equipamentos e integração com a plataforma ThingSpeak para monitoramento.

---

## Sobre o projeto

O projeto explora a aplicação de **Internet das Coisas (IoT)** em automação residencial, permitindo controlar equipamentos remotamente por meio de uma interface web e acompanhar informações do sistema utilizando uma plataforma de monitoramento.

A solução utiliza o **TM4C1294**, um microcontrolador ARM da Texas Instruments, como núcleo do sistema. O firmware, desenvolvido em C, integra a lógica de controle, comunicação, servidor web e interface com os dispositivos residenciais.

Além do controle, o projeto utiliza comunicação serial para disponibilizar dados de monitoramento na plataforma **ThingSpeak**.

---

## Funcionalidades

* Controle remoto de equipamentos residenciais;
* Interface web para interação do usuário;
* Webserver embarcado no microcontrolador;
* Página HTML integrada ao sistema;
* Processamento de comandos de controle;
* Comunicação entre o usuário e o sistema pela rede;
* Comunicação serial para monitoramento;
* Envio de dados para o ThingSpeak;
* Monitoramento remoto das informações do sistema;
* Integração entre firmware, hardware, rede e plataforma IoT.

---

## Arquitetura

```text
                    ┌────────────────────┐
                    │       Usuário      │
                    │   Browser / Web UI  │
                    └──────────┬─────────┘
                               │
                               ▼
                    ┌────────────────────┐
                    │     Webserver      │
                    │    Embarcado       │
                    └──────────┬─────────┘
                               │
                               ▼
                    ┌────────────────────┐
                    │     TM4C1294       │
                    │   ARM / C Firmware │
                    └──────────┬─────────┘
                               │
                    ┌──────────┴──────────┐
                    ▼                     ▼
          ┌──────────────────┐   ┌──────────────────┐
          │ Equipamentos     │   │ Comunicação     │
          │ Residenciais     │   │ Serial          │
          └──────────────────┘   └────────┬─────────┘
                                          │
                                          ▼
                                 ┌──────────────────┐
                                 │    ThingSpeak    │
                                 │   Monitoramento  │
                                 └──────────────────┘
```

---

## Fluxo de funcionamento

```text
Usuário
   ↓
Interface HTML
   ↓
Webserver embarcado
   ↓
TM4C1294
   ↓
Processamento do comando
   ↓
Controle dos equipamentos

TM4C1294
   ↓
Comunicação Serial
   ↓
ThingSpeak
   ↓
Monitoramento
```

O usuário acessa a interface web disponibilizada pelo sistema e envia comandos para os equipamentos residenciais.

O **TM4C1294** processa essas requisições e executa as ações correspondentes. Paralelamente, informações do sistema podem ser transmitidas por comunicação serial para acompanhamento através do **ThingSpeak**.

---

## Tecnologias utilizadas

### Hardware

* **Texas Instruments TM4C1294**
* Arquitetura ARM
* Equipamentos residenciais controlados pelo sistema

### Software

* **C**
* IDE de desenvolvimento para TM4C1294
* HTML
* Webserver embarcado

### Comunicação e IoT

* Comunicação serial
* Comunicação em rede
* ThingSpeak
* Internet of Things (IoT)

---

## Desenvolvimento

Os códigos em **C** presentes no projeto implementam o firmware responsável pelo funcionamento do sistema embarcado.

Entre as principais responsabilidades do software estão:

* Inicialização e configuração do microcontrolador;
* Controle dos equipamentos;
* Processamento das requisições;
* Implementação do webserver;
* Integração da página HTML;
* Comunicação com os dispositivos;
* Comunicação serial;
* Envio de informações para monitoramento;
* Integração com a plataforma ThingSpeak.

A página HTML foi incorporada ao projeto para disponibilizar uma interface de controle acessível ao usuário por meio de um navegador.

---

## Como executar o projeto

### 1. Requisitos

* Microcontrolador **TM4C1294**
* Ambiente de desenvolvimento compatível com o projeto
* Interface/cabo para gravação do firmware
* Rede configurada para comunicação
* Conta no ThingSpeak para reprodução do monitoramento

### 2. Configuração

Configure os parâmetros de rede e comunicação utilizados pelo sistema de acordo com o ambiente de execução e com os componentes conectados ao microcontrolador.

### 3. Compilação

Abra o projeto na IDE utilizada no desenvolvimento e compile os arquivos em C.

### 4. Gravação do firmware

Grave o firmware compilado no **TM4C1294** utilizando a interface de programação adequada.

### 5. Execução

Após inicializar o sistema:

1. Conecte o dispositivo à rede configurada;
2. Identifique o endereço utilizado pelo webserver;
3. Acesse a interface pelo navegador;
4. Utilize a página HTML para controlar os equipamentos;
5. Verifique os dados enviados ao ThingSpeak.

> As configurações específicas de rede, portas e credenciais devem ser definidas conforme o ambiente utilizado.

---

## Organização do projeto

A estrutura do projeto concentra os arquivos responsáveis pelo firmware, interface web e comunicação com os dispositivos.

Uma organização possível é:

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

Os módulos em C são responsáveis pela lógica de controle, comunicação, processamento das requisições e funcionamento do sistema embarcado.

> Ajuste a árvore acima caso a estrutura real do repositório seja diferente.

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
* Comunicação em rede;
* Monitoramento remoto utilizando ThingSpeak;
* Aplicação prática de conceitos de **IoT**;
* Integração entre sistemas embarcados e serviços externos.

---

## Limitações e considerações

* O funcionamento depende da configuração da rede utilizada pelo sistema;
* O desempenho está limitado pelos recursos do microcontrolador e dos dispositivos conectados;
* O acesso remoto depende da infraestrutura de comunicação disponível;
* O projeto acadêmico não contempla, em sua implementação original, mecanismos avançados de autenticação ou segurança de comunicação;
* A integração com ThingSpeak depende da configuração adequada do canal de monitoramento.

---

## Melhorias futuras

* Implementação de autenticação de usuários;
* Comunicação segura entre cliente e dispositivo;
* Criptografia das comunicações;
* Dashboard local para monitoramento;
* Registro histórico de comandos e eventos;
* Integração com sensores adicionais;
* Controle de múltiplos dispositivos;
* Expansão da arquitetura para outros dispositivos IoT;
* Integração com plataformas adicionais de monitoramento.

---

## Contexto acadêmico

**Trabalho de Conclusão de Curso — Engenharia Elétrica | UniEinstein**

O projeto foi desenvolvido com foco na aplicação prática de **sistemas embarcados, comunicação, redes e Internet das Coisas**, utilizando um microcontrolador ARM para implementar uma solução de controle e monitoramento remoto de equipamentos residenciais.

---

## Status do projeto

🟢 **Concluído**

Projeto acadêmico finalizado e mantido no GitHub como registro técnico e base para futuras evoluções em **IoT, sistemas embarcados, automação residencial e monitoramento remoto**.

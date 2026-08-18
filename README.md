# TCC de Engenharia Elétrica — IoT com TM4C1294

### IoT · Sistemas Embarcados · Automação Residencial · ARM · C · Pesquisa e Desenvolvimento

## Status

🟢 **Concluído — Projeto acadêmico / TCC · Base de Pesquisa e Desenvolvimento em IoT**

Trabalho de Conclusão de Curso desenvolvido em **Engenharia Elétrica pela UniEinstein**, que representa o início de uma linha contínua de **Pesquisa e Desenvolvimento (P&D) em automação residencial, IoT e sistemas inteligentes**.

O projeto implementou uma solução inicial de **controle remoto e monitoramento de equipamentos residenciais** utilizando o microcontrolador **ARM TM4C1294 da Texas Instruments**, webserver embarcado, interface HTML e integração com a plataforma ThingSpeak.

Mais do que uma implementação acadêmica isolada, o TCC estabeleceu a base para uma linha de evolução voltada à **automação integral da residência**, com integração futura de aplicativos, inteligência artificial, automação de processos e dispositivos conectados.

---

## Sobre o Projeto

O projeto explora a aplicação de **Internet das Coisas (IoT)** em automação residencial, permitindo controlar equipamentos remotamente por meio de uma interface web e monitorar informações do sistema.

O **TM4C1294** atua como núcleo do sistema, executando o firmware em C responsável pela comunicação, controle dos equipamentos e funcionamento do webserver embarcado.

A comunicação serial também foi utilizada para disponibilizar dados de monitoramento no **ThingSpeak**.

```text
Usuário
   ↓
Interface Web
   ↓
Webserver Embarcado
   ↓
TM4C1294
   ↓
Controle dos Equipamentos
   ↓
Comunicação Serial
   ↓
ThingSpeak
```

---

# Objetivo

O objetivo inicial do projeto foi desenvolver uma plataforma IoT capaz de:

- Controlar equipamentos residenciais remotamente;
- Disponibilizar uma interface web para interação;
- Monitorar informações do sistema;
- Integrar hardware, firmware e comunicação;
- Demonstrar uma arquitetura inicial de automação residencial conectada.

A partir dessa base, o projeto passou a integrar uma linha maior de **P&D voltada à construção de uma residência progressivamente mais automatizada, conectada e inteligente**.

---

# Linha de Pesquisa e Desenvolvimento

O TCC representa o ponto inicial de uma linha contínua de desenvolvimento com o objetivo de evoluir de:

```text
Controle de dispositivos
        ↓
Automação residencial
        ↓
Aplicativo central
        ↓
Integração de dispositivos IoT
        ↓
Automação de processos
        ↓
Agentes de IA
        ↓
Casa inteligente integrada
```

A visão de longo prazo é desenvolver uma infraestrutura capaz de integrar diferentes dispositivos e sistemas da residência em uma plataforma unificada.

Entre as linhas de evolução estão:

- Aplicativo para controle residencial;
- Integração de múltiplos dispositivos IoT;
- Automação baseada em eventos;
- Sensoriamento;
- Monitoramento remoto;
- Integração com APIs;
- Inteligência Artificial;
- Agentes de IA;
- Automação contextual;
- Tomada de decisão automatizada.

---

# Funcionalidades Implementadas

- Controle remoto de equipamentos residenciais;
- Interface web para interação do usuário;
- Webserver embarcado;
- Página HTML integrada ao sistema;
- Processamento de comandos;
- Comunicação em rede;
- Comunicação serial;
- Monitoramento através do ThingSpeak;
- Integração entre firmware, hardware e rede;
- Aplicação prática de conceitos de IoT.

---

# Arquitetura

```text
                    ┌────────────────────┐
                    │       Usuário      │
                    │   Browser / Web UI │
                    └──────────┬─────────┘
                               │
                               ▼
                    ┌────────────────────┐
                    │     Webserver      │
                    │     Embarcado      │
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

# Fluxo de Funcionamento

```text
Usuário
   ↓
Interface HTML
   ↓
Webserver
   ↓
TM4C1294
   ↓
Processamento do comando
   ↓
Controle do equipamento

TM4C1294
   ↓
Comunicação Serial
   ↓
ThingSpeak
   ↓
Monitoramento
```

O usuário acessa a interface web disponibilizada pelo sistema e envia comandos para os equipamentos.

O **TM4C1294** processa as requisições e executa as ações correspondentes.

Paralelamente, informações do sistema podem ser transmitidas por comunicação serial para acompanhamento através do **ThingSpeak**.

---

# Tecnologias Utilizadas

| Categoria | Tecnologias |
|---|---|
| Microcontrolador | **Texas Instruments TM4C1294** |
| Arquitetura | ARM |
| Linguagem | C |
| Interface | HTML |
| Servidor | Webserver embarcado |
| Comunicação | Serial / Rede |
| IoT | ThingSpeak |
| Aplicação | Automação residencial |

---

# Desenvolvimento

Os códigos em **C** implementam o firmware responsável pelo funcionamento do sistema embarcado.

Entre as responsabilidades do firmware estão:

- Inicialização do microcontrolador;
- Configuração dos periféricos;
- Controle dos equipamentos;
- Processamento das requisições;
- Implementação do webserver;
- Integração da interface HTML;
- Comunicação com dispositivos;
- Comunicação serial;
- Envio de dados para monitoramento;
- Integração com a plataforma IoT.

A interface HTML foi incorporada ao sistema para disponibilizar uma camada de controle acessível pelo navegador.

---

# Pesquisa em Automação Residencial

A partir deste projeto, a linha de desenvolvimento passou a buscar uma arquitetura mais ampla para **automação da residência como um sistema integrado**, em vez de tratar os dispositivos isoladamente.

A visão é:

```text
Sensores
   +
Atuadores
   +
IoT
   +
Aplicativo
   +
Automação
   +
IA
   =
Casa Inteligente
```

Essa evolução pretende conectar diferentes subsistemas da residência a uma camada central de controle, permitindo que dispositivos sejam monitorados, acionados e automatizados de acordo com contexto, regras e decisões baseadas em IA.

---

# Arquitetura de Evolução

```text
                    ┌───────────────────────┐
                    │       Aplicativo      │
                    │    Controle Central   │
                    └───────────┬───────────┘
                                │
                                ▼
                       ┌─────────────────┐
                       │ AI / Automation │
                       │ Decision Layer  │
                       └────────┬────────┘
                                │
                ┌───────────────┼───────────────┐
                ▼               ▼               ▼
          ┌──────────┐    ┌──────────┐    ┌──────────┐
          │ Sensores │    │ Atuadores│    │  IoT     │
          └──────────┘    └──────────┘    └──────────┘
                │               │               │
                └───────────────┼───────────────┘
                                ▼
                         Residência
```

A arquitetura futura poderá incorporar agentes de IA capazes de interpretar eventos, utilizar ferramentas e executar automações de forma contextual.

---

# Casos de Uso

### Automação Residencial

Controle automatizado de equipamentos e dispositivos.

### Monitoramento

Acompanhamento remoto de informações da residência.

### IoT

Integração de dispositivos conectados em uma mesma infraestrutura.

### Smart Home

Criação de uma camada central de automação para diferentes sistemas da residência.

### AI Home Automation

Evolução futura para utilização de IA na tomada de decisões e execução de tarefas residenciais.

---

# O que este projeto demonstra

- Desenvolvimento de firmware em C;
- Programação de microcontroladores ARM;
- Texas Instruments TM4C1294;
- Desenvolvimento de sistemas embarcados;
- Webserver embarcado;
- Interfaces HTML para IoT;
- Controle remoto de dispositivos;
- Comunicação serial;
- Comunicação em rede;
- ThingSpeak;
- Integração hardware + software;
- IoT;
- Automação residencial;
- Base para evolução de sistemas inteligentes.

---

# Como Executar

## Requisitos

- Microcontrolador **TM4C1294**;
- Ambiente de desenvolvimento compatível;
- Interface para gravação do firmware;
- Rede configurada;
- Componentes e equipamentos conectados;
- Conta no ThingSpeak para reprodução do monitoramento.

## Configuração

Configure os parâmetros de rede e comunicação utilizados pelo sistema de acordo com o ambiente e com os componentes conectados ao microcontrolador.

## Compilação

Abra o projeto na IDE utilizada no desenvolvimento e compile os arquivos em C.

## Gravação

Grave o firmware no **TM4C1294** utilizando a interface de programação adequada.

## Execução

Após iniciar o sistema:

1. Conecte o dispositivo à rede;
2. Identifique o endereço utilizado pelo webserver;
3. Acesse a interface pelo navegador;
4. Utilize a página HTML para controlar os equipamentos;
5. Verifique os dados enviados ao ThingSpeak.

---

# Organização do Projeto

Uma estrutura conceitual do projeto é:

```text
TCC-IoT/
│
├── src/
│   ├── *.c
│   └── *.h
│
├── web/
│   └── *.html
│
├── README.md
└── ...
```

A estrutura real do repositório deve ser utilizada como referência caso existam módulos adicionais.

---

# Limitações

- O projeto original depende da configuração específica do hardware;
- A quantidade de dispositivos controlados depende da implementação embarcada;
- O acesso remoto depende da infraestrutura de rede;
- O projeto acadêmico original não contempla todas as camadas necessárias para uma casa inteligente completa;
- Integrações modernas com aplicativos e IA representam evolução posterior da linha de P&D;
- Recursos avançados de segurança e autenticação podem ser adicionados em versões futuras.

---

# Melhorias Futuras

## Plataforma Residencial

- Aplicativo central;
- Dashboard;
- Controle de múltiplos dispositivos;
- Perfis de usuário;
- Histórico de eventos.

## IoT

- Mais sensores;
- Mais atuadores;
- Comunicação entre dispositivos;
- Edge computing;
- Automação orientada a eventos.

## Inteligência Artificial

- Agentes de IA;
- Assistente residencial;
- Controle por linguagem natural;
- Automação contextual;
- Predição de comportamento;
- Tomada de decisão baseada em dados.

## Integração

- APIs;
- MQTT;
- Home Assistant;
- Serviços cloud;
- Novos microcontroladores;
- Integração com diferentes ecossistemas de dispositivos.

---

# Roadmap de Pesquisa

```text
TCC / TM4C1294
       ↓
Automação Residencial
       ↓
Múltiplos Dispositivos
       ↓
Aplicativo Central
       ↓
Integração IoT
       ↓
Automação por Eventos
       ↓
Agentes de IA
       ↓
Casa Inteligente Integrada
```

---

# Status Final

🟢 **Concluído — TCC / Base de Pesquisa e Desenvolvimento**

O projeto acadêmico está concluído e representa a **primeira etapa de uma linha contínua de P&D em IoT e automação residencial**.

A implementação original consolidou a base de:

- ✅ Controle remoto de equipamentos;
- ✅ Webserver embarcado;
- ✅ Interface HTML;
- ✅ Firmware em C;
- ✅ Microcontrolador TM4C1294;
- ✅ Comunicação em rede;
- ✅ Comunicação serial;
- ✅ ThingSpeak;
- ✅ Monitoramento remoto.

A partir dessa base, a linha de pesquisa tem como objetivo evoluir para uma **plataforma integrada de automação residencial**, utilizando aplicativo, IoT, automação e **Inteligência Artificial para controlar, monitorar e automatizar progressivamente a residência como um todo**.

---

# Autor

**Yuri Fernando Dubbern**

Pesquisador · IoT · Sistemas Embarcados · Automação Residencial · IA · Intelligent Automation

[LinkedIn](https://www.linkedin.com/in/yuridubbern) · [GitHub](https://github.com/Yuri-Fernando) · [Lattes](http://lattes.cnpq.br/7151392692642166) · [Linktree](https://linktr.ee/yuri.f.dubbern)

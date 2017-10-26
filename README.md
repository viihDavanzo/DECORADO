# DECORADO :coffee:
## Requisitos:
- Unreal Engine Versão 4.17.2
- Node.js (utilizei a versão 6.11.4.0)

## Observações:
- O jogo, com todos os requerimentos, encontra-se na pasta "Game".
- O servidor websocket e o exemplo html/javascript encontram-se na pasta "WebClient".
- Para jogar, basta abrir o arquivo "DECORADO.uproject" e clicar em "Play".
**TODAS AS INSTRUÇÕES ESTARÃO NA TELA.**

## Instruções - Websocket
- Abra "WebClient" em linha de comando (shift + botão direito do mouse) e instale os módulos através do comando "npm install".
![alt text](https://s1.postimg.org/7og0kj983j/print0.png)
![alt text](https://s1.postimg.org/2sb3v0gqjj/print1.jpg)

- Inicie o servidor executando o arquivo "index.js" pelo Node.js (ou via linha de comando).
![alt text](https://s1.postimg.org/1aqxha7ju7/print1.jpg)
![alt text](https://s1.postimg.org/1bhq7frgzz/print3.jpg)
*OBS: Por padrão, escolhi a porta 3000.*

- Com o servidor rodando, abra o arquivo "DECORADO.uproject", localizado na pasta "Game".
- Ao clicar em "Play", a mensagem "Conexão estabelecida!" irá aparecer na tela.
![alt text](https://s1.postimg.org/6h8ghenfdb/print4.jpg)

- Com o jogo em andamento, abra o arquivo "WebClient.html" pelo navegador de preferência (ou acesse http://localhost:3000).
![alt text](https://s1.postimg.org/1dnp3o8uhb/print5.jpg)

- Para rodar a cadeira, basta clicar no botão "Enviar rotacao para a Unreal".
![alt text](https://s1.postimg.org/49infypzcf/print6.jpg)

- No servidor, a mensagem "Rotacao enviada ao usuario" irá confirmar o envio.
![alt text](https://s1.postimg.org/2w8vq3wktr/print7.jpg)

- Verifique se a cadeira mudou de posição e **VOILÁ** :grin: :heart:
![alt text](https://s1.postimg.org/56hf1xl41r/print8.jpg)

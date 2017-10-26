var app = require('express')();
var http = require('http').Server(app);
var io = require('socket.io')(http);
var util = require('util');
var clients = [];

app.get('/', function (req, res)
{
  res.sendFile(__dirname + '/index.html');
});

io.on('connection', function (socket)
{
	//multicast received message from client
	socket.on('rotacao', function (msg)
	{
		sendRotation();
	});
});

function getRandomInRange(min, max)
{
    return Math.random() * (max - min) + min;
}

function sendRotation() {
    console.log('Rotacao enviada ao usuario');
    io.emit('new rotation', getRandomInRange(0, 360));
}

http.listen(3000, function ()
{
  console.log('listening on *:3000');
});

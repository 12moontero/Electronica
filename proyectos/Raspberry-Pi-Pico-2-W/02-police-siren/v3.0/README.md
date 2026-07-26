# 02-police-siren - Versión v3.0

> **Objetivo:** El objetivo de este proyecto es simular las luces de una sirena de policía, junto con el sonido de un zumbador y ahora cuando pulsas el botón.

## Novedades de esta versión
* Se le añade un zumbador pasivo
* Aprender a usar el PWM
* Se le añade un botón

## Componentes Necesarios
* 1x Raspberry Pi Pico 2 WH
* 1x LED Rojo
* 1x LED Azul
* 1x Zumabdor
* 1x Botón
* 2x Resistencias 220 Ω
* Cables Dupont y Protoboard de 400 puntos

## Mapa de Pines 
| Componente | Pin de la Pico 2 | Configuración / Uso |
| :--- | :--- | :--- |
| LED Rojo | GPIO 12 | OUT |
| LED Azul | GPIO 13 | OUT |
| Zumbador | GPIO 2  | OUT |
| Boton    | GPIO 14 | IN  |

##  Montaje Físico
![Montaje del circuito](https://raw.githubusercontent.com/12moontero/Microcontroladores/refs/heads/main/proyectos/Raspberry-Pi-Pico-2-W/02-police-siren/v3.0/imagen-v3.0.png)


## ⚙️ Cómo Funciona
1. **Inicio:** Si presionas el botón, se encienden y si sueltas, se apaga todo
2. **Bucle:** Primero se enciende el LED rojo 120 ms junto con el zumbador a 1000 Hz y se apaga y así con el otro LED pero cambiando los Hz a 2000
3. **Acción:** Se queda así si mantienes presionado si sueltas, se apaga todo y, si vuelves a presionar, se enciende todo.

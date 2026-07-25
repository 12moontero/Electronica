# 02-police-siren - Versión v2.0

> **Objetivo:** El objetivo de este proyecto es simular las luces de una sirena de policía, junto con el sonido de un zumbador.

## Novedades de esta versión
* Se le añade un zumbador pasivo
* Aprender a usar el PWM

## Componentes Necesarios
* 1x Raspberry Pi Pico 2 WH
* 1x LED Rojo
* 1x LED Azul
* 1x Zumabdor
* 2x Resistencias 220 Ω
* Cables Dupont y Protoboard de 400 puntos

## Mapa de Pines 
| Componente | Pin de la Pico 2 | Configuración / Uso |
| :--- | :--- | :--- |
| LED Rojo | GPIO 12 | OUT |
| LED Azul | GPIO 13 | OUT |
| Zumbador | GPIO 2  | OUT |

##  Montaje Físico
![Montaje del circuito](https://raw.githubusercontent.com/12moontero/Microcontroladores/refs/heads/main/proyectos/Raspberry-Pi-Pico-2-W/02-police-siren/v2.0/imagen-v2.0.png)

## ⚙️ Cómo Funciona
1. **Inicio:** Se encienden los LEDs 
2. **Bucle:** Primero se enciende el LED rojo 120 ms junto con el zumbador a 1000 Hz y se apaga y así con el otro LED pero cmabiando los Hz a 2000
3. **Acción:** Se queda así todo el rato.

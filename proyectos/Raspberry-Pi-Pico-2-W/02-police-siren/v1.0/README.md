# 02-police-siren - Versión v1.0

> **Objetivo:** El objetivo de este proyecto es simular las luces de una sirena de policía.

## Novedades de esta versión
* Es el proyecto base

## Componentes Necesarios
* 1x Raspberry Pi Pico 2 WH
* 1x LED Rojo
* 1x LED Azul
* 2x Resistencias 220 Ω
* Cables Dupont y Protoboard de 400 puntos

## Mapa de Pines 
| Componente | Pin de la Pico 2 | Configuración / Uso |
| :--- | :--- | :--- |
| LED Rojo | GPIO 12 | OUT |
| LED Azul | GPIO 13 | OUT |

##  Montaje Físico
![Montaje del circuito](https://raw.githubusercontent.com/12moontero/Microcontroladores/refs/heads/main/proyectos/Raspberry-Pi-Pico-2-W/02-police-siren/v1.0/imagen-v1.0.png)

## ⚙️ Cómo Funciona
1. **Inicio:** Se encienden los LEDs 
2. **Bucle:** Primero se enciende el LED rojo 120 ms, se apaga y así con el otro LED
3. **Acción:** Se queda así todo el rato.

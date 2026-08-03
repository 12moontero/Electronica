# Sensor de Luz - Versión v1.0

> **Objetivo:** El objetivo es usar el sensor para, cuando detecte que no hay luz, encender un LED blanco.

## Novedades de esta versión
* Usar el sensor de luz. 

## Componentes Necesarios
* 1x Raspberry Pi Pico 2 WH
* 1x Led Blanco
* 1x Sensor de Luz
* 1x Resistencia 10K Ω
* 1x Resistencia 220 Ω
* Cables Dupont y Protoboard de 400 puntos

## Mapa de Pines 
| Componente | Pin de la Pico 2 | Configuración / Uso |
| :--- | :--- | :--- |
| LED Blanco | GPIO 17 | OUT |
| Sensor LUZ| GPIO 28 | IN , CANAL 2 |

##  Montaje Físico
![Montaje del circuito](https://raw.githubusercontent.com/12moontero/Microcontroladores/refs/heads/main/proyectos/Raspberry-Pi-Pico-2-W/03-Luz-sensor/v1.0/imagen-v1.0.png)

## ⚙️ Cómo Funciona
1. **Inicio:** Empieza a detectar la LUZ todo el rato 
2. **Bucle:** Básicamente, se queda todo el rato detectando hasta que detecta menos luz y enciende el LED
3. **Acción:** Hasta que, cuando detecte menos de 2000, se encienda el LED

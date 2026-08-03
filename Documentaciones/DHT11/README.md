# DHT11 (sensor de temperatura)

> **Objetivo:** Sirve para medir la temperatura y la humedad de donde este.

## Conexión
| Pin del Sensor | Color | Conectado a |
| :--- | :--- | :--- |
| VCC | 🔴 | 5V o 3.3V |
| I/O (DATA) | 🔵 | Pin Digital |
| GND | ⚫ | GND (Tierra) |

## ⚙️ Cómo Funciona (Lógica)
1. **Paso 1: La placa envía:** un pulso de inicio en nivel bajo para despertar al microchip interno del sensor por el pin de datos.
2. **Paso 2: El sensor responde:** enviando un tren de pulsos digitales de 40 bits que codifican los datos exactos de temperatura y humedad mediante microsegundos.
3. **Paso 3: Calcula:** la librería interpreta esos impulsos eléctricos y los traduce directamente a grados centígrados y porcentaje de humedad legibles en pantalla.

## Foto
![Foto del sensor](ruta_imagen.png)

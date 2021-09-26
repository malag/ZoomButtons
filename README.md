# ZoomButtons

Zoom Buttons es una caja de controles para facilitar el uso de Zoom durante las Videoconferencias.

Se proveen 3 botones para Zoom:
  - Alt+A: Mute/unmute
  - Alt+V: Start/stop
  - Alt+Y: Raise/lower hand

Y dos botones para controlar el audio del equipo:
  
  - Volumen Up
  - Volumen Down

Se pueden extender facilmente las funcionalidades y añadir más botones.

Se sugiere el uso de Arduino Leonardo o placas que incorporan los procesadores ATMEGA 32u4 (Micro, Leonardo) o SAMD (Zero, Due, MKR), debido a que se utiliza la librería https://github.com/NicoHood/HID HID (Human Interface Device) y no es compatible con el modelo UNO de manera nativa.


## Componentes 📋

*5 push buttons
*1 led
*1 resistencia 330Ω
*1 Placa Arduino Leonarlo (o equivalente)
*1 Caja para montar todo.
*Soldadura, pasta para soldar y cables.

## Comenzando 🚀

En el Arduino IDE Hay que instalar la librería

https://github.com/NicoHood/HID

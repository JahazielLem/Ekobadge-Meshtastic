# Ekobadge-Meshtastic
Documentacion sobre como configurar Meshtastic para usar el Badge de EkoParty 2024.

# Requisitos previos
Antes de comenzar, asegúrate de cumplir con los siguientes requisitos:
1. **Instalar la extensión `PlatformIO` en VSCode**
 - Puedes encontrarla en la tienda de extensiones de Visual Studio Code.
2. **Clonar el repositorio de [Meshtastic Firmware](https://github.com/meshtastic/firmware)**

Abre una terminal y ejecuta el siguiente comando:
```sh
git clone https://github.com/meshtastic/firmware.git
```
3. **Actualizar los submódulos del repositorio**

Una vez clonado el firmware, entra a la carpeta y actualiza los submódulos:
```sh
cd firmware && git submodule update --init
```

# Agregar la variante del Badge
Para agregar la variante específica del Badge de EkoParty 2024, sigue estos pasos:

1. **Clona el repositorio dentro de la carpeta `variants`**

Desde la raíz del firmware, ejecuta:
```sh
git clone https://github.com/JahazielLem/Ekobadge-Meshtastic variants/ekoBadge
```
2. **Verifica que la carpeta se creó correctamente**

Dentro de `firmware/variants/`, deberías ver una carpeta llamada `ekoBadge`.

# Compilar el firmware
Sigue estos pasos para compilar el firmware y subirlo a la tarjeta:

1. **Abre la carpeta `firmware` en Visual Studio Code.**
2. **Abre la `paleta de comandos` en VSCode:**
   - Windows/Linux: `Ctrl + Shift + P`
   - Mac: `Command + Shift + P`
3. **Selecciona el entorno de compilación:**
   - Escribe `PlatformIO: Pick Project Environment` y presiona Enter.
   - Selecciona `ekoBadge`.
4. **Compila el firmware:**
   - Abre nuevamente la paleta de comandos (`Ctrl + Shift + P` o `Command + Shift + P`).
   - Escribe `PlatformIO: Build` y presiona `Enter`.
5. **Sube el firmware a la tarjeta:**
   - Si la compilación fue exitosa, vuelve a abrir la paleta de comandos.
   - Escribe `PlatformIO: Upload` y presiona `Enter`.


> [!Nota]
Si la opción ekoBadge no aparece en la lista de entornos, reinicia Visual Studio Code para que vuelva a mapear las variantes.

Para más información sobre Meshtastic y la creación de variantes, visita:
Meshtastic Firmware Development

# Configurar

Para realizar la configuración inicial del Badge de EkoParty 2024, este debe estar conectado a la computadora, ya que la configuración se hace por serial.

1. **Abre Meshtastic Web:**
   - Ingresa a: [Meshtastic Web](https://client.meshtastic.org/)
2. **Crea una nueva conexión:**
   - Haz clic en New Connection.
   - Selecciona Serial y luego New device.
3. **Selecciona el puerto serial:**
    - Aparecerá una ventana con los dispositivos disponibles.
    - Selecciona el puerto correspondiente a tu tarjeta.
4. **Conéctate al dispositivo:**
    - Haz clic en Connect.
    - Se mostrará una lista de dispositivos emparejados, selecciona el que acabas de agregar.
5. **Configurar LoRa:**
    - En el menú de la izquierda, ve a Config.
    - Busca la pestaña LoRa y haz clic en ella.
    - Ajusta la configuración de radio de acuerdo a la región en la que te encuentres.

Con esto ya tenemos disponible para uso.

> **Importante**:  Para comenzar a enviar mensajes, debes contar con otra tarjeta con Meshtastic para establecer la comunicación.


<p align="center">
    <a href="#">
        <img src="./ConfigureInit.gif" height=500>
    </a>
</p>


# GPIO pines del badge
## RFM95

| PIN   | Value |
| ----- | ----- |
| SCK   | 21    |
| MISO  | 20    |
| MOSI  | 19    |
| CS    | 18    |
| DIO0  | 5     |
| DIO1  | 2     |
| DIO2  | 4     |
| RESET | 8     |

## Neopixels
El badge contiene 3 neopixeles.

| PIN   | Value |
| ----- | ----- |
| PIN   | 10    |

## OLED 128x32

| PIN   | Value |
| ----- | ----- |
| SDA   | 6    |
| SCL  | 7    |


## Keyboard

| PIN   | Value |
| ----- | ----- |
| LEFT   | 1    |
| UP  | 22    |
| RIGHT  | 15    |
| DOWN    | 23    |

## Bocina

| PIN   | Value |
| ----- | ----- |
| IO11   | 11    |
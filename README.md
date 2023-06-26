ESP32 powered smarthome WiFi-Button with OTA support
====================================================

# Please adjust the credentials and settings in the `creds.h` file!

## To enable OTA/programming mode:
  - Hold down external button for 3 seconds. The lights should flash rapidly and after 3 seconds it should blink steadily.
  - You have 2 options to flash the new firmware over the air:

  - Arduino OTA (Arduino IDE and flash normally over network)
  - OTA via a middle-man-webserver which provides the OTA binary
    - `mosquitto_pub -h mosquitto -t "/ota" -m "<OTA_BINARY_URL>"`
    - `mktemp -d && python3 -m http.server # Copy the OTA bin here…`
    - <OTA_BINARY_URL> is the IP address of your notebook in your local WiFi network.

## Sending MQTT messages if button was pressed
`<HOSTNAME>/button` sends `pressed` when external button got single pressed.

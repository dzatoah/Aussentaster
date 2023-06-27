//
// Copyright (C) 2023 by Daniel Teichmann <daniel@teichm-sh.de>
//
// This package is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; version 2 of the License.
//
// This package is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>

// WiFi Credentials
const char* ssid = "<WIFI-NAME>";
const char* password = "<WIFI-PASSWORD>";
// Used for MQTT and as a WiFi network hostname
#define HOSTNAME "<HOSTNAME>"

// External button can only be one of 0,2,4,12-15,25-27,32-39.
const gpio_num_t EXTERNAL_BUTTON_PIN = GPIO_NUM_13;
// Is button active LOW? (By pressing the button the signal goes HIGH)
const int EXTERNAL_BUTTON_NORMALLY_LOW = true;

// You can build a voltage divider between GND and VBAT.
// Connect the voltage divider to this ADC pin.
// Please use 47k Ohm resistor or slightly more.
// More resistence -> more unstable but longer battery life
const gpio_num_t EXTERNAL_BAT_ADC_PIN = GPIO_NUM_34;

// MQTT Settings
#define MQTT_SERVER "mosquitto"
#define MQTT_SERVERPORT 1883 // use 8883 for SSL
#define MQTT_USERNAME "<USERNAME>"
#define MQTT_KEY "<PASSWORD>"

#define MQTT_BUTTON_TOPIC "/button"
#define MQTT_OTA_TOPIC    "/ota"
#define MQTT_STATUS_TOPIC "/status"

// OTA Mode
#define OTA_SEC_WAIT_FOR_UPLOAD 5 * 60

// Time between status updates (in seconds)
#define TIME_SLEEP_STATUS_UPDATES 1 * 60 * 60 // 1 Hour

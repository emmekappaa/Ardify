// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[] = "59cf29a9-6c7d-4366-b1c1-54777c03f5f3";

const char SSID[] = SECRET_SSID;             // Network SSID (name)
const char PASS[] = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[] = SECRET_DEVICE_KEY; // Secret device password

String device_name;
int next_song;
int previous_song;
int volume;

void initProperties()
{

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(device_name, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(next_song, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(previous_song, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(volume, READ, ON_CHANGE, NULL);
}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);

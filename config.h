#define MIFLORACOUNT 4
String MiFloras[MIFLORACOUNT] = {
// #2
"C4:7C:8D:66:00:00",
// #4
"C4:7C:8D:66:00:01",
// #5
"C4:7C:8D:66:00:02",
// #6
"C4:7C:8D:66:00:03"
};

#define MQTT_BASE "miflora/"
#define MQTT_SEPARATOR "/"
#define MQTT_TEMPERATURE "temperature"
#define MQTT_MOISTURE "moisture"
#define MQTT_LIGHT "light"
#define MQTT_CONDUCTIVITY "conductivity"
#define MQTT_BATTERY "battery"

#define SLEEP_DURATION 1800ll // duration of sleep between flora connection attempts in seconds (must be constant with "ll" suffix)
#define SLEEP_WAIT 300         // time until esp32 is put into deep sleep mode. must be sufficient to connect to wlan, connect to xiaomi flora device & push measurement data to MQTT

#define BATTERY_INTERVAL 12   // Retrieve battery level every n wakeups

const char* wifi_ssid     = "YourSSID";
const char* wifi_password = "YourPW";

const char* mqtt_server = "YourMQTT";


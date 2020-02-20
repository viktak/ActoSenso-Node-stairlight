#define MQTT_CUSTOMER "viktak"
#define MQTT_PROJECT  "spiti"

#define HARDWARE_ID "NeoPixel & I2C"
#define HARDWARE_VERSION "1.0"
#define SOFTWARE_ID "Stairlight Express"
#define FIRMWARE_VERSION "1.1"

#define SENSORDATA_JSON_SIZE (JSON_OBJECT_SIZE(8))
#define CONTROL_COMMAND_JSON_SIZE 200

#define CONNECTION_STATUS_LED_GPIO 0
#define HEARTBEAT_INTERVAL 60

#define SDA_GPIO 13
#define SCL_GPIO 14

#define ENTRANCELIGHT_RELAY 0
#define STAIRCASELIGHT_RELAY 1

#define i2c_io_address 0x27

//  Input masks
#define INPUT_MASK_0  0b10000000
#define INPUT_MASK_1  0b01000000
#define INPUT_MASK_2  0b00100000
#define INPUT_MASK_3  0b00010000

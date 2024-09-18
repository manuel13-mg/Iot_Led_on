#define BLYNK_TEMPLATE_ID "Your_Template_ID"
#define BLYNK_TEMPLATE_NAME "Your_Template_Name"


#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
char auth[] = "Autherisation ID";
char ssid[] = "SSID Name";
char pass[] = "Password";

void setup() {
    Serial.begin(9600);
    Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);

    // Your other setup code (if any) goes here
}

void loop() {
    Blynk.run();

    // Your other loop code (if any) goes here
}

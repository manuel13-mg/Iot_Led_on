#define BLYNK_TEMPLATE_ID "TMPL3pwsG8V6t"
#define BLYNK_TEMPLATE_NAME "Led on"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
char auth[] = "6GG0vq_oOyFxNWyv6IfIyr28diFBP3fj";
char ssid[] = "GNXS-2.4G-C72C91 ext";
char pass[] = "BC62D2C72C91";

void setup() {
    Serial.begin(9600);
    Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);

    // Your other setup code (if any) goes here
}

void loop() {
    Blynk.run();

    // Your other loop code (if any) goes here
}

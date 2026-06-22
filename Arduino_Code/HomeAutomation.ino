#include <SoftwareSerial.h>

SoftwareSerial BT(D6, D7);   // RX, TX

#define MQ2_PIN A0

#define LIGHT_LED D1
#define BUZZER D2
#define RED_LED D3
#define GREEN_LED D5

int threshold = 200;   // Adjust according to your MQ2 readings

void setup()
{
  Serial.begin(115200);
  BT.begin(9600);

  pinMode(LIGHT_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  digitalWrite(LIGHT_LED, LOW);
  digitalWrite(BUZZER, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);

  Serial.println("Bluetooth Home Automation + Gas Detection");
}

void loop()
{
  // -------------------------
  // GAS LEAKAGE DETECTION
  // -------------------------

  int gasValue = analogRead(MQ2_PIN);

  Serial.print("Gas Value = ");
  Serial.println(gasValue);

  if (gasValue > threshold)
  {
    digitalWrite(BUZZER, HIGH);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);

    Serial.println("GAS DETECTED!");
  }
  else
  {
    digitalWrite(BUZZER, LOW);
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }

  // -------------------------
  // BLUETOOTH CONTROL
  // -------------------------

  if (BT.available())
  {
    char cmd = BT.read();

    Serial.print("Received: ");
    Serial.println(cmd);

    if (cmd == '1')
    {
      digitalWrite(LIGHT_LED, HIGH);
      BT.println("Light ON");
    }

    else if (cmd == '0')
    {
      digitalWrite(LIGHT_LED, LOW);
      BT.println("Light OFF");
    }
  }

  delay(100);
}

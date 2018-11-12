/* 
 * Bài 01: Điều khiển Led chớp tắt
 
    Sơ đồ chân của Nodemcu ESP8266 trong Arduino IDE:
      - PIN D0:  GPIO 16 
      - PIN D1:  GPIO  5
      - PIN D2:  GPIO  4
      - PIN D3:  GPIO  0   // Flash
      - PIN D4:  GPIO  2
      - PIN D5:  GPIO 14
      - PIN D6:  GPIO 12
      - PIN D7:  GPIO 13
      - PIN D8:  GPIO 15
      - PIN Rx:  GPIO  3
      - PIN Tx:  GPIO  1
      - PIN SD2: GPIO  9
      - PIN SD3: GPIO 10
 */
int ledPin = 15;  // Khai báo vị trí gắn Led tại chân D8 (GPIO 15)

void setup()      // Cấu hình cho ESP8266
{
  pinMode(ledPin, OUTPUT);      // Chọn tín hiệu ra
}

void loop()     // Vòng lặp của chương trình
{
  digitalWrite(ledPin, HIGH);   // Led bật
  delay(1000);                  // chờ 01 giây
  digitalWrite(ledPin, LOW);    // Led tắt
  delay(1000);                  // chờ 01 giây
}

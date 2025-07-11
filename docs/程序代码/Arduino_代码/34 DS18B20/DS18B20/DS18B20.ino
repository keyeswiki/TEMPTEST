/*  
 * 名称   : DS18B20
 * 功能   : 读取DS18B20的温度
 * 作者   : http://www.keyes-robot.com/ 
*/
#include <DS18B20.h>

//DS18B20引脚为13
DS18B20 ds18b20(13);

void setup() {
  Serial.begin(115200);
}

void loop() {
  double temp = ds18b20.GetTemp();//读取温度
  temp *= 0.0625;//转换精度为0.0625/LSB
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("°C");
  delay(1000);
}

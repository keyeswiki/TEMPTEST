/*
 * 名称   : button
 * 功能   : 读键值
 * 作者   : http://www.keyes-robot.com/ 
*/
int val = 0;            //用于存储键值
int button = 5;         //将按钮的引脚连接到GPIO5
void setup() {
  Serial.begin(115200);      //启动串口监视器，设置波特率为115200
  pinMode(button, INPUT);  //设置按钮引脚为输入模式
}

void loop() {
  val = digitalRead(button);  //读取按钮的值并将其赋值给变量val
  Serial.print(val);          //打印变量vald的值
  if (val == 0) {             //按下按钮时读取到低电平，并打印出相关的信息
    Serial.println("\t Press the botton");
    delay(100);
  }

  else {               //打印按钮的释放信息
    Serial.println("\t Loosen the botton");
    delay(100);
  }
}
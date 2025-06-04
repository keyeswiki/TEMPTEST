
# Arduino 课程

## 1. 资料下载

**Arduino资料包含库文件、项目代码、驱动，请点击下载才能进行后续的学习！！！！**

下载：[Arduino资料](./Arduino)

## 2. Windows系统软件下载安装与配置（请按系统选择）

### 2.1 软件下载

1、打开 Software | Arduino 下载软件，然后选择对应的系统下载，下⾯以 window 系统为例.（![](./media/image-20250527113703588.png))

**注意：win11系统点击![](./media/image-20250527113703588.png)此处进行到下载页面![](./media/image-20250527115344256.png),无需进行第2步操作.**

![](./media/7ea915dd-dfa2-4b18-ae8a-853082fd85ad.png)

2、然后选择"**只需下载**"，再一次选择"**只需下载**"，就可以看到正在下载的页面.

![](./media/image-20250527115114993.png)

### 2.2 安装arduino软件

1、点击此处文件夹![](./media/image-20250527115344256.png)进入到下载中心，双击![](./media/image-20250527115501137.png)进行安装。

2、选择"**我同意(I)**"，跳转页面后选择"**仅为我安装（Administrator)**",再点击"**下一步**"。

![](./media/image-20250527121512549.png)

3、跳转页面后，点击"**浏览（B）**"，可把软件放到指定位置（请用纯英文路径），点击"**安装**"，安装完成后，点击"**完成**"。

![](./media/image-20250527122939211.png)

**注：点击”完成“后，如果后面出现弹框，请选择肯定的回复，例如选择”是“、”安装“.**

### 2.3 安装驱动

1、将主板连接到电脑（如图）；

![](./media/1-1748577322113-1.png)

2、打开**“设备管理器”**.

![](./media/2-1748577322114-3.png)

3、检查驱动是否已经安装

情况一：驱动安装完成，请跳过驱动教程，进行下一步学习

![](./media/3-1748577322114-6.png)

情况二：驱动没有安装，请进行以下教程手动安装驱动

![image-20250528023804455](./media/4-1748577322114-2.png)

4.驱动安装

请提前在此处下载好驱动![image-20250602212828282](./media/image-20250602212828282.png)

1、鼠标右击**"CP2102 USB to UART Bridge Controller"**，弹出框中选择**“更新驱动程序（P）”**.

![](./media/5-1748577322114-4.png)

2、点击选择**“浏览我的电脑以查找驱动程序（R）”**.

![](./media/6-1748577322114-5.png)

3、点击**“浏览（R）“**选项，在弹出的方框中选择![image-20250528182429599](./media/7-1748577322114-7.png)，点击**“确定”**，完成后点击**“下一步”**进行驱动安装.

![](./media/8-1748577322114-8.png)

4、界面显示如下图类似的话语，证明驱动安装成功，点击**“关闭”.**

![](./media/9-1748577322114-9.png)

5.驱动安装完成后，选择**“端口”**选项，如图CP2102的黄色感叹号消失，证明驱动安装完成.

![](./media/10-1748577322114-10.png)

## 3. Mac系统软件下载安装与配置（请按系统选择）

### 3.1 软件下载

![](media/5ee4ad51b656bec9288bb255e9f0c531.png)

### 3.2 下载安装CP2102驱动程序：

（1）用USB线将Keyestudio Uno PLUS控制板连接到你的MacOS系统电脑上，并打开Arduino IDE。

![](media/a72fe5a29c6af0cd24aba7ab59b4996e.png)

点击**工具**，选择**主板:“Arduino Uno”**，串口为/dev/cu.usbserial-0001。

![](media/ef09ff03db61fbb040a09f798fcabb44.png)

点击![](media/9c9158a5d49baa740ea2f0048f655017.png)上传代码，如果上传成功，如下图所示，会显示上传成功。

![](media/f76eccfb96fb58aee8e7ecba1621be28.png)

注意：如果上传代码程序成功了，则不需要再安装驱动，可以跳过下面安装驱动的步骤；如果没有上传成功，则需要跟着下面的步骤安装CP2102驱动。执行下面（2）~（13）步。

（2）CP2102驱动下载

**请在此处下载驱动：**

![image-20250603194411878](./media/image-20250603194411878.png)

（3）解压下载好的压缩包。

![](media/6870a714ddd11015dc43b1d5743e0666.png)

（4）打开文件夹,可以看到以下文件。

![](media/3f1afe9499f6d852492cfb9d6b11e9ab.png)

（5）双击 **Install CP210x VCP Driver** 等待界面。

（6）点击**Continue**

![](media/b1cb125dccf6470ebe255f8f65b902eb.png)

（7）先点击**Agree** ，然后点击**Continue**

![](media/865dcc76cb7f58854b56f1020233f05e.png)

（8）继续点击**Continue** ，然后输入你的用户密码

![](media/1ef6d65b61ad7c6e0a3989ba59de74d5.png)

![](media/1204fca49aac9a5a2560f1865d59ca56png)

（9）回到安装界面，根据提示等待安装

![](media/0da6d0d4296d6e3de0b30dfd3c615265.png)

（10）安装成功

![](media/7cca827fe946096f228797dadce10661.png)

（12）打开arduinoIDE，点击工具，选择主板为Arduino Uno，串口为"/dev/cu.usbserial-0001"

![](media/fb321aedfdd0e621f041b974e1d44d93.png)

（13）然后再点击上传程序，就可以看到烧录成功。

![](media/f76eccfb96fb58aee8e7ecba1621be28.png)

## 4. 配置Arduino IDE

驱动程序安装成功后，是时候配置IDE使用相同的设备和端口开始上传代码。对于Keyestudio Uno PLUS控制板，我们应该转到**工具**→**开发板**；然后选择**Arduino Uno**(如下图所示)。

![](./media/image-20250602223528182.png)

**工具→端口→COM3**

![](./media/image-20250602225140336.png)

将代码程序上传到控制板之前，必须演示Arduino IDE工具栏中出现的每个符号的功能。

![](./media/image-20250602224122073.png)

A - 用于检查是否存在任何编译错误。

B - 用于将程序上传到Arduino控制板（Keyestudio Uno PLUS控制板）。

C - 用于从板接收串行数据并将串行数据发送到板的串行监视器。

## 5. 库导入

**请记得在此处下载资料：**

![](./media/image-20250603194738417.png)

1、首先选择**“项目”**，选择**“导入库”**，再选择“添加.ZIP库”.

![](./media/image-20250603195057133.png)

2、选择要导入的库，点击**“打开”**.

![](./media/image-20250603200009505.png)

3、出现“Library installed”证明库导入成功.

![](./media/image-20250603200227140.png)

## 6. 开始第一个程序

1. 打开“**文件**”选择“**示例**”，从“**Basics**”中选择“**Blink**”，如下图所示：

![](./media/image-20250602224407797.png)

2. 设置板型和COM口，对应的板型和COM口显示在IDE的右下角。

![](./media/image-20250602224647785.png)

3. 点击![image-20250602224841381](./media/image-20250602224841381.png)开始编译程序，检查错误。

![](./media/image-20250602224815337.png)

4. 点击![image-20250602224902198](./media/image-20250602224902198.png)上传程序，几秒种后，上传成功。

![](./media/image-20250602225003570.png)

上传程序成功，利用USB线上电，Keyestudio Uno PLUS控制板上的板载LED灯点亮1秒，熄灭1秒，循环进行。恭喜你，完成了第一个项目。

## 7. 项目

### 项目1: Hello World

1.项目介绍：

对于Arduino初学者，我们将从一些简单的东西开始。在这个项目中，您只需要一个Plus开发板和USB电缆来完成“Hello World!”项目。它不仅是Arduino板和PC的通信测试，也是Arduino世界的初级项目。

2.项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|
|Keyes Uno Plus 开发板*1|USB 线*1|

3.项目接线：

![](media/480b59c1830ea74c657938f1c8a17606.png)

4.项目代码：

将使用一个简单的If()语句编程控制结构。Arduino使用串行监视器来显示打印语句、传感器数据等信息。这是一个非常强大的工具，用于调试长代码。现在是你的第一个代码：

```
int val;//定义变量val。

void setup()
{	
	Serial.begin(9600);// 设置波特率为9600.
}

void loop()
{
    val=Serial.read();// 读取指令或字符从PC到Arduino，并赋值给val.
    if(val=='R')// 确定接收的指令或字符是否为“R”.
    { // if it’s “R”,
    	Serial.println("Hello World!");// 显示“Hello World !”字符串.
    }
}
```

5.项目结果：

选择正确的Arduino IDE主板类型和COM端口，点击Arduino IDE上的上传按钮上传代码。上传成功后，单击![](media/2f6bca56f724e45a855335cb53ae9b4e.png)图标进入串行显示器。

![](./media/image-20250602225452729.png)

每当你在文本框中输入一个“R”，并回车，串行监视器将显示一个“Hello World！”。

![](./media/image-20250602225901737.png)

### 项目2: LED闪烁 

1.  项目介绍：

在这个项目中，我们将向你展示LED闪烁效果。我们使用Arduino的数字引脚打开LED，让它闪烁。

2.  项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/7eb361d680dfa351f07f8527aeb37abd.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|红色LED*1|220Ω电阻*1|面包板*1|跳线*2|USB 线*1|

3.元件知识：

（1）LED:

![Img](./media/img-20250317145819.png)

LED是一种被称为“发光二极管”的半导体，是一种由半导体材料(硅、硒、锗等)制成的电子器件。它有正极和负极。短腿为负极，接GND，长腿为正极，接5V.

![](media/14a84d5f016d7566151a5563c502787e.png)

（2）五色环电阻

电阻是电路中限制或调节电流流动的电子元件。左边是电阻器的外观，右边是电阻在电路中表示的符号。电阻(R)的单位为欧姆(Ω)，1 mΩ= 1000 kΩ，1kΩ= 1000Ω。

![](media/8a86f65cf820d08e8956daa70d1c4195.jpeg)
![](media/f6079fe22518f0fc1b0c3a3b93a516a1.png)

我们可以使用电阻来保护敏感组件，如LED。电阻的强度（以Ω为单位）用小色环标记在电阻器的主体上。每种颜色代表一个数字，你可以用电阻对照卡查找。

\-色带1 – 1st Digit.

-色带 2 – 2nd Digit.

-色带 3 – 3rd Digit.

-色带 4 – Multiplier.

-色带 5 – Tolerance.

![](media/c3df005312cd9f6d4cdae6abf3cddb83.png)

在这个套件中，我们提供了8个具有不同电阻值的五色环电阻。这里以3个五色环电阻为例：

220Ω 电阻\*10

![](media/793740d0b936e516ca354111e2d0eb79.png)

10KΩ 电阻\*10

![](media/18484e5d16b6d89c63825cc2efa6a543.png)

1KΩ 电阻\*10

![](media/8088ed382616afb346d44f5aacfb52d1.png)

在相同的电压下，会有更小的电流和更大的电阻。电流、电压、电阻之间的联系可以用公式表示：I=U/R。在下图中，目前通过R1的电流:
I = U / R = 3 V / 10 KΩ= 0.0003A= 0.3mA。

![](media/b3eec552e4dfad361833730698621776.png)

不要把电阻值很低的电阻直接连接在电源两极，这样会使电流过高而损坏电子元件。电阻是没有正负极之分。

（3）面包板

面包板是实验室中用于搭接电路的重要工具。面包板上有许多孔，可以插入集成电路和电阻等电路元件。熟练掌握面包板的使用方法是提高实验效率，减少实验故障出现几率的重要基础之一。下面就面包板的结构和使用方法做简单介绍。一个典型的面包板如下所示：

![](media/837cd6ec4b1b09cc46340201a6425958.png)

面包板的外观和内部结构如上图所示，常见的最小单元面包板分上、中、下三部分，上面和下面部分一般是由一行或两行的插孔构成的窄条，中间部分是由中间一条隔离凹槽和上下各5
行的插孔构成的条。

![](media/099510035abc223273495e042a7bd6b6.png)

在面包板的两个窄条分别有两行插孔，两行之间是不连通的，一般是作为电源引入的通路。上方第一行标有“+”的一行有10组插孔（内部都是连通），均为正极；上方第二行标有“-”的一行有10组插孔，（内部都是连通），均为接地。面包板下方的第一行与第二行结构同上。如需用到整个面包板，通常将“+”与“+”用导线连接起来，“-”与“-”用导线连接起来。

　　中间部分宽条是由中间一条隔离凹槽和上下各5
行的插孔构成。在同一列中的5
个插孔是互相连通的，列和列之间以及凹槽上下部分则是不连通的。外观及结构如下图：

![](media/3fc9a04d9354e63ca0e89eb7ed627128.png)

中间部分宽条的连接孔分为上下两部分，是面包板的主工作区，用来插接原件和跳线。在同一列中的5个插孔（即a-b-c-d-e，f-g-h-i-j）是互相连通的；列和列之间以及凹槽上下部分是不连通的。在做实验的时候，通常是使用两窄一宽组成的小单元，在宽条部分搭接电路的主体部分，上面的窄条取一行做电源，下面的窄条取一行做接地。中间宽条用于连接电路，由于凹槽上下是不连通的，所以集成块一般跨插在凹槽上。

4.项目电路图和接线图：

请看项目电路图和接线图，这里我们使用数字引脚10，并将一个LED连接到一个220欧姆电阻，以避免大电流损坏LED。

![](media/50ee6c9b34f9b9017aeb430f1785c233.png)

电路图

![](media/67dd9f24c960a58c895b9d6aa62f1a9c.png)

接线图

注意:

怎样连接LED

![](media/14a84d5f016d7566151a5563c502787e.png)

怎样识别五色环220Ω电阻

![](media/793740d0b936e516ca354111e2d0eb79.png)

5.项目代码：

```
int ledPin = 10; // 定义数字引脚10.

void setup()
{
  pinMode(ledPin, OUTPUT);// 定义led引脚为输出.
}

void loop()
{
  digitalWrite(ledPin, HIGH); // 点亮LED.
  delay(1000); // 等待1秒.
  digitalWrite(ledPin, LOW); // 熄灭LED.
  delay(1000); // 等待1秒
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，连接控制板D10引脚的LED灯每秒亮/灭一次。

7.代码说明:

pinMode(ledPin，OUTPUT) -在使用Arduino的引脚之前，你需要告诉控制板它是INPUT还是OUTPUT。我们使用一个内置的“函数”pinMode()来做到这一点。

digitalWrite(ledPin，HIGH) -当使用引脚作为OUTPUT时，可以将其命令为HIGH（输出5伏）或LOW（输出0伏）。

### 项目3: 呼吸灯

1.项目介绍：

在这个项目中，我们将学习ARDUINO的PWM控制。PWM是脉宽调制(Pulse Width Modulation)的缩写，是一种将模拟信号电平编码为数字信号电平的技术。这里，我们使用PWM来控制LED从亮→暗，循环进行。

2.项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/3ec5906fad2172708d449390140f55e6.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|红色LED*1|220Ω电阻*1|面包板*1|跳线*2|USB 线*1|

3.元件知识：

![](media/6549bdbfd4e7b6b2b341012105d655e8.png)

脉宽调制的工作原理：PWM是脉冲宽度调制(Pulse Width Modulation)的缩写，它是一种控制LED的亮度、直流电机和伺服电机的速度的技术。Arduino数字引脚要么产生5V(当变成高)或0V(当变成低)。然而，PWM输出的是方波信号。因此，如果我们想让LED变暗，我们不能从数字引脚获得0到5V之间的电压，但我们可以改变信号的ON（开）和OFF（关）时间。如果我们将改变开和关时间足够快，那么led的亮度将改变。在进一步讨论之前，让我们讨论一些与PWM相关的术语。

ON (On Time)：信号高的时候。

OFF (Off Time)：信号低的时候。

周期：它是On Time和Off Time的总和。

占空比：信号在某一时间段内处于高水平时，占时间的百分比。

所以在50%占空比和1Hz频率下，led会点亮半秒时间，另一半时间熄灭。如果我们将频率增加到50Hz(每秒50次ON和OFF)，那么led将被人眼看到以一半的亮度在发光。![](media/378b4b5fa569bde8a54b972b1df3ee65.jpeg)

Arduino 与 PWM

Arduino IDE有一个内置的函数analogWrite()，可以用来产生PWM信号。大多数引脚产生的信号频率约为490Hz，我们可以使用这个函数给出0-255的值。

analogWrite(0)表示占空比为0%的信号。analogWrite(127)表示占空比为50%的信号。analogWrite(255)表示100%占空比的信号。在KEYES Uno Plus控制板上，PWM引脚为3、5、6、9、10和11。PWM管脚用~符号标记。在这个项目中，您将学习如何从Plus控制板的数字引脚获得PWM输出和通过代码控制LED的亮度。

4.项目电路图和接线图：

![](media/0ba41877b88d1155d88d20e9209e6741.png)

![](media/6eb4ffe774d259633416a49cdb3199b5.png)

注意:

怎样连接LED

![](media/14a84d5f016d7566151a5563c502787e.png)

怎样识别五色环220Ω电阻

![](media/793740d0b936e516ca354111e2d0eb79.png)

5.项目代码：

```
int ledPin = 6;

void setup() 
{
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  for (int value = 0 ; value < 255; value=value+1)
  {
    analogWrite(ledPin, value);
    delay(5);
  }
  for (int value = 255; value >0; value=value-1)
  {
    analogWrite(ledPin, value);
    delay(5);
  } 
}      
```

烧录好项目代码，按照接线图连接好线，上电后，你会看到LED灯逐渐亮起来，然后逐渐变暗。循环进行！

7.代码说明:

当我们需要重复执行某句话时，我们可以使用for语句。

for语句格式如下：

![](media/898b748c8052234952c0b893696d952e.png)

for循环顺序如下：

第一轮：1 → 2 → 3 → 4

第二轮：2 → 3 → 4

…

直到2不成立，for循环结束。

知道了这么个顺序之后，回到代码中：

for (int value = 0; value \< 255; value=value+1){

...}

for (int value = 255; value \>0; value=value-1){

...}

这两个for语句实现了value的值不断由0增加到255，随之在从255减到0，在增加到255……，无限循环下去。

再看下for里面，涉及一个新函数analogWrite()。

我们知道数字口只有0和1两个状态，那如何发送一个模拟值到一个数字引脚呢？就要用到该函数。观察一下Arduino板，查看数字引脚，你会发现其中6个引脚旁标有“~”，这些引脚不同于其他引脚，它们可以输出PWM信号。

函数格式如下：

analogWrite(pin,value)

analogWrite()函数用于给PWM口写入一个0~255的模拟值。所以，value是在0~255之间的值。特别注意的是，analogWrite()函数只能写入具有PWM功能的数字引脚，也就是3，5，6，9，10，11引脚。

### 项目4: 交通灯

1.项目介绍：

交通灯在我们的日常生活中很普遍。根据一定的时间规律，交通灯是由红、黄、绿三种颜色组成的。每个人都应该遵守交通规则，这可以避免许多交通事故。在这个项目中，我们将使用一个plus控制板和一些led(红，黄，绿)来模拟交通灯。

2.项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/afa6edd3ff90b027a6f43995a6fb15a2.png)|![](media/0c1b0f91b4e56bcbc235d06b48809ac9.png)|![](media/6c688493b558ed5f3e90e7dab38cbd93.png)|
|-|-|-|-|
|Keyes Uno Plus 控制板*1|红色LED*1|黄色 LED*1|绿色LED*1|
|![](media/755ba492c38e44d91e8b2c120dc64904.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|
|USB 线*1|220Ω电阻*3|面包板*1|跳线若干|

3.项目电路图和接线图：

![](media/58038f5ab1eeddf23f203246df192fd8.png)

![](media/5054b30ebaf5b90a0adebdbf13ee4771.png)

注意:

怎样连接LED

![](media/14a84d5f016d7566151a5563c502787e.png)

怎样识别五色环220Ω电阻

![](media/793740d0b936e516ca354111e2d0eb79.png)

4.项目代码：

由于是模拟交通灯，所以每个LED的闪烁时间应该与交通灯系统中的闪烁时间相同。在这个程序中，我们使用Arduino delay()函数来控制延迟时间。

```
int redled =10; // 初始化数字管脚10.
int yellowled =7; // 初始化数字管脚7.
int greenled =4; // 初始化数字管脚4.

void setup()
{
    pinMode(redled, OUTPUT);// 将红色LED引脚设置为“output”
    pinMode(yellowled, OUTPUT); // 将黄色LED引脚设置为“output”
    pinMode(greenled, OUTPUT); // 将蓝色LED的引脚设置为“output”
}

void loop()
{
  digitalWrite(greenled, HIGH);// 点亮绿色LED
  delay(5000);// 延时5秒
  digitalWrite(greenled, LOW); // 熄灭绿色LED
  for(int i=0;i<3;i++)// 闪烁3次
  {
    delay(500);// 延时0.5秒
    digitalWrite(yellowled, HIGH);//点亮黄色LED
    delay(500);// 延时0.5秒
    digitalWrite(yellowled, LOW);// 熄灭黄色LED
  } 
  delay(500);// 延时0.5秒
  digitalWrite(redled, HIGH);// 点亮红色LED
  delay(5000);// 延时5秒
  digitalWrite(redled, LOW);// 熄灭红色LED
}
```

5.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，你看到的现象是：1.首先，绿灯会亮5秒，然后熄灭。2.其次，黄灯会闪烁3次，然后熄灭。3.然后，红灯会亮5秒，然后熄灭。4.继续运行上述1-3个步骤，直到切断plus控制板的电源。

### 项目5: RGB LED

1.项目介绍：

![](media/94bdff69e438989d8e0934e57f2e5c00.png)

RGB led由三种颜色(红、绿、蓝)组成，通过混合这三种基本颜色可以发出不同的颜色。在这个项目中，我们将向你介绍RGB LED，并向你展示如何使用Plus控制板控制RGB LED发出不同的颜色光。即使RGB LED是非常基本的，但这也是一个介绍自己或他人到电子和编码基础的伟大方式。

2.项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/f1a86fc81ab4b043263ce7e01e14d470.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|RGB LED*1|220Ω电阻*3|面包板*1|跳线若干|USB 线*1|

3. 元件知识：

显示器大多遵循RGB颜色标准，电脑屏幕上的所有颜色都是由红、绿、蓝三种颜色以不同比例混合而成。

![](media/32abd117bdfbba2f79a0e156048b9d22.png)![](media/5a0792145e8a7d9038bf9de389d75fc6.png)

这个RGB LED有4个引脚，每个颜色(红，绿，蓝)和一个共同的阴极。为了改变RGB led的亮度，我们可以使用Arduino的PWM引脚。PWM引脚会给RGB led不同占空比的信号以获得不同的颜色。

4.  项目电路图和接线图：

![](media/a0f458005a6a670b962be532f10e1f95.png)

![](media/c6d61a1e9b845a1ac67452520d78dab3.png)

注意：

RGB LED最长引脚(共阴极)连接GND。

![](media/1584356c63bf99934ae0810ee02dced3.png)

怎样识别五色环220Ω电阻

![](media/793740d0b936e516ca354111e2d0eb79.png)

5.项目代码：

```
int redpin = 11; //选择红色LED的引脚
int bluepin =9; // 选择蓝色LED的引脚
int greenpin =10;// 选择绿色LED的引脚
int val;
void setup() 
{
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
}
void loop() 
{
  for(val=255; val>0; val--)
  {
    analogWrite(11, val);
    analogWrite(10, 255-val);
    analogWrite(9, 128-val);
    delay(1); 
  }
  for(val=0; val<255; val++)
  {
    analogWrite(11, val);
    analogWrite(10, 255-val);
    analogWrite(9, 128-val);
    delay(1); 
  }
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，等几秒钟，你会看到一个彩色的LED。

### 项目6: 流水灯

1.项目介绍：

在日常生活中，我们可以看到许多由不同颜色的led组成的广告牌。他们不断地改变灯光来吸引顾客的注意。在这个项目中，我们将使用Plus
控制板5个led实现流水的效果。

2.项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/3ec5906fad2172708d449390140f55e6.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|红色LED*5|220Ω电阻*5|面包板*1|跳线若干|USB 线*1|

3.项目电路图和接线图:

![](media/7f1ce8e3af1e0bb0ce48dc953c744dc9.png)

![](media/4179e6d74ed6851384c593057213932e.png)

注意:

怎样连接LED

![](media/14a84d5f016d7566151a5563c502787e.png)

怎样识别五色环220Ω电阻

![](media/793740d0b936e516ca354111e2d0eb79.png)

4.项目代码：

```
int BASE = 2 ;// 第一个LED的I/O引脚
int NUM = 5; // LED 数量

void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   // 设置I/O引脚为输出
   }
}

void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW); // 设I/O引脚为低电平，依次熄灭led灯。
     delay(200); // 延时
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);   // 设置I/O引脚为高，依次点亮led灯
     delay(200);  // 延时
   }  
}
```

5.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，连接开发板D2-D6引脚的5个led会逐渐亮起来，然后逐渐熄灭，就像电池充电一样。

### 项目7: 有源蜂鸣器

1.项目介绍：

有源蜂鸣器是一个发声组件。它被广泛用作电脑、打印机、报警器、电子玩具、电话、计时器等的发声元件。它有一个内在的振动源。只需连接5V电源，即可持续发出嗡嗡声。在这个项目中，我们将使用一个Plus控制板控制有源蜂鸣器发出嗡嗡声。

2.项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/4b4f653a76a82a3b413855493cc58fba.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|有源蜂鸣器*1|面包板*1|跳线若干|USB 线*1|

3. 元件知识：

![](media/11ec5ddc982db9928341e858aab94652.png)

有源蜂鸣器内部有一个简单的振荡器电路，可以将恒定的直流电转换成特定频率的脉冲信号。一旦有源蜂鸣器收到一个高电平，它将产生声音。而无源蜂鸣器是一种内部没有振动源的集成电子蜂鸣器，它必须由2K-5K方波驱动，而不是直流信号。这两个蜂鸣器的外观非常相似，但是一个带有绿色电路板的蜂鸣器是无源蜂鸣器，而另一个带有黑色胶带的是有源蜂鸣器。无源蜂鸣器不能区分正极性而有源极性蜂鸣器是可以。如下所示：

![](media/76d53f3b35afaa98712e855302e44e32.png)

4.  项目电路图和接线图：

    ![](media/fa035bc382562639e70dfe26e37502ae.png)

![](media/b4cfef41c91a5c66523b12dd6b452526.png)

注意：有源蜂鸣器正极(“+”/长引脚)接引脚8，负极（短引脚）接GND。

5.项目代码：

```
int buzzerPin = 8;
void setup ()
{
  pinMode (buzzerPin, OUTPUT);
}
void loop ()
{
  digitalWrite (buzzerPin, HIGH);
  delay (500);
  digitalWrite (buzzerPin, LOW);
  delay (500);
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，有源蜂鸣器发出嗡嗡声。

### 项目8: 无源蜂鸣器

1.项目介绍

在之前的项目中，我们研究了有源蜂鸣器，它只能发出一种声音，可能会让你觉得很单调。这个项目将学习另一种蜂鸣器，被动蜂鸣器。与主动蜂鸣器不同，无源蜂鸣器可以发出不同频率的声音。在这个项目中，你将使用Plus控制板控制无源蜂鸣器演奏一首歌曲。

2.项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/d1ea1bb2b2749820cab389d5b85b838b.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|无源蜂鸣器*1|面包板*1|跳线若干|USB 线*1|

3. 元件知识：

![](media/8d0020e53824072cbe9d4f7d2f8acb4f.png)

无源蜂鸣器是一种内部没有振动源的集成电子蜂鸣器。它必须由2K-5K方波驱动，而不是直流信号。这两个蜂鸣器的外观非常相似，但是一个带有绿色电路板的蜂鸣器是无源蜂鸣器，而另一个带有黑色胶带的是有源蜂鸣器。无源蜂鸣器不能区分正极性而有源极性蜂鸣器是可以。

![](media/fc42c5ed014609ff0b290ee5361bb2fd.png)

4.项目电路图和接线图:

![](media/316daae31dbaf7e5efc16a4e89bccbfa.png)

![](media/d333e0d0f94cb954d28e87fd59725e7c.png)

5.项目代码：

```
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST 0
int tempo=114; // 改变这个可使歌曲变慢或变快
int buzzer = 8;// 将此更改为你想使用的任何一个引脚
// 乐曲的音符后面跟着持续时间.
// A 4表示四分音符，8表示十八分音符，16表示十六分音符，以此类推
// !!负数用来表示带点的注释
// 所以-4意味着一个带点的四分音符，也就是说，四分之一加上十八分之一
int melody[] = {
  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//1
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_E4,-4, NOTE_D4,8,  NOTE_D4,2,
  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//4
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_D4,-4,  NOTE_C4,8,  NOTE_C4,2,
  NOTE_D4,4,  NOTE_D4,4,  NOTE_E4,4,  NOTE_C4,4,//8
  NOTE_D4,4,  NOTE_E4,8,  NOTE_F4,8,  NOTE_E4,4, NOTE_C4,4,
  NOTE_D4,4,  NOTE_E4,8,  NOTE_F4,8,  NOTE_E4,4, NOTE_D4,4,
  NOTE_C4,4,  NOTE_D4,4,  NOTE_G3,2,
  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//12
  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
  NOTE_D4,-4,  NOTE_C4,8,  NOTE_C4,2
};
// 给出字节数的类型，每个int值由两个字节(16位)组成
// 每个音符有两个值(音高和持续时间)，所以每个音符有四个字节
int notes=sizeof(melody)/sizeof(melody[0])/2; 
// 这计算了整个音符的持续时间，单位是ms (60s/节拍)*4拍
int wholenote = (60000 * 4) / tempo;
int divider = 0, noteDuration = 0;

void setup() 
{
  // 重复旋律的音符
  // 记住，数组是音符数的两倍(音符+持续时间)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) 
  {
    // 计算每个音的持续时间
    divider = melody[thisNote + 1];
    if (divider > 0) 
    {
      noteDuration = (wholenote) / divider; // 常规提示，继续
    } 
    else if (divider < 0) 
    {
      // 虚线注释的持续时间为负
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // 给打点音符增加一半的持续时间
    }
    // 只在90%的时间里演奏这个音符，留下10%作为暂停
    tone(buzzer, melody[thisNote], noteDuration*0.9);
  // 等待特定的时间后再演奏下一个音符.
    delay(noteDuration);
    noTone(buzzer);  // 下一个音节前停止波形产生前的下一个说明.
  }
}

void loop() 
{
//如果你想永远重复这首歌，在这里复制粘贴setup()中的代码.
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，无源蜂鸣器演奏一首歌曲。

### 项目9: 74HC595N控制7个LED 

1.项目介绍：

在之前的项目中，我们已经学过了怎样点亮一个LED。

Plus控制板上只有22个IO端口。我们如何点亮大量的led呢?有时可能会耗尽Arduino板上的引脚，这时候需要用移位寄存器扩展它。你可以使用74HC595N芯片一次控制8个输出，而只占用你的微控制器上的几个引脚。你还可以将多个寄存器链接在一起，以进一步扩展输出。在这个项目中，我们将使用Plus控制板和74HC595N控制7个红色亮灭变化的效果。

2.项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/3ec5906fad2172708d449390140f55e6.png)|![](media/f97e58ab51ec0a274ff3e72e08a7d55d.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|-|-|
|Keyes UnoPlus控制板*1|红色LED*7|74HC595N芯片*1|220Ω电阻*7|面包板*1|跳线若干|USB 线*1|

3.  元件知识：

![](media/2d97fce31da5f5c35c22358e7c07dd67.png)

74HC595N芯片：简单来说就是具有8位移位寄存器和一个存储器，以及三态输出功能。移位寄存器和存储器同步于不同的时钟，数据在移位寄存器时钟SCK的上升沿输入，在存储寄存器时钟RCK的上升沿进入的存储寄存器中去。如果两个时钟连在一起，则移位寄存器总是比存储寄存器早一个脉冲。移位寄存器有一个串行移位输入端（SI）和一个用于级联的串行输出端（SQH）,8位移位寄存器可以异步复位（低电平复位），存储寄存器有一个8位三态并行的总线输出，当输出使能（OE）被使能（低电平有效）将存储寄存器中输出至74HC595N的引脚（总线）。

![](media/858b189f06ad68afe051b15043b2affd.png)

引脚说明：

|13引脚OE|是一个输出使能引脚，用于确保锁存器的数据是否输入到Q0-Q7引脚。在低电平时，不输出高电平。在本实验中，我们直接连接GND，保持低电平输出数据。|
|-|-|
|14引脚SI|这是74HC595接收数据的引脚，即串行数据输入端，一次只能输入一位，那么连续输入8次，就可以组成一个字节了。|
|10引脚SCLR|一个初始化存储寄存器管脚的管脚。在低电平时初始化内部存储寄存器。在这个实验中，我们连接VCC以保持高水平。|
|11引脚SCK|移位寄存器的时钟引脚，上升沿时，移位寄存器中的数据整体后移，并接收新的数据输入|
|12引脚RCK|存储寄存器的时钟输入引脚。上升沿时，数据从移位寄存器转存到存储寄存器中。这时数据就从Q0~Q7端口并行输出。|
|9引脚SQH|引脚是一个串行输出引脚，专门用于芯片级联，接下一个74HC595的SI端|
|15脚，1-7脚Q0--Q7|八位并行输出端，可以直接控制数码管的8个段|

采用VCC和GND为芯片供电，工作电压为5V

4.项目电路图和接线图：

![](media/c5ff7d1df69133b45b74f538f155d68d.png)

注意：需要注意74HC595N芯片插入的方向

![](media/b36bafc31eb701c04d0bfe1956c6952a.png)![](media/5a0de137092d094f6007098ac141586a.png)

![](media/3ab2cafb465c8b2690689239eac22261.png)

5.项目代码：

```
int data = 4;// 将74hc5954引脚设置为数据输入引脚SI 
int clock = 6;// 将74hc595的6引脚设置为时钟引脚SCK
int latch = 5;// 将74hc595的引脚5设置为输出锁存器RCK
int ledState = 0;
const int ON = HIGH;
const int OFF = LOW;

void setup()
{
  pinMode(data, OUTPUT);
  pinMode(clock, OUTPUT);
  pinMode(latch, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 256; i++)
  {
    updateLEDs(i);
    delay(500);
  }
}

void updateLEDs(int value)
{
  digitalWrite(latch, LOW);//
  shiftOut(data, clock, MSBFIRST, ~value);// 串行数据输出，高电平优先
  digitalWrite(latch, HIGH);// 锁存器
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，可以看到7个LED灯亮灭变化情况，循环往复进行。

### 项目10: 一位数码管

1.  项目介绍：

七段数码管是一种显示十进制数字的电子显示设备，广泛应用于数字时钟、电子仪表、基本计算器和其他显示数字信息的电子设备。甚至我们在电影中看到的炸弹也有七个部分。也许七段数码管看起来不够现代，但它们是更复杂的点阵显示器的替代品，在有限的光线条件下和强烈的阳光下都很容易使用。在这个项目中，我们将使用Plus
控制板控制一位数码管显示数字。

2.  项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/75e38d601750a4707369bc73d8028063.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|一位数码管*1|220Ω电阻*8|面包板*1|跳线若干|USB 线*1|

3. 元件知识：

![](media/e44a0f27beec739ee13e68c04865989f.png)

一位数码管显示原理：数码管显示是一种半导体发光器件。它的基本单元是一个发光二极管(LED)。数码管显示根据段数可分为7段数码管和8段数码管。8段数码管比7段多一个LED单元(用于小数点显示)。七段LED显示屏的每段是一个单独的LED。根据LED单元接线方式，数码管可分为共阳极数码管和共阴极书案管。

在共阴极7段数码管中，分段LED的所有阴极(或负极)都连接在一起，你应该把共阴极连接到GND，要点亮一个分段LED，你可以将其关联的引脚设置为HIGH。

在共阳极7段数码管中，所有段的LED阳极(正极)都连接在一起，你应该把共阳极连接到+5V。要点亮一个分段LED，你可以将其关联的引脚设置为LOW。

![](media/28fd057848fbe0e8c8e3362768e7aa44.png)

数码管的每个部分由一个LED组成。所以当你使用它的时候，你也需要使用一个限流电阻。否则，LED会被烧坏。在这个实验中，我们使用了一个普通的共阴极一位数码管。正如我们上面提到的，你应该将公共阴极连接到GND。要点亮一个分段LED，你可以将其关联的引脚设置为HIGH。

4.项目电路图和接线图：

![](media/00ef471b0ca7eff3c0e8419e7dae11de.png)

注意：插入面包板的七段数码管方向与接线图一致，右下角多一个点。

![](media/66da2f88234019c4a712494174ea4426.png)

![](media/46ee92ff3b54236d1d21dcb51f2c7020.png)

5.项目代码：

数字显示分7段，小数点显示分1段。当显示某些数字时，相应的段将被点亮。例如，当显示数字1时，b和c段将被打开。我们为每个数字编译子程序，并编译主程序以每1秒显示一个数字，循环显示数字0
~ 9。每个数字的显示时间取决于延迟时间，延迟时间越长，显示时间越长。

```
// 设置每段的IO引脚
int a=7;// 设置a段数字引脚为7
int b=6;// 设置b段数字引脚为6
int c=5;// 设置c段数字引脚为5
int d=10;//设置d段数字引脚为10
int e=11;//设置e段数字引脚为11
int f=8;//数字f段数字引脚为8
int g=9;//设置g段数字引脚为9
int dp=4;//设置dp段数字引脚为4

void digital_0(void) // 显示数字0
{
  unsigned char j;
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,LOW);
}

void digital_1(void) //显示数字1
{
  unsigned char j;
  digitalWrite(c,HIGH);// 将5脚设为高电平，点亮c段led
  digitalWrite(b,HIGH);// 点亮b段led
  for(j=7;j<=11;j++)// 关闭其它段led
    digitalWrite(j,LOW);
  digitalWrite(dp,LOW);// 关闭dp段led
}

void digital_2(void) // 显示数字2
{
  unsigned char j;
  digitalWrite(b,HIGH);
  digitalWrite(a,HIGH);
  for(j=9;j<=11;j++)
    digitalWrite(j,HIGH);
  digitalWrite(dp,LOW);
  digitalWrite(c,LOW);
  digitalWrite(f,LOW);
}

void digital_3(void) // 显示数字3
{
  digitalWrite(g,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(dp,LOW);
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
}

void digital_4(void) // 显示数字4
{
  digitalWrite(c,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
  digitalWrite(a,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
}

void digital_5(void) // 显示数字5
{
  unsigned char j;
  digitalWrite(a,HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}

void digital_6(void) // 显示数字6
{
  unsigned char j;
  for(j=7;j<=11;j++)
    digitalWrite(j,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(dp,LOW);
  digitalWrite(b,LOW);
}

void digital_7(void) // d显示数字7
{
  unsigned char j;
  for(j=5;j<=7;j++)
    digitalWrite(j,HIGH);
  digitalWrite(dp,LOW);
  for(j=8;j<=11;j++)
    digitalWrite(j,LOW);
}

void digital_8(void) // 显示数字8
{
  unsigned char j;
  for(j=5;j<=11;j++)
    digitalWrite(j,HIGH);
  digitalWrite(dp,LOW);
}

void digital_9(void) // 显示数字9
{
  unsigned char j;
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}

void setup()
{
  int i;// 设置变量i
  for(i=4;i<=11;i++)
    pinMode(i,OUTPUT);// 设置引脚4-11为“输出”
}

void loop()
{
  while(1)
  {
    digital_9();// 显示数字9
    delay(1000); // 等待1秒
    digital_8();// 显示数字8
    delay(1000); // 等待1秒
    digital_7();// 显示数字7
    delay(1000); // 等待1秒
    digital_6();// 显示数字6
    delay(1000); // 等待1秒
    digital_5();// 显示数字5
    delay(1000); // 等待1秒
    digital_4();// 显示数字4
    delay(1000); // 等待1秒
    digital_3();// 显示数字3
    delay(1000); // 等待1秒
    digital_2();// 显示数字2
    delay(1000); // 等待1秒
    digital_1();// 显示数字1
    delay(1000);// 等待1秒
    digital_0();// 显示数字0
    delay(1000);// 等待1秒
  }
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，一位数码管将显示从9到0的数字。

### 项目11：四位数码管

1.  项目介绍：

4位7段数码管是一种非常实用的显示器件。电子时钟的显示，球场上的记分员，公园里的人数都是需要的。由于价格低廉，使用方便，越来越多的项目将使用4位7段数码管。在这个项目中，我们使用Plus
控制板控制4位7段数码管来显示0000-9999之间的数字。

2.  项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/ee7a4ecd35ef268149e31fb9d62c8227.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|四位数码管*1|220Ω 电阻*8|跳线若干|面包板*1|USB 线*1|

3.  元件知识：

![](media/ce987bf9a2ab398945c98b34d3f8a003.png)

四位数码管：四位数码管有共阳极和共阴极两种四位数码管，显示原理是和一位数码管是类似的，都是8个GPIO口控制数码管的显示段，就是8个led灯，不过，这里是4位的，所以就还需要4个GPIO口来控制位选择端，就是选择哪个单个数码管亮，位的切换很快，肉眼区分不出来，就能看起来是多个数码管同时显示的了。

我们的四位数码管是共阴极的。

下图为4位数码管的引脚图，G1、G2、G3、G4就是控制位的引脚。

![](media/37113fa53213973132086c285d67686b.png)

下图为4位数码管内部布线原理图

![](media/c210e9899274cdf79ffd44db1e250fb5.png)![](media/ea75d1b7414bf6f8c187fb32fea9bc83.png)

4.项目的电路图和接线图：

对于四位数码管，限流电阻是必不可少的。这里我们使用220Ω的8个电阻。

![](media/71da40f847f2c27e83a2766e7f933605.png)

![](media/5b97deb00879da72894bfcdc94a9a3c6.png)

5.项目代码：

```
int a = 6;
int b = 7;
int c = 8;
int d = 9;
int e = 10;
int f = 11;
int g = 12;
int dp = 13;

int g4 = 5;
int g3 = 4;
int g2 = 3;
int g1 = 2;


long n = 1230;
int x = 100;
int del = 55;    // 时钟微调

void setup()
{
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(g4, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

void loop()
{
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  unsigned long currentMillis = millis();
  while(d>=0)
  {
    while(millis()-currentMillis<10)
    {
      Display(1,a);
      Display(2,b);
      Display(3,c);
      Display(4,d);
    }
    currentMillis = millis(); 
    d++;  
    if (d>9) 
    {
      c++;
      d=0;
    }
    if (c>9) 
    {
      b++;
      c=0;
    }
    if (b>9) 
    {
      a++;
      b=0;
    }
    if (a>9) 
    {
      a=0;
      b=0;
      c=0;
      d=0;
    }
  }  
}

void WeiXuan(unsigned char n)//
{
  switch (n)
  {
    case 1:
      digitalWrite(g1, LOW);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, HIGH);
      break;
    case 2:
      digitalWrite(g1, HIGH);
      digitalWrite(g2, LOW);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, HIGH);
      break;
    case 3:
      digitalWrite(g1, HIGH);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, LOW);
      digitalWrite(g4, HIGH);
      break;
    case 4:
      digitalWrite(g1, HIGH);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, LOW);
      break;
    default :
      digitalWrite(g1, HIGH);
      digitalWrite(g2, HIGH);
      digitalWrite(g3, HIGH);
      digitalWrite(g4, HIGH);
      break;
  }
}

void Num_0()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void Num_1()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void Num_2()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void Num_3()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Num_4()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void Num_5()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}
void Num_6()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void Num_7()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void Num_8()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void Num_9()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, LOW);
}

void Clear()    // clear the screen
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
}

void pickNumber(unsigned char n)// 选择数字
{
  switch (n)
  {
    case 0: Num_0();
      break;
    case 1: Num_1();
      break;
    case 2: Num_2();
      break;
    case 3: Num_3();
      break;
    case 4: Num_4();
      break;
    case 5: Num_5();
      break;
    case 6: Num_6();
      break;
    case 7: Num_7();
      break;
    case 8: Num_8();
      break;
    case 9: Num_9();
      break;
    default: Clear();
      break;
  }
}

void Display(unsigned char x, unsigned char Number)//以x为坐标，显示数字
{
  WeiXuan(x);
  pickNumber(Number);
  delay(1);
  Clear() ; // 清屏
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，四位数码管显示0000-9999之间的数字。

### 项目12：点阵屏显示

1.  项目介绍：

点阵屏是一种电子数字显示设备，可以显示机器、钟表、公共交通离场指示器和许多其他设备上的信息。LED点阵显示能够满足不同应用需求，具有广阔的发展前景。LED点阵采用低压扫描，具有省电、使用寿命长、成本低、亮度高、视角宽、视野长、防水、规格多等优点。在这个项目中，我们将进行一个8\*8LED点阵显示实验，亲身体验它的魅力。

2.  项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/d226a1f3c801ac78321f0692143c853e.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|8*8点阵屏*1|220Ω 电阻*8|跳线若干|面包板*1|USB 线*1|

3.  元件知识：

![](media/d226a1f3c801ac78321f0692143c853e.png)

8\*8点阵屏：8\*8的点阵由64个LED组成，每个LED被放置在一排和一列的交叉点上。点阵屏的外部视图如下所示：

![](media/b8a10d032797c4874fe344f8758749a8.png)![](media/559b8d5ce30d16e26dfe1fc53cb49fae.jpeg)

当某一行(ROW)的电平为1，某一列(COL)的电平为0时，对应的LED会点亮。如果你想在第一个点上点亮LED，你应该设置引脚⑨为高电平，引脚⑬为低电平。如果你想在第一行点亮led，你应该设置引脚⑨为高电平，将引脚⑬、③、④、⑩、⑥、⑪、⑮和⑯设置为低电平。如果你想点亮第一列的led，将引脚⑬设置为低电平，将引脚⑨、⑭、⑧、⑫、①、⑦、②和⑤设置为高电平。

点阵屏的内部视图如下所示：

![](media/d83ddbc5286ef87ff73c76c5e296c230.png)

4.  项目电路图和接线图：

    ![](media/c1dbab91079fbad54f8dd98a36f75aec.png)

    ![](media/0468bf2396033549be2a17f26c217bc0.png)

    在面包板上接线时要正放（788BS标志朝向主控板）

    ![](media/a90917acf94f4ea265f53edfbc21e216.png)

5.  项目代码：

```
int R[] = {2,3,4,5,6,7,8,9}; // 行引脚定义
int C[] = {10,11,12,13,A0,A1,A2,A3}; // 列引脚定义

// 数字0的LED显示图案
unsigned char data_0[8][8] =
{
    {0,0,1,1,1,0,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,0,1,1,1,0,0,0}
};

// 数字1的LED显示图案
unsigned char data_1[8][8] =
{
    {0,0,0,0,1,0,0,0},
    {0,0,0,1,1,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,1,1,1,0,0}
};

// 数字2的LED显示图案
unsigned char data_2[8][8] =
{
    {0,0,1,1,1,0,0,0},
    {0,1,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,1,0,0,0,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0}
};

// 数字3的LED显示图案
unsigned char data_3[8][8] =
{
    {0,0,1,1,1,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,1,1,1,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0}
};

// 数字4的LED显示图案
unsigned char data_4[8][8] =
{
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,1,0,0,0},
    {0,1,0,0,1,0,0,0},
    {0,1,1,1,1,1,1,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,0,0}
};

// 数字5的LED显示图案
unsigned char data_5[8][8] =
{
    {0,1,0,0,0,0,0,0},
    {0,1,1,1,1,1,0,0},
    {0,1,0,0,0,0,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0}
};

// 数字6的LED显示图案
unsigned char data_6[8][8] =
{
    {0,1,1,1,1,1,0,0},
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,1,1,1,1,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0}
};

// 数字7的LED显示图案
unsigned char data_7[8][8] =
{
    {0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,1,0,0,0,0},
    {0,0,1,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
};

// 数字8的LED显示图案
unsigned char data_8[8][8] =
{
    {0,1,1,1,1,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,1,1,1,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0}
};

// 数字9的LED显示图案
unsigned char data_9[8][8] =
{
    {0,1,1,1,1,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,0,0,0,1,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0}
};

// LED显示函数
void Display(unsigned char dat[8][8])
{
    for(int c = 0; c<8;c++)
    {
        digitalWrite(C[c],LOW);
        for(int r = 0;r<8;r++)
        {
            digitalWrite(R[r],dat[r][c]);
        }
        delay(1);
        Clear();
    }
}

// 清屏函数
void Clear()
{
    for(int i = 0;i<8;i++)
    {
        digitalWrite(R[i],LOW);
        digitalWrite(C[i],HIGH);
    }
}

// 初始化设置
void setup()
{
    for(int i = 0;i<8;i++)
    {
        pinMode(R[i],OUTPUT);
        pinMode(C[i],OUTPUT);
    }
}

// 主循环
void loop()
{
    // 循环显示数字0-9，每个数字显示100次
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_0);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_1);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_2);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_3);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_4);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_5);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_6);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_7);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_8);
    }
    for (int i = 1; i <= 100; i = i + (1)) 
    {
        Display(data_9);
    }
}
```

6.  项目结果：

    烧录好测试代码，按照接线图连接好线；上电后，8\*8点阵屏依次显示数字0~9，循环进行。

### 项目13: 小台灯

1.项目介绍：

你知道Arduino可以在你按下按键的时候点亮LED吗?
在这个项目中，我们将使用Plus控制板，一个按键开关和一个LED来制作一个小台灯。

2.项目代码：



|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/5b8fea4657b47510d199f740fdcaaa9d.png)|![](media/ef77f5a64c382157fc2dea21ec373fef.png)|![](media/da8a2a9d15baf7280966f3fdbb025a8c.png)|![](media/9cab81f7da18c7b0c245ec2a2f614f3a.png)|
|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|按键*1|红色 LED*1|10KΩ电阻*1|按键帽*1|
|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/845d05a6108b1662b828610ba9dcb788.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)||
|面包板*1|220Ω电阻*1|USB 线*1|跳线若干||

3.元件知识：

![](media/5b8fea4657b47510d199f740fdcaaa9d.png)

按键：按键可以控制电路的通断，把按键接入电路中，不按下按键的时候电路是断开的，

一按下按键电路就通啦，但是松开之后就又断了。可是为什么按下才通电呢？这得从按键的内部构造说起。没按下之前，电流从按键的一端过不去另一端，按键的两端就像两座山，中间隔着一条河，我们在这座山过不去另一座山；按下的时候，按键内部的金属片把两边连接起来让电流通过，就像搭了一座桥，把两座山连接起来。

按键内部结构如图：![](media/d2a204e61c768f18924150db58aee093.png)，未按下按键之前，1、2就是导通的，3、4也是导通的，但是1、3或1、4或2、3或2、4是断开（不通）的；只有按下按键时，1、3或1、4或2、3或2、4才是导通的。

在设计电路时，按键开关是最常用的一种元件。

按键的原理图:     
![](media/5e42fde9876f9be810d85a7fb8b331f7.png)
![](media/8677548f9e756281629430d66ba3a460.png)   4脚按键引脚图，管脚结构：  
![](media/5dc61e1cf09f876fc0e8e3c395517730.png)  
独立按键的引脚内部连接方式如下图，大家也可以自己用万用表测试一下：  
![](media/e1eef743f3319a4c897183f7b2de9149.png)

什么是按键抖动？

我们想象的开关电路是“按下按键-立刻导通”“再次按下-立刻断开”，而实际上并非如此。按键通常采用机械弹性开关，而机械弹性开关在机械触点断开闭合的瞬间（通常10ms左右），会由于弹性作用产生一系列的抖动，造成按键开关在闭合时不会立刻稳定的接通电路，在断开时也不会瞬时彻底断开。

![](media/4dbcca62c2d75cab03260584924a16d8.png)

那又如何消除按键抖动呢？

常用除抖动方法有两种：软件方法和硬件方法。这里重点讲讲方便简单的软件方法。

我们已经知道弹性惯性产生的抖动时间为10ms左右，用延时命令推迟命令执行的时间就可以达到除抖动的效果。

所以我们在代码中加入了0.05秒的延时以实现按键防抖的功能。

![](media/1497573e05f993b5f32923fcd6590a01.png)  
4. 项目电路图和接线图：

![](media/8cc6cbc757bcb93ef203b8884f86ad86.png)

![](media/1225e5d672d96d87fcde7b74f53d7f41.png)

注意:

怎样连接LED

![](media/14a84d5f016d7566151a5563c502787e.png)

怎样识别五色环220Ω电阻和五色环10KΩ电阻

![](media/793740d0b936e516ca354111e2d0eb79.png)

![](media/18484e5d16b6d89c63825cc2efa6a543.png)

5.项目代码：

```
int buttonPin = 5;               //按钮连接到数字5
int ledPin = 12;                 //LED连接到数字12
int ledState = LOW;            // ledState记录LED状态
int buttonState;                 // buttonState记录按键状态
int lastButtonState = LOW;     // lastbuttonState记录按键前一个状态
long lastDebounceTime = 0;
long debounceDelay = 50;        //去除抖动时间

void setup() 
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}

void loop() 
{
    //reading用来存储buttonPin的数据
  int reading = digitalRead(buttonPin);

  // 一旦检测到数据发生变化，记录当前时间
  if (reading != lastButtonState) 
  {
      lastDebounceTime= millis();
  }
  // 等待50ms，再进行一次判断，是否和当前button状态相同
// 如果和当前状态不相同，改变button状态
// 同时，如果button状态为高（也就是被按下），那么就改变led的状态
  if ((millis() - lastDebounceTime) >debounceDelay) 
  {
    if (reading != buttonState) 
    {
      buttonState = reading;
      if (buttonState == HIGH) 
      {
          ledState= !ledState;
      }
    }
  }
  digitalWrite(ledPin, ledState);
  // 改变button前一个状态值
  lastButtonState = reading;
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，按下按钮，灯点亮。再按下按钮，灯熄灭。是不是很像个小台灯？

### 项目14: 电子沙漏

1.  项目介绍：

    古代人没有电子时钟，就发明了沙漏来测时间，沙漏两边的容量比较大，在一边装了细沙，中间有个很小的通道，将沙漏直立，有细沙的一边在上方，由于重力的作用，细沙就会往下流通过通道到沙漏的另一边，当细沙都流到下边了，就倒过来，把一天反复的次数记录下来，第二天就可以通过沙漏反复流动的次数而知道这一天大概的时间了。这一课我们将利用Plus     控制板控制倾斜开关和LED灯电子元件来模拟沙漏，制作一个电子沙漏。

2.  项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/36f15610f430e5d5138f4e4fb721c40f.png)|![](media/ef77f5a64c382157fc2dea21ec373fef.png)|![](media/da8a2a9d15baf7280966f3fdbb025a8c.png)|
|-|-|-|-|
|Keyes Uno Plus 控制板*1|倾斜开关*1|红色 LED*4|10KΩ电阻*1|
|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/845d05a6108b1662b828610ba9dcb788.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)|
|面包板*1|220Ω电阻*4|USB 线*1|跳线若干|

3.元件知识：

![](media/8c40739f8e05f753f145420b421a0f47.png)

倾斜开关也叫数字开关。里面有一个可以滚动的金属球。采用金属球滚动与底部导电板接触的原理来控制电路的通断。当倾斜开关是滚珠型倾斜感应单方向性触发开关，当倾斜传感器向触发端（两根金属脚端）倾斜时，倾斜开关处于闭路状态，模拟端口的电压约为5V(二进制数为1023)。这样，LED会亮起。当倾斜开关在水平位置或向另一端倾斜时，倾斜开关处于开路状态，模拟端口的电压约为0V(0二进制)。LED将会关闭。在程序中，我们根据模拟端口的电压值，是否大于2.5V(512二进制)来判断开关是开还是关。

这里用倾斜开关的内部结构来说明它是如何工作的，显示如下图：

![](media/40bc569b295c4656bd973da4ad8734e2.png)

4.项目电路图和接线图：

![](media/c4367389f15b1cb0332b15b8ec4eeeb6.png)

![](media/dd879781b2aafe7f1bf501e768a74241.png)

注意:

怎样连接LED

![](media/14a84d5f016d7566151a5563c502787e.png)

怎样识别五色环220Ω电阻和五色环10KΩ电阻

![](media/793740d0b936e516ca354111e2d0eb79.png)

![](media/18484e5d16b6d89c63825cc2efa6a543.png)

5.项目代码：

```
const byte SWITCH_PIN = 4; // 将倾斜开关连接到D4
byte switch_state = 0;

void setup()
{
  for(int i=8;i<12;i++)
  {
    pinMode(i, OUTPUT);
  } 
  pinMode(SWITCH_PIN, INPUT);
  for(int i=8;i<12;i++)
  {
    digitalWrite(i,0);
  } 
  Serial.begin(9600);
}

void loop()
{
  switch_state = digitalRead(SWITCH_PIN); 
  Serial.println(switch_state);
  if (switch_state == 0) 
  {
    for(int i=8;i<12;i++)
    {
      digitalWrite(i,1);
      delay(1000);
    } 
  }
  if (switch_state == 1) 
  {
    for(int i=11;i>7;i--)
    {
      digitalWrite(i,0);
      delay(1000);
    }
  }
}
```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，用手握住面包板。倾斜到一定角度，led就会一个一个亮起来。当回到上一个角度时，led会一个一个关闭。就像沙漏一样，随着时间的推移，沙子漏了出来。

### 项目15： I2C 1602 LCD

1.项目介绍：

在生活中，我们可以利用显示器等模块来做各种实验。你也可以DIY各种各样的小物件。例如，用一个温度传感器和显示器做一个温度测试仪，或者用一个超声波模块和显示器做一个距离测试仪。下面，我们将使用1602 I2C模块作为显示器，将其连接到Plus控制板上。将使用Plus控制板控制1602显示屏显示字符串。

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/4356b8b9bf0c3997972f07a15df49fb5.png)|![](media/7a7bfd2c64d6139731e499ee8f013d8d.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|-|-|-|-|
|Keyes Uno Plus 控制板*1|I2C 1602 LCD*1|公对母杜邦线若干|USB 线*1|

2.项目元件：

3.元件知识：

![](media/4356b8b9bf0c3997972f07a15df49fb5.png)

LCD1602显示屏：显示屏有LCD 1602液晶显示屏和I2C 1602 LCD。但是我们在这个项目中使用的是一个I2C LCD 1602。LCD 1602显示屏可以显示16列2行字符。它能够显示数字、字母、符号、ASCII码等。如下所示是一个单色LCD1602显示屏（在工作时需要占用控制板的7个IO口）及其电路引脚图：

![](media/090f5c6d8d196d63357b164168f8b702.png)

I2C LCD1602显示屏集成了I2C接口，连接的串行输入&并行输出给LCD1602显示屏模块。这使得我们只要使用4条线路就可以来操作LCD1602。

![](media/a63f879379a6f5db68288af80a05474e.png)

本模块使用的IC芯片为PCF8574T (PCF8574AT)，其默认I2C地址为0x27(0x3F)。

在液晶显示器的背面有一个金属电位器。你可以用螺丝刀（我们不提供）转动电位器来调整对比度。

![](media/55b85cd6367eae74e04f67d222c24a7e.png)

请注意：当你旋转电位器时，屏幕将变得更亮或更暗，适当的角度将使字体更清晰。

I2C 1602 LCD 原理图：

![](media/3055dd93488bc9dd88d1de4ed74743c1.png)

I2C 1602 LCD技术参数：

显示像素：16 \* 2 字符

芯片工作电压：4.5 ~ 5.5V

工作电流：2.0mA (5.0V)

模块最佳工作电压：5.0V

I2C 地址：0x27

背光 (蓝色背景和白色背光)

4.  项目接线图：（GND-GND，VCC-5V，SDA-A4，SCL-A5）

![](media/dd0191d715e41809a2c0a9df1c039fa5.png)

5.  项目代码：

    注意：代码中需要安装库文件，如果已经添加了LiquidCrystal_I2C和Wire等库文件，就忽略下面库文件的添加过程。

    将文件夹中的库文件解压，即把解压后的LiquidCrystal_I2C文件夹和Wire文件夹放入编译器安装目录下的\Arduino\libraries里。

    放置成功后，需要重启编译器，不然编译不过。

    例如我的：C:\Program Files\Arduino\libraries
    
    ```
    #include <Wire.h>
    #include <LiquidCrystal_I2C.h>
    
    // 初始化LCD，地址0x27，16列2行
    LiquidCrystal_I2C lcd(0x27,16,2); 
    
    void setup()
    {
        // 初始化LCD
        lcd.init(); 
        lcd.init();
        // 开启背光
        lcd.backlight();
    }
    
    void loop()
    {
        // 第一行显示"Hello, world!" 
        lcd.setCursor(3,0);
        lcd.print("Hello, world!");
        
        // 第二行显示"keyestudio!"
        lcd.setCursor(2,1);
        lcd.print("keyestudio!");
    }
    ```

6.项目结果：

烧录好项目代码，按照接线图连接好线，上电后，I2C 1602 LCD的第一行将显示Hello, world!，第二行将显示keyestudio!。通过更改我们提供的代码括号中的文本并再次上传代码，你可以通过I2C 1602 LCD看到显示的东西。

lcd.setCursor(3,0);

lcd.print("Hello, world!");

lcd.setCursor(2,1);

lcd.print("keyestudio!");

### 项目16：小风扇

1.  项目介绍：

在炎热的夏季，需要电扇来给我们降温，那么在这个项目中，我们将使用Plus控制板分别通过S8050三极管和S8550三极管来控制直流电机转动，做一个迷你小风扇。

2.  项目元件：

| ![](media/65355a20ac3dfb3e0b48011c3e7947ea.png) | ![](media/9197d4aff9356c585b7ef68e33a6881d.png) | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png) | ![](media/9197d4aff9356c585b7ef68e33a6881d.png) | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) |
| ----------------------------------------------- | ----------------------------------------------- | ----------------------------------------------- | ----------------------------------------------- | ----------------------------------------------- |
| Keyes Uno Plus 控制板*1                         | S8050三极管*1                                   | 面包板*1                                        | S8550三极管*1                                   | 1KΩ电阻*1                                       |
| ![](media/5eba8bae9e1d18b959ca425a9cc83fd2.png) | ![](media/755ba492c38e44d91e8b2c120dc64904.png) | ![](media/e9a8d050105397bb183512fb4ffdd2f6.png) | ![](media/1bf53ac81ddf98f104f5bbdf8f4b7692.png) |                                                 |
| 直流电机*1                                      | USB 线*1                                        | 跳线若干                                        | 风扇片*1                                        |                                                 |

3.元件知识:

![](media/9197d4aff9356c585b7ef68e33a6881d.png)

三极管：全称应为半导体三极管，也称双极型晶体管、晶体三极管，是一种控制电流的半导体器件。其作用是把微弱信号放大成幅度值较大的电信号，也用作无触点开关。

三极管是半导体基本元器件之一，具有电流放大作用，是电子电路的核心元件。三极管是在一块半导体基片上制作两个相距很近的PN结，两个PN结把整块半导体分成三部分，中间部分是基区，两侧部分是发射区和集电区，排列方式有PNP和NPN两种。

对于NPN三极管，它是由2块N型半导体中间夹着一块P型半导体所组成，发射区与基区之间形成的PN结称为发射结，而集电区与基区形成的PN结称为集电结，三条引线分别称为发射极E（Emitter）、基极B (Base)和集电极C (Collector)。

![](media/a5c527dcd6bc3b8c655f9b98dc58f9af.png)

S8050（NPN型三极管）

![](media/3bace56b6d4c5836d1f334038e88acf1.png)

S8550（PNP型三极管）

S8050三极管是一款小功率NPN型硅管，集电极-基极(Vcbo)电压最大可为40V，集电极电流为(Ic)0.5A。

S8050三极管字面朝向自己，引脚朝下，1脚是发射极（E极），2脚是基极（B极），3脚是集电极（C极）。同理，S8550三极管一样。

![](media/760c9e3c7a154cf5e47aa9abf51554e5.png)
![](media/d8ba67974349165abb6178d1c337f0f4.png)

我们常用的三极管分为两大类型：PNP型三极管和NPN型三极管，S8550为PNP型三极管，S8050为NPN型三极管，在我们的学习套件中提供的是S8050和S8550。

![](media/c144ab2728278ceca223daf0c9206d3c.png)
![](media/78e8d704ecc6f174c374bd1aaf17a3bb.png)

4.项目电路图和接线图1：

（这个实验是使用S8050（NPN型三极管）控制电机）

![](media/d6a01a0d6689ee21b9fa8a0e3a7946fe.png)

![](media/18e17b0734af1b28894abb936b965f19.png)

5. 项目代码1：

   ```
   void setup() 
   {
     // 初始化数字引脚3作为输出.
     pinMode(3, OUTPUT);
   }
   
   // 循环函数一遍又一遍地重复运行
   void loop() 
   {
     digitalWrite(3, HIGH);   // 打开电机(HIGH为高电平)
     delay(4000);              // 延时4秒
     digitalWrite(3, LOW);    // 使电压降低，关闭电机
     delay(3000);              // 延时3秒
   }
   ```

6.项目结果1：

在控制板上上传代码成功，按照接线图接好线，将小风扇片安装到直流电机上，上电后，可以看到电机正转（顺时针转）4秒，停止3秒，重复进行。

7.项目电路图和接线图2：

（这个实验是使用S8550（PNP型三极管）控制电机）

![](media/71617fa6ee7735583120733b94d2d2e2.png)

![](media/9c1cebafe889987b87804a6cd9dce9ee.png)

8. 项目代码2：

   ```
   void setup() 
   {
     // 初始化数字引脚3作为输出.
     pinMode(3, OUTPUT);
   }
   
   // 循环函数一遍又一遍地重复运行
   void loop() 
   {
     digitalWrite(3, LOW);   // 打开电机(LOW为低电平)
     delay(4000);              // 延时4秒
     digitalWrite(3, HIGH);    // 使电压升高，关闭电机
     delay(3000);              // 延时3秒
   }
   ```

9.项目结果2：

在控制板上上传代码成功，按照接线图接好线，将小风扇片安装到直流电机上，上电后，可以看到电机反转（逆时针转）4秒，停止3秒，重复进行。

### 项目17：调光灯

1.  项目介绍：

电位器是一个带有滑动或旋转触点的三端电阻器，它形成一个可调的分压器。它的工作原理是在均匀电阻上改变滑动触点的位置。在电位器中，整个输入电压被施加到电阻的整个长度上，输出电压是固定触点和滑动触点之间的电压值。在这个项目中，我们将学习如何使用Arduino读取电位器的值，并制作一个可调光灯。

2.  项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/8945ce5821e6e5843e1203e299b415f1.png)|![](media/ef77f5a64c382157fc2dea21ec373fef.png)|![](media/845d05a6108b1662b828610ba9dcb788.png)|
|-|-|-|-|
|Keyes Uno Plus 控制板*1|可调电位器*1|红色 LED*1|200Ω电阻*1|
|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|![](media/e9a8d050105397bb183512fb4ffdd2f6.png)||
|面包板*1|USB 线*1|跳线若干||

3.  元件知识：

![](media/c397aba3de644bb70ffa7a9139a5499e.png)

可调电位器：可调电位器是电阻和模拟电子元件的一种，具有0和1两种状态(高电平和低电平)。模拟量不同，其数据状态呈现为1
~ 1024等线性状态。

4.  读取电位器模拟值：

我们将可调电位器连接到Arduino的模拟引脚上读取其值。接线请参照以下接线图：

![](media/c8cc7ff54c6dd885eeeb20f32f2e04b5.png)

```
int potpin=A1;//初始化可调电位器的模拟引脚A1
int val=0;// 定义val,初始值赋为0

void setup()
{
  Serial.begin(9600);// 波特率设置为9600
}

void loop()
{
  val=analogRead(potpin);// 读取模拟引脚A1的模拟值，并将其赋值给val 
  Serial.println(val);// 显示val的值
}
```

将代码上传到Plus控制板上，按照接线图连接好线，上电后，当你旋转电位器旋钮时，你可以看到显示的值发生变化。由于大多数传感器输出的是模拟值，因此模拟值的读取是一个非常常见的功能。经过计算，可以得到所需的对应值。下图显示了它读取的模拟值。

![](media/69187b6a6204ec9be9e987bcb35e306f.png)

5.调光灯的电路图和接线图：

在前面一步，我们读取了可调电位器的模拟值，现在我们需要将电位器的模拟值转换成LED的亮度，做成一个亮度可调的灯。见接线图。

![](media/17b9ea36b6c54576692526a11dce7b25.png)

![](media/703df5358a560ff1ac54e2570de1900d.png)

6.项目代码：

```
int potpin=A1;// 初始化可调电位器的模拟引脚A1
int ledpin=11;// 初始化数字引脚11
int val=0;// 定义val,初始值赋为0

void setup()
{
  pinMode(ledpin,OUTPUT);// 设置数字引脚为“输出”
  Serial.begin(9600);// 波特率设置为9600
}
void loop()
{
  val=analogRead(potpin);// 读取模拟引脚A1的模拟值，并将其赋值给val 
  analogWrite(ledpin,val/4);
  Serial.println(val);// 显示val的值
}
```

7.项目结果：

在控制板上上传代码成功，按照接线图接好线，上电后，打开串口监视器，设置波特率为9600，监视器将显示电位器的模拟值。当我们转动电位器时，LED的亮度会发生变化。

### 项目18: 火焰报警

1.  项目介绍：

火灾是一种可怕的灾害，火灾报警系统在房屋，商业建筑和工厂中非常有用。在本项目中，我们将使用火焰传感器和蜂鸣器来制作火灾报警装置。这是一个有意义的创客活动。

2.  项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/882d7aebfdcc637edf3dd161675dc24e.png)|![](media/4b4f653a76a82a3b413855493cc58fba.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/7a9793b2ed75473d4338c84f1419b7df.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|![](media/da8a2a9d15baf7280966f3fdbb025a8c.png)|
|-|-|-|-|-|-|-|
|Keyes Uno Plus 控制板*1|火焰传感器*1|有源蜂鸣器*1|面包板*1|跳线若干|USB 线*1|10KΩ电阻*1|

3.  元件知识：

![](media/398d6477d6a8949031d52f141a250142.png)

火焰会发出一定程度的IR光，这种光人眼是看不到的，但我们的火焰传感器可以检测到它，并提醒微控制器，如Arduino已经检测到火灾。它有一个专门设计的红外接收管来探测火焰，然后将火焰亮度转换为波动水平信号。接收三极管的短引脚是负极，另一个长引脚是正极。我们应该连接短引脚（负极)到5V，连接长引脚(正极)到模拟引脚，一个电阻和GND。如下图所示：

![](media/3f0435fdd13d8f1845a04014709d0f41.png)

4.  读取火焰传感器模拟值：

我们首先用一个简单的代码读取火焰传感器的值，把它打印在串行监视器上。接线请参照以下接线图：

![](media/3be5b777b212a7b954e5b7ac6ab84847.png)

```
int flamepin=A1;// 初始化模拟管脚A1
int val=0;// 定义val，初始值赋为0

void setup()
{
  Serial.begin(9600);// 波特率设置为9600
}

void loop()
{
  val=analogRead(flamepin);// 读取模拟引脚A1的模拟值，并将其值赋给val
  Serial.println(val);// 显示val值
}
```

将代码上传到Plus控制板，按照接线图连接好线，上电后。打开串行监视器，用打火机火焰接近火焰传感器查看其模拟值。

5.  火焰报警的电路图和接线图：

接下来，我们将使用火焰传感器和蜂鸣器、RGB LED制作一个有趣的项目——火焰报警。当检测到火焰时，RGB亮红灯，蜂鸣器报警。

![](media/ee51f8ddfb54811148fba03b399deb1f.png)

![](media/81b580d04a0b02ac931f8fcf2df82077.png)

6.  项目代码：

```
const int red = 11;
const int green = 10;
const int blue= 9;
const int buzzer = 12;
const int flamepin = A1;
const int thereshold = 30;

void setup() 
{
  // 将设置代码放在这里，运行一次:
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(flamepin, INPUT);
}

void setColor(int redValue, int greenValue, int blueValue)
{
  analogWrite(red, redValue);
  analogWrite(blue, blueValue);
  analogWrite(green, greenValue);
}
 
void loop() 
{
  // 把主代码放在这里，重复运行:
  int flamesenseval = analogRead(flamepin);
  Serial.println(flamesenseval);
  if (flamesenseval >= thereshold) 
  {
    setColor(255, 0, 0); //红色
    tone(buzzer, 1000);
    delay(10);
  }
  else
  {
    setColor(0, 255, 0); // 绿色
    noTone(buzzer);
  }
}
```

7.项目结果：

将代码上传到PLUS控制板，按照接线图连接好线，上电后。打开串口监视器，设置波特率为9600，监视器将显示火焰传感器的值。我们使用打火机火焰靠近火焰传感器，RGB LED亮红灯，蜂鸣器会报警；否则RGB LED亮绿灯，蜂鸣器不响。

### 项目19: 光控灯

1.项目介绍：

传感器或元件在我们的日常生活中是无处不在的。例如，一些公共路灯在晚上会自动亮起，而在白天会自动熄灭。为什么呢?
事实上，这些都是利用了一种光敏元件，可以感应外部环境光强度的元件。晚上，当室外亮度降低时，路灯会自动打开；到了白天，路灯会自动关闭。这其中的原理是很简单的，这节课我们就实现这个路灯的功能。

2.  项目元件：

|![](media/544243270a027fc8cfa58e0f651a7bf4.png)|![](media/942378c667f9389955ad7d43d74d7615.png)|![](media/ef77f5a64c382157fc2dea21ec373fef.png)|![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)|
|-|-|-|-|
|Keyes Uno Plus 控制板*1|光敏电阻*1|红色 LED*1|220Ω电阻*1|
|![](media/da8a2a9d15baf7280966f3fdbb025a8c.png)|![](media/4acb8663d8eefd6412faf78c4e857d6a.png)|![](media/7a9793b2ed75473d4338c84f1419b7df.png)|![](media/755ba492c38e44d91e8b2c120dc64904.png)|
|10KΩ电阻*1|面包板*1|跳线若干|USB 线*1|

3.  元件知识：

![](media/4f79b3be4e1f694675264534d0d10c74.png)

光敏电阻：光敏传感器是利用半导体的光电导效应制成的一种电阻值随入射光的强弱而改变的电阻器，又称为光电导探测器。周围的光变强，电阻变小，模拟信号就变大；反之，光变弱，电阻增大，模拟信号就变小。

光敏传感器常用的制作材料为硫化镉，另外还有硒、硫化铝、硫化铅和硫化铋等材料。这些制作材料具有在特定波长的光照射下，其阻值迅速减小的特性。这是由于光照产生的载流子都参与导电，在外加电场的作用下作漂移运动，电子奔向电源的正极，空穴奔向电源的负极，从而使光敏传感器的阻值迅速下降。

光敏电阻普遍应用于光的测量、光的控制和光伏转换(将光的变化转化为电能的变化)。光敏电阻也被广泛应用于各种光控电路，如光控调节、光开关等。

![](media/2efcbe4de13ae5184b90ab11edadf5e9.jpeg)

我们将从一个相对简单的关于光敏变阻器应用的实验开始。

4.  读取光敏电阻模拟值：

我们首先用一个简单的代码读取光电池的值，将其打印在串行监视器中。接线请参照以下接线图：

![](media/9f86e125b836ab8c1cfbdd880bcc46b1.png)

```
int photocellpin=A0;// 初始化连接光敏电阻的模拟管脚A0
int val=0;// 初始化变量val的值为0

void setup()
{
  Serial.begin(9600);// 波特率设置为9600
}

void loop()
{
  val=analogRead(photocellpin);// 读取传感器的值并将其值赋给val
  Serial.println(val);// 显示val的值
  delay(200);// 等待0.2秒
}
```

将代码上传到Plus控制板上，按照接线图连接好线，上电后，打开串口显示器，就可以读取光敏电阻的模拟值。逐渐减弱光敏电阻所处环境中的光照强度，你会发现串口显示器上显示的模拟值在逐渐变小了；反之，模拟值在逐渐增大。

5.  光控灯的电路图和接线图：

我们在前面做了一个小的调光灯，现在我们做一个光控灯。它们的原理是相同的。即通过Arduino获取传感器的模拟值，然后调节LED的亮度。![](media/abbea59da20eabb5e1ebfd32d4f02ade.png)

![](media/dc96f248437a7c8fb1788da1aae25b96.png)

6.  项目代码：

```
int photocellpin=A0;// 初始化连接光敏电阻的模拟管脚A0
int ledpin=11;// 初始化数字管脚11
int val=0;// 初始化变量val的值为0

void setup()
{
  pinMode(ledpin,OUTPUT);// 设置数字引脚11为“输出”
  Serial.begin(9600);// 波特率设置为9600
}

void loop()
{
  val=analogRead(photocellpin);//读取传感器的模拟值并将其值赋给val
  Serial.println(val);//显示val的值
  analogWrite(ledpin,val/4);//设置亮度(最大值255)
  delay(10);// 等待0.01秒
}
```

7.  项目结果：

将代码上传到PLUS控制板。按照接线图连接好线，上电后，打开串口显示器，设置波特率为9600。监视器将显示光敏电阻的模拟值。当逐渐减弱光敏电阻所处环境中的光照强度时，串口显示器上显示的模拟值在逐渐变小，LED会变暗。当逐渐减强光敏电阻所处环境中的光照强度时，显示的模拟值会变大，LED会变亮。

### 项目20：温度仪表

1.  项目介绍：

热敏电阻是一种电阻，其阻值取决于温度和温度的变化。因此，我们可以利用这一特性来制作温度计。

2.  项目元件：



| ![](media/65355a20ac3dfb3e0b48011c3e7947ea.png) | ![](media/b45bb81bb3763377c63accce606ac5f2.png) | ![](media/5ba197df049decb301e344dcba8a9e1f.png) | ![](media/7a7bfd2c64d6139731e499ee8f013d8d.png) |
| ----------------------------------------------- | ----------------------------------------------- | ----------------------------------------------- | ----------------------------------------------- |
| Keyes Uno Plus 控制板*1                         | 热敏电阻*1                                      | 4.7KΩ电阻*1                                     | 公对母杜邦线若干                                |
| ![](media/d84f766a5b9b394448ffbd53e0f545d0.png) | ![](media/755ba492c38e44d91e8b2c120dc64904.png) | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png) | ![](media/e9a8d050105397bb183512fb4ffdd2f6.png) |
| I2C1602LCD*1                                    | USB 线*1                                        | 面包板*1                                        | 跳线若干                                        |

3.  元件知识：

    热敏电阻：热敏电阻是一种温度敏感电阻。当它感应到温度的变化时，热敏电阻的电阻就会改变。我们可以利用这一特性，用热敏电阻来检测温度强度。借此广泛应用于园艺、家庭警报系统等装置中。

    ①这里使用的是NTC-MF52AT     10K热敏电阻，其中B为3950，它与R<sub>S</sub>=R<sub>平衡</sub>=4.7KΩ电阻串联，热敏电阻的电阻值会随着温度的变化而改变。

    ![](media/cbc30b533808ec7540328c0d932ce600.png)

    ②NTC热敏电阻的计算：       NTC 热敏电阻温度计算公式：Rt = R\*EXP\[B\*(1/T1-1/T2)\]

其中，T1和T2指的是K度，即开尔文温度。

Rt是热敏电阻在T1温度下的阻值。

R是热敏电阻在T2常温下的标称阻值，10K的热敏电阻25℃的值为10K（即R=10K）。T2=(273.15+25)

EXP\[n\]是e的n次方

B值是热敏电阻的重要参数,B=3950。

我们可以利用ADC转换器测得的值来得到热敏电阻的电阻值，然后再用公式来得到温度值。因此，摄氏温度t=((T1\*B)/(B+T1\*ln(Rt/R1)))-273.15，这里可以将ln换算成log，即t=((T1\*B)/(B+T1\*log(Rt/R1)))-273.15。同时±0.5的误差矫正。

4.  读取热敏电阻的值：

    首先我们学习了如何使用串行监视器来打印热敏电阻的值。请按下面的接线图接好线：

![](media/e6217a640ee88c14405501f8ae647d8d.png)

```
#include <math.h>

// 定义常量
const float voltagePower = 5.0;    // 供电电压5V
const float Rs = 4.7;             // 采样电阻4.7千欧
const int B = 3950;               // B值常数
const double T1 = 273.15 + 25;    // 常温25℃（开尔文温度）
const double R1 = 10;             // 常温25℃时的电阻值（千欧）

void setup() 
{
    // 初始化串口通信
    Serial.begin(9600);
}

void loop() 
{
    // 读取A1引脚的模拟值
    double digitalValue = analogRead(1);
    
    // 将模拟值转换为电压值
    double voltageValue = (digitalValue / 1023) * 5;
    Serial.print("Current voltage value = ");
    Serial.println(voltageValue);
    
    // 计算热敏电阻当前阻值
    double Rt = ((voltagePower - voltageValue) * Rs) / voltageValue;
    Serial.print("Current registor value = ");
    Serial.println(Rt);
    
    // 计算并输出温度值（转换为摄氏度）
    Serial.print("Current temperature value = ");
    Serial.println(((T1 * B) / (B + T1 * log(Rt / R1))) - 273.15);
    Serial.println();
    
    // 每3秒测量一次（可修改此值调整采样频率）
    delay(3000);
}
```

将代码上传到Plus控制板，按接线图接好线，上电后，打开串行监视器，就可以读取热敏电阻引脚A1处的电压值，通过分压比获得热敏电阻的阻值和温度值。如下所示：

5.  温度仪表电路图和接线图：

![](media/1da9667325d1a52d66540bb25775fd93.png)

![](media/9a04cf2402e555cf3d29b38f70434431.png)

6.  项目代码：

    注意：代码中需要安装I2C 1602     LCD库文件，如果已经添加了I2C 1602     LCD库文件，就忽略下面库文件的添加过程。

    项目15中包含有I2C 1602     LCD的库文件，将文件夹中的库文件解压，即把解压后的LiquidCrystal_I2C文件夹放入编译器安装目录下的\Arduino\libraries里。

    放置成功后，需要重启编译器，不然编译不过。

例如我的：C:\Program Files\Arduino\libraries

```
#include <math.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// 初始化LCD，地址0x27，16列2行
LiquidCrystal_I2C lcd(0x27,16,2); 

// 温度传感器参数
const float voltagePower = 5.0;    // 供电电压5V
const float Rs_val = 4.7;         // 采样电阻4.7千欧
const int B = 3950;               // B值常数
const double T1 = 273.15 + 25;    // 常温25℃（开尔文温度）
const double R1 = 10;             // 常温25℃时的电阻值（千欧）

void setup()
{
    // 初始化串口通信
    Serial.begin(9600);
    
    // 初始化LCD
    lcd.init();
    
    // 设置LCD初始显示
    lcd.backlight();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("C v v=");
}

void loop()
{
    // 读取A1引脚的模拟值
    double digitalValue = analogRead(1);
    
    // 将模拟值转换为电压值
    double voltageValue = (digitalValue / 1023) * 5;
    
    // 计算热敏电阻当前阻值
    double Rt = ((voltagePower - voltageValue) * Rs_val) / voltageValue;
    
    // 计算温度值（摄氏度）
    const float t = ((T1 * B) / (B + T1 * log(Rt / R1))) - 273.15;

    // 有效温度检测（>-100℃）
    if(t > -100.0)
    {
        // 串口输出监测数据
        Serial.print("Current voltage value=");
        Serial.println(voltageValue);
        Serial.print("Current registor value=");
        Serial.println(Rt);
        Serial.print("Current temperature value=");
        Serial.println(t);
        Serial.println(" ");
        
        // LCD显示电压值
        lcd.setCursor(7, 0);
        lcd.print(voltageValue);
        lcd.setCursor(13, 0);
        lcd.print("V");
        
        // LCD显示温度值
        lcd.setCursor(0, 1);
        lcd.print("C t v=");
        lcd.setCursor(7, 1);
        lcd.print(t);
        lcd.setCursor(13, 1);
        lcd.print("C");
        lcd.print(" ");
    }
    else
    {
        // 传感器异常提示
        Serial.println("Error! check sensor!");
    }
    // 500ms采样间隔
    delay(500);
}
```

7.  项目结果：

将项目代码上传到Plus开发板，按照接线图接好线，上电后，I2C 1602 LCD显示A1引脚的电压值和当前环境中的温度值。同时打开串口监视器窗口，可以看到相应的A1引脚的电压值，通过分压比获得热敏电阻的阻值电阻值和当前环境中的温度值。

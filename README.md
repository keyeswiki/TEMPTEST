# environment

Environment and Science  package is developed under the cooperation of [KEYESTUDIO](https://www.keyestudio.com/), [CLASSROOM](http://www.classroom.com.hk/) and [TINKERCADEMY](https://tinkercademy.com/).

The KEYESTUDIO Environment and Science Kit can detect all kinds of environment data like temperature, humidity, soil moisture , and so on. 

![](https://github.com/keyestudio/pxt-environment/blob/master/icon.jpg)

## Hardware list 

1. IIC OLED display
1.  Temperature And Humidity Sensor
1. Soil Moisture Sensor

## Basic usage

1. Open [Microsoft Makecode/microbit](https://pxt.microbit.org) and create a new project 
2. Search and add the `environment` package
3. Use the `Environment` drawer in the editor to drag out and arrange the blocks
4. Click `Download` to move your program to the micro:bit

## Example

### read temperature
get DHT11 Temperature(℃)
```blocks
basic.forever(() => {
    basic.showNumber(Environment.ReadTemperature(AnalogPin.P0))
})
```

### read soil moisture
get soil moisture, Value Range: 0~100.
```blocks
basic.forever(() => {
    basic.showNumber(Environment.ReadSoilHumidity(AnalogPin.P3))
})
```


## License

MIT


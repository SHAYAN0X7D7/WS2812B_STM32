# WS2812B_STM32
## simple library for WS2812B  with stm32 Microcontroller 

hello ! this is my ws2812b library and its very esey to use 

## The first thing you need to do is set the microcontroller's timer clock 
![Screenshot 2025-01-28 140135](https://github.com/user-attachments/assets/2e837cad-5830-4cd4-ac16-7f3644a24eea)

## This library uses CH1 PWM timer 1, and to use this, you must configure the timer as follows.

![Screenshot 2025-01-28 140237](https://github.com/user-attachments/assets/15fefead-6950-4251-9465-8d2f28a2d04c)

## Then you need to add DMA to access the memory directly

![Screenshot 2025-01-28 140357](https://github.com/user-attachments/assets/1cdb32f0-7877-4a0f-ac2a-8001b2db9212)

##  And the connections are as follows
  
  ![Screenshot 2025-01-28 141450](https://github.com/user-attachments/assets/97729adc-1cec-4e37-a752-225a2d85b573)

This library has 3 functions


```
void Set_LED (int LEDnum, int Red, int Green, int Blue);
```
   To adjust the light color of each pixel, the first argument is related to the pixel number, the second argument is related to the amount of red light, the third argument is related to the amount of green light, and the fourth argument is related to the amount of blue light.
Each color is defined from a value of 0 to 255
```
void Set_Brightness(int brightness);
```
   It is used to adjust the light of all pixels and it receives a value from 0 to 45
   
```
void WS2812_Send (void);
```
After setting the colors of each pixel, this function sends the data to the LEDs

And enjoy your Neo Pixels :))







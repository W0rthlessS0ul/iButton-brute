<div align="center">
  <img src="https://avatars.githubusercontent.com/u/176677387" width="150" height="auto" />
  <h1> 🌟 nRF24 Jammer 🌟 </h1>
</div>
Welcome to the **ibutton brute** repository! 🎉 Dive into the world of ibutton technology with this unique project based on Arduino.

## 📚 Table of Contents
- [🎯 Possible Additions](#-possible-additions)
- [🚀 What Can You Do with This?](#-what-can-you-do-with-this)
- [📋 List of Components](#-list-of-components)
- [🧑‍🔧 Let's Get Started with Soldering!](#-lets-get-started-with-soldering)
- [📦 Flash Firmware](#-flash-firmware)
- [🎉 Final Outcome](#-final-outcome)
- [❤️ Support the project](#-support-the-project)
- [🌐 Follow Me for Updates](#-follow-me-for-updates)

-----

## 🎯 Possible Additions
- **Enlarge the code sheet**
- **Support for other protocols**
- **Random bruteforce mode (not by list)**

***`If you have the capability to assist with these features, please feel free to create pull requests!`***

-----

## 🚀 What Can You Do with This?
This device allows you to send keys from the list by emulating them using the Dallas 1990 protocol, which makes it possible to open intercoms running on this protocol (if the intercom is not protected from such)

-----

## 📋 List of Components
To bring this project to life, you will need the following components:
1. **Arduino nano**⚙️ *(but you can also use other models)*
2. **128x32 OLED display** 📺
3. **3 Tactile buttons** 🔘

-----

## 🧑‍🔧 Let's Get Started with Soldering!
### OLED Connection
| **OLED Pin** | **Arduino Pin** |
|--------------|-----------------|
|GND           |GND              |
|VCC           |3.3-5v           |
|SCL           |A5               |
|SDA           |A4               |
### Buttons Connection
| **Buttons Pin** | **Arduino Pin** |
|-----------------|-----------------|
|GND              |GND              |
|NEXT             |D2               |
|OK               |D3               |
|PREVIOUS         |D4               |
### OneWire Connection
| **OneWire Pin** | **Arduino Pin** |
|-----------------|-----------------|
|GND              |GND              |
|Data             |D7               |

-----

## 📦 Flash Firmware
Follow these steps to flash the firmware:
1. Download the firmware from the **releases**
2. download [xLoader](https://github.com/binaryupdates/xLoader) and run XLoader.exe
3. In the input fields, select the data as in the table
| **Column Name** | **Data**                                                           |
|-----------------|--------------------------------------------------------------------|
|**Hex file**         |Select the downloaded **firmware file**                             |
|**Device**           |Select your device *(**Duemilanove/Nano(ATmega328)** for arduino nano)*|
|**COM port**         |Select the port that the device is connected to                 |
|**Baud rate**        |115200                                                          |

![xLoader](img/xLoader)

-----

## 🎉 Final Outcome

![device](img/device.png)

-----

## ❤️ Support the project
If you would like to support this project, please consider starring the repository or following me! If you appreciate the hard work that went into this, buying me a cup of coffee would keep me fueled! ☕ 

**BTC Address:** `bc1qvul4mlxxw5h2hnt8knnxdrxuwgpf4styyk20tm`

**ETH Address:** `0x5c54eAb2acFE1c6C866FB4b050d8B69CfB1138Af`

**LTC Address:** `LbdzCsYbxuD341raar6Cg1yKavaDq7fjuV`

**XRP Address:** `rKLLPzoBGfqY3pAQPwTFPRYaWjpHSwHNDw`

**ADA Address:** `addr1qyz2aku0ucmxqnl60lza23lkx2xha8zmxz9wqxnrtvpjysgy4mdcle3kvp8l5l7964rlvv5d06w9kvy2uqdxxkcryfqs7pajev`

**DOGE Address:** `DBzAvD62yQUkP4Cb7C5LuFYQEierF3D3oG`

Every donation is greatly appreciated and contributes to the ongoing development of this project!

-----

## 🌐 Follow Me for Updates
Stay connected to receive the latest updates:

[![GitHub](https://img.shields.io/badge/GitHub-W0rthlessS0ul-181717?style=flat&logo=github&logoColor=white)](https://github.com/W0rthlessS0ul)

<img src="https://profile-counter.glitch.me/W0rthlessS0ul.ibutton_brute/count.svg"/>

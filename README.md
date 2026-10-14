# Mass-Weight Converter (C)

A simple, interactive command-line utility written in C that converts mass (in kg) to weight (in Newtons) based on Earth's gravity (g = 9.8). 

I built this project while learning C to practice loops, conditional statements, and user input validation.

## Features
* **Accurate Conversion:** Multiplies input mass by 9.8 to get the exact weight in Newtons.
* **Interactive Loop:** Keeps running until you decide to exit, checking for valid choices (`y`/`n`).
* **Input Protection:** Handles basic case sensitivity for user inputs.

## How to Build and Run

### Prerequisites
Make sure you have a C compiler like `gcc` installed. 

* On Linux/Kali: `sudo apt install build-essential`
* On Windows: Use MinGW or run inside Git Bash / PowerShell with gcc configured.

### Compilation
Open your terminal/PowerShell in the project folder and run:
```bash
gcc main.c -o converter
```

### Running the App
On Linux:
```bash
./converter
```
On Windows:
```bash
.\converter.exe
```

## Credits
* Coded by me — follow me on TikTok: **@justpixel.code**


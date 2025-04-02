# 🌱 C Hydroponic System Model for Tomatoes 🍅

<div align="center">
  <p>
    <img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white" alt="Language C">
    <img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge" alt="License MIT">
    </p>

  **A simulation model developed in C to monitor and manage optimal growing conditions for tomato plants in a hydroponic system. This project, part of an academic assignment, focuses on structured programming techniques to control critical environmental parameters.**
</div>

---

## ✨ Overview

Hydroponics offers efficient plant cultivation, but requires precise control over environmental factors. This program simulates the monitoring and management of a hydroponic system tailored for tomatoes, ensuring key parameters like pH, light exposure, temperature, humidity, and nutrient levels are maintained within optimal ranges for healthy growth. It emphasizes input validation and data logging for system tracking.

---

## 📸 Screenshots / Demo

<div align="center">
  <p><em>(Add screenshots showing parameter monitoring, input prompts, validation messages, etc. here)</em></p>
  </div>

---

## 🚀 Key Features

* **💧 pH Management:**
    * Monitors and enforces the optimal pH range for tomatoes (5.5 - 6.5).
    * Includes robust input validation, rejecting out-of-range values and prompting for re-entry.
* **☀️ Light Cycle Control:**
    * Simulates the required photoperiod: 16 to 18 hours of light exposure.
    * Ensures an adequate dark period (8 hours) for plant processes.
* **🌡️ Temperature & Humidity Regulation:**
    * Maintains specific, potentially different, temperature and humidity ranges for simulated day and night conditions.
* **🥗 Nutrient Level Tracking:**
    * Allows input and tracking for essential macronutrients (e.g., Nitrogen, Phosphorus, Potassium - NPK).
    * (Note: Specific nutrient delivery simulation might be basic, focusing on tracking levels).
* **💾 Data Logging & Persistence:**
    * User inputs and simulated system states are stored in text files for record-keeping and potential future analysis.
* **✅ Input Validation:**
    * Ensures user inputs for parameters fall within scientifically accepted ranges for tomato growth.

---

## 💡 Core C Programming Concepts Applied

This project utilizes fundamental structured programming techniques in C:

* **🧱 Modularity:** Code is organized into functions (e.g., `monitor_ph()`, `regulate_temperature()`, `manage_light_cycle()`, `log_data()`) for better readability, maintainability, and reusability.
* **📁 File I/O:** Standard C libraries (`stdio.h`) are used for reading configuration (if any) and writing system status/logs to text files (`fopen`, `fprintf`, `fscanf`, `fclose`).
* **🚦 Control Flow:** `if-else` statements, `switch` cases (potentially for menu options), and loops (`for`, `while`) are used to manage program logic, simulate cycles (day/night), and enforce parameter limits.
* **🛡️ Input Validation:** Functions carefully check user input against predefined valid ranges before processing or storing data.
* **💾 Data Structures (Potentially):** `struct` might be used to group related system parameters (e.g., `struct SystemState { float ph; float temp; ... };`) for cleaner data management.

---

## 🛠️ Tech Stack

* **Language:** C (Specify standard if known, e.g., C99, C11)
* **Core Libraries:**
    * `stdio.h` (Standard Input/Output)
    * `stdlib.h` (Standard Library functions, e.g., type conversions)
    * `string.h` (String manipulation, if used)
    * `time.h` (Potentially for simulating time cycles)
    * (List any other standard libraries used)

---

## 🔧 Getting Started

### Prerequisites

* A C Compiler (GCC is recommended, Clang or MSVC should also work).
* `make` (Optional, useful if a `Makefile` is provided).
* Git (for cloning).

### Installation & Compilation

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/YOUR_USERNAME/YOUR_REPO_NAME.git](https://github.com/YOUR_USERNAME/YOUR_REPO_NAME.git)
    cd YOUR_REPO_NAME
    ```
    *(Replace `YOUR_USERNAME/YOUR_REPO_NAME` with your actual details)*

2.  **Compile the source code:**
    * **Using GCC (Example):**
        Compile all necessary `.c` files. Adjust the command based on your source files. If you use math functions (`math.h`), add `-lm`.
        ```bash
        gcc main.c utils.c validation.c file_io.c -o hydroponics_model -lm
        ```
        *(Make sure to list all your `.c` files. Remove `-lm` if `math.h` is not used)*
    * **Using Make (If `Makefile` exists):**
        ```bash
        make
        ```

### Running the Application

1.  Execute the compiled program from your terminal:
    ```bash
    ./hydroponics_model
    ```
2.  The program will likely prompt you to enter current or desired parameters (pH, temp, etc.). Follow the on-screen instructions. Invalid inputs should trigger re-entry prompts.

---

## 📄 Data Files

The program uses the following text files for data storage (typically created/updated in the same directory as the executable):

* `system_log.txt` (Example): May contain timestamped logs of parameter readings or adjustments.
* `current_state.txt` (Example): Could store the last known state of the system parameters.
    *(Adjust file names and descriptions based on your actual implementation)*

---

## 📜 License

Distributed under the MIT License. See `LICENSE` file for more information.

*(Alternatively: "This project was created for educational purposes as part of a university assignment.")*

---

## 👤 Author

* **Pedro Fabian Owono** - [Owono2001](https://github.com/Owono2001)

---

<div align="center">
  <em>Happy Hydroponic Modeling!</em> 🌱💧
</div>

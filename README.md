
# 🌊 IoT-Based Smart Fish Farming System for Sustainable Aquaculture


## 🧠 Abstract
Modern fish farming faces challenges like high labor cost, water quality monitoring issues, and fish mortality due to environmental imbalance. This project proposes a smart aquaculture system using **IoT-based sensors** to monitor real-time **temperature, pH, turbidity, TDS**, and **dissolved oxygen** levels. Data is transmitted via Wi-Fi and viewed on a centralized dashboard, enabling proactive fish pond management.

---

## 🎯 Objectives

- 📡 **Real-time Monitoring** of critical water parameters
- 🐟 **Enhance Fish Health** by maintaining ideal aquatic conditions
- 💸 **Reduce Operational Costs** by automating observation and alerts
- 🌱 **Promote Sustainable Aquaculture** practices

---

## 📦 Hardware Components

| Component         | Model            | Parameter Detected       |
|------------------|------------------|--------------------------|
| Microcontroller  | Arduino UNO      | Central Control Unit     |
| Temp. Sensor     | DS18B20          | Water Temperature        |
| pH Sensor        | SEN0161          | pH Level                 |
| Turbidity Sensor | SEN0189          | Water Clarity            |
| TDS Sensor       | SEN0244          | Total Dissolved Solids   |
| DO Sensor        | SKU1356249       | Dissolved Oxygen         |
| Wi-Fi Module     | ESP8266 (NodeMCU)| Internet Connectivity    |

📄 See `sensor_config.json` for detailed sensor mapping.

---

## ⚙️ Software Requirements

- Arduino IDE
- JSON data visualization tools
- Web browser (for UI)
- Wi-Fi connection (local or cloud)

---
## 🧪 Prototype Overview

A functional prototype of the smart aquaculture system was developed using the specified hardware components. The prototype includes all sensors integrated with the Arduino UNO and Wi-Fi module, mounted on a compact board. Real-time data is successfully transmitted to a dashboard interface, demonstrating responsive monitoring and alert mechanisms. This working model validates the core concept and showcases the feasibility of deploying the system in real-world fish farming environments for enhanced efficiency and sustainability.

<img width="511" height="620" alt="image" src="https://github.com/user-attachments/assets/6d272cd9-44f1-495b-a66b-1d690088bf62" />

---

## 🏗️ System Architecture

<img width="622" height="302" alt="image" src="https://github.com/user-attachments/assets/d18d561e-7b05-465e-957e-df5434aa02e2" />


> Sensors collect data → Arduino processes → Sends to dashboard via Wi-Fi

---

## 🧭 Block Diagram

<img width="622" height="302" alt="image" src="https://github.com/user-attachments/assets/d4dabe02-3635-4427-952f-59b2edf7af6e" />


---

## 🔌 Circuit Schematic

<img width="622" height="302" alt="image" src="https://github.com/user-attachments/assets/7cf06b38-72fc-4246-b943-66a5258bf3e7" />


---

## 💻 Arduino Code Overview

The code reads values from all sensors and checks thresholds:

- **Temperature**: Ideal range 26–32°C
- **pH**: Between 6.5–9.0
- **TDS**: ~400–450 ppm
- **Turbidity**: Clear water around 45%
- **DO**: Should remain above 2.5 mg/L

📂 View the code in: `Code/main_code_with_sensors.ino`

---

## 🖥️ User Interface

<img width="400" height="600" alt="image" src="https://github.com/user-attachments/assets/3bf90f8a-7e35-42d1-9dd0-a26f0eec93db" />


---

## 📊 Experimental Results

Real-time values observed over 7 days:

| Day       | Temp (°C) | pH  | TDS (ppm) | Turbidity (%) | DO (mg/L) |
|-----------|-----------|-----|-----------|----------------|-----------|
| Monday    | 28        | 6.1 | 410       | 45.2%          | 3.4       |
| Tuesday   | 27        | 7.1 | 430       | 45.1%          | 3.1       |
| ...       | ...       | ... | ...       | ...            | ...       |

🔬 Test Results:

- **Pond Water**  
<img width="722" height="303" alt="image" src="https://github.com/user-attachments/assets/b91f05cc-c9db-4b2b-9d18-4f54868d6ec5" />


- **Detergent-Contaminated Water**  
<img width="722" height="303" alt="image" src="https://github.com/user-attachments/assets/f88ee3c3-795f-406d-b568-d91360c06ffb" />


- **Combined Result**  
<img width="722" height="303" alt="image" src="https://github.com/user-attachments/assets/becc747a-b4de-4b22-8c3b-442bf7387ccb" />


---

## 📖 Research Paper

📝 Published in **YMER – Volume 23, Issue 05 (May 2024)**  
📄 See: `Research_Paper/Research_Paper_YMER.pdf` for full methodology and literature review

---

## ✅ Conclusion

📄 Refer: `Documentation/Conclusion.pdf`

> The proposed system provides a cost-effective, data-driven solution for real-time water quality management in fish farming, encouraging proactive decisions, minimizing risks, and improving fish productivity.

---

## 🔮 Future Scope

📄 Refer: `Documentation/Future Scope.pdf`

- Add nitrate/ammonia detection
- Blockchain integration for supply chain
- Solar-powered sensors
- Integration with machine learning models for prediction

---

## 👨‍💻 Developer Notes

This project is created and maintained by **Harshkumar Bhamare**, a Java and IoT Developer with a strong focus on sustainability and automation in aquaculture.  
All content is protected by copyright and is **not available for open source reuse or redistribution** without explicit permission.

---

## 📁 Project File Structure

```
📦 Smart_Fish_Farming_IoT_Project
├── 📄 README.md
├── 📄 LICENSE
│
├── 📁 Code
│   ├── main_code_with_sensors.ino
│   ├── sensor_config.json
│   └── 📁 Sample_Output
│       ├── sample_output_1.jpg
│       ├── sample_output_2.jpg
│       └── sample_output_3.jpg
│
├── 📁 Presentation
│   └── IoT_Fish_Farming_Presentation.pptx
│
├── 📁 Images
│   ├── prototype_photo.jpg
│   ├── User interface.png
│   ├── Block Diagram.png
│   ├── system_architecture.png
│   ├── schematic.png
│   ├── Results.jpg
│   ├── Pond Water Result.jpg
│   └── Detergant Water Result.jpg
│
├── 📁 Documentation
│   ├── Abstract.pdf
│   ├── Conclusion.pdf
│   ├── Future Scope.pdf
│
└── 📁 Research_Paper
    └── Research_Paper_YMER.pdf
```

---

## 📬 Contact

For academic queries or formal collaboration:  
📧 mr.harshkumarbhamare@gmail.com 

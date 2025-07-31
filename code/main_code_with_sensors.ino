// --- Sensor Libraries ---
#include <OneWire.h>
#include <DallasTemperature.h>       // DS18B20 - Temperature
#include <Wire.h>

// Pin definitions
#define ONE_WIRE_BUS 2     // DS18B20
#define PH_PIN A0          // SEN0161
#define TURBIDITY_PIN A1   // SEN0189
#define TDS_PIN A2         // SEN0244
#define DO_PIN A3          // SKU1356249 (Analog output)

// Setup oneWire instance for temperature sensor
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// Variables to store sensor readings
float temperature, pH, turbidity, tds, doLevel;

// Thresholds (for freshwater fish like Tilapia)
const float TEMP_MIN = 22.0, TEMP_MAX = 30.0;
const float PH_MIN = 6.5, PH_MAX = 8.0;
const float TURBIDITY_MAX = 500.0; // ppm
const float TDS_MAX = 1000.0;      // ppm
const float DO_MIN = 5.0;          // ppm

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  // --- Read Temperature ---
  sensors.requestTemperatures();
  temperature = sensors.getTempCByIndex(0);

  // --- Read pH (simulated) ---
  int phRaw = analogRead(PH_PIN);
  pH = (phRaw * 5.0 / 1024.0) * 3.5;  // Example conversion

  // --- Read Turbidity (simulated) ---
  int turbidityRaw = analogRead(TURBIDITY_PIN);
  turbidity = map(turbidityRaw, 0, 1023, 0, 1000);

  // --- Read TDS (simulated) ---
  int tdsRaw = analogRead(TDS_PIN);
  tds = map(tdsRaw, 0, 1023, 0, 1500);

  // --- Read Dissolved Oxygen (simulated) ---
  int doRaw = analogRead(DO_PIN);
  doLevel = map(doRaw, 0, 1023, 0, 14);

  // --- Print All Sensor Values ---
  Serial.println("MatsyaSanskar - IoT Fish Farming System");
  Serial.print("Temperature: "); Serial.print(temperature); Serial.println(" °C");
  Serial.print("pH Level: "); Serial.println(pH);
  Serial.print("Turbidity: "); Serial.print(turbidity); Serial.println(" ppm");
  Serial.print("TDS: "); Serial.print(tds); Serial.println(" ppm");
  Serial.print("Dissolved Oxygen: "); Serial.print(doLevel); Serial.println(" ppm");

  // --- Warnings and Suggestions ---
  if (temperature < TEMP_MIN) {
    Serial.println("⚠️ Warning: Temperature too low!");
    Serial.println("➡️ Suggestion: Use a water heater or insulate the tank.");
  } else if (temperature > TEMP_MAX) {
    Serial.println("⚠️ Warning: Temperature too high!");
    Serial.println("➡️ Suggestion: Use a cooling fan or shade net.");
  }

  if (pH < PH_MIN) {
    Serial.println("⚠️ Warning: pH too low!");
    Serial.println("➡️ Suggestion: Add baking soda or crushed coral.");
  } else if (pH > PH_MAX) {
    Serial.println("⚠️ Warning: pH too high!");
    Serial.println("➡️ Suggestion: Add peat moss or almond leaves.");
  }

  if (turbidity > TURBIDITY_MAX) {
    Serial.println("⚠️ Warning: Water too turbid!");
    Serial.println("➡️ Suggestion: Improve filtration or reduce feed waste.");
  }

  if (tds > TDS_MAX) {
    Serial.println("⚠️ Warning: TDS too high!");
    Serial.println("➡️ Suggestion: Perform partial water change.");
  }

  if (doLevel < DO_MIN) {
    Serial.println("⚠️ Warning: Dissolved Oxygen low!");
    Serial.println("➡️ Suggestion: Use aerators or air stones.");
  }

  // --- Fish Food Suggestion ---
  Serial.println("🐟 Fish Food Recommendation:");
  Serial.println("1) Greens: Lettuce, spinach, zucchini, cucumber.");
  Serial.println("2) Protein: Alternate with plant-based and meat proteins.");

  Serial.println("--------------------------------------------------");
  delay(10000); // Delay before next read
}

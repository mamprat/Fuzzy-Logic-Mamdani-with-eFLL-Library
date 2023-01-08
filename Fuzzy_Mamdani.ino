//==================================================================================
#include <Fuzzy.h>
Fuzzy *fuzzy = new Fuzzy();

//Input Fuzzy
// 1. FuzzyInput_ds18b20
FuzzySet*cukup    = new FuzzySet(-25, 0, 25, 27);
FuzzySet*optimal  = new FuzzySet(25, 27, 28, 30);
FuzzySet*tinggi   = new FuzzySet(28, 30, 32, 34);

// 2. FuzzyInput_ph
FuzzySet*asam     = new FuzzySet(-6, 1, 6, 7);
FuzzySet*netral   = new FuzzySet(6, 7, 8, 9);
FuzzySet*basa     = new FuzzySet(8, 9, 14, 16);

// 3. FuzzyInput_turbidity
FuzzySet*sangat_jernih  = new FuzzySet(-25, 0, 25, 125);
FuzzySet*jernih         = new FuzzySet(25, 125, 300, 400);
FuzzySet*keruh          = new FuzzySet(300, 400, 500, 600);

//Output Fuzzy
// 1. FuzzyOutput_status
FuzzySet*rawan = new FuzzySet(0, 0, 20, 25);
FuzzySet*cukup_aman = new FuzzySet(20, 25, 35, 40);
FuzzySet*baik = new FuzzySet(35, 40, 50, 50);

// 2. FuzzyOutput_pembuangan
FuzzySet*off_buang    = new FuzzySet(0, 0, 80, 100);
FuzzySet*pelan_buang  = new FuzzySet(80, 100, 140, 160);
FuzzySet*cepat_buang  = new FuzzySet(140, 160, 200, 200);

// 3. FuzzyOutput_penampungan
FuzzySet*off_tampung = new FuzzySet(0, 0, 80, 100);
FuzzySet*on_tampung  = new FuzzySet(80, 100, 200, 200);

#include "2_fuzzy_set.h"
#include "3_fuzzy_rules.h"
//==================================================================================

void setup() {
  Serial.begin(9600);
  fuzzyset ();
  fuzzyrules ();
}

void loop() {
  float value_temperature = 25;
  float value_ph = 7;
  float value_NTU = 10;
  float status;
  float pembuangan;
  float penampungan;


  Serial.print(value_temperature);
  Serial.print(" ");
  Serial.print(value_ph);
  Serial.print(" ");
  Serial.print(value_NTU);

  fuzzy->setInput(1, value_temperature);
  fuzzy->setInput(2, value_ph);
  fuzzy->setInput(3, value_NTU);
  fuzzy->fuzzify();

  status = fuzzy->defuzzify(1);
  pembuangan = fuzzy->defuzzify(2);
  penampungan = fuzzy->defuzzify(3);

  Serial.print(" ");
  Serial.print(status);
  Serial.print(" ");
  Serial.print(pembuangan);
  Serial.print(" ");
  Serial.println(penampungan);
  
}

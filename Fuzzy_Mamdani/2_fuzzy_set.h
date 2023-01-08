void fuzzyset () {
  //================MEMBUAT MEMBERSHIP FUNCTION FUZZY================
  //================INPUT================
  //FuzzyInput_ds18b20/Input(1)
  FuzzyInput *ds18b20 = new FuzzyInput(1);
  ds18b20->addFuzzySet(cukup);
  ds18b20->addFuzzySet(optimal);
  ds18b20->addFuzzySet(tinggi);
  fuzzy->addFuzzyInput(ds18b20);

  //FuzzyInput_ph/Input(2)
  FuzzyInput *ph = new FuzzyInput(2);
  ph->addFuzzySet(asam);
  ph->addFuzzySet(netral);
  ph->addFuzzySet(basa);
  fuzzy->addFuzzyInput(ph);

  //FuzzyInput_turbidity/Input(3)
  FuzzyInput *turbidity = new FuzzyInput(3);
  turbidity->addFuzzySet(sangat_jernih);
  turbidity->addFuzzySet(jernih);
  turbidity->addFuzzySet(keruh);
  fuzzy->addFuzzyInput(turbidity);

  //================OUTPUT================
  //FuzzyOutput_status/Output(1)
  FuzzyOutput *status = new FuzzyOutput(1);
  status->addFuzzySet(rawan);
  status->addFuzzySet(cukup_aman);
  status->addFuzzySet(baik);
  fuzzy->addFuzzyOutput(status);

  //FuzzyOutput_pembuangan/Output(2)
  FuzzyOutput *pembuangan = new FuzzyOutput(2);
  pembuangan->addFuzzySet(off_buang);
  pembuangan->addFuzzySet(pelan_buang);
  pembuangan->addFuzzySet(cepat_buang);
  fuzzy->addFuzzyOutput(pembuangan);

  //FuzzyOutput_penampungan/Output(3)
  FuzzyOutput *penampungan = new FuzzyOutput(3);
  penampungan->addFuzzySet(off_tampung);
  penampungan->addFuzzySet(on_tampung);
  fuzzy->addFuzzyOutput(penampungan);
}

void fuzzyrules () {
  //================joinWithAND (1 + 1)================
  FuzzyRuleAntecedent* CA = new FuzzyRuleAntecedent();
  CA->joinWithAND(cukup, asam);
  FuzzyRuleAntecedent* CN = new FuzzyRuleAntecedent();
  CN->joinWithAND(cukup, netral);
  FuzzyRuleAntecedent* CB = new FuzzyRuleAntecedent();
  CB->joinWithAND(cukup, basa);

  FuzzyRuleAntecedent* OA = new FuzzyRuleAntecedent();
  OA->joinWithAND(optimal, asam);
  FuzzyRuleAntecedent* ON = new FuzzyRuleAntecedent();
  ON->joinWithAND(optimal, netral);
  FuzzyRuleAntecedent* OB = new FuzzyRuleAntecedent();
  OB->joinWithAND(optimal, basa);

  FuzzyRuleAntecedent* TA = new FuzzyRuleAntecedent();
  TA->joinWithAND(tinggi, asam);
  FuzzyRuleAntecedent* TN = new FuzzyRuleAntecedent();
  TN->joinWithAND(tinggi, netral);
  FuzzyRuleAntecedent* TB = new FuzzyRuleAntecedent();
  TB->joinWithAND(tinggi, basa);

  //================joinSingle (2 + 1)================
  FuzzyRuleAntecedent *SJ = new FuzzyRuleAntecedent();
  SJ->joinSingle(sangat_jernih);

  FuzzyRuleAntecedent *J = new FuzzyRuleAntecedent();
  J->joinSingle(jernih);

  FuzzyRuleAntecedent *K = new FuzzyRuleAntecedent();
  K->joinSingle(keruh);

  //====================RULES=========================
  //===================RULES 1========================
  FuzzyRuleAntecedent *CASJ = new FuzzyRuleAntecedent();
  CASJ->joinWithAND(CA, SJ);

  FuzzyRuleConsequent *hasil_1 = new FuzzyRuleConsequent();
  hasil_1->addOutput(rawan);
  hasil_1->addOutput(off_buang);
  hasil_1->addOutput(on_tampung);

  FuzzyRule *fuzzyRule1 = new FuzzyRule(1, CASJ, hasil_1);
  fuzzy->addFuzzyRule(fuzzyRule1);

  //===================RULES 2========================
  FuzzyRuleAntecedent *CAJ = new FuzzyRuleAntecedent();
  CAJ->joinWithAND(CA, J);

  FuzzyRuleConsequent *hasil_2 = new FuzzyRuleConsequent();
  hasil_2->addOutput(rawan);
  hasil_2->addOutput(off_buang);
  hasil_2->addOutput(on_tampung);

  FuzzyRule *fuzzyRule2 = new FuzzyRule(2, CAJ, hasil_2);
  fuzzy->addFuzzyRule(fuzzyRule2);

  //===================RULES 3========================
  FuzzyRuleAntecedent *CAK = new FuzzyRuleAntecedent();
  CAK->joinWithAND(CA, K);

  FuzzyRuleConsequent *hasil_3 = new FuzzyRuleConsequent();
  hasil_3->addOutput(rawan);
  hasil_3->addOutput(off_buang);
  hasil_3->addOutput(on_tampung);

  FuzzyRule *fuzzyRule3 = new FuzzyRule(3, CAK, hasil_3);
  fuzzy->addFuzzyRule(fuzzyRule3);

  //===================RULES 4========================
  FuzzyRuleAntecedent *CNSJ = new FuzzyRuleAntecedent();
  CNSJ->joinWithAND(CN, SJ);

  FuzzyRuleConsequent *hasil_4 = new FuzzyRuleConsequent();
  hasil_4->addOutput(cukup_aman);
  hasil_4->addOutput(pelan_buang);
  hasil_4->addOutput(off_tampung);

  FuzzyRule *fuzzyRule4 = new FuzzyRule(4, CNSJ, hasil_4);
  fuzzy->addFuzzyRule(fuzzyRule4);

  //===================RULES 5========================
  FuzzyRuleAntecedent *CNJ = new FuzzyRuleAntecedent();
  CNJ->joinWithAND(CN, J);

  FuzzyRuleConsequent *hasil_5 = new FuzzyRuleConsequent();
  hasil_5->addOutput(cukup_aman);
  hasil_5->addOutput(pelan_buang);
  hasil_5->addOutput(off_tampung);

  FuzzyRule *fuzzyRule5 = new FuzzyRule(5, CNJ, hasil_5);
  fuzzy->addFuzzyRule(fuzzyRule5);

  //===================RULES 6========================
  FuzzyRuleAntecedent *CNK = new FuzzyRuleAntecedent();
  CNK->joinWithAND(CB, K);

  FuzzyRuleConsequent *hasil_6 = new FuzzyRuleConsequent();
  hasil_6->addOutput(rawan);
  hasil_6->addOutput(off_buang);
  hasil_6->addOutput(on_tampung);

  FuzzyRule *fuzzyRule6 = new FuzzyRule(6, CNK, hasil_6);
  fuzzy->addFuzzyRule(fuzzyRule6);

  //===================RULES 7========================
  FuzzyRuleAntecedent *CBSJ = new FuzzyRuleAntecedent();
  CBSJ->joinWithAND(CB, SJ);

  FuzzyRuleConsequent *hasil_7 = new FuzzyRuleConsequent();
  hasil_7->addOutput(rawan);
  hasil_7->addOutput(off_buang);
  hasil_7->addOutput(on_tampung);

  FuzzyRule *fuzzyRule7 = new FuzzyRule(7, CBSJ, hasil_7);
  fuzzy->addFuzzyRule(fuzzyRule7);

  //===================RULES 8========================
  FuzzyRuleAntecedent *CBS = new FuzzyRuleAntecedent();
  CBS->joinWithAND(CB, J);

  FuzzyRuleConsequent *hasil_8 = new FuzzyRuleConsequent();
  hasil_8->addOutput(rawan);
  hasil_8->addOutput(off_buang);
  hasil_8->addOutput(on_tampung);

  FuzzyRule *fuzzyRule8 = new FuzzyRule(8, CBS, hasil_8);
  fuzzy->addFuzzyRule(fuzzyRule8);

  //===================RULES 9========================
  FuzzyRuleAntecedent *CBK = new FuzzyRuleAntecedent();
  CBK->joinWithAND(CB, K);

  FuzzyRuleConsequent *hasil_9 = new FuzzyRuleConsequent();
  hasil_9->addOutput(rawan);
  hasil_9->addOutput(off_buang);
  hasil_9->addOutput(on_tampung);

  FuzzyRule *fuzzyRule9 = new FuzzyRule(9, CBK, hasil_9);
  fuzzy->addFuzzyRule(fuzzyRule9);

  //===================RULES 10========================
  FuzzyRuleAntecedent *OASJ = new FuzzyRuleAntecedent();
  OASJ->joinWithAND(OA, SJ);

  FuzzyRuleConsequent *hasil_10 = new FuzzyRuleConsequent();
  hasil_10->addOutput(rawan);
  hasil_10->addOutput(off_buang);
  hasil_10->addOutput(on_tampung);

  FuzzyRule *fuzzyRule10 = new FuzzyRule(10, OASJ, hasil_10);
  fuzzy->addFuzzyRule(fuzzyRule10);

  //===================RULES 11========================
  FuzzyRuleAntecedent *OAJ = new FuzzyRuleAntecedent();
  OAJ->joinWithAND(OA, J);

  FuzzyRuleConsequent *hasil_11 = new FuzzyRuleConsequent();
  hasil_11->addOutput(rawan);
  hasil_11->addOutput(off_buang);
  hasil_11->addOutput(on_tampung);

  FuzzyRule *fuzzyRule11 = new FuzzyRule(11, OAJ, hasil_11);
  fuzzy->addFuzzyRule(fuzzyRule11);

  //===================RULES 12========================
  FuzzyRuleAntecedent *OAK = new FuzzyRuleAntecedent();
  OAK->joinWithAND(OA, K);

  FuzzyRuleConsequent *hasil_12 = new FuzzyRuleConsequent();
  hasil_12->addOutput(rawan);
  hasil_12->addOutput(off_buang);
  hasil_12->addOutput(on_tampung);

  FuzzyRule *fuzzyRule12 = new FuzzyRule(12, OAK, hasil_12);
  fuzzy->addFuzzyRule(fuzzyRule12);

  //===================RULES 13========================
  FuzzyRuleAntecedent *ONSJ = new FuzzyRuleAntecedent();
  ONSJ->joinWithAND(ON, SJ);

  FuzzyRuleConsequent *hasil_13 = new FuzzyRuleConsequent();
  hasil_13->addOutput(baik);
  hasil_13->addOutput(cepat_buang);
  hasil_13->addOutput(off_tampung);

  FuzzyRule *fuzzyRule13 = new FuzzyRule(13, ONSJ, hasil_13);
  fuzzy->addFuzzyRule(fuzzyRule13);

  //===================RULES 14========================
  FuzzyRuleAntecedent *ONJ = new FuzzyRuleAntecedent();
  ONJ->joinWithAND(ON, SJ);

  FuzzyRuleConsequent *hasil_14 = new FuzzyRuleConsequent();
  hasil_14->addOutput(baik);
  hasil_14->addOutput(cepat_buang);
  hasil_14->addOutput(off_tampung);

  FuzzyRule *fuzzyRule14 = new FuzzyRule(14, ONJ, hasil_14);
  fuzzy->addFuzzyRule(fuzzyRule14);

  //===================RULES 15========================
  FuzzyRuleAntecedent *ONK = new FuzzyRuleAntecedent();
  ONK->joinWithAND(ON, K);

  FuzzyRuleConsequent *hasil_15 = new FuzzyRuleConsequent();
  hasil_15->addOutput(rawan);
  hasil_15->addOutput(off_buang);
  hasil_15->addOutput(on_tampung);

  FuzzyRule *fuzzyRule15 = new FuzzyRule(15, ONK, hasil_15);
  fuzzy->addFuzzyRule(fuzzyRule15);

  //===================RULES 16========================
  FuzzyRuleAntecedent *OBSJ = new FuzzyRuleAntecedent();
  OBSJ->joinWithAND(OB, SJ);

  FuzzyRuleConsequent *hasil_16 = new FuzzyRuleConsequent();
  hasil_16->addOutput(rawan);
  hasil_16->addOutput(off_buang);
  hasil_16->addOutput(on_tampung);

  FuzzyRule *fuzzyRule16 = new FuzzyRule(16, OBSJ, hasil_16);
  fuzzy->addFuzzyRule(fuzzyRule16);

  //===================RULES 17========================
  FuzzyRuleAntecedent *OBJ = new FuzzyRuleAntecedent();
  OBJ->joinWithAND(OB, J);

  FuzzyRuleConsequent *hasil_17 = new FuzzyRuleConsequent();
  hasil_17->addOutput(rawan);
  hasil_17->addOutput(off_buang);
  hasil_17->addOutput(on_tampung);

  FuzzyRule *fuzzyRule17 = new FuzzyRule(17, OBJ, hasil_17);
  fuzzy->addFuzzyRule(fuzzyRule17);

  //===================RULES 18========================
  FuzzyRuleAntecedent *OBK = new FuzzyRuleAntecedent();
  OBK->joinWithAND(OB, K);

  FuzzyRuleConsequent *hasil_18 = new FuzzyRuleConsequent();
  hasil_18->addOutput(rawan);
  hasil_18->addOutput(off_buang);
  hasil_18->addOutput(on_tampung);

  FuzzyRule *fuzzyRule18 = new FuzzyRule(18, OBK, hasil_18);
  fuzzy->addFuzzyRule(fuzzyRule18);

  //===================RULES 19========================
  FuzzyRuleAntecedent *TASJ = new FuzzyRuleAntecedent();
  TASJ->joinWithAND(TA, SJ);

  FuzzyRuleConsequent *hasil_19 = new FuzzyRuleConsequent();
  hasil_19->addOutput(rawan);
  hasil_19->addOutput(off_buang);
  hasil_19->addOutput(on_tampung);

  FuzzyRule *fuzzyRule19 = new FuzzyRule(19, TASJ, hasil_19);
  fuzzy->addFuzzyRule(fuzzyRule19);

  //===================RULES 20========================
  FuzzyRuleAntecedent *TAJ = new FuzzyRuleAntecedent();
  TAJ->joinWithAND(TA, J);

  FuzzyRuleConsequent *hasil_20 = new FuzzyRuleConsequent();
  hasil_20->addOutput(rawan);
  hasil_20->addOutput(off_buang);
  hasil_20->addOutput(on_tampung);

  FuzzyRule *fuzzyRule20 = new FuzzyRule(20, TAJ, hasil_20);
  fuzzy->addFuzzyRule(fuzzyRule20);

  //===================RULES 21========================
  FuzzyRuleAntecedent *TAK = new FuzzyRuleAntecedent();
  TAK->joinWithAND(TA, K);

  FuzzyRuleConsequent *hasil_21 = new FuzzyRuleConsequent();
  hasil_21->addOutput(rawan);
  hasil_21->addOutput(off_buang);
  hasil_21->addOutput(on_tampung);

  FuzzyRule *fuzzyRule21 = new FuzzyRule(21, TAK, hasil_21);
  fuzzy->addFuzzyRule(fuzzyRule21);

  //===================RULES 22========================
  FuzzyRuleAntecedent *TNSJ = new FuzzyRuleAntecedent();
  TNSJ->joinWithAND(TN, SJ);

  FuzzyRuleConsequent *hasil_22 = new FuzzyRuleConsequent();
  hasil_22->addOutput(rawan);
  hasil_22->addOutput(off_buang);
  hasil_22->addOutput(on_tampung);

  FuzzyRule *fuzzyRule22 = new FuzzyRule(22, TNSJ, hasil_22);
  fuzzy->addFuzzyRule(fuzzyRule22);

  //===================RULES 23========================
  FuzzyRuleAntecedent *TNJ = new FuzzyRuleAntecedent();
  TNJ->joinWithAND(TN, J);

  FuzzyRuleConsequent *hasil_23 = new FuzzyRuleConsequent();
  hasil_23->addOutput(rawan);
  hasil_23->addOutput(off_buang);
  hasil_23->addOutput(on_tampung);

  FuzzyRule *fuzzyRule23 = new FuzzyRule(23, TNJ, hasil_23);
  fuzzy->addFuzzyRule(fuzzyRule23);

  //===================RULES 24========================
  FuzzyRuleAntecedent *TNK = new FuzzyRuleAntecedent();
  TNK->joinWithAND(TN, K);

  FuzzyRuleConsequent *hasil_24 = new FuzzyRuleConsequent();
  hasil_24->addOutput(rawan);
  hasil_24->addOutput(off_buang);
  hasil_24->addOutput(on_tampung);

  FuzzyRule *fuzzyRule24 = new FuzzyRule(24, TNK, hasil_24);
  fuzzy->addFuzzyRule(fuzzyRule24);

  //===================RULES 25========================
  FuzzyRuleAntecedent *TBSJ = new FuzzyRuleAntecedent();
  TBSJ->joinWithAND(TB, SJ);

  FuzzyRuleConsequent *hasil_25 = new FuzzyRuleConsequent();
  hasil_25->addOutput(rawan);
  hasil_25->addOutput(off_buang);
  hasil_25->addOutput(on_tampung);

  FuzzyRule *fuzzyRule25 = new FuzzyRule(25, TBSJ, hasil_25);
  fuzzy->addFuzzyRule(fuzzyRule25);

  //===================RULES 26========================
  FuzzyRuleAntecedent *TBJ = new FuzzyRuleAntecedent();
  TBJ->joinWithAND(TB, J);

  FuzzyRuleConsequent *hasil_26 = new FuzzyRuleConsequent();
  hasil_26->addOutput(rawan);
  hasil_26->addOutput(off_buang);
  hasil_26->addOutput(on_tampung);

  FuzzyRule *fuzzyRule26 = new FuzzyRule(26, TBJ, hasil_26);
  fuzzy->addFuzzyRule(fuzzyRule26);

  //===================RULES 27========================
  FuzzyRuleAntecedent *TBK = new FuzzyRuleAntecedent();
  TBK->joinWithAND(TB, K);

  FuzzyRuleConsequent *hasil_27 = new FuzzyRuleConsequent();
  hasil_27->addOutput(rawan);
  hasil_27->addOutput(off_buang);
  hasil_27->addOutput(on_tampung);

  FuzzyRule *fuzzyRule27 = new FuzzyRule(27, TBK, hasil_27);
  fuzzy->addFuzzyRule(fuzzyRule27);
}

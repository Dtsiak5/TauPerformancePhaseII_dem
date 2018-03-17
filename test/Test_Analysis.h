//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Feb 15 15:14:22 2018 by ROOT version 6.10/09
// from TTree ModFixedStripTaus/ModFixedStripTaus
// found on file: new_store/TwoTaus_ggH_PU200_Demetra.root
//////////////////////////////////////////////////////////

#ifndef Test_Analysis_h
#define Test_Analysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector


class Test_Analysis : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<Int_t> run = {fReader, "run"};
   TTreeReaderValue<Int_t> event = {fReader, "event"};
   TTreeReaderValue<Int_t> lumis = {fReader, "lumis"};
   TTreeReaderValue<Double_t> tauPt_ = {fReader, "tauPt"};
   TTreeReaderValue<Double_t> tauEta_ = {fReader, "tauEta"};
   TTreeReaderValue<Double_t> genTauPt_ = {fReader, "genTauPt"};
   TTreeReaderValue<Double_t> genTauEta_ = {fReader, "genTauEta"};
   TTreeReaderValue<Int_t> genTauMatch_ = {fReader, "genTauMatch"};
   TTreeReaderValue<Int_t> nvtx_ = {fReader, "nvtx"};
   TTreeReaderValue<Double_t> vtxX_ = {fReader, "vtxX"};
   TTreeReaderValue<Double_t> vtxY_ = {fReader, "vtxY"};
   TTreeReaderValue<Double_t> vtxZ_ = {fReader, "vtxZ"};
   TTreeReaderValue<Int_t> vtxIndex_ = {fReader, "vtxIndex"};
   TTreeReaderValue<Int_t> dm_ = {fReader, "dm"};
   TTreeReaderValue<Int_t> goodReco_ = {fReader, "goodReco"};
   TTreeReaderValue<Double_t> tauMass_ = {fReader, "tauMass"};
   TTreeReaderValue<Bool_t> taupfTausDiscriminationByDecayModeFinding = {fReader, "taupfTausDiscriminationByDecayModeFinding"};
   TTreeReaderValue<Bool_t> taupfTausDiscriminationByDecayModeFindingNewDMs = {fReader, "taupfTausDiscriminationByDecayModeFindingNewDMs"};
   TTreeReaderValue<Float_t> tauByIsolationMVArun2v1DBnewDMwLTraw = {fReader, "tauByIsolationMVArun2v1DBnewDMwLTraw"};
   TTreeReaderValue<Float_t> tauByIsolationMVArun2v1DBoldDMwLTraw = {fReader, "tauByIsolationMVArun2v1DBoldDMwLTraw"};
   TTreeReaderValue<Float_t> tauByIsolationMVArun2v1PWnewDMwLTraw = {fReader, "tauByIsolationMVArun2v1PWnewDMwLTraw"};
   TTreeReaderValue<Float_t> tauByIsolationMVArun2v1PWoldDMwLTraw = {fReader, "tauByIsolationMVArun2v1PWoldDMwLTraw"};
   TTreeReaderValue<Float_t> tauChargedIsoPtSum = {fReader, "tauChargedIsoPtSum"};
   TTreeReaderValue<Float_t> tauNeutralIsoPtSum = {fReader, "tauNeutralIsoPtSum"};
   TTreeReaderValue<Bool_t> tauByLooseCombinedIsolationDeltaBetaCorr3Hits = {fReader, "tauByLooseCombinedIsolationDeltaBetaCorr3Hits"};
   TTreeReaderValue<Bool_t> tauByMediumCombinedIsolationDeltaBetaCorr3Hits = {fReader, "tauByMediumCombinedIsolationDeltaBetaCorr3Hits"};
   TTreeReaderValue<Bool_t> tauByTightCombinedIsolationDeltaBetaCorr3Hits = {fReader, "tauByTightCombinedIsolationDeltaBetaCorr3Hits"};
   TTreeReaderValue<Float_t> tauCombinedIsolationDeltaBetaCorrRaw3Hits = {fReader, "tauCombinedIsolationDeltaBetaCorrRaw3Hits"};
   TTreeReaderValue<Float_t> tauPuCorrPtSum = {fReader, "tauPuCorrPtSum"};
   TTreeReaderValue<Float_t> taufootprintCorrection = {fReader, "taufootprintCorrection"};
   TTreeReaderValue<Float_t> tauphotonPtSumOutsideSignalCone = {fReader, "tauphotonPtSumOutsideSignalCone"};


   Test_Analysis(TTree * /*tree*/ =0) { }
   virtual ~Test_Analysis() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(Test_Analysis,0);

};

#endif

#ifdef Test_Analysis_cxx
void Test_Analysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t Test_Analysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef Test_Analysis_cxx

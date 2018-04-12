```
SCRAM_ARCH=slc6_amd64_gcc600
mkdir phase2-tauPerformance
cd phase2-tauPerformance
cmsrel CMSSW_9_4_2
cd CMSSW_9_4_2/src
cmsenv
git cms-init
git cms-addpkg RecoTauTag/RecoTau
cd RecoTauTag
git clone -b TwoTauCollections https://github.com/Dtsiak5/TauPerformancePhaseII_dem.git  
cd ../
scram b -j 8
cd RecoTauTag/TauPerformancePhaseII/test
cmsRun runTauEfficiency.py

```
# TauPerformancePhaseII_dem

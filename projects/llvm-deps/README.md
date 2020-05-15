# Field Sensitive Analysis

## Modular Exponentiation Experiment
If you would like to run the modular exponentiation experiments using this analysis, follow these instructions:

Field-sensitive experiments:
1. Navigate to `mod_exp_tests` folder
2. Run `./runall.sh`

Baseline experiments:
1. Checkout the "baseline" branch
2. Navigate to `mod_exp_tests` folder
3. Run `./runall.sh`

Once the experiments complete, the results are located in `mod_exp_tests/results` folder.


## Folders 
* Paper/thesis: Thesis for adding field-senstivity to the analysis - mohammed_thesis.pdf
* Paper/conference: Conference paper version of thesis - ccs.pdf
* sensitivity-tests: This folder has a variety of unit-tests with expected behavior.
* mod\_exp\_tests: Modular exponentiation code used to test field-sensitivity.
* processing_tools: Scripts to help parse the raw data produced by the analysis.


## Compatibility

We have tested on Ubuntu. Since MacOS have removed /usr/include since 10.14,
the recommended fix is to
1. For 10.14: recover the folder by the following package:
/Library/Developer/CommandLineTools/Packages/macOS_SDK_headers_for_macOS_10.14.pkg

2. For 10.15 and above: creat a symlink for the headers, e.g.,
sudo ln -s /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/* /usr/local/include/

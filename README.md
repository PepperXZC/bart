

BART: Toolbox for Computational Magnetic Resonance Imaging
==========================================================

[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.592960.svg)](https://doi.org/10.5281/zenodo.592960)

The Berkeley Advanced Reconstruction Toolbox (BART) is a free and
open-source image-reconstruction framework for Computational 
Magnetic Resonance Imaging. The tools in this software implement
various reconstruction algorithms for Magnetic Resonance Imaging.
The software is intended for research use only and
NOT FOR DIAGNOSTIC USE. It comes without any warranty
(see LICENSE for details).

For more information: https://mrirecon.github.io/bart/


---

xzc:

This forked version of BART toolbox can enable local Windows call from python scripts after installation following [BART Installation on WSL](https://mrirecon.github.io/bart/installation_windows.html). WSL is only called once after installation and native Python on Windows can call this toolbox.

I recommend you affiliate this code when using BART in this way:
```python
import sys
BART_PYTHON_ROOT = "the path you copied BART/python"
sys.path.append(BART_PYTHON_ROOT)
```

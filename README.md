# Bubble Sim Documentation

## Simulations for Spring Run

Energies: 4.75, 4.85, 4.95, 5.05, 5.15, 5.25 MeV

Inside each simulation configuration directory is a `data` directory with root 
files. Each root file like `bubble_sim_yyxx.root` is the result of simulating 
10M electrons incident on the radiator. They are combined for each energy 
setting into the one file named `bub_sim_yy.root`.  Note the `yy` corresponds 
to an energy setting.

| `yy`       | Energy     |
| ---------- | ---------- |
| `10`       | 4.75 Mev   |
| `11`       | 4.85 Mev   |
| `12`       | 4.95 Mev   |
| `13`       | 5.05 Mev   |
| `14`       | 5.15 Mev   |
| `15`       | 5.25 Mev   |


### Nominal Conditions

Directory: `simulations/nominal`

| Parameter             | Nominal Value   | Notes   |
| --------------------- | --------------- | ------- |
| Energy                | 4.5-5.5 MeV     |         |
| Energy RMS Spread     | 3 keV           |         |
| Beam Position         | (0 mm, 0 mm)    |         |
| Position RMS spread   | (1 mm, 1 mm)    |         |

### Energy RMS Spread scan

| Directory Name   | RMS Energy spread   | Notes                        |
| ---------------- | ------------------- | ---------------------------- |
| `energy_rms1`    | 20 keV              | Nominal settings otherwise   |
| `energy_rms2`    | 50 keV              | Nominal settings otherwise   |
| `energy_rms3`    | 10 keV              | Nominal settings otherwise   |


### Position Offset

| Directory Name     | Position Offset     | Notes                        |
| ---------------    | ------------------- | ---------------------------- |
| `position_offset1` | (1 mm, 0 mm)        | Nominal settings otherwise   |
| `position_offset2` | (2 mm, 0 mm)        | Nominal settings otherwise   |
| `position_offset3` | (3 mm, 0 mm)        | Nominal settings otherwise   |

### Position RMS Spread

| Directory Name     | Position RMS spread | Notes                        |
| ---------------    | ------------------- | ---------------------------- |
| `position_rms0`    | (0.5 mm, 0.5 mm)    | Nominal settings otherwise   |
| `position_rms1`    | (2 mm, 2 mm)        | Nominal settings otherwise   |
| `position_rms2`    | (3 mm, 3 mm)        | Nominal settings otherwise   |
| `position_rms3`    | (4 mm, 4 mm)        | Nominal settings otherwise   |

### From Riad

| Nominal Value             | Sensitivity                  | Range                                    |
| ------------------------- | ---------------------------- | ---------------------------------------- |
| Energy Range              | 4.5-5.5 MeV                  | 0.1%, 0.2%, 0.3%                         |
| Energy Step               | 0.1 MeV (1 keV)              | 1, 3, 5, 10, 20, 30 keV                  |
| RMS energy spread         | 0.06% (3 keV)                | 1, 5, 10, 20, 30, 50 keV                 |
| RMS sigma at radiator     | 1 mm                         | 0.5, 1.5, 2.0, 3 mm                      |
| Position at radiator      | 0 (centered on radiator)     | 0.1, 0.5, 1.0, 2.0, 5 mm (of center)     |


Suggestions on how to study sensitivities:
1. Energy Range and Energy Step: use PL unfolding and Schif formula to study 
sensitvites – see wiki.
2. RMS energy spread: use GEANT4, and for one energy (e.g., 5 MeV), measure 
photon spectra for
diferent energy spreads.
3. RMS sigma on radiator: use GEANT4, and for one energy (e.g., 5 MeV), 
measure photon spectra for
diferent beeam size sigmas.
4. Positon on radiator: use GEANT4, and for one energy (e.g., 5 MeV), 
measure photon spectra for diferent beeam positons.

## Scripts

* `scripts/add_histograms` : will combine the  `bubble_sim_yyxx.root` files 
into the `bub_sim_yy.root`  files

* `scripts/plot_photon_flux.cxx` :

## Histograms 

The list of histograms in the output file is:

```
/p0/back0              /p0/fhPXY0_gamma           /p0/fhPXY1_gamma
/p0/fhPXY2_gamma       /p0/fhXvsE_all             /p0/fhXvsE_gamma
/p0/fhXvsE_n           /p0/fhXvsE_not_gamma       /p0/fhXY0_all
/p0/fhXY0_gamma        /p0/fhXY1_all              /p0/fhXY1_gamma
/p0/fhXY2_all          /p0/fhXY2_gamma            /p0/forw0
/p1/back0              /p1/fhPXY0_gamma           /p1/fhPXY1_gamma
/p1/fhPXY2_gamma       /p1/fhXvsE_all             /p1/fhXvsE_gamma
/p1/fhXvsE_n           /p1/fhXvsE_not_gamma       /p1/fhXY0_all
/p1/fhXY0_gamma        /p1/fhXY1_all              /p1/fhXY1_gamma
/p1/fhXY2_all          /p1/fhXY2_gamma            /p1/forw0
/p2/back0              /p2/fhPXY0_gamma           /p2/fhPXY1_gamma
/p2/fhPXY2_gamma       /p2/fhXvsE_all             /p2/fhXvsE_gamma
/p2/fhXvsE_n           /p2/fhXvsE_not_gamma       /p2/fhXY0_all
/p2/fhXY0_gamma        /p2/fhXY1_all              /p2/fhXY1_gamma
/p2/fhXY2_all          /p2/fhXY2_gamma            /p2/forw0
/p3/back0              /p3/fhPXY0_gamma           /p3/fhPXY1_gamma
/p3/fhPXY2_gamma       /p3/fhXvsE_all             /p3/fhXvsE_gamma
/p3/fhXvsE_n           /p3/fhXvsE_not_gamma       /p3/fhXY0_all
/p3/fhXY0_gamma        /p3/fhXY1_all              /p3/fhXY1_gamma
/p3/fhXY2_all          /p3/fhXY2_gamma            /p3/forw0
/p4/back0              /p4/fhPXY0_gamma           /p4/fhPXY1_gamma
/p4/fhPXY2_gamma       /p4/fhXvsE_all             /p4/fhXvsE_gamma
/p4/fhXvsE_n           /p4/fhXvsE_not_gamma       /p4/fhXY0_all
/p4/fhXY0_gamma        /p4/fhXY1_all              /p4/fhXY1_gamma
/p4/fhXY2_all          /p4/fhXY2_gamma            /p4/forw0
/p5/back0              /p5/fhPXY0_gamma           /p5/fhPXY1_gamma
/p5/fhPXY2_gamma       /p5/fhXvsE_all             /p5/fhXvsE_gamma
/p5/fhXvsE_n           /p5/fhXvsE_not_gamma       /p5/fhXY0_all
/p5/fhXY0_gamma        /p5/fhXY1_all              /p5/fhXY1_gamma
/p5/fhXY2_all          /p5/fhXY2_gamma            /p5/forw0
/p6/back0              /p6/fhPXY0_gamma           /p6/fhPXY1_gamma
/p6/fhPXY2_gamma       /p6/fhXvsE_all             /p6/fhXvsE_gamma
/p6/fhXvsE_n           /p6/fhXvsE_not_gamma       /p6/fhXY0_all
/p6/fhXY0_gamma        /p6/fhXY1_all              /p6/fhXY1_gamma
/p6/fhXY2_all          /p6/fhXY2_gamma            /p6/forw0
```



## `simulations` Directory structure

```
.
|-- energy_rms1
|   |-- bub_spring_run.xml
|   |-- data -> /work/accel/bubble/whit/data/energy_rms1/data
|   `-- README.md
|-- energy_rms2
|   |-- bub_spring_run.xml
|   |-- data -> /work/accel/bubble/whit/data/energy_rms2/data/
|   `-- README.md
|-- energy_rms3
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/energy_rms3/data
|-- ideal
|   |-- bub_spring_run.xml
|   |-- data -> /work/accel/bubble/whit/data/ideal/data
|   `-- README.md
|-- nominal
|   |-- bub_spring_run.xml
|   |-- data -> /work/accel/bubble/whit/data/nominal/data
|   `-- README.md
|-- position_offset0
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/position_offset0/data
|-- position_offset1
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/position_offset1/data
|-- position_offset2
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/position_offset2/data
|-- position_offset3
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/position_offset3/data
|-- position_rms0
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/position_rms0/data
|-- position_rms1
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/position_rms1/data
|-- position_rms2
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/position_rms2/data
|-- position_rms3
|   |-- bub_spring_run.xml
|   `-- data -> /work/accel/bubble/whit/data/position_rms3/data
|-- README.md
|-- scripts
|   |-- add_histograms
|   `-- plot_photon_flux.cxx
`-- work_disk -> /work/accel/bubble/whit
```



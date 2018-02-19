# Bubble Sim Documentation

## Simulations for Spring Run

Energies: 4.75, 4.85, 4.95, 5.05, 5.15, 5.25 MeV

## Ideal conditions:

Directory: `simulations/ideal`

* Perfect beam energy
* Perfect beam position (0,0) 

## Nominal Conditions

Directory: `simulations/nominal`

| Parameter             | Nominal Value   | Notes   |
| --------------------- | --------------- | ------- |
| Energy                | 4.5-5.5 MeV     |         |
| Energy RMS Spread     | 3 keV           |         |
| Beam Position         | (0 mm, 0 mm)    |         |
| Position RMS spread   | (1 mm, 1 mm)    |         |

## Energy RMS Spread scan

| Directory Name   | RMS Energy spread   | Notes                        |
| ---------------- | ------------------- | ---------------------------- |
| `energy_rms1`    | 20 keV              | Nominal settings otherwise   |
| `energy_rms2`    | 50 keV              | Nominal settings otherwise   |
| `energy_rms3`    | 10 keV              | Nominal settings otherwise   |


## Position Offset

| Directory Name     | Position Offset     | Notes                        |
| ---------------    | ------------------- | ---------------------------- |
| `position_offset1` | (1 mm, 0 mm)        | Nominal settings otherwise   |
| `position_offset2` | (2 mm, 0 mm)        | Nominal settings otherwise   |
| `position_offset3` | (3 mm, 0 mm)        | Nominal settings otherwise   |

## Position RMS Spread

| Directory Name     | Position RMS spread | Notes                        |
| ---------------    | ------------------- | ---------------------------- |
| `position_rms0`    | (0.5 mm, 0.5 mm)    | Nominal settings otherwise   |
| `position_rms1`    | (2 mm, 2 mm)        | Nominal settings otherwise   |
| `position_rms2`    | (3 mm, 3 mm)        | Nominal settings otherwise   |
| `position_rms3`    | (4 mm, 4 mm)        | Nominal settings otherwise   |

## From Riad

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
`-- work_disk -> /work/accel/bubble/whit
```


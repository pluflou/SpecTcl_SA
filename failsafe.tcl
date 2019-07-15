#  SpecTclGUI save file created Mon Jul 15 16:56:48 EDT 2019
#  SpecTclGui Version: 1.0
#      Author: Ron Fox (fox@nscl.msu.edu)

#Tree params:

catch {treeparameter -create HabaNERO.ecal.00 0 4096 4096 unknown}
treeparameter -setlimits HabaNERO.ecal.00 0 4096
treeparameter -setbins   HabaNERO.ecal.00 4096
treeparameter -setunit   HabaNERO.ecal.00 unknown

catch {treeparameter -create HabaNERO.energy.00 0 4096 4096 unknown}
treeparameter -setlimits HabaNERO.energy.00 0 4096
treeparameter -setbins   HabaNERO.energy.00 4096
treeparameter -setunit   HabaNERO.energy.00 unknown

catch {treeparameter -create HabaNERO.raw.chanid000.adc 0 65536 65536 unknown}
treeparameter -setlimits HabaNERO.raw.chanid000.adc 0 65536
treeparameter -setbins   HabaNERO.raw.chanid000.adc 65536
treeparameter -setunit   HabaNERO.raw.chanid000.adc unknown


# Pseudo parameter definitions


# Tree variable definitions:


# Gate definitions in reverse dependency order
 

# Spectrum Definitions

catch {spectrum -delete JINA_ModID00_ChID00}
spectrum JINA_ModID00_ChID00 1 HabaNERO.raw.chanid000.adc {{0.000000 40000.000000 8000}} long

# Gate Applications: 


#  filter definitions: ALL FILTERS ARE DISABLED!!!!!!!


#  - Parameter tab layout: 

set parameter(select) 1
set parameter(Array)  false

#-- Variable tab layout

set variable(select) 1
set variable(Array)  0

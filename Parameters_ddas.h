////     File: Parameters_ddas.h
#ifndef __HABANEROPARAMETERS_H
#define __HABANEROPARAMETERS_H

#include <TreeParameter.h>

//extern class betadecay bdecay;
extern class HabaNero HabaNERO;
extern class ioncounter IC;
extern class DdasDiagnostics ddasdiagnostics;
// Bit registers 

// define the total number of modules in the system
#define TOTMOD 10

//define the number of channels in a module
#define CHANPERMOD 16

#ifdef HAVE_STD_NAMESPACE
using namespace std;
#endif
//////////////////////////////// HABANERO /////////////////////////////////

class HabaNeroChanID
{
 private:
  HabaNero *top;
  
 public:
  CTreeParameter adc;
  CTreeParameter timehigh;
  CTreeParameter timelow;
  CTreeParameter timecfd;
  double time;
  CTreeParameter overflow;
  CTreeParameterArray esums;
  CTreeParameterArray qsums;

 public:
  void Initialize(HabaNero* top, STD(string) name);
  void Reset();
};
///////////////////////////////////////////////////////////////////////
class HabaNeroRaw
{
 private:
  HabaNero *top;
  
 public:
  HabaNeroChanID chanid[TOTMOD*CHANPERMOD];

  vector<int> chanidhit;

 public:
  void Initialize(HabaNero* top, STD(string) name);
  void Reset();
};
///////////////////////////////////////////////////////////////////////
class HabaNero
{
 public:
  
  CTreeParameterArray energy;
  CTreeParameterArray ecal;
  CTreeParameterArray time;
  CTreeParameterArray timecfd;
  CTreeParameterArray timelow;
  CTreeParameterArray timehigh;
  HabaNeroRaw raw;

 public:
  HabaNero(STD(string) name);
  void Reset();
};
///////////////////////////////////////////////////////////////////////
#endif
///////////////////////////////////////////////////////////////////////

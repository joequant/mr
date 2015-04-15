#include <iostream>
#include <cmath>
#include "mr.hpp"
#include "tools.hpp"
#include "gnuplot.hpp"

int main (int argc, char *argv[])
{
  try
    {
      // Default log level is logERROR
      // loglevel = logINFO;
            
      // Input: Pole masses and Fermi constant in OS scheme
      OSinput oi(pdg2014::Mb, pdg2014::MW, pdg2014::MZ, pdg2014::MH, pdg2014::Mt);

      // Running QCD coupling for as(Mt) from as(MZ)
      AlphaS as(oi);

      // Set of all running parameters at scale Mt
      P2MS pMSmt(oi,pdg2014::Gf, as(oi.Mt()), oi.Mt(), order::all);

      // Set of all running parameters at scale MZ
      P2MS pMSmZ(oi,pdg2014::Gf, as(oi.MZ()), oi.MZ(), order::all);


      // Initial values input by hand
      Couplings<3,3,3,
                3,3,-1,
                3,3,0> av(
                          5./3.*pow(0.35830/4./Pi,2), // GUT normalization
                          pow(0.64779/4./Pi,2),
                          pow(1.1666/4./Pi,2),
                          pow(0.93690/4./Pi,2),
                          pow(0.0/4./Pi,2),
                          pow(0.0/4./Pi,2),
                          0.12604*pow(4.*Pi,-2),
                          131.55,
                          0*246,
                          pow(173.34,2)
                          );
      
      // Evolve to the Planck scale
      state_type avMpl = av(pdg2014::Mpl);


      Couplings<3,3,3,
                3,3,-1,
                3,0,0> avP2MS(pMSmt);
      
      state_type avMplP2MS = avP2MS(pdg2014::Mpl);
      
      std::cout << "Higgs mass term at Planck scale " << avMplP2MS[7] << std::endl;
      
    }
  catch (std::exception &p) 
    {
      std::cerr << p.what() << std::endl;
      return 1;
    }
  
  return 0;
}


//
// MR - 2-loop matching and 3-loop Running, including full 2-loop EW corrections
// Copyright (C) 2014 Andrey Pikelner <pikelner@theor.jinr.ru>
//
// This file is part of MR.
//
// MR is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// MR is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with MR.  If not, see <http://www.gnu.org/licenses/>.
//

#include <alphaGF.hpp>
std::complex<long double>
alphaGF::a11(size_t nL, size_t nH, size_t boson)
{     
      
      
    std::complex<long double> aralphaGF[43], alphaGFret;

    aralphaGF[1]=double(nH);
    aralphaGF[2]=pow(CW,-1);
    aralphaGF[3]=pow(MMZ,-1);
    aralphaGF[4]=pow(SW,-1);
    aralphaGF[5]=Tsil::I2(0,0,MMt,mu2);
    aralphaGF[6]=Tsil::B(MMt,MMt,MMZ,mu2);
    aralphaGF[7]=Tsil::A(MMt,mu2);
    aralphaGF[8]=Tsil::B(0,MMt,MMW,mu2);
    aralphaGF[9]=pow(MMt,-1);
    aralphaGF[10]=Tsil::Beps(MMt,MMt,MMZ,mu2);
    aralphaGF[11]=Tsil::Aeps(MMt,mu2);
    aralphaGF[12]=std::real(Tsil::B(0,0,MMZ,mu2));
    aralphaGF[13]=prottttt0->M(0);
    aralphaGF[14]=prot00000->M(0);
    aralphaGF[15]=prottttt0->Vzxyv(0);
    aralphaGF[16]=prottttt0->Suxv(0);
    aralphaGF[17]=prot00tt0->M(0);
    aralphaGF[18]=prot00tt0->Tuxv(0);
    aralphaGF[19]=double(nL);
    aralphaGF[20]=std::real(Tsil::B(0,0,MMW,mu2));
    aralphaGF[21]=1/(4*MMt - MMZ);
   aralphaGF[22]=pow(aralphaGF[4],2);
   aralphaGF[23]= - 32 - aralphaGF[22];
   aralphaGF[23]=aralphaGF[23]*aralphaGF[22];
   aralphaGF[23]=128./3. + aralphaGF[23];
   aralphaGF[24]=aralphaGF[22] + 16./3.;
   aralphaGF[24]=aralphaGF[24]*aralphaGF[22];
   aralphaGF[24]=aralphaGF[24] - 64./9.;
   aralphaGF[25]= - aralphaGF[6]*aralphaGF[24];
   aralphaGF[23]=2*aralphaGF[23] + aralphaGF[25];
   aralphaGF[25]=2./3.*aralphaGF[6];
   aralphaGF[23]=aralphaGF[23]*aralphaGF[25];
   aralphaGF[26]=37./9. - 25./2.*aralphaGF[22];
   aralphaGF[26]=aralphaGF[26]*aralphaGF[22];
   aralphaGF[27]=aralphaGF[22] - 1;
   aralphaGF[27]=aralphaGF[27]*aralphaGF[22];
   aralphaGF[28]=pow(aralphaGF[2],2);
   aralphaGF[27]=aralphaGF[27] - aralphaGF[28];
   aralphaGF[29]=10*aralphaGF[8];
   aralphaGF[29]=aralphaGF[27]*aralphaGF[29];
   aralphaGF[30]= - 1./3.*aralphaGF[8] + 1;
   aralphaGF[30]=aralphaGF[30]*aralphaGF[29];
   aralphaGF[23]=aralphaGF[23] + aralphaGF[30] + 23./3.*aralphaGF[28]
    + 128./27. + aralphaGF[26];
   aralphaGF[23]=aralphaGF[3]*aralphaGF[23];
   aralphaGF[26]=2 + aralphaGF[6];
   aralphaGF[25]=aralphaGF[25]*aralphaGF[26];
   aralphaGF[25]=aralphaGF[25] - 2./3.;
   aralphaGF[26]=pow(aralphaGF[4],4);
   aralphaGF[25]=aralphaGF[26]*aralphaGF[25];
   aralphaGF[30]=pow(aralphaGF[2],4);
   aralphaGF[31]=aralphaGF[30] - aralphaGF[26];
   aralphaGF[32]=2./3.*MMt;
   aralphaGF[33]=aralphaGF[17]*aralphaGF[32];
   aralphaGF[33]=aralphaGF[33] - 3*aralphaGF[8];
   aralphaGF[33]=aralphaGF[31]*aralphaGF[33];
   aralphaGF[25]=aralphaGF[33] + aralphaGF[25];
   aralphaGF[33]=pow(aralphaGF[3],2);
   aralphaGF[25]=aralphaGF[33]*aralphaGF[25];
   aralphaGF[34]=aralphaGF[24]*aralphaGF[3];
   aralphaGF[35]=aralphaGF[15]*aralphaGF[34];
   aralphaGF[25]=8./3.*aralphaGF[35] + aralphaGF[25];
   aralphaGF[25]=MMt*aralphaGF[25];
   aralphaGF[35]=4*aralphaGF[6];
   aralphaGF[36]=aralphaGF[35] + 13;
   aralphaGF[36]=aralphaGF[26]*aralphaGF[36];
   aralphaGF[36]= - 5*aralphaGF[30] + aralphaGF[36];
   aralphaGF[36]=aralphaGF[7]*aralphaGF[36];
   aralphaGF[37]=aralphaGF[16]*aralphaGF[26];
   aralphaGF[36]=2./3.*aralphaGF[36] - 4./3.*aralphaGF[37];
   aralphaGF[36]=aralphaGF[33]*aralphaGF[36];
   aralphaGF[37]=aralphaGF[22] - 8./3.;
   aralphaGF[37]=aralphaGF[37]*aralphaGF[22];
   aralphaGF[37]=aralphaGF[37] + 32./9.;
   aralphaGF[38]=aralphaGF[15]*aralphaGF[37];
   aralphaGF[39]=aralphaGF[22] - 2;
   aralphaGF[40]=aralphaGF[39]*aralphaGF[22];
   aralphaGF[41]=aralphaGF[17]*aralphaGF[40];
   aralphaGF[23]=2*aralphaGF[25] + 4*aralphaGF[41] - 16./3.*
   aralphaGF[38] + aralphaGF[23] + aralphaGF[36];
   aralphaGF[23]=MMt*aralphaGF[23];
   aralphaGF[25]=2*aralphaGF[26] - aralphaGF[30];
   aralphaGF[25]=aralphaGF[25]*aralphaGF[33]*aralphaGF[32];
   aralphaGF[30]=aralphaGF[40]*aralphaGF[9];
   aralphaGF[36]=aralphaGF[22] - 16./3.;
   aralphaGF[36]=aralphaGF[36]*aralphaGF[22];
   aralphaGF[36]=aralphaGF[36] + 64./9.;
   aralphaGF[38]=aralphaGF[36]*aralphaGF[21];
   aralphaGF[41]= - 7./3. + aralphaGF[22];
   aralphaGF[41]=aralphaGF[41]*aralphaGF[22];
   aralphaGF[41]= - aralphaGF[28] + 128./9. + 5*aralphaGF[41];
   aralphaGF[42]=1./3.*aralphaGF[3];
   aralphaGF[41]=aralphaGF[41]*aralphaGF[42];
   aralphaGF[25]=aralphaGF[25] + aralphaGF[41] - 4./3.*aralphaGF[30] - 
   aralphaGF[38];
   aralphaGF[25]=aralphaGF[11]*aralphaGF[25];
   aralphaGF[41]=MMZ*aralphaGF[37];
   aralphaGF[32]=aralphaGF[32]*aralphaGF[34];
   aralphaGF[26]= - aralphaGF[26] + aralphaGF[32];
   aralphaGF[26]=MMt*aralphaGF[26];
   aralphaGF[26]=1./3.*aralphaGF[41] + aralphaGF[26];
   aralphaGF[26]=aralphaGF[13]*aralphaGF[26];
   aralphaGF[32]= - 1 - 2./3.*aralphaGF[8];
   aralphaGF[32]=aralphaGF[8]*aralphaGF[32]*aralphaGF[40];
   aralphaGF[25]=aralphaGF[26] + aralphaGF[32] + aralphaGF[25];
   aralphaGF[26]= - 299./3. + 32*aralphaGF[22];
   aralphaGF[26]=aralphaGF[26]*aralphaGF[22];
   aralphaGF[24]= - aralphaGF[24]*aralphaGF[35];
   aralphaGF[24]=aralphaGF[24] - aralphaGF[29] - 25*aralphaGF[28] + 896.
   /9. + aralphaGF[26];
   aralphaGF[24]=aralphaGF[24]*aralphaGF[42];
   aralphaGF[26]=1 - aralphaGF[8];
   aralphaGF[26]=aralphaGF[26]*aralphaGF[30];
   aralphaGF[29]= - aralphaGF[6] + 1;
   aralphaGF[29]=aralphaGF[29]*aralphaGF[38];
   aralphaGF[26]=4./3.*aralphaGF[26] + aralphaGF[29];
   aralphaGF[29]=2*aralphaGF[22];
   aralphaGF[30]=1 - aralphaGF[29];
   aralphaGF[30]=aralphaGF[30]*aralphaGF[22];
   aralphaGF[30]=aralphaGF[30] + aralphaGF[28];
   aralphaGF[30]=aralphaGF[9]*aralphaGF[30];
   aralphaGF[32]=aralphaGF[31]*aralphaGF[42];
   aralphaGF[30]=aralphaGF[30] + aralphaGF[32];
   aralphaGF[32]=2*aralphaGF[7];
   aralphaGF[30]=aralphaGF[3]*aralphaGF[30]*aralphaGF[32];
   aralphaGF[24]=aralphaGF[30] + 2*aralphaGF[26] + aralphaGF[24];
   aralphaGF[24]=aralphaGF[24]*aralphaGF[32];
   aralphaGF[26]=aralphaGF[36]*aralphaGF[6];
   aralphaGF[30]= - 16 + 3*aralphaGF[22];
   aralphaGF[30]=aralphaGF[30]*aralphaGF[22];
   aralphaGF[30]= - aralphaGF[26] + 64./3. + aralphaGF[30];
   aralphaGF[32]=aralphaGF[21]*MMZ;
   aralphaGF[30]=aralphaGF[30]*aralphaGF[32];
   aralphaGF[35]= - 80./3. + 7*aralphaGF[22];
   aralphaGF[35]=aralphaGF[35]*aralphaGF[22];
   aralphaGF[26]=aralphaGF[30] - aralphaGF[26] + 320./9. + 
   aralphaGF[35];
   aralphaGF[26]=aralphaGF[6]*aralphaGF[26];
   aralphaGF[28]=aralphaGF[22] + aralphaGF[28];
   aralphaGF[28]=aralphaGF[5]*aralphaGF[28];
   aralphaGF[30]=aralphaGF[16]*aralphaGF[37];
   aralphaGF[28]=aralphaGF[28] - aralphaGF[30];
   aralphaGF[28]=4*aralphaGF[28];
   aralphaGF[28]=aralphaGF[3]*aralphaGF[28];
   aralphaGF[30]= - aralphaGF[32] - 1;
   aralphaGF[30]=aralphaGF[36]*aralphaGF[30];
   aralphaGF[32]=MMt*aralphaGF[34];
   aralphaGF[30]=4./3.*aralphaGF[32] + aralphaGF[30];
   aralphaGF[30]=aralphaGF[10]*aralphaGF[30];
   aralphaGF[27]= - aralphaGF[3]*aralphaGF[27];
   aralphaGF[31]= - MMt*aralphaGF[31]*aralphaGF[33];
   aralphaGF[27]=aralphaGF[27] + aralphaGF[31];
   aralphaGF[27]=MMt*aralphaGF[27];
   aralphaGF[29]= - aralphaGF[39]*aralphaGF[29];
   aralphaGF[27]=aralphaGF[29] + aralphaGF[27];
   aralphaGF[27]=aralphaGF[18]*aralphaGF[27];
   aralphaGF[29]=aralphaGF[22] - 4./3.;
   aralphaGF[29]=aralphaGF[29]*aralphaGF[22];
   aralphaGF[29]=aralphaGF[29] + 8./9.;
   aralphaGF[31]=aralphaGF[14]*MMZ;
   aralphaGF[32]=4./3.*aralphaGF[31] + 2*aralphaGF[12];
   aralphaGF[29]=aralphaGF[29]*aralphaGF[32];
   aralphaGF[32]= - 4 - 1./2.*aralphaGF[22];
   aralphaGF[32]=aralphaGF[32]*aralphaGF[22];
   aralphaGF[32]=860./9. + aralphaGF[32];
   aralphaGF[33]=1 - 1./3.*aralphaGF[22];
   aralphaGF[33]=aralphaGF[33]*aralphaGF[22];
   aralphaGF[33]= - 2./3. + aralphaGF[33];
   aralphaGF[33]=aralphaGF[17]*MMZ*aralphaGF[33];
   aralphaGF[23]=8./3.*aralphaGF[27] + aralphaGF[30] + aralphaGF[23] + 
   8*aralphaGF[33] + aralphaGF[24] + 1./3.*aralphaGF[32] + 
   aralphaGF[28] + aralphaGF[26] + aralphaGF[29] + 4*aralphaGF[25];
   aralphaGF[23]=aralphaGF[1]*aralphaGF[23];
   aralphaGF[24]=20./9. + aralphaGF[40];
   aralphaGF[24]=aralphaGF[12]*aralphaGF[24];
   aralphaGF[22]=2./9. + aralphaGF[22];
   aralphaGF[22]=aralphaGF[22]*aralphaGF[31];
   aralphaGF[25]= - aralphaGF[20]*aralphaGF[40];
   aralphaGF[22]=aralphaGF[25] + 2./3.*aralphaGF[22] + 155./27. + 
   aralphaGF[24];
   aralphaGF[22]=aralphaGF[19]*aralphaGF[22];

      alphaGFret = 4*aralphaGF[22] + aralphaGF[23];
      return alphaGFret;
}

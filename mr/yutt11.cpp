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

#include <tt.hpp>
std::complex<long double>
tt::my11(size_t nL, size_t nH, size_t boson)
{     
      
      
    std::complex<long double> aryutt[72], yuttret;

    aryutt[1]=double(nH);
    aryutt[2]=pow(CW,-1);
    aryutt[3]=pow(MMZ,-1);
    aryutt[4]=pow(SW,-1);
    aryutt[5]=Tsil::I2(0,0,MMt,mu2);
    aryutt[6]=Tsil::A(MMt,mu2);
    aryutt[7]=pow(MMt,-1);
    aryutt[8]=Tsil::Aeps(MMt,mu2);
    aryutt[9]=double(boson);
    aryutt[10]=Tsil::I2(MMH,MMt,MMt,mu2);
    aryutt[11]=Tsil::I2(MMZ,MMt,MMt,mu2);
    aryutt[12]=Tsil::I2(0,MMW,MMt,mu2);
    aryutt[13]=Tsil::B(MMH,MMt,MMt,mu2);
    aryutt[14]=Tsil::A(MMH,mu2);
    aryutt[15]=Tsil::B(MMZ,MMt,MMt,mu2);
    aryutt[16]=Tsil::A(MMZ,mu2);
    aryutt[17]=Tsil::Beps(MMH,MMt,MMt,mu2);
    aryutt[18]=Tsil::Beps(MMZ,MMt,MMt,mu2);
    aryutt[19]=pow(MMH,-1);
    aryutt[20]=Tsil::A(MMW,mu2);
    aryutt[21]=std::real(Tsil::B(0,MMW,MMt,mu2));
    aryutt[22]=Tsil::Aeps(MMH,mu2);
    aryutt[23]=Tsil::Aeps(MMZ,mu2);
    aryutt[24]=Tsil::Aeps(MMW,mu2);
    aryutt[25]=std::real(Tsil::Beps(0,MMW,MMt,mu2));
    aryutt[26]=protWt000->M(0);
    aryutt[27]=prot0ttHt->M(0);
    aryutt[28]=prot0ttZt->M(0);
    aryutt[29]=prot0tt0t->M(0);
    aryutt[30]=prottH0H->Vxzuv(0);
    aryutt[31]=prottZ0Z->Vxzuv(0);
    aryutt[32]=protWt000->Uzxyv(0);
    aryutt[33]=prot0ttHt->Tuxv(0);
    aryutt[34]=prot0ttZt->Tuxv(0);
    aryutt[35]=protWt000->Txuv(0);
    aryutt[36]=protWt000->Tyzv(0);
    aryutt[37]=1/(4*MMt - MMZ);
    aryutt[38]=1/( - MMW + MMH);
   aryutt[39]=pow(aryutt[4],2);
   aryutt[40]=1 + aryutt[39];
   aryutt[40]=aryutt[40]*aryutt[39];
   aryutt[41]=pow(aryutt[2],2);
   aryutt[40]=aryutt[40] + aryutt[41];
   aryutt[40]=aryutt[3]*aryutt[40];
   aryutt[42]=aryutt[39]*aryutt[38];
   aryutt[40]= - aryutt[42] + aryutt[40];
   aryutt[40]=aryutt[20]*aryutt[40];
   aryutt[43]=aryutt[41] + aryutt[39];
   aryutt[44]=aryutt[43]*aryutt[3];
   aryutt[42]=aryutt[42] - aryutt[44];
   aryutt[42]=aryutt[14]*aryutt[42];
   aryutt[40]=aryutt[40] + aryutt[42];
   aryutt[42]=aryutt[43]*MMH*aryutt[3];
   aryutt[45]=1./2.*aryutt[39];
   aryutt[46]=9./2. + 7./3.*aryutt[15];
   aryutt[46]=aryutt[46]*aryutt[45];
   aryutt[47]=1./54.*aryutt[41];
   aryutt[48]=265./2. - 49*aryutt[15];
   aryutt[48]=aryutt[48]*aryutt[47];
   aryutt[49]=3*aryutt[39];
   aryutt[50]=1./3. - aryutt[49];
   aryutt[50]=aryutt[50]*aryutt[45];
   aryutt[50]= - 199./54.*aryutt[41] + 416./27. + aryutt[50];
   aryutt[51]=aryutt[3]*aryutt[16];
   aryutt[50]=aryutt[50]*aryutt[51];
   aryutt[52]=19./3.*aryutt[41] - 64./3. + aryutt[39];
   aryutt[53]=aryutt[6]*aryutt[3];
   aryutt[52]=aryutt[52]*aryutt[53];
   aryutt[54]=aryutt[39]*aryutt[21];
   aryutt[55]=10 + 7*aryutt[15];
   aryutt[40]=aryutt[52] - 1./12.*aryutt[42] + aryutt[50] + 4./3.*
   aryutt[54] + aryutt[48] + 32./27.*aryutt[55] + aryutt[46] + 3./2.*
   aryutt[40];
   aryutt[40]=aryutt[6]*aryutt[40];
   aryutt[46]=aryutt[39] - 1;
   aryutt[48]=pow(CW,2);
   aryutt[50]=aryutt[46] - aryutt[48];
   aryutt[52]= - aryutt[26]*aryutt[50];
   aryutt[55]=17./9.*aryutt[41];
   aryutt[56]=aryutt[55] + aryutt[39] - 32./9.;
   aryutt[57]=aryutt[31]*aryutt[56];
   aryutt[52]=aryutt[57] + aryutt[52];
   aryutt[52]=MMZ*aryutt[52];
   aryutt[57]=aryutt[18]*aryutt[56];
   aryutt[52]=aryutt[57] + aryutt[52];
   aryutt[57]=pow(Pi,2);
   aryutt[58]= - 19./6.*aryutt[35] + 5./2.*aryutt[57] - 47./6.*
   aryutt[21];
   aryutt[58]=aryutt[46]*aryutt[58];
   aryutt[59]=2*aryutt[32];
   aryutt[60]= - 7./6.*aryutt[15] - 1 + aryutt[59];
   aryutt[60]=aryutt[60]*aryutt[39];
   aryutt[61]= - 163 - 95*aryutt[15];
   aryutt[47]=aryutt[61]*aryutt[47];
   aryutt[61]=23 - 17*aryutt[41];
   aryutt[61]=aryutt[36]*aryutt[61];
   aryutt[47]=4./27.*aryutt[61] + aryutt[47] + aryutt[60] + 64./27.*
   aryutt[15] + 211./54. - aryutt[59] + aryutt[58] + 4./3.*aryutt[52];
   aryutt[47]=MMZ*aryutt[47];
   aryutt[52]=5*aryutt[44];
   aryutt[58]= - aryutt[8]*aryutt[52];
   aryutt[59]=aryutt[33] + 1;
   aryutt[59]=aryutt[59]*aryutt[42];
   aryutt[58]=aryutt[58] + 1./2.*aryutt[59];
   aryutt[58]=MMH*aryutt[58];
   aryutt[59]=aryutt[20]*aryutt[52];
   aryutt[54]=5*aryutt[54];
   aryutt[59]=aryutt[59] + 11./2.*aryutt[39] + aryutt[54];
   aryutt[59]=aryutt[20]*aryutt[59];
   aryutt[60]= - 23./3.*aryutt[41] - 32./3. + 23./2.*aryutt[39];
   aryutt[60]=aryutt[8]*aryutt[60];
   aryutt[61]= - 95./18.*aryutt[41] + 64./9. - 7./2.*aryutt[39];
   aryutt[61]=aryutt[11]*aryutt[61];
   aryutt[58]=aryutt[60] + aryutt[58] + aryutt[61] + aryutt[59];
   aryutt[59]=aryutt[35] - 5*aryutt[57] + aryutt[21];
   aryutt[50]=aryutt[50]*aryutt[59];
   aryutt[59]= - 1 - aryutt[15];
   aryutt[59]=aryutt[59]*aryutt[55];
   aryutt[60]=23 + 32*aryutt[15];
   aryutt[61]= - aryutt[15]*aryutt[39];
   aryutt[48]=aryutt[59] + aryutt[61] + 1./9.*aryutt[60] - aryutt[48]
    + aryutt[50];
   aryutt[48]=MMZ*aryutt[48];
   aryutt[50]= - aryutt[11] + aryutt[16];
   aryutt[50]=aryutt[56]*aryutt[50];
   aryutt[59]= - aryutt[20] + aryutt[12];
   aryutt[59]=aryutt[46]*aryutt[59];
   aryutt[60]= - 34./9.*aryutt[41] + 37./9. + aryutt[39];
   aryutt[60]=aryutt[8]*aryutt[60];
   aryutt[48]=aryutt[48] + aryutt[60] + aryutt[59] + aryutt[50];
   aryutt[50]=aryutt[56]*aryutt[7];
   aryutt[59]=pow(aryutt[6],2);
   aryutt[60]=aryutt[59]*aryutt[50];
   aryutt[48]=aryutt[60] + 1./3.*aryutt[48];
   aryutt[48]=MMZ*aryutt[48];
   aryutt[60]=7./2.*aryutt[15];
   aryutt[61]= - 10 - aryutt[60];
   aryutt[61]=aryutt[61]*aryutt[39];
   aryutt[60]=2 - aryutt[60];
   aryutt[55]=aryutt[60]*aryutt[55];
   aryutt[60]=11 + 28*aryutt[15];
   aryutt[62]=2*aryutt[46];
   aryutt[63]= - aryutt[21]*aryutt[62];
   aryutt[55]=aryutt[63] + aryutt[55] + 4./9.*aryutt[60] + aryutt[61];
   aryutt[55]=MMZ*aryutt[55];
   aryutt[60]=aryutt[42] + aryutt[39] + 41./9.*aryutt[41];
   aryutt[60]=aryutt[6]*aryutt[60];
   aryutt[61]= - 17./18.*aryutt[41] + 16./9. - aryutt[45];
   aryutt[61]=aryutt[16]*aryutt[61];
   aryutt[63]=aryutt[20]*aryutt[39];
   aryutt[55]=aryutt[60] - 5./3.*aryutt[63] + 5*aryutt[61] + 1./3.*
   aryutt[55];
   aryutt[55]=aryutt[6]*aryutt[55];
   aryutt[48]=aryutt[55] + aryutt[48];
   aryutt[48]=aryutt[7]*aryutt[48];
   aryutt[55]=aryutt[3]*pow(aryutt[16],2);
   aryutt[60]=pow(MMZ,2);
   aryutt[61]=aryutt[28]*aryutt[60];
   aryutt[61]= - 2./3.*aryutt[61] - 4./3.*aryutt[55];
   aryutt[56]=aryutt[56]*aryutt[61];
   aryutt[61]=2./3.*aryutt[15];
   aryutt[63]=5./2. - aryutt[61];
   aryutt[63]=aryutt[63]*aryutt[39];
   aryutt[64]=77./2. - 34./3.*aryutt[15];
   aryutt[64]=aryutt[64]*aryutt[41];
   aryutt[65]= - 1 + 1./3.*aryutt[15];
   aryutt[63]=1./9.*aryutt[64] + 64./9.*aryutt[65] + aryutt[63];
   aryutt[63]=aryutt[16]*aryutt[63];
   aryutt[64]=13./6.*aryutt[12];
   aryutt[65]= - aryutt[24] - aryutt[64];
   aryutt[65]=aryutt[39]*aryutt[65];
   aryutt[66]=aryutt[14]*aryutt[42];
   aryutt[62]= - aryutt[25]*MMZ*aryutt[62];
   aryutt[40]=aryutt[62] + aryutt[48] + aryutt[40] - 1./6.*aryutt[66]
    + aryutt[47] + aryutt[63] + aryutt[56] + aryutt[65] + 1./3.*
   aryutt[58];
   aryutt[40]=aryutt[7]*aryutt[40];
   aryutt[47]=2*aryutt[3];
   aryutt[48]= - aryutt[14]*aryutt[47];
   aryutt[48]=14*aryutt[53] + aryutt[48];
   aryutt[48]=aryutt[43]*aryutt[48];
   aryutt[56]=pow(MMH,2)*aryutt[44];
   aryutt[58]=aryutt[6]*aryutt[42];
   aryutt[56]=aryutt[56] - 7*aryutt[58];
   aryutt[58]=1./2.*aryutt[7];
   aryutt[56]=aryutt[56]*aryutt[58];
   aryutt[62]=aryutt[39]*MMt;
   aryutt[63]=aryutt[41]*MMt;
   aryutt[65]=aryutt[62] + aryutt[63];
   aryutt[66]=aryutt[65]*aryutt[3];
   aryutt[48]=aryutt[56] + 52*aryutt[66] - 17*aryutt[42] + aryutt[48];
   aryutt[48]=aryutt[13]*aryutt[48];
   aryutt[56]=aryutt[42]*aryutt[58];
   aryutt[56]= - 11*aryutt[44] + aryutt[56];
   aryutt[56]=aryutt[10]*aryutt[56];
   aryutt[58]=2*aryutt[15];
   aryutt[67]= - 25./8. + aryutt[58];
   aryutt[67]=aryutt[67]*aryutt[39];
   aryutt[61]= - 53./8. + aryutt[61];
   aryutt[61]=aryutt[61]*aryutt[41];
   aryutt[54]= - aryutt[39] + aryutt[54];
   aryutt[54]=aryutt[21]*aryutt[54];
   aryutt[68]= - 2 + aryutt[15];
   aryutt[48]=aryutt[54] + 1./3.*aryutt[61] + 352./9.*aryutt[68] + 5*
   aryutt[67] + aryutt[56] + aryutt[48];
   aryutt[54]=aryutt[57] - aryutt[35];
   aryutt[56]=aryutt[19]*aryutt[22];
   aryutt[57]=aryutt[21] + 1;
   aryutt[57]=aryutt[21]*aryutt[57];
   aryutt[54]=5./6.*aryutt[57] + 13./3.*aryutt[56] + 3*aryutt[36] - 5./
   6.*aryutt[54];
   aryutt[54]=aryutt[65]*aryutt[54];
   aryutt[56]=MMt*aryutt[26];
   aryutt[56]= - 13./3.*aryutt[33] + aryutt[58] + 29./12. + 2./3.*
   aryutt[56];
   aryutt[56]=aryutt[56]*MMt;
   aryutt[56]= - aryutt[56] + 3*aryutt[22] + 17./6.*aryutt[24] - 
   aryutt[64];
   aryutt[56]=aryutt[43]*aryutt[56];
   aryutt[57]=aryutt[43]*aryutt[8];
   aryutt[61]= - 1 + aryutt[45];
   aryutt[61]=aryutt[61]*aryutt[39];
   aryutt[61]=aryutt[61] - aryutt[41];
   aryutt[61]=aryutt[16]*aryutt[61];
   aryutt[63]=aryutt[63] + MMt;
   aryutt[63]=aryutt[63]*aryutt[41];
   aryutt[62]=aryutt[63] + aryutt[62];
   aryutt[63]=5./6.*aryutt[3];
   aryutt[62]=aryutt[63]*aryutt[62];
   aryutt[63]=aryutt[24]*aryutt[62];
   aryutt[54]=aryutt[63] + 59./6.*aryutt[57] + aryutt[61] + aryutt[56]
    + aryutt[54];
   aryutt[54]=aryutt[3]*aryutt[54];
   aryutt[56]=aryutt[39] + 25./9.*aryutt[41];
   aryutt[61]=aryutt[58] + 13./2.;
   aryutt[61]=aryutt[61]*aryutt[56];
   aryutt[56]= - 64./9. + aryutt[56];
   aryutt[63]=aryutt[18]*aryutt[56];
   aryutt[64]= - 13 - 4*aryutt[15];
   aryutt[61]= - 2*aryutt[63] + 32./9.*aryutt[64] + aryutt[61];
   aryutt[61]=MMZ*aryutt[61];
   aryutt[55]=4*aryutt[55] + 2*aryutt[8];
   aryutt[55]=aryutt[56]*aryutt[55];
   aryutt[63]=aryutt[56]*aryutt[16];
   aryutt[58]=aryutt[58] - 5;
   aryutt[58]=aryutt[58]*aryutt[63];
   aryutt[49]=25./3.*aryutt[41] + aryutt[49] - 64./3.;
   aryutt[64]=aryutt[11]*aryutt[49];
   aryutt[55]=aryutt[64] + aryutt[61] + aryutt[58] + aryutt[55];
   aryutt[55]=aryutt[37]*aryutt[55];
   aryutt[58]=aryutt[65]*aryutt[47];
   aryutt[61]=aryutt[58] - 1./3.*aryutt[42];
   aryutt[61]=MMH*aryutt[61];
   aryutt[64]= - pow(MMt,2)*aryutt[44];
   aryutt[61]=8./3.*aryutt[64] + aryutt[61];
   aryutt[61]=aryutt[27]*aryutt[61];
   aryutt[64]= - 7./9.*aryutt[41] + aryutt[39] + 64./9.;
   aryutt[67]= - MMt*aryutt[64];
   aryutt[68]=MMZ*aryutt[43];
   aryutt[67]=2./3.*aryutt[67] + aryutt[68];
   aryutt[67]=aryutt[28]*aryutt[67];
   aryutt[68]= - 14./27.*aryutt[41] - 112./27. + aryutt[39];
   aryutt[68]=aryutt[36]*aryutt[68];
   aryutt[61]=aryutt[67] + aryutt[68] + aryutt[61];
   aryutt[67]=53./12. + 2*aryutt[33];
   aryutt[67]= - aryutt[67]*aryutt[43];
   aryutt[68]=4./3.*aryutt[43];
   aryutt[69]= - aryutt[36]*aryutt[68];
   aryutt[70]=aryutt[30]*aryutt[65];
   aryutt[67]= - 16./3.*aryutt[70] + aryutt[69] + aryutt[67];
   aryutt[67]=aryutt[3]*aryutt[67];
   aryutt[69]=aryutt[30]*aryutt[42];
   aryutt[67]=aryutt[67] + 4./3.*aryutt[69];
   aryutt[67]=MMH*aryutt[67];
   aryutt[69]= - 8./3. - aryutt[45];
   aryutt[69]=aryutt[69]*aryutt[39];
   aryutt[70]=aryutt[21]*aryutt[43];
   aryutt[71]=aryutt[21] - 1;
   aryutt[62]=aryutt[71]*aryutt[62];
   aryutt[62]=aryutt[62] + 5./2.*aryutt[70] + aryutt[69] - 8./3.*
   aryutt[41];
   aryutt[62]=aryutt[3]*aryutt[62];
   aryutt[69]=1 + aryutt[41];
   aryutt[69]=aryutt[69]*aryutt[41];
   aryutt[69]=aryutt[39] + aryutt[69];
   aryutt[69]=aryutt[20]*aryutt[69]*pow(aryutt[3],2);
   aryutt[45]=aryutt[45]*aryutt[38];
   aryutt[62]=5./6.*aryutt[69] + aryutt[45] + aryutt[62];
   aryutt[62]=aryutt[20]*aryutt[62];
   aryutt[63]=aryutt[47]*aryutt[63];
   aryutt[63]=aryutt[63] - aryutt[49];
   aryutt[49]=aryutt[49]*aryutt[53];
   aryutt[49]= - 4*aryutt[49] + 2*aryutt[63];
   aryutt[49]=aryutt[37]*aryutt[49];
   aryutt[51]=aryutt[51] + 23./2.;
   aryutt[51]=aryutt[43]*aryutt[51];
   aryutt[63]=aryutt[21]*aryutt[68];
   aryutt[51]=aryutt[63] + aryutt[51];
   aryutt[51]=aryutt[3]*aryutt[51];
   aryutt[63]=aryutt[19]*aryutt[14]*aryutt[3];
   aryutt[69]=aryutt[43]*aryutt[63];
   aryutt[49]= - 13./3.*aryutt[69] + aryutt[51] + aryutt[49];
   aryutt[49]=aryutt[6]*aryutt[49];
   aryutt[51]=aryutt[39] - 224./9. + 65./9.*aryutt[41];
   aryutt[51]= - aryutt[66] + 1./3.*aryutt[51];
   aryutt[66]=aryutt[3]*aryutt[51];
   aryutt[56]=aryutt[37]*aryutt[56];
   aryutt[56]=4*aryutt[50] + aryutt[66] - 7*aryutt[56];
   aryutt[56]=aryutt[23]*aryutt[56];
   aryutt[41]=59./18.*aryutt[41] - 64./9. + 3./2.*aryutt[39];
   aryutt[41]=MMZ*aryutt[41];
   aryutt[50]=aryutt[60]*aryutt[50];
   aryutt[41]=aryutt[41] - 1./3.*aryutt[50];
   aryutt[41]=aryutt[7]*aryutt[41];
   aryutt[41]=aryutt[41] + aryutt[51];
   aryutt[41]=aryutt[34]*aryutt[41];
   aryutt[50]= - aryutt[68]*aryutt[63];
   aryutt[44]=aryutt[50] - aryutt[45] + 4*aryutt[44];
   aryutt[44]=aryutt[14]*aryutt[44];
   aryutt[42]= - aryutt[58] + aryutt[42];
   aryutt[42]=aryutt[17]*aryutt[42];
   aryutt[45]=2./3.*aryutt[64];
   aryutt[50]= - aryutt[18]*aryutt[45];
   aryutt[45]= - aryutt[31]*aryutt[45];
   aryutt[46]=aryutt[26]*aryutt[46];
   aryutt[45]=aryutt[45] + aryutt[46];
   aryutt[46]=2*MMZ;
   aryutt[45]=aryutt[45]*aryutt[46];
   aryutt[39]=aryutt[35]*aryutt[39];
   aryutt[46]=aryutt[29]*MMt;
   aryutt[39]=4./3.*aryutt[42] + 256./27.*aryutt[46] + aryutt[41] + 
   aryutt[56] + aryutt[49] + aryutt[44] + aryutt[62] + aryutt[55] + 
   aryutt[45] + aryutt[67] + aryutt[54] + 2./3.*aryutt[39] + aryutt[50]
    + aryutt[40] + 1./3.*aryutt[48] + 2*aryutt[61];
   aryutt[39]=aryutt[9]*aryutt[39];
   aryutt[40]=aryutt[5]*aryutt[47];
   aryutt[40]= - 11./2.*aryutt[53] + aryutt[40];
   aryutt[40]=aryutt[43]*aryutt[40];
   aryutt[41]=39./4.*aryutt[65] - 2*aryutt[57];
   aryutt[41]=aryutt[3]*aryutt[41];
   aryutt[42]= - aryutt[7]*aryutt[59]*aryutt[52];
   aryutt[40]=aryutt[42] + aryutt[41] + aryutt[40];
   aryutt[40]=aryutt[1]*aryutt[40];

      yuttret = aryutt[39] + aryutt[40];
      return yuttret;
}

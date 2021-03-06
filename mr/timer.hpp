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

#ifndef __TIMER_HPP__
#define __TIMER_HPP__

#include <iostream>
#include <ctime>
#include "logger.hpp"

namespace mr
{
  class Timer
  {
    std::clock_t    start;
  public:
    Timer():start(std::clock())
    {
    }
   
    void elapsed()
    {
      lout(logDEBUG) << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms";
    }
  
    void inMs()
    {
      std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    }
    void inSec()
    {
      std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC) << " s" << std::endl;
    }
    void inMin()
    {
      std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC * 60) << " min" << std::endl;
    }
  };
} // namespace mr

#endif  // __TIMER_HPP__

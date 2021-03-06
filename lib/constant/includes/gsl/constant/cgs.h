/* const/gsl_const_cgs.h
 *
 * Copyright (C) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
 * 2006 Brian Gough
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA.
 */

#pragma once

namespace gsl::constant::cgs {

constexpr auto SPEED_OF_LIGHT = 2.99792458e10;             // cm / s
constexpr auto GRAVITATIONAL_CONSTANT = 6.673e-8;          // cm^3 / g s^2
constexpr auto PLANCKS_CONSTANT_H = 6.62606876e-27;        // g cm^2 / s
constexpr auto PLANCKS_CONSTANT_HBAR = 1.05457159642e-27;  // g cm^2 / s
constexpr auto ASTRONOMICAL_UNIT = 1.49597870691e13;       // cm */
constexpr auto LIGHT_YEAR = 9.46053620707e17;              // cm
constexpr auto PARSEC = 3.08567758135e18;                  // cm
constexpr auto GRAV_ACCEL = 9.80665e2;                     // cm / s^2
constexpr auto ELECTRON_VOLT = 1.602176462e-12;            // g cm^2 / s^2
constexpr auto MASS_ELECTRON = 9.10938188e-28;             // g */
constexpr auto MASS_MUON = 1.88353109e-25;                 // g
constexpr auto MASS_PROTON = 1.67262158e-24;               // g
constexpr auto MASS_NEUTRON = 1.67492716e-24;              // g
constexpr auto RYDBERG = 2.17987190389e-11;                // g cm^2 / s^2
constexpr auto BOLTZMANN = 1.3806503e-16;                  // g cm^2 / K s^2
constexpr auto BOHR_MAGNETON = 9.27400899e-20;             // A cm^2
constexpr auto NUCLEAR_MAGNETON = 5.05078317e-23;          // A cm^2
constexpr auto ELECTRON_MAGNETIC_MOMENT = 9.28476362e-20;  // A cm^2
constexpr auto PROTON_MAGNETIC_MOMENT = 1.410606633e-22;   // A cm^2
constexpr auto MOLAR_GAS = 8.314472e7;                     // g cm^2 / K mol s^2
constexpr auto STANDARD_GAS_VOLUME = 2.2710981e4;          // cm^3 / mol
constexpr auto MINUTE = 6e1;                               // s */
constexpr auto HOUR = 3.6e3;                               // s
constexpr auto DAY = 8.64e4;                               // s
constexpr auto WEEK = 6.048e5;                             // s
constexpr auto INCH = 2.54e0;                              // cm
constexpr auto FOOT = 3.048e1;                             // cm
constexpr auto YARD = 9.144e1;                             // cm
constexpr auto MILE = 1.609344e5;                          // cm
constexpr auto NAUTICAL_MILE = 1.852e5;                    // cm
constexpr auto FATHOM = 1.8288e2;                          // cm
constexpr auto MIL = 2.54e-3;                              // cm
constexpr auto POINT = 3.52777777778e-2;                   // cm
constexpr auto TEXPOINT = 3.51459803515e-2;                // cm
constexpr auto MICRON = 1e-4;                              // cm
constexpr auto ANGSTROM = 1e-8;                            // cm
constexpr auto HECTARE = 1e8;                              // cm^2
constexpr auto ACRE = 4.04685642241e7;                     // cm^2
constexpr auto BARN = 1e-24;                               // cm^2
constexpr auto LITER = 1e3;                                // cm^3
constexpr auto US_GALLON = 3.78541178402e3;                // cm^3
constexpr auto QUART = 9.46352946004e2;                    // cm^3
constexpr auto PINT = 4.73176473002e2;                     // cm^3
constexpr auto CUP = 2.36588236501e2;                      // cm^3
constexpr auto FLUID_OUNCE = 2.95735295626e1;              // cm^3
constexpr auto TABLESPOON = 1.47867647813e1;               // cm^3
constexpr auto TEASPOON = 4.92892159375e0;                 // cm^3
constexpr auto CANADIAN_GALLON = 4.54609e3;                // cm^3
constexpr auto UK_GALLON = 4.546092e3;                     // cm^3
constexpr auto MILES_PER_HOUR = 4.4704e1;                  // cm / s
constexpr auto KILOMETERS_PER_HOUR = 2.77777777778e1;      // cm / s
constexpr auto KNOT = 5.14444444444e1;                     // cm / s
constexpr auto POUND_MASS = 4.5359237e2;                   // g */
constexpr auto OUNCE_MASS = 2.8349523125e1;                // g
constexpr auto TON = 9.0718474e5;                          // g
constexpr auto METRIC_TON = 1e6;                           // g
constexpr auto UK_TON = 1.0160469088e6;                    // g
constexpr auto TROY_OUNCE = 3.1103475e1;                   // g
constexpr auto CARAT = 2e-1;                               // g
constexpr auto UNIFIED_ATOMIC_MASS = 1.66053873e-24;       // g
constexpr auto GRAM_FORCE = 9.80665e2;                     // cm g / s^2
constexpr auto POUND_FORCE = 4.44822161526e5;              // cm g / s^2
constexpr auto KILOPOUND_FORCE = 4.44822161526e8;          // cm g / s^2
constexpr auto POUNDAL = 1.38255e4;                        // cm g / s^2
constexpr auto CALORIE = 4.1868e7;                         // g cm^2 / s^2
constexpr auto BTU = 1.05505585262e10;                     // g cm^2 / s^2
constexpr auto THERM = 1.05506e15;                         // g cm^2 / s^2
constexpr auto HORSEPOWER = 7.457e9;                       // g cm^2 / s^3
constexpr auto BAR = 1e6;                                  // g / cm s^2
constexpr auto STD_ATMOSPHERE = 1.01325e6;                 // g / cm s^2
constexpr auto TORR = 1.33322368421e3;                     // g / cm s^2
constexpr auto METER_OF_MERCURY = 1.33322368421e6;         // g / cm s^2
constexpr auto INCH_OF_MERCURY = 3.38638815789e4;          // g / cm s^2
constexpr auto INCH_OF_WATER = 2.490889e3;                 // g / cm s^2
constexpr auto PSI = 6.89475729317e4;                      // g / cm s^2
constexpr auto POISE = 1e0;                                // g / cm s
constexpr auto STOKES = 1e0;                               // cm^2 / s
constexpr auto FARADAY = 9.6485341472e4;                   // A s / mol
constexpr auto ELECTRON_CHARGE = 1.602176462e-19;          // A s */
constexpr auto GAUSS = 1e-1;                               // g / A s^2
constexpr auto STILB = 1e0;                                // cd / cm^2
constexpr auto LUMEN = 1e0;                                // cd sr
constexpr auto LUX = 1e-4;                                 // cd sr / cm^2
constexpr auto PHOT = 1e0;                                 // cd sr / cm^2
constexpr auto FOOTCANDLE = 1.076e-3;                      // cd sr / cm^2
constexpr auto LAMBERT = 1e0;                              // cd sr / cm^2
constexpr auto FOOTLAMBERT = 1.07639104e-3;                // cd sr / cm^2
constexpr auto CURIE = 3.7e10;                             // 1 / s
constexpr auto ROENTGEN = 2.58e-7;                         // A s / g
constexpr auto RAD = 1e2;                                  // cm^2 / s^2
constexpr auto SOLAR_MASS = 1.98892e33;                    // g */
constexpr auto BOHR_RADIUS = 5.291772083e-9;               // cm
constexpr auto NEWTON = 1e5;                               // cm g / s^2
constexpr auto DYNE = 1e0;                                 // cm g / s^2
constexpr auto JOULE = 1e7;                                // g cm^2 / s^2
constexpr auto ERG = 1e0;                                  // g cm^2 / s^2
constexpr auto STEFAN_BOLTZMANN_CONSTANT = 5.67039934436e-5;  // g / K^4 s^3
constexpr auto THOMSON_CROSS_SECTION = 6.65245853542e-25;     // cm^2

}  // namespace gsl::constant::cgs
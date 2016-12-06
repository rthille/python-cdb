/**
python-cdb 0.35
Copyright 2016 Robert P. Thille <com-github@rangat.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

**/

#ifndef PY3_H
#define PY3_H

#if PY_MAJOR_VERSION >= 3
  #ifndef staticforward
    #define staticforward static
  #endif

  #ifndef statichere
    #define statichere static
  #endif

#endif /* PY_MAJOR_VERSION >= 3 */

#endif /* PY3_H */

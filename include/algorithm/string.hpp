/* String algorithms
(C) 2016 Niall Douglas http://www.nedprod.com/
File Created: Jun 2016


Boost Software License - Version 1.0 - August 17th, 2003

Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#ifndef BOOSTLITE_ALGORITHM_STRING_HPP
#define BOOSTLITE_ALGORITHM_STRING_HPP

#include <locale>
#include <string>

namespace boost_lite
{
  namespace algorithm
  {
    namespace string
    {
      //! Returns an all lower case edition of the input string. i18n aware.
      template <class Char> std::basic_string<Char> tolower(std::basic_string<Char> s)
      {
        auto &f = std::use_facet<std::ctype<wchar_t>>(std::locale());
        std::transform(s.begin(), s.end(), s.begin(), [&](Char c) { return f.tolower(c); });
        return s;
      }

      //! Returns an all upper case edition of the input string. i18n aware.
      template <class Char> std::basic_string<Char> toupper(std::basic_string<Char> s)
      {
        auto &f = std::use_facet<std::ctype<wchar_t>>(std::locale());
        std::transform(s.begin(), s.end(), s.begin(), [&](Char c) { return f.toupper(c); });
        return s;
      }
    }
  }
}

#endif

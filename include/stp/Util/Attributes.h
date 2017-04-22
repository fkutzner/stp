/********************************************************************
 * AUTHOR: Felix Kutzner
 *
 * BEGIN DATE: Apr, 2017
 *
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
********************************************************************/

#ifndef ATTRIBUTES_H_
#define ATTRIBUTES_H_

#if defined(_MSC_VER)
#define ATTR_NORETURN __declspec(noreturn)
#elif defined(__GNUC__) || defined(__clang__)
#define ATTR_NORETURN __attribute__((noreturn))
#else
#define ATTR_NORETURN
#endif

#if defined(_MSC_VER)

#if defined(STP_EXPORTS)
#define ATTR_STPAPI __declspec(dllexport)
#else // defined(STP_EXPORTS)
#define ATTR_STPAPI __declspec(dllimport)
#endif // defined(STP_EXPORTS)

#else
#define ATTR_STPAPI
#endif

#endif

/* ----------------------------------------------------------------------- *
 *
 *	 Copyright (c) 2014, Subhajit Sahu
 *	 All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following
 *   conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *
 *     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *     CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *     INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *     MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *     CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *     SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *     NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 *     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *     CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *     OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 *     EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------------------------------------------------------------- */

/* 
 * char.hpp - ascii character wrapper
 */

#ifndef _TYPE_CHAR_HPP_
#define _TYPE_CHAR_HPP_


namespace wind
{


// ascii character wrapper class
// can be type casted to char
class char_
{
public:


	// char value
	char Value;


	// for type conversion
	inline char_()
	{ Value = '\0'; }

	inline char_(char ch)
	{ Value = ch; }

	inline void operator=(char ch)
	{ Value = ch; }

	inline operator char() const
	{ return Value; }

	// wrapper functionality
	inline bool IsLowerCase() const
	{ return (Value >= 'a') && (Value <= 'z'); }

	inline bool IsUpperCase() const
	{ return (Value >= 'A') && (Value <= 'Z'); }

	inline bool IsAlphabet() const
	{ return IsLowerCase() || IsUpperCase(); }

	inline bool IsDigit() const
	{ return (Value >= '0') && (Value <= '9'); }

	inline bool IsBlank() const
	{ return (Value == '\t') || (Value == ' '); }

	inline bool IsSpace() const
	{ return IsBlank(); }

	inline char_ GetLowerCase() const
	{ return (char_) IsUpperCase()? (Value - 'A' + 'a') : Value; }

	inline char_ GetUpperCase() const
	{ return (char_) IsLowerCase()? (Value - 'a' + 'A') : Value; }

	inline char GetChar() const
	{ return Value; }

	inline wchar GetWchar() const
	{ return (wchar) Value; }

	inline tchar GetTchar() const
	{ return (tchar) Value; }


}; // end class char_


} // end namespace wind


#endif /* _TYPE_CHAR_HPP_ */
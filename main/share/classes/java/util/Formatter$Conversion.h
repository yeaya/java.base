#ifndef _java_util_Formatter$Conversion_h_
#define _java_util_Formatter$Conversion_h_
//$ class java.util.Formatter$Conversion
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LINE_SEPARATOR")
#undef LINE_SEPARATOR
#pragma push_macro("HEXADECIMAL_FLOAT_UPPER")
#undef HEXADECIMAL_FLOAT_UPPER
#pragma push_macro("DECIMAL_INTEGER")
#undef DECIMAL_INTEGER
#pragma push_macro("BOOLEAN_UPPER")
#undef BOOLEAN_UPPER
#pragma push_macro("STRING_UPPER")
#undef STRING_UPPER
#pragma push_macro("DATE_TIME_UPPER")
#undef DATE_TIME_UPPER
#pragma push_macro("HASHCODE_UPPER")
#undef HASHCODE_UPPER
#pragma push_macro("SCIENTIFIC_UPPER")
#undef SCIENTIFIC_UPPER
#pragma push_macro("GENERAL")
#undef GENERAL
#pragma push_macro("HEXADECIMAL_FLOAT")
#undef HEXADECIMAL_FLOAT
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("SCIENTIFIC")
#undef SCIENTIFIC
#pragma push_macro("PERCENT_SIGN")
#undef PERCENT_SIGN
#pragma push_macro("HEXADECIMAL_INTEGER")
#undef HEXADECIMAL_INTEGER
#pragma push_macro("OCTAL_INTEGER")
#undef OCTAL_INTEGER
#pragma push_macro("GENERAL_UPPER")
#undef GENERAL_UPPER
#pragma push_macro("STRING")
#undef STRING
#pragma push_macro("HASHCODE")
#undef HASHCODE
#pragma push_macro("CHARACTER")
#undef CHARACTER
#pragma push_macro("CHARACTER_UPPER")
#undef CHARACTER_UPPER
#pragma push_macro("DATE_TIME")
#undef DATE_TIME
#pragma push_macro("HEXADECIMAL_INTEGER_UPPER")
#undef HEXADECIMAL_INTEGER_UPPER
#pragma push_macro("DECIMAL_FLOAT")
#undef DECIMAL_FLOAT

namespace java {
	namespace util {

class Formatter$Conversion : public ::java::lang::Object {
	$class(Formatter$Conversion, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Formatter$Conversion();
	void init$();
	static bool isCharacter(char16_t c);
	static bool isFloat(char16_t c);
	static bool isGeneral(char16_t c);
	static bool isInteger(char16_t c);
	static bool isText(char16_t c);
	static bool isValid(char16_t c);
	static const char16_t DECIMAL_INTEGER = ((char16_t)100);
	static const char16_t OCTAL_INTEGER = ((char16_t)111);
	static const char16_t HEXADECIMAL_INTEGER = ((char16_t)120);
	static const char16_t HEXADECIMAL_INTEGER_UPPER = ((char16_t)88);
	static const char16_t SCIENTIFIC = ((char16_t)101);
	static const char16_t SCIENTIFIC_UPPER = ((char16_t)69);
	static const char16_t GENERAL = ((char16_t)103);
	static const char16_t GENERAL_UPPER = ((char16_t)71);
	static const char16_t DECIMAL_FLOAT = ((char16_t)102);
	static const char16_t HEXADECIMAL_FLOAT = ((char16_t)97);
	static const char16_t HEXADECIMAL_FLOAT_UPPER = ((char16_t)65);
	static const char16_t CHARACTER = ((char16_t)99);
	static const char16_t CHARACTER_UPPER = ((char16_t)67);
	static const char16_t DATE_TIME = ((char16_t)116);
	static const char16_t DATE_TIME_UPPER = ((char16_t)84);
	static const char16_t BOOLEAN = ((char16_t)98);
	static const char16_t BOOLEAN_UPPER = ((char16_t)66);
	static const char16_t STRING = ((char16_t)115);
	static const char16_t STRING_UPPER = ((char16_t)83);
	static const char16_t HASHCODE = ((char16_t)104);
	static const char16_t HASHCODE_UPPER = ((char16_t)72);
	static const char16_t LINE_SEPARATOR = ((char16_t)110);
	static const char16_t PERCENT_SIGN = ((char16_t)37);
};

	} // util
} // java

#pragma pop_macro("LINE_SEPARATOR")
#pragma pop_macro("HEXADECIMAL_FLOAT_UPPER")
#pragma pop_macro("DECIMAL_INTEGER")
#pragma pop_macro("BOOLEAN_UPPER")
#pragma pop_macro("STRING_UPPER")
#pragma pop_macro("DATE_TIME_UPPER")
#pragma pop_macro("HASHCODE_UPPER")
#pragma pop_macro("SCIENTIFIC_UPPER")
#pragma pop_macro("GENERAL")
#pragma pop_macro("HEXADECIMAL_FLOAT")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("SCIENTIFIC")
#pragma pop_macro("PERCENT_SIGN")
#pragma pop_macro("HEXADECIMAL_INTEGER")
#pragma pop_macro("OCTAL_INTEGER")
#pragma pop_macro("GENERAL_UPPER")
#pragma pop_macro("STRING")
#pragma pop_macro("HASHCODE")
#pragma pop_macro("CHARACTER")
#pragma pop_macro("CHARACTER_UPPER")
#pragma pop_macro("DATE_TIME")
#pragma pop_macro("HEXADECIMAL_INTEGER_UPPER")
#pragma pop_macro("DECIMAL_FLOAT")

#endif // _java_util_Formatter$Conversion_h_
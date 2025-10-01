#ifndef _java_lang_StackWalker$ExtendedOption_h_
#define _java_lang_StackWalker$ExtendedOption_h_
//$ class java.lang.StackWalker$ExtendedOption
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("LOCALS_AND_OPERANDS")
#undef LOCALS_AND_OPERANDS

namespace java {
	namespace lang {

class $import StackWalker$ExtendedOption : public ::java::lang::Enum {
	$class(StackWalker$ExtendedOption, 0, ::java::lang::Enum)
public:
	StackWalker$ExtendedOption();
	static $Array<::java::lang::StackWalker$ExtendedOption>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::StackWalker$ExtendedOption* valueOf($String* name);
	static $Array<::java::lang::StackWalker$ExtendedOption>* values();
	static ::java::lang::StackWalker$ExtendedOption* LOCALS_AND_OPERANDS;
	static $Array<::java::lang::StackWalker$ExtendedOption>* $VALUES;
};

	} // lang
} // java

#pragma pop_macro("LOCALS_AND_OPERANDS")

#endif // _java_lang_StackWalker$ExtendedOption_h_
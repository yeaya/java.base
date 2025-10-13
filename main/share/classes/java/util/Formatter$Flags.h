#ifndef _java_util_Formatter$Flags_h_
#define _java_util_Formatter$Flags_h_
//$ class java.util.Formatter$Flags
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALTERNATE")
#undef ALTERNATE
#pragma push_macro("GROUP")
#undef GROUP
#pragma push_macro("LEADING_SPACE")
#undef LEADING_SPACE
#pragma push_macro("LEFT_JUSTIFY")
#undef LEFT_JUSTIFY
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("PARENTHESES")
#undef PARENTHESES
#pragma push_macro("PLUS")
#undef PLUS
#pragma push_macro("PREVIOUS")
#undef PREVIOUS
#pragma push_macro("UPPERCASE")
#undef UPPERCASE
#pragma push_macro("ZERO_PAD")
#undef ZERO_PAD

namespace java {
	namespace util {

class Formatter$Flags : public ::java::lang::Object {
	$class(Formatter$Flags, 0, ::java::lang::Object)
public:
	Formatter$Flags();
	void init$(int32_t f);
	::java::util::Formatter$Flags* add(::java::util::Formatter$Flags* f);
	virtual bool contains(::java::util::Formatter$Flags* f);
	virtual ::java::util::Formatter$Flags* dup();
	static ::java::util::Formatter$Flags* parse($String* s, int32_t start, int32_t end);
	static ::java::util::Formatter$Flags* parse(char16_t c);
	virtual ::java::util::Formatter$Flags* remove(::java::util::Formatter$Flags* f);
	static $String* toString(::java::util::Formatter$Flags* f);
	virtual $String* toString() override;
	virtual int32_t valueOf();
	int32_t flags = 0;
	static ::java::util::Formatter$Flags* NONE;
	static ::java::util::Formatter$Flags* LEFT_JUSTIFY;
	static ::java::util::Formatter$Flags* UPPERCASE;
	static ::java::util::Formatter$Flags* ALTERNATE;
	static ::java::util::Formatter$Flags* PLUS;
	static ::java::util::Formatter$Flags* LEADING_SPACE;
	static ::java::util::Formatter$Flags* ZERO_PAD;
	static ::java::util::Formatter$Flags* GROUP;
	static ::java::util::Formatter$Flags* PARENTHESES;
	static ::java::util::Formatter$Flags* PREVIOUS;
};

	} // util
} // java

#pragma pop_macro("ALTERNATE")
#pragma pop_macro("GROUP")
#pragma pop_macro("LEADING_SPACE")
#pragma pop_macro("LEFT_JUSTIFY")
#pragma pop_macro("NONE")
#pragma pop_macro("PARENTHESES")
#pragma pop_macro("PLUS")
#pragma pop_macro("PREVIOUS")
#pragma pop_macro("UPPERCASE")
#pragma pop_macro("ZERO_PAD")

#endif // _java_util_Formatter$Flags_h_
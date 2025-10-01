#ifndef _java_util_regex_Pattern$Qtype_h_
#define _java_util_regex_Pattern$Qtype_h_
//$ class java.util.regex.Pattern$Qtype
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("LAZY")
#undef LAZY
#pragma push_macro("INDEPENDENT")
#undef INDEPENDENT
#pragma push_macro("GREEDY")
#undef GREEDY
#pragma push_macro("POSSESSIVE")
#undef POSSESSIVE

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$Qtype : public ::java::lang::Enum {
	$class(Pattern$Qtype, 0, ::java::lang::Enum)
public:
	Pattern$Qtype();
	static $Array<::java::util::regex::Pattern$Qtype>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::util::regex::Pattern$Qtype* valueOf($String* name);
	static $Array<::java::util::regex::Pattern$Qtype>* values();
	static ::java::util::regex::Pattern$Qtype* GREEDY;
	static ::java::util::regex::Pattern$Qtype* LAZY;
	static ::java::util::regex::Pattern$Qtype* POSSESSIVE;
	static ::java::util::regex::Pattern$Qtype* INDEPENDENT;
	static $Array<::java::util::regex::Pattern$Qtype>* $VALUES;
};

		} // regex
	} // util
} // java

#pragma pop_macro("LAZY")
#pragma pop_macro("INDEPENDENT")
#pragma pop_macro("GREEDY")
#pragma pop_macro("POSSESSIVE")

#endif // _java_util_regex_Pattern$Qtype_h_
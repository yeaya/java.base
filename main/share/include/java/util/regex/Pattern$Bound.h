#ifndef _java_util_regex_Pattern$Bound_h_
#define _java_util_regex_Pattern$Bound_h_
//$ class java.util.regex.Pattern$Bound
//$ extends java.util.regex.Pattern$Node

#include <java/util/regex/Pattern$Node.h>

#pragma push_macro("BOTH")
#undef BOTH
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("RIGHT")
#undef RIGHT

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$Bound : public ::java::util::regex::Pattern$Node {
	$class(Pattern$Bound, 0, ::java::util::regex::Pattern$Node)
public:
	Pattern$Bound();
	void init$(int32_t n, bool useUWORD);
	int32_t check(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq);
	bool isWord(int32_t ch);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	static int32_t LEFT;
	static int32_t RIGHT;
	static int32_t BOTH;
	static int32_t NONE;
	int32_t type = 0;
	bool useUWORD = false;
};

		} // regex
	} // util
} // java

#pragma pop_macro("BOTH")
#pragma pop_macro("LEFT")
#pragma pop_macro("NONE")
#pragma pop_macro("RIGHT")

#endif // _java_util_regex_Pattern$Bound_h_
#ifndef _java_util_regex_Pattern$BmpCharPropertyGreedy_h_
#define _java_util_regex_Pattern$BmpCharPropertyGreedy_h_
//$ class java.util.regex.Pattern$BmpCharPropertyGreedy
//$ extends java.util.regex.Pattern$CharPropertyGreedy

#include <java/util/regex/Pattern$CharPropertyGreedy.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern$BmpCharProperty;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$BmpCharPropertyGreedy : public ::java::util::regex::Pattern$CharPropertyGreedy {
	$class(Pattern$BmpCharPropertyGreedy, $NO_CLASS_INIT, ::java::util::regex::Pattern$CharPropertyGreedy)
public:
	Pattern$BmpCharPropertyGreedy();
	void init$(::java::util::regex::Pattern$BmpCharProperty* bcp, int32_t cmin);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$BmpCharPropertyGreedy_h_
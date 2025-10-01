#ifndef _java_util_regex_Pattern$CharPropertyGreedy_h_
#define _java_util_regex_Pattern$CharPropertyGreedy_h_
//$ class java.util.regex.Pattern$CharPropertyGreedy
//$ extends java.util.regex.Pattern$Node

#include <java/util/regex/Pattern$Node.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern$CharPredicate;
			class Pattern$CharProperty;
			class Pattern$TreeInfo;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$CharPropertyGreedy : public ::java::util::regex::Pattern$Node {
	$class(Pattern$CharPropertyGreedy, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$CharPropertyGreedy();
	void init$(::java::util::regex::Pattern$CharProperty* cp, int32_t cmin);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	::java::util::regex::Pattern$CharPredicate* predicate = nullptr;
	int32_t cmin = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$CharPropertyGreedy_h_
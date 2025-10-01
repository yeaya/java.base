#ifndef _java_util_regex_Pattern$NotBehind_h_
#define _java_util_regex_Pattern$NotBehind_h_
//$ class java.util.regex.Pattern$NotBehind
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
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$NotBehind : public ::java::util::regex::Pattern$Node {
	$class(Pattern$NotBehind, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$NotBehind();
	void init$(::java::util::regex::Pattern$Node* cond, int32_t rmax, int32_t rmin);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	::java::util::regex::Pattern$Node* cond = nullptr;
	int32_t rmax = 0;
	int32_t rmin = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$NotBehind_h_
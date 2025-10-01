#ifndef _java_util_regex_Pattern$NotBehindS_h_
#define _java_util_regex_Pattern$NotBehindS_h_
//$ class java.util.regex.Pattern$NotBehindS
//$ extends java.util.regex.Pattern$NotBehind

#include <java/util/regex/Pattern$NotBehind.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$NotBehindS : public ::java::util::regex::Pattern$NotBehind {
	$class(Pattern$NotBehindS, $NO_CLASS_INIT, ::java::util::regex::Pattern$NotBehind)
public:
	Pattern$NotBehindS();
	void init$(::java::util::regex::Pattern$Node* cond, int32_t rmax, int32_t rmin);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$NotBehindS_h_
#ifndef _java_util_regex_Pattern$StartS_h_
#define _java_util_regex_Pattern$StartS_h_
//$ class java.util.regex.Pattern$StartS
//$ extends java.util.regex.Pattern$Start

#include <java/util/regex/Pattern$Start.h>

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

class $import Pattern$StartS : public ::java::util::regex::Pattern$Start {
	$class(Pattern$StartS, $NO_CLASS_INIT, ::java::util::regex::Pattern$Start)
public:
	Pattern$StartS();
	void init$(::java::util::regex::Pattern$Node* node);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$StartS_h_
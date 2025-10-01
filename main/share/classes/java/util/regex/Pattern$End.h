#ifndef _java_util_regex_Pattern$End_h_
#define _java_util_regex_Pattern$End_h_
//$ class java.util.regex.Pattern$End
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

class $export Pattern$End : public ::java::util::regex::Pattern$Node {
	$class(Pattern$End, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$End();
	void init$();
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$End_h_
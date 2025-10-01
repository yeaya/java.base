#ifndef _java_util_regex_Pattern$GroupTail_h_
#define _java_util_regex_Pattern$GroupTail_h_
//$ class java.util.regex.Pattern$GroupTail
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

class $import Pattern$GroupTail : public ::java::util::regex::Pattern$Node {
	$class(Pattern$GroupTail, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$GroupTail();
	void init$(int32_t localCount, int32_t groupCount);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	int32_t localIndex = 0;
	int32_t groupIndex = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$GroupTail_h_
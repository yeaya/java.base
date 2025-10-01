#ifndef _java_util_regex_Pattern$GroupHead_h_
#define _java_util_regex_Pattern$GroupHead_h_
//$ class java.util.regex.Pattern$GroupHead
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
			class Pattern$GroupTail;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $export Pattern$GroupHead : public ::java::util::regex::Pattern$Node {
	$class(Pattern$GroupHead, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$GroupHead();
	void init$(int32_t localCount);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	int32_t localIndex = 0;
	::java::util::regex::Pattern$GroupTail* tail = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$GroupHead_h_
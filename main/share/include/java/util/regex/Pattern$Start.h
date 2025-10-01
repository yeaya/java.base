#ifndef _java_util_regex_Pattern$Start_h_
#define _java_util_regex_Pattern$Start_h_
//$ class java.util.regex.Pattern$Start
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
			class Pattern$TreeInfo;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$Start : public ::java::util::regex::Pattern$Node {
	$class(Pattern$Start, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$Start();
	void init$(::java::util::regex::Pattern$Node* node);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	int32_t minLength = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$Start_h_
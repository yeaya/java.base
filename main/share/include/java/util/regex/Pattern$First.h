#ifndef _java_util_regex_Pattern$First_h_
#define _java_util_regex_Pattern$First_h_
//$ class java.util.regex.Pattern$First
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

class $import Pattern$First : public ::java::util::regex::Pattern$Node {
	$class(Pattern$First, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$First();
	void init$(::java::util::regex::Pattern$Node* node);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	::java::util::regex::Pattern$Node* atom = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$First_h_
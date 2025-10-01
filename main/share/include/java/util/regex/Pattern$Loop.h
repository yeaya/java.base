#ifndef _java_util_regex_Pattern$Loop_h_
#define _java_util_regex_Pattern$Loop_h_
//$ class java.util.regex.Pattern$Loop
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

class $import Pattern$Loop : public ::java::util::regex::Pattern$Node {
	$class(Pattern$Loop, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$Loop();
	void init$(int32_t countIndex, int32_t beginIndex);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool matchInit(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq);
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	::java::util::regex::Pattern$Node* body = nullptr;
	int32_t countIndex = 0;
	int32_t beginIndex = 0;
	int32_t cmin = 0;
	int32_t cmax = 0;
	int32_t posIndex = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$Loop_h_
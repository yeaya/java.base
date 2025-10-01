#ifndef _java_util_regex_Pattern$BackRef_h_
#define _java_util_regex_Pattern$BackRef_h_
//$ class java.util.regex.Pattern$BackRef
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

class $import Pattern$BackRef : public ::java::util::regex::Pattern$Node {
	$class(Pattern$BackRef, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$BackRef();
	void init$(int32_t groupCount);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	int32_t groupIndex = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$BackRef_h_
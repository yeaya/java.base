#ifndef _java_util_regex_Pattern$LazyLoop_h_
#define _java_util_regex_Pattern$LazyLoop_h_
//$ class java.util.regex.Pattern$LazyLoop
//$ extends java.util.regex.Pattern$Loop

#include <java/util/regex/Pattern$Loop.h>

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

class $import Pattern$LazyLoop : public ::java::util::regex::Pattern$Loop {
	$class(Pattern$LazyLoop, $NO_CLASS_INIT, ::java::util::regex::Pattern$Loop)
public:
	Pattern$LazyLoop();
	void init$(int32_t countIndex, int32_t beginIndex);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool matchInit(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$LazyLoop_h_
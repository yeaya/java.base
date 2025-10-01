#ifndef _java_util_regex_Pattern$CIBackRef_h_
#define _java_util_regex_Pattern$CIBackRef_h_
//$ class java.util.regex.Pattern$CIBackRef
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

class $export Pattern$CIBackRef : public ::java::util::regex::Pattern$Node {
	$class(Pattern$CIBackRef, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$CIBackRef();
	void init$(int32_t groupCount, bool doUnicodeCase);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	int32_t groupIndex = 0;
	bool doUnicodeCase = false;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$CIBackRef_h_
#ifndef _java_util_regex_Pattern$BnMS_h_
#define _java_util_regex_Pattern$BnMS_h_
//$ class java.util.regex.Pattern$BnMS
//$ extends java.util.regex.Pattern$BnM

#include <java/lang/Array.h>
#include <java/util/regex/Pattern$BnM.h>

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

class $export Pattern$BnMS : public ::java::util::regex::Pattern$BnM {
	$class(Pattern$BnMS, $NO_CLASS_INIT, ::java::util::regex::Pattern$BnM)
public:
	Pattern$BnMS();
	void init$($ints* src, $ints* lastOcc, $ints* optoSft, ::java::util::regex::Pattern$Node* next);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	int32_t lengthInChars = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$BnMS_h_
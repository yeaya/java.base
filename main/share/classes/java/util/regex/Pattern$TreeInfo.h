#ifndef _java_util_regex_Pattern$TreeInfo_h_
#define _java_util_regex_Pattern$TreeInfo_h_
//$ class java.util.regex.Pattern$TreeInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace regex {

class $export Pattern$TreeInfo : public ::java::lang::Object {
	$class(Pattern$TreeInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Pattern$TreeInfo();
	void init$();
	void reset();
	int32_t minLength = 0;
	int32_t maxLength = 0;
	bool maxValid = false;
	bool deterministic = false;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$TreeInfo_h_
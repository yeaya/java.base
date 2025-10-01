#ifndef _java_util_regex_Pattern$SliceUS_h_
#define _java_util_regex_Pattern$SliceUS_h_
//$ class java.util.regex.Pattern$SliceUS
//$ extends java.util.regex.Pattern$SliceIS

#include <java/lang/Array.h>
#include <java/util/regex/Pattern$SliceIS.h>

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$SliceUS : public ::java::util::regex::Pattern$SliceIS {
	$class(Pattern$SliceUS, $NO_CLASS_INIT, ::java::util::regex::Pattern$SliceIS)
public:
	Pattern$SliceUS();
	void init$($ints* buf);
	virtual int32_t toLower(int32_t c) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$SliceUS_h_
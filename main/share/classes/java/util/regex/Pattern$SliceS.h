#ifndef _java_util_regex_Pattern$SliceS_h_
#define _java_util_regex_Pattern$SliceS_h_
//$ class java.util.regex.Pattern$SliceS
//$ extends java.util.regex.Pattern$Slice

#include <java/lang/Array.h>
#include <java/util/regex/Pattern$Slice.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $export Pattern$SliceS : public ::java::util::regex::Pattern$Slice {
	$class(Pattern$SliceS, $NO_CLASS_INIT, ::java::util::regex::Pattern$Slice)
public:
	Pattern$SliceS();
	void init$($ints* buf);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$SliceS_h_
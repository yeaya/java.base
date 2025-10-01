#ifndef _java_util_regex_Pattern$SliceIS_h_
#define _java_util_regex_Pattern$SliceIS_h_
//$ class java.util.regex.Pattern$SliceIS
//$ extends java.util.regex.Pattern$SliceNode

#include <java/lang/Array.h>
#include <java/util/regex/Pattern$SliceNode.h>

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

class $export Pattern$SliceIS : public ::java::util::regex::Pattern$SliceNode {
	$class(Pattern$SliceIS, $NO_CLASS_INIT, ::java::util::regex::Pattern$SliceNode)
public:
	Pattern$SliceIS();
	void init$($ints* buf);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual int32_t toLower(int32_t c);
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$SliceIS_h_
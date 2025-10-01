#ifndef _java_util_regex_Pattern$SliceI_h_
#define _java_util_regex_Pattern$SliceI_h_
//$ class java.util.regex.Pattern$SliceI
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

class $import Pattern$SliceI : public ::java::util::regex::Pattern$SliceNode {
	$class(Pattern$SliceI, $NO_CLASS_INIT, ::java::util::regex::Pattern$SliceNode)
public:
	Pattern$SliceI();
	void init$($ints* buf);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$SliceI_h_
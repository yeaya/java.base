#ifndef _java_util_regex_Pattern$Node_h_
#define _java_util_regex_Pattern$Node_h_
//$ class java.util.regex.Pattern$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import Pattern$Node : public ::java::lang::Object {
	$class(Pattern$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Pattern$Node();
	void init$();
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq);
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info);
	::java::util::regex::Pattern$Node* next = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$Node_h_
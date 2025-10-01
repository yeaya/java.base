#ifndef _java_util_regex_Pattern$Pos_h_
#define _java_util_regex_Pattern$Pos_h_
//$ class java.util.regex.Pattern$Pos
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
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$Pos : public ::java::util::regex::Pattern$Node {
	$class(Pattern$Pos, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$Pos();
	void init$(::java::util::regex::Pattern$Node* cond);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	::java::util::regex::Pattern$Node* cond = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$Pos_h_
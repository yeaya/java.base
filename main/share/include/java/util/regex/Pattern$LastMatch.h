#ifndef _java_util_regex_Pattern$LastMatch_h_
#define _java_util_regex_Pattern$LastMatch_h_
//$ class java.util.regex.Pattern$LastMatch
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

class $import Pattern$LastMatch : public ::java::util::regex::Pattern$Node {
	$class(Pattern$LastMatch, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$LastMatch();
	void init$();
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$LastMatch_h_
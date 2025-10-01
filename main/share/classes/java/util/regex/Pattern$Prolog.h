#ifndef _java_util_regex_Pattern$Prolog_h_
#define _java_util_regex_Pattern$Prolog_h_
//$ class java.util.regex.Pattern$Prolog
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
			class Pattern$Loop;
			class Pattern$TreeInfo;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $export Pattern$Prolog : public ::java::util::regex::Pattern$Node {
	$class(Pattern$Prolog, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$Prolog();
	void init$(::java::util::regex::Pattern$Loop* loop);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	::java::util::regex::Pattern$Loop* loop = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$Prolog_h_
#ifndef _java_util_regex_Pattern$NFCCharProperty_h_
#define _java_util_regex_Pattern$NFCCharProperty_h_
//$ class java.util.regex.Pattern$NFCCharProperty
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
			class Pattern$CharPredicate;
			class Pattern$TreeInfo;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class Pattern$NFCCharProperty : public ::java::util::regex::Pattern$Node {
	$class(Pattern$NFCCharProperty, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$NFCCharProperty();
	void init$(::java::util::regex::Pattern$CharPredicate* predicate);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	::java::util::regex::Pattern$CharPredicate* predicate = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$NFCCharProperty_h_
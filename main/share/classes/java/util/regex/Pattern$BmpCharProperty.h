#ifndef _java_util_regex_Pattern$BmpCharProperty_h_
#define _java_util_regex_Pattern$BmpCharProperty_h_
//$ class java.util.regex.Pattern$BmpCharProperty
//$ extends java.util.regex.Pattern$CharProperty

#include <java/util/regex/Pattern$CharProperty.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern$BmpCharPredicate;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class Pattern$BmpCharProperty : public ::java::util::regex::Pattern$CharProperty {
	$class(Pattern$BmpCharProperty, $NO_CLASS_INIT, ::java::util::regex::Pattern$CharProperty)
public:
	Pattern$BmpCharProperty();
	void init$(::java::util::regex::Pattern$BmpCharPredicate* predicate);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$BmpCharProperty_h_
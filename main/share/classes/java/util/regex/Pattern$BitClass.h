#ifndef _java_util_regex_Pattern$BitClass_h_
#define _java_util_regex_Pattern$BitClass_h_
//$ class java.util.regex.Pattern$BitClass
//$ extends java.util.regex.Pattern$BmpCharPredicate

#include <java/lang/Array.h>
#include <java/util/regex/Pattern$BmpCharPredicate.h>

namespace java {
	namespace util {
		namespace regex {

class $export Pattern$BitClass : public ::java::util::regex::Pattern$BmpCharPredicate {
	$class(Pattern$BitClass, 0, ::java::util::regex::Pattern$BmpCharPredicate)
public:
	Pattern$BitClass();
	void init$();
	::java::util::regex::Pattern$BitClass* add(int32_t c, int32_t flags);
	virtual bool is(int32_t ch) override;
	using ::java::util::regex::Pattern$BmpCharPredicate::union$;
	static bool $assertionsDisabled;
	$booleans* bits = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$BitClass_h_
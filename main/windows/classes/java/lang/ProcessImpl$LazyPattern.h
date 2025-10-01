#ifndef _java_lang_ProcessImpl$LazyPattern_h_
#define _java_lang_ProcessImpl$LazyPattern_h_
//$ class java.lang.ProcessImpl$LazyPattern
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("PATTERN")
#undef PATTERN

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace lang {

class ProcessImpl$LazyPattern : public ::java::lang::Object {
	$class(ProcessImpl$LazyPattern, 0, ::java::lang::Object)
public:
	ProcessImpl$LazyPattern();
	void init$();
	static ::java::util::regex::Pattern* PATTERN;
};

	} // lang
} // java

#pragma pop_macro("PATTERN")

#endif // _java_lang_ProcessImpl$LazyPattern_h_
#ifndef _java_text_BreakIterator$BreakIteratorCache_h_
#define _java_text_BreakIterator$BreakIteratorCache_h_
//$ class java.text.BreakIterator$BreakIteratorCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace text {
		class BreakIterator;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace text {

class BreakIterator$BreakIteratorCache : public ::java::lang::Object {
	$class(BreakIterator$BreakIteratorCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BreakIterator$BreakIteratorCache();
	void init$(::java::util::Locale* locale, ::java::text::BreakIterator* iter);
	::java::text::BreakIterator* createBreakInstance();
	::java::util::Locale* getLocale();
	::java::text::BreakIterator* iter = nullptr;
	::java::util::Locale* locale = nullptr;
};

	} // text
} // java

#endif // _java_text_BreakIterator$BreakIteratorCache_h_
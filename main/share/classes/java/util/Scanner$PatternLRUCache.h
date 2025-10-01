#ifndef _java_util_Scanner$PatternLRUCache_h_
#define _java_util_Scanner$PatternLRUCache_h_
//$ class java.util.Scanner$PatternLRUCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace util {

class Scanner$PatternLRUCache : public ::java::lang::Object {
	$class(Scanner$PatternLRUCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Scanner$PatternLRUCache();
	void init$(int32_t size);
	virtual ::java::util::regex::Pattern* forName($String* name);
	virtual bool hasName(::java::util::regex::Pattern* p, $String* s);
	virtual void moveToFront($ObjectArray* oa, int32_t i);
	$Array<::java::util::regex::Pattern>* oa = nullptr;
	int32_t size = 0;
};

	} // util
} // java

#endif // _java_util_Scanner$PatternLRUCache_h_
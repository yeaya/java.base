#ifndef _java_lang_Integer$IntegerCache_h_
#define _java_lang_Integer$IntegerCache_h_
//$ class java.lang.Integer$IntegerCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Integer;
	}
}

namespace java {
	namespace lang {

class Integer$IntegerCache : public ::java::lang::Object {
	$class(Integer$IntegerCache, $PRELOAD, ::java::lang::Object)
public:
	Integer$IntegerCache();
	void init$();
	static bool $assertionsDisabled;
	static const int32_t low = (-128);
	static int32_t high;
	static $Array<::java::lang::Integer>* cache;
	static $Array<::java::lang::Integer>* archivedCache;
};

	} // lang
} // java

#endif // _java_lang_Integer$IntegerCache_h_
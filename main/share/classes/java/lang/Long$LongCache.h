#ifndef _java_lang_Long$LongCache_h_
#define _java_lang_Long$LongCache_h_
//$ class java.lang.Long$LongCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Long;
	}
}

namespace java {
	namespace lang {

class Long$LongCache : public ::java::lang::Object {
	$class(Long$LongCache, 0, ::java::lang::Object)
public:
	Long$LongCache();
	void init$();
	static $Array<::java::lang::Long>* cache;
	static $Array<::java::lang::Long>* archivedCache;
};

	} // lang
} // java

#endif // _java_lang_Long$LongCache_h_
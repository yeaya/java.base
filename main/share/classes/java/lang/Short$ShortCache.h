#ifndef _java_lang_Short$ShortCache_h_
#define _java_lang_Short$ShortCache_h_
//$ class java.lang.Short$ShortCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Short;
	}
}

namespace java {
	namespace lang {

class Short$ShortCache : public ::java::lang::Object {
	$class(Short$ShortCache, 0, ::java::lang::Object)
public:
	Short$ShortCache();
	void init$();
	static $Array<::java::lang::Short>* cache;
	static $Array<::java::lang::Short>* archivedCache;
};

	} // lang
} // java

#endif // _java_lang_Short$ShortCache_h_
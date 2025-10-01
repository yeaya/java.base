#ifndef _java_lang_Byte$ByteCache_h_
#define _java_lang_Byte$ByteCache_h_
//$ class java.lang.Byte$ByteCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Byte;
	}
}

namespace java {
	namespace lang {

class Byte$ByteCache : public ::java::lang::Object {
	$class(Byte$ByteCache, 0, ::java::lang::Object)
public:
	Byte$ByteCache();
	void init$();
	static $Array<::java::lang::Byte>* cache;
	static $Array<::java::lang::Byte>* archivedCache;
};

	} // lang
} // java

#endif // _java_lang_Byte$ByteCache_h_
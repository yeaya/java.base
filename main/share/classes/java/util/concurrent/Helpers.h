#ifndef _java_util_concurrent_Helpers_h_
#define _java_util_concurrent_Helpers_h_
//$ class java.util.concurrent.Helpers
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Collection;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Helpers : public ::java::lang::Object {
	$class(Helpers, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Helpers();
	void init$();
	static $String* collectionToString(::java::util::Collection* c);
	static $String* mapEntryToString(Object$* key, Object$* val);
	static $String* objectToString(Object$* x);
	using ::java::lang::Object::toString;
	static $String* toString($ObjectArray* a, int32_t size, int32_t charLength);
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Helpers_h_
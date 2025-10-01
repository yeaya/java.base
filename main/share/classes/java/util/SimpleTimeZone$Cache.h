#ifndef _java_util_SimpleTimeZone$Cache_h_
#define _java_util_SimpleTimeZone$Cache_h_
//$ class java.util.SimpleTimeZone$Cache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {

class SimpleTimeZone$Cache : public ::java::lang::Object {
	$class(SimpleTimeZone$Cache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SimpleTimeZone$Cache();
	void init$(int64_t year, int64_t start, int64_t end);
	int64_t year = 0;
	int64_t start = 0;
	int64_t end = 0;
};

	} // util
} // java

#endif // _java_util_SimpleTimeZone$Cache_h_
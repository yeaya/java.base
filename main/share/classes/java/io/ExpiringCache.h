#ifndef _java_io_ExpiringCache_h_
#define _java_io_ExpiringCache_h_
//$ class java.io.ExpiringCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_ENTRIES")
#undef MAX_ENTRIES

namespace java {
	namespace io {
		class ExpiringCache$Entry;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace io {

class ExpiringCache : public ::java::lang::Object {
	$class(ExpiringCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExpiringCache();
	void init$();
	void init$(int64_t millisUntilExpiration);
	void cleanup();
	virtual void clear();
	::java::io::ExpiringCache$Entry* entryFor($String* key);
	virtual $String* get($String* key);
	virtual void put($String* key, $String* val);
	int64_t millisUntilExpiration = 0;
	::java::util::Map* map = nullptr;
	int32_t queryCount = 0;
	int32_t queryOverflow = 0;
	int32_t MAX_ENTRIES = 0;
};

	} // io
} // java

#pragma pop_macro("MAX_ENTRIES")

#endif // _java_io_ExpiringCache_h_
#ifndef _java_io_ExpiringCache$1_h_
#define _java_io_ExpiringCache$1_h_
//$ class java.io.ExpiringCache$1
//$ extends java.util.LinkedHashMap

#include <java/util/LinkedHashMap.h>

namespace java {
	namespace io {
		class ExpiringCache;
	}
}
namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace java {
	namespace io {

class ExpiringCache$1 : public ::java::util::LinkedHashMap {
	$class(ExpiringCache$1, $NO_CLASS_INIT, ::java::util::LinkedHashMap)
public:
	ExpiringCache$1();
	void init$(::java::io::ExpiringCache* this$0);
	virtual bool removeEldestEntry(::java::util::Map$Entry* eldest) override;
	::java::io::ExpiringCache* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_ExpiringCache$1_h_
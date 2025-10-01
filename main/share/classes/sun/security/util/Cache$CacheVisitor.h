#ifndef _sun_security_util_Cache$CacheVisitor_h_
#define _sun_security_util_Cache$CacheVisitor_h_
//$ interface sun.security.util.Cache$CacheVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export Cache$CacheVisitor : public ::java::lang::Object {
	$interface(Cache$CacheVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void visit(::java::util::Map* map) {}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Cache$CacheVisitor_h_
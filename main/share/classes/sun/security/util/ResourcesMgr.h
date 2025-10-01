#ifndef _sun_security_util_ResourcesMgr_h_
#define _sun_security_util_ResourcesMgr_h_
//$ class sun.security.util.ResourcesMgr
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
		class ResourceBundle;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export ResourcesMgr : public ::java::lang::Object {
	$class(ResourcesMgr, 0, ::java::lang::Object)
public:
	ResourcesMgr();
	void init$();
	static $String* getAuthResourceString($String* s);
	static ::java::util::ResourceBundle* getBundle($String* bundleName);
	static $String* getString($String* s);
	static ::java::util::Map* bundles;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ResourcesMgr_h_
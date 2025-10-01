#ifndef _sun_util_resources_Bundles$2_h_
#define _sun_util_resources_Bundles$2_h_
//$ class sun.util.resources.Bundles$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Locale;
		class ServiceLoader;
	}
}
namespace sun {
	namespace util {
		namespace resources {
			class Bundles$CacheKey;
		}
	}
}

namespace sun {
	namespace util {
		namespace resources {

class Bundles$2 : public ::java::security::PrivilegedAction {
	$class(Bundles$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Bundles$2();
	void init$(::java::util::ServiceLoader* val$providers, $String* val$baseName, ::java::util::Locale* val$locale, ::sun::util::resources::Bundles$CacheKey* val$cacheKey);
	virtual $Object* run() override;
	::sun::util::resources::Bundles$CacheKey* val$cacheKey = nullptr;
	::java::util::Locale* val$locale = nullptr;
	$String* val$baseName = nullptr;
	::java::util::ServiceLoader* val$providers = nullptr;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_Bundles$2_h_
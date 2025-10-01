#ifndef _sun_util_resources_Bundles$CacheKeyReference_h_
#define _sun_util_resources_Bundles$CacheKeyReference_h_
//$ interface sun.util.resources.Bundles$CacheKeyReference
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class Bundles$CacheKeyReference : public ::java::lang::Object {
	$interface(Bundles$CacheKeyReference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::util::resources::Bundles$CacheKey* getCacheKey() {return nullptr;}
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_Bundles$CacheKeyReference_h_
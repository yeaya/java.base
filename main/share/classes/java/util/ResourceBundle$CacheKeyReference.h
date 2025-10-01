#ifndef _java_util_ResourceBundle$CacheKeyReference_h_
#define _java_util_ResourceBundle$CacheKeyReference_h_
//$ interface java.util.ResourceBundle$CacheKeyReference
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ResourceBundle$CacheKey;
	}
}

namespace java {
	namespace util {

class ResourceBundle$CacheKeyReference : public ::java::lang::Object {
	$interface(ResourceBundle$CacheKeyReference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::ResourceBundle$CacheKey* getCacheKey() {return nullptr;}
};

	} // util
} // java

#endif // _java_util_ResourceBundle$CacheKeyReference_h_
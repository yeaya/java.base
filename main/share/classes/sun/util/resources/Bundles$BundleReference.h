#ifndef _sun_util_resources_Bundles$BundleReference_h_
#define _sun_util_resources_Bundles$BundleReference_h_
//$ class sun.util.resources.Bundles$BundleReference
//$ extends java.lang.ref.SoftReference
//$ implements sun.util.resources.Bundles$CacheKeyReference

#include <java/lang/ref/SoftReference.h>
#include <sun/util/resources/Bundles$CacheKeyReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
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

class Bundles$BundleReference : public ::java::lang::ref::SoftReference, public ::sun::util::resources::Bundles$CacheKeyReference {
	$class(Bundles$BundleReference, $NO_CLASS_INIT, ::java::lang::ref::SoftReference, ::sun::util::resources::Bundles$CacheKeyReference)
public:
	Bundles$BundleReference();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::ResourceBundle* referent, ::java::lang::ref::ReferenceQueue* q, ::sun::util::resources::Bundles$CacheKey* key);
	virtual ::sun::util::resources::Bundles$CacheKey* getCacheKey() override;
	virtual $String* toString() override;
	::sun::util::resources::Bundles$CacheKey* cacheKey = nullptr;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_Bundles$BundleReference_h_
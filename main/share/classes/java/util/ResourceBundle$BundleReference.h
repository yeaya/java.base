#ifndef _java_util_ResourceBundle$BundleReference_h_
#define _java_util_ResourceBundle$BundleReference_h_
//$ class java.util.ResourceBundle$BundleReference
//$ extends java.lang.ref.SoftReference
//$ implements java.util.ResourceBundle$CacheKeyReference

#include <java/lang/ref/SoftReference.h>
#include <java/util/ResourceBundle$CacheKeyReference.h>

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
		class ResourceBundle$CacheKey;
	}
}

namespace java {
	namespace util {

class ResourceBundle$BundleReference : public ::java::lang::ref::SoftReference, public ::java::util::ResourceBundle$CacheKeyReference {
	$class(ResourceBundle$BundleReference, $NO_CLASS_INIT, ::java::lang::ref::SoftReference, ::java::util::ResourceBundle$CacheKeyReference)
public:
	ResourceBundle$BundleReference();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::ResourceBundle* referent, ::java::lang::ref::ReferenceQueue* q, ::java::util::ResourceBundle$CacheKey* key);
	virtual ::java::util::ResourceBundle$CacheKey* getCacheKey() override;
	virtual $String* toString() override;
	::java::util::ResourceBundle$CacheKey* cacheKey = nullptr;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$BundleReference_h_
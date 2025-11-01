#ifndef _java_util_ResourceBundle$KeyElementReference_h_
#define _java_util_ResourceBundle$KeyElementReference_h_
//$ class java.util.ResourceBundle$KeyElementReference
//$ extends java.lang.ref.WeakReference
//$ implements java.util.ResourceBundle$CacheKeyReference

#include <java/lang/ref/WeakReference.h>
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
		class ResourceBundle$CacheKey;
	}
}

namespace java {
	namespace util {

class ResourceBundle$KeyElementReference : public ::java::lang::ref::WeakReference, public ::java::util::ResourceBundle$CacheKeyReference {
	$class(ResourceBundle$KeyElementReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::java::util::ResourceBundle$CacheKeyReference)
public:
	ResourceBundle$KeyElementReference();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* referent, ::java::lang::ref::ReferenceQueue* q, ::java::util::ResourceBundle$CacheKey* key);
	virtual ::java::util::ResourceBundle$CacheKey* getCacheKey() override;
	virtual $String* toString() override;
	::java::util::ResourceBundle$CacheKey* cacheKey = nullptr;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$KeyElementReference_h_
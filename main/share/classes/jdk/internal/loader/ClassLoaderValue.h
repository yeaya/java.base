#ifndef _jdk_internal_loader_ClassLoaderValue_h_
#define _jdk_internal_loader_ClassLoaderValue_h_
//$ class jdk.internal.loader.ClassLoaderValue
//$ extends jdk.internal.loader.AbstractClassLoaderValue

#include <jdk/internal/loader/AbstractClassLoaderValue.h>

namespace jdk {
	namespace internal {
		namespace loader {

class $export ClassLoaderValue : public ::jdk::internal::loader::AbstractClassLoaderValue {
	$class(ClassLoaderValue, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::loader::AbstractClassLoaderValue)
public:
	ClassLoaderValue();
	void init$();
	virtual bool isEqualOrDescendantOf(::jdk::internal::loader::AbstractClassLoaderValue* clv) override;
	virtual ::jdk::internal::loader::ClassLoaderValue* key() override;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_ClassLoaderValue_h_
#ifndef _jdk_internal_loader_AbstractClassLoaderValue$Sub_h_
#define _jdk_internal_loader_AbstractClassLoaderValue$Sub_h_
//$ class jdk.internal.loader.AbstractClassLoaderValue$Sub
//$ extends jdk.internal.loader.AbstractClassLoaderValue

#include <jdk/internal/loader/AbstractClassLoaderValue.h>

namespace jdk {
	namespace internal {
		namespace loader {

class $import AbstractClassLoaderValue$Sub : public ::jdk::internal::loader::AbstractClassLoaderValue {
	$class(AbstractClassLoaderValue$Sub, $NO_CLASS_INIT, ::jdk::internal::loader::AbstractClassLoaderValue)
public:
	AbstractClassLoaderValue$Sub();
	void init$(::jdk::internal::loader::AbstractClassLoaderValue* this$0, Object$* key);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEqualOrDescendantOf(::jdk::internal::loader::AbstractClassLoaderValue* clv) override;
	virtual $Object* key() override;
	::jdk::internal::loader::AbstractClassLoaderValue* parent();
	::jdk::internal::loader::AbstractClassLoaderValue* this$0 = nullptr;
	$Object* key$ = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_AbstractClassLoaderValue$Sub_h_
#ifndef _jdk_internal_module_ServicesCatalog$ServiceProvider_h_
#define _jdk_internal_module_ServicesCatalog$ServiceProvider_h_
//$ class jdk.internal.module.ServicesCatalog$ServiceProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Module;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export ServicesCatalog$ServiceProvider : public ::java::lang::Object {
	$class(ServicesCatalog$ServiceProvider, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	ServicesCatalog$ServiceProvider();
	void init$(::java::lang::Module* module, $String* providerName);
	virtual bool equals(Object$* ob) override;
	virtual int32_t hashCode() override;
	::java::lang::Module* module();
	$String* providerName();
	::java::lang::Module* module$ = nullptr;
	$String* providerName$ = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ServicesCatalog$ServiceProvider_h_
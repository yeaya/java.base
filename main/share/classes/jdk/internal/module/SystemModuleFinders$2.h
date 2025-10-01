#ifndef _jdk_internal_module_SystemModuleFinders$2_h_
#define _jdk_internal_module_SystemModuleFinders$2_h_
//$ class jdk.internal.module.SystemModuleFinders$2
//$ extends java.util.function.Supplier

#include <java/util/function/Supplier.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$2 : public ::java::util::function::Supplier {
	$class(SystemModuleFinders$2, $NO_CLASS_INIT, ::java::util::function::Supplier)
public:
	SystemModuleFinders$2();
	void init$($String* val$mn, ::java::net::URI* val$uri);
	virtual $Object* get() override;
	::java::net::URI* val$uri = nullptr;
	$String* val$mn = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_SystemModuleFinders$2_h_
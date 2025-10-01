#ifndef _sun_invoke_WrapperInstance_h_
#define _sun_invoke_WrapperInstance_h_
//$ interface sun.invoke.WrapperInstance
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace sun {
	namespace invoke {

class $export WrapperInstance : public ::java::lang::Object {
	$interface(WrapperInstance, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::invoke::MethodHandle* getWrapperInstanceTarget() {return nullptr;}
	virtual $Class* getWrapperInstanceType() {return nullptr;}
};

	} // invoke
} // sun

#endif // _sun_invoke_WrapperInstance_h_
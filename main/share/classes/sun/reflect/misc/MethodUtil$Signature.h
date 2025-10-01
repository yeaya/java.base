#ifndef _sun_reflect_misc_MethodUtil$Signature_h_
#define _sun_reflect_misc_MethodUtil$Signature_h_
//$ class sun.reflect.misc.MethodUtil$Signature
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace misc {

class MethodUtil$Signature : public ::java::lang::Object {
	$class(MethodUtil$Signature, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodUtil$Signature();
	void init$(::java::lang::reflect::Method* m);
	virtual bool equals(Object$* o2) override;
	virtual int32_t hashCode() override;
	$String* methodName = nullptr;
	$ClassArray* argClasses = nullptr;
	int32_t hashCode$ = 0;
};

		} // misc
	} // reflect
} // sun

#endif // _sun_reflect_misc_MethodUtil$Signature_h_
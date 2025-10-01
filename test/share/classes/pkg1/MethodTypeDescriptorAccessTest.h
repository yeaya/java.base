#ifndef _pkg1_MethodTypeDescriptorAccessTest_h_
#define _pkg1_MethodTypeDescriptorAccessTest_h_
//$ class pkg1.MethodTypeDescriptorAccessTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace constant {
			class MethodTypeDesc;
		}
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace pkg1 {

class $export MethodTypeDescriptorAccessTest : public ::java::lang::Object {
	$class(MethodTypeDescriptorAccessTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodTypeDescriptorAccessTest();
	void init$();
	void checkInvalidAccess(::java::lang::constant::MethodTypeDesc* mtd, ::java::lang::invoke::MethodHandles$Lookup* lookup);
	void checkValidAccess(::java::lang::constant::MethodTypeDesc* mtd, ::java::lang::invoke::MethodHandles$Lookup* lookup);
	static void main($StringArray* args);
	virtual void test();
};

} // pkg1

#endif // _pkg1_MethodTypeDescriptorAccessTest_h_
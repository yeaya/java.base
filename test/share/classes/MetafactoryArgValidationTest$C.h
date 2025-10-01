#ifndef _MetafactoryArgValidationTest$C_h_
#define _MetafactoryArgValidationTest$C_h_
//$ class MetafactoryArgValidationTest$C
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
		}
	}
}

class $export MetafactoryArgValidationTest$C : public ::java::lang::Runnable {
	$class(MetafactoryArgValidationTest$C, 0, ::java::lang::Runnable)
public:
	MetafactoryArgValidationTest$C();
	void init$();
	static ::java::lang::invoke::MethodHandle* getFieldMH();
	static ::java::lang::invoke::MethodHandle* getStaticMH();
	virtual void im();
	static ::java::lang::invoke::MethodHandle* invokeInterfaceMH();
	static ::java::lang::invoke::MethodHandle* invokeSpecialMH();
	static ::java::lang::invoke::MethodHandle* invokeStaticMH();
	static ::java::lang::invoke::MethodHandle* invokeVirtualMH();
	static ::java::lang::invoke::MethodHandle* newInvokeSpecialMH();
	static ::java::lang::invoke::MethodHandle* putFieldMH();
	static ::java::lang::invoke::MethodHandle* putStaticMH();
	virtual void run() override;
	static void sm();
	static ::java::lang::invoke::MethodHandles$Lookup* lookup;
	static ::MetafactoryArgValidationTest$C* sv;
	::MetafactoryArgValidationTest$C* iv = nullptr;
};

#endif // _MetafactoryArgValidationTest$C_h_
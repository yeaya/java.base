#ifndef _PrivateInterfaceCall_h_
#define _PrivateInterfaceCall_h_
//$ class PrivateInterfaceCall
//$ extends java.lang.Object

#include <java/lang/Array.h>

class PrivateInterfaceCall$I2;
class PrivateInterfaceCall$I3;
class PrivateInterfaceCall$I4;
class PrivateInterfaceCall$Test;
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

class $export PrivateInterfaceCall : public ::java::lang::Object {
	$class(PrivateInterfaceCall, 0, ::java::lang::Object)
public:
	PrivateInterfaceCall();
	void init$();
	static void invokeDirect(::PrivateInterfaceCall$I2* i);
	static void invokeInterfaceMH(::PrivateInterfaceCall$I2* i);
	static void lambda$runNegativeTests$16();
	static void lambda$runNegativeTests$17();
	static void lambda$runNegativeTests$18();
	static void lambda$runNegativeTests$19();
	static void lambda$runNegativeTests$20();
	static void lambda$runNegativeTests$21();
	static void lambda$runNegativeTests$22();
	static void lambda$runNegativeTests$23();
	static void lambda$runNegativeTests$24();
	static void lambda$runNegativeTests$25();
	static void lambda$runNegativeTests$26();
	static void lambda$runNegativeTests$27();
	static void lambda$runPositiveTests$0();
	static void lambda$runPositiveTests$1();
	static void lambda$runPositiveTests$10();
	static void lambda$runPositiveTests$11();
	static void lambda$runPositiveTests$12();
	static void lambda$runPositiveTests$13();
	static void lambda$runPositiveTests$14();
	static void lambda$runPositiveTests$15();
	static void lambda$runPositiveTests$2();
	static void lambda$runPositiveTests$3();
	static void lambda$runPositiveTests$4();
	static void lambda$runPositiveTests$5();
	static void lambda$runPositiveTests$6();
	static void lambda$runPositiveTests$7();
	static void lambda$runPositiveTests$8();
	static void lambda$runPositiveTests$9();
	static void main($StringArray* args);
	static void runNegativeTests();
	static void runPositiveTests();
	static void shouldNotThrow(::PrivateInterfaceCall$Test* t);
	static void shouldThrow($Class* expectedError, $String* reason, ::PrivateInterfaceCall$Test* t);
	static void shouldThrowICCE(::PrivateInterfaceCall$Test* t);
	static ::PrivateInterfaceCall$I2* unsafeCastI2(Object$* obj);
	static ::PrivateInterfaceCall$I3* unsafeCastI3(Object$* obj);
	static ::PrivateInterfaceCall$I4* unsafeCastI4(Object$* obj);
	static void warmup();
	static ::java::lang::invoke::MethodHandle* mh_I2_priv_m_from_I2;
	static ::java::lang::invoke::MethodHandle* mh_I2_priv_m_from_I3;
	static ::java::lang::invoke::MethodHandle* mh_I2_priv_m_from_PIC;
	static ::java::lang::invoke::MethodHandle* mh_I2_toString_from_I2;
	static ::java::lang::invoke::MethodHandle* mh_I2_getClass_from_I2;
};

#endif // _PrivateInterfaceCall_h_
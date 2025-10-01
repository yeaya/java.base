#ifndef _SpecialInterfaceCall_SpecialInterfaceCall_h_
#define _SpecialInterfaceCall_SpecialInterfaceCall_h_
//$ class SpecialInterfaceCall.SpecialInterfaceCall
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace SpecialInterfaceCall {
	class SpecialInterfaceCall$I2;
	class SpecialInterfaceCall$I3;
	class SpecialInterfaceCall$I4;
	class SpecialInterfaceCall$Test;
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace SpecialInterfaceCall {

class $export SpecialInterfaceCall : public ::java::lang::Object {
	$class(SpecialInterfaceCall, 0, ::java::lang::Object)
public:
	SpecialInterfaceCall();
	void init$();
	static void lambda$runNegativeTests$11();
	static void lambda$runNegativeTests$12();
	static void lambda$runNegativeTests$13();
	static void lambda$runNegativeTests$14();
	static void lambda$runNegativeTests$15();
	static void lambda$runNegativeTests$16();
	static void lambda$runNegativeTests$17();
	static void lambda$runNegativeTests$18();
	static void lambda$runNegativeTests$19();
	static void lambda$runNegativeTests$20();
	static void lambda$runNegativeTests$21();
	static void lambda$runPositiveTests$0();
	static void lambda$runPositiveTests$1();
	static void lambda$runPositiveTests$10();
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
	static void shouldNotThrow(::SpecialInterfaceCall::SpecialInterfaceCall$Test* t);
	static void shouldThrow($Class* expectedError, $String* reason, ::SpecialInterfaceCall::SpecialInterfaceCall$Test* t);
	static void shouldThrowIAE(::SpecialInterfaceCall::SpecialInterfaceCall$Test* t);
	static void shouldThrowICCE(::SpecialInterfaceCall::SpecialInterfaceCall$Test* t);
	static ::SpecialInterfaceCall::SpecialInterfaceCall$I2* unsafeCastI2(Object$* obj);
	static ::SpecialInterfaceCall::SpecialInterfaceCall$I3* unsafeCastI3(Object$* obj);
	static ::SpecialInterfaceCall::SpecialInterfaceCall$I4* unsafeCastI4(Object$* obj);
	static void warmup();
	static ::java::lang::invoke::MethodHandle* mh_I2_priv_m_from_I2;
	static ::java::lang::invoke::MethodHandle* mh_I2_pub_m_from_I3;
	static ::java::lang::invoke::MethodHandle* mh_I1_toString_from_I2;
	static ::java::lang::invoke::MethodHandle* mh_I1_getClass_from_I2;
};

} // SpecialInterfaceCall

#endif // _SpecialInterfaceCall_SpecialInterfaceCall_h_
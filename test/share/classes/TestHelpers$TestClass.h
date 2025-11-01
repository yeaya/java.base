#ifndef _TestHelpers$TestClass_h_
#define _TestHelpers$TestClass_h_
//$ class TestHelpers$TestClass
//$ extends TestHelpers$TestSuperclass
//$ implements TestHelpers$TestInterface

#include <TestHelpers$TestInterface.h>
#include <TestHelpers$TestSuperclass.h>

#pragma push_macro("LOOKUP")
#undef LOOKUP

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

class TestHelpers$TestClass : public ::TestHelpers$TestSuperclass, public ::TestHelpers$TestInterface {
	$class(TestHelpers$TestClass, 0, ::TestHelpers$TestSuperclass, ::TestHelpers$TestInterface)
public:
	TestHelpers$TestClass();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t m(int32_t x) override;
	int32_t pm(int32_t x);
	static int32_t psm(int32_t x);
	static int32_t sm(int32_t x);
	virtual $String* toString() override;
	static ::java::lang::invoke::MethodHandles$Lookup* LOOKUP;
	static int32_t sf;
	int32_t f = 0;
};

#pragma pop_macro("LOOKUP")

#endif // _TestHelpers$TestClass_h_
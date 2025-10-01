#ifndef _Test7087570_h_
#define _Test7087570_h_
//$ class Test7087570
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TESTS")
#undef TESTS
#pragma push_macro("LOOKUP")
#undef LOOKUP

class Test7087570$TestMethodData;
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export Test7087570 : public ::java::lang::Object {
	$class(Test7087570, 0, ::java::lang::Object)
public:
	Test7087570();
	void init$();
	static void assertEquals(Object$* expect, Object$* observed);
	static void assertRefKindEquals(int32_t expect, int32_t observed);
	static ::Test7087570$TestMethodData* data($Class* clazz, $String* name, ::java::lang::invoke::MethodType* methodType, $Class* declaringClass, int32_t referenceKind);
	static void doTest(::java::lang::invoke::MethodHandle* mh, ::Test7087570$TestMethodData* testMethod);
	static ::java::lang::invoke::MethodType* getterMethodType($Class* clazz);
	static bool isInvokeSpecial(::java::lang::invoke::MethodHandle* mh);
	static ::java::lang::invoke::MethodHandle* lookupFrom(::Test7087570$TestMethodData* testMethod);
	static void main($StringArray* args);
	static void noteInvokeSpecial(::java::lang::invoke::MethodHandle* mh);
	static ::java::lang::invoke::MethodType* setterMethodType($Class* clazz);
	static void testWithLookup();
	static void testWithUnreflect();
	static ::java::lang::invoke::MethodHandle* unreflectFrom(::Test7087570$TestMethodData* testMethod);
	static bool $assertionsDisabled;
	static $Array<Test7087570$TestMethodData>* TESTS;
	static ::java::lang::invoke::MethodHandles$Lookup* LOOKUP;
	static ::java::util::List* specialMethodHandles;
};

#pragma pop_macro("TESTS")
#pragma pop_macro("LOOKUP")

#endif // _Test7087570_h_
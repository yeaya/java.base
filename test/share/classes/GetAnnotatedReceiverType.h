#ifndef _GetAnnotatedReceiverType_h_
#define _GetAnnotatedReceiverType_h_
//$ class GetAnnotatedReceiverType
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EXPECTED_TEST_CASES")
#undef EXPECTED_TEST_CASES

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedType;
			class Executable;
		}
	}
}

class $export GetAnnotatedReceiverType : public ::java::lang::Object {
	$class(GetAnnotatedReceiverType, 0, ::java::lang::Object)
public:
	GetAnnotatedReceiverType();
	void init$();
	static void checkAnnotatedReceiverType(::java::lang::reflect::Executable* e, bool shouldBeParameterized, $String* msg);
	static void checkEmptyAT(::java::lang::reflect::Executable* e, $String* msg);
	static void checkNull(::java::lang::reflect::Executable* e, $String* msg);
	static void main($StringArray* args);
	virtual void method();
	virtual void method0();
	static void method4();
	static void recursiveCheckAnnotatedOwnerTypes(::java::lang::reflect::AnnotatedType* t);
	static int32_t failures;
	static int32_t tests;
	static const int32_t EXPECTED_TEST_CASES = 25;
};

#pragma pop_macro("EXPECTED_TEST_CASES")

#endif // _GetAnnotatedReceiverType_h_
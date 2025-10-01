#ifndef _TestGenericReturnTypeToString_h_
#define _TestGenericReturnTypeToString_h_
//$ class TestGenericReturnTypeToString
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TestGenericReturnTypeToString$FirstInnerClass$Interface;
class TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric;
class TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass;
class TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric;
class TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass;
class TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric;
namespace java {
	namespace util {
		class List;
	}
}

class $export TestGenericReturnTypeToString : public ::java::lang::Object {
	$class(TestGenericReturnTypeToString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestGenericReturnTypeToString();
	void init$();
	virtual ::TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClassGeneric* foo1();
	virtual ::TestGenericReturnTypeToString$FirstInnerClassGeneric$SecondInnerClass* foo2();
	virtual ::TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClassGeneric* foo3();
	virtual ::TestGenericReturnTypeToString$FirstInnerClass$SecondInnerClass* foo4();
	virtual ::java::util::List* foo5();
	virtual ::TestGenericReturnTypeToString$FirstInnerClass$Interface* foo6();
	virtual ::TestGenericReturnTypeToString$FirstInnerClass$InterfaceGeneric* foo7();
	static void main($StringArray* args);
};

#endif // _TestGenericReturnTypeToString_h_
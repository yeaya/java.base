#ifndef _Test7087570$TestMethodData_h_
#define _Test7087570$TestMethodData_h_
//$ class Test7087570$TestMethodData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}

class Test7087570$TestMethodData : public ::java::lang::Object {
	$class(Test7087570$TestMethodData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test7087570$TestMethodData();
	void init$($Class* clazz, $String* name, ::java::lang::invoke::MethodType* methodType, $Class* declaringClass, int32_t referenceKind);
	$Class* clazz = nullptr;
	$String* name = nullptr;
	::java::lang::invoke::MethodType* methodType = nullptr;
	$Class* declaringClass = nullptr;
	int32_t referenceKind = 0;
};

#endif // _Test7087570$TestMethodData_h_
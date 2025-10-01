#ifndef _java_lang_invoke_MethodHandleImpl$ArrayAccessor$1_h_
#define _java_lang_invoke_MethodHandleImpl$ArrayAccessor$1_h_
//$ class java.lang.invoke.MethodHandleImpl$ArrayAccessor$1
//$ extends java.lang.ClassValue

#include <java/lang/ClassValue.h>

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$ArrayAccessor$1 : public ::java::lang::ClassValue {
	$class(MethodHandleImpl$ArrayAccessor$1, $NO_CLASS_INIT, ::java::lang::ClassValue)
public:
	MethodHandleImpl$ArrayAccessor$1();
	void init$();
	virtual $Object* computeValue($Class* type) override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$ArrayAccessor$1_h_
#ifndef _java_lang_invoke_LambdaForm$Name_h_
#define _java_lang_invoke_LambdaForm$Name_h_
//$ class java.lang.invoke.LambdaForm$Name
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm$BasicType;
			class LambdaForm$NamedFunction;
			class MemberName;
			class MethodHandle;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaForm$Name : public ::java::lang::Object {
	$class(LambdaForm$Name, 0, ::java::lang::Object)
public:
	LambdaForm$Name();
	void init$(int32_t index, ::java::lang::invoke::LambdaForm$BasicType* type, ::java::lang::invoke::LambdaForm$NamedFunction* function, $ObjectArray* arguments);
	void init$(::java::lang::invoke::LambdaForm$Name* that, Object$* constraint);
	void init$(::java::lang::invoke::MethodHandle* function, $ObjectArray* arguments);
	void init$(::java::lang::invoke::MethodType* functionType, $ObjectArray* arguments);
	void init$(::java::lang::invoke::MemberName* function, $ObjectArray* arguments);
	void init$(::java::lang::invoke::LambdaForm$NamedFunction* function, $ObjectArray* arguments);
	void init$(int32_t index, ::java::lang::invoke::LambdaForm$BasicType* type);
	void init$(::java::lang::invoke::LambdaForm$BasicType* type);
	::java::lang::invoke::LambdaForm$Name* cloneWithIndex(int32_t i);
	$String* debugString();
	bool equals(::java::lang::invoke::LambdaForm$Name* that);
	virtual bool equals(Object$* x) override;
	$String* exprString();
	virtual int32_t hashCode() override;
	int32_t index();
	bool initIndex(int32_t i);
	void internArguments();
	bool isConstantZero();
	bool isInvokeBasic();
	bool isLinkerMethodInvoke();
	bool isParam();
	int32_t lastUseIndex(::java::lang::invoke::LambdaForm$Name* n);
	::java::lang::invoke::LambdaForm$Name* newIndex(int32_t i);
	$String* paramString();
	bool refersTo($Class* declaringClass, $String* methodName);
	::java::lang::invoke::LambdaForm$Name* replaceName(::java::lang::invoke::LambdaForm$Name* oldName, ::java::lang::invoke::LambdaForm$Name* newName);
	::java::lang::invoke::LambdaForm$Name* replaceNames($Array<::java::lang::invoke::LambdaForm$Name>* oldNames, $Array<::java::lang::invoke::LambdaForm$Name>* newNames, int32_t start, int32_t end);
	virtual $String* toString() override;
	::java::lang::invoke::LambdaForm$BasicType* type();
	char16_t typeChar();
	bool typesMatch(::java::lang::invoke::LambdaForm$NamedFunction* function, $ObjectArray* arguments);
	static bool typesMatch(::java::lang::invoke::LambdaForm$BasicType* parameterType, Object$* object);
	int32_t useCount(::java::lang::invoke::LambdaForm$Name* n);
	::java::lang::invoke::LambdaForm$Name* withConstraint(Object$* constraint);
	static bool $assertionsDisabled;
	::java::lang::invoke::LambdaForm$BasicType* type$ = nullptr;
	int16_t index$ = 0;
	::java::lang::invoke::LambdaForm$NamedFunction* function = nullptr;
	$Object* constraint = nullptr;
	$ObjectArray* arguments = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_LambdaForm$Name_h_
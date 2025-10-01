#ifndef _java_lang_invoke_AbstractValidatingLambdaMetafactory_h_
#define _java_lang_invoke_AbstractValidatingLambdaMetafactory_h_
//$ class java.lang.invoke.AbstractValidatingLambdaMetafactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandle;
			class MethodHandleInfo;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class AbstractValidatingLambdaMetafactory : public ::java::lang::Object {
	$class(AbstractValidatingLambdaMetafactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractValidatingLambdaMetafactory();
	void init$(::java::lang::invoke::MethodHandles$Lookup* caller, ::java::lang::invoke::MethodType* factoryType, $String* interfaceMethodName, ::java::lang::invoke::MethodType* interfaceMethodType, ::java::lang::invoke::MethodHandle* implementation, ::java::lang::invoke::MethodType* dynamicMethodType, bool isSerializable, $ClassArray* altInterfaces, $Array<::java::lang::invoke::MethodType>* altMethods);
	virtual ::java::lang::invoke::CallSite* buildCallSite() {return nullptr;}
	void checkDescriptor(::java::lang::invoke::MethodType* descriptor);
	bool isAdaptableTo($Class* fromType, $Class* toType, bool strict);
	bool isAdaptableToAsReturn($Class* fromType, $Class* toType);
	bool isAdaptableToAsReturnStrict($Class* fromType, $Class* toType);
	virtual void validateMetafactoryArgs();
	::java::lang::invoke::MethodHandles$Lookup* caller = nullptr;
	$Class* targetClass = nullptr;
	::java::lang::invoke::MethodType* factoryType = nullptr;
	$Class* interfaceClass = nullptr;
	$String* interfaceMethodName = nullptr;
	::java::lang::invoke::MethodType* interfaceMethodType = nullptr;
	::java::lang::invoke::MethodHandle* implementation = nullptr;
	::java::lang::invoke::MethodType* implMethodType = nullptr;
	::java::lang::invoke::MethodHandleInfo* implInfo = nullptr;
	int32_t implKind = 0;
	bool implIsInstanceMethod = false;
	$Class* implClass = nullptr;
	::java::lang::invoke::MethodType* dynamicMethodType = nullptr;
	bool isSerializable = false;
	$ClassArray* altInterfaces = nullptr;
	$Array<::java::lang::invoke::MethodType>* altMethods = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_AbstractValidatingLambdaMetafactory_h_
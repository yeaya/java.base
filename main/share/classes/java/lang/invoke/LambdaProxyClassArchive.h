#ifndef _java_lang_invoke_LambdaProxyClassArchive_h_
#define _java_lang_invoke_LambdaProxyClassArchive_h_
//$ class java.lang.invoke.LambdaProxyClassArchive
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MemberName;
			class MethodHandle;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaProxyClassArchive : public ::java::lang::Object {
	$class(LambdaProxyClassArchive, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaProxyClassArchive();
	void init$();
	static void addToArchive($Class* caller, $String* interfaceMethodName, ::java::lang::invoke::MethodType* factoryType, ::java::lang::invoke::MethodType* interfaceMethodType, ::java::lang::invoke::MemberName* implementationMember, ::java::lang::invoke::MethodType* dynamicMethodType, $Class* lambdaProxyClass);
	static $Class* find($Class* caller, $String* interfaceMethodName, ::java::lang::invoke::MethodType* factoryType, ::java::lang::invoke::MethodType* interfaceMethodType, ::java::lang::invoke::MethodHandle* implementation, ::java::lang::invoke::MethodType* dynamicMethodType, bool isSerializable, $ClassArray* altInterfaces, $Array<::java::lang::invoke::MethodType>* altMethods);
	static $Class* findFromArchive($Class* caller, $String* interfaceMethodName, ::java::lang::invoke::MethodType* factoryType, ::java::lang::invoke::MethodType* interfaceMethodType, ::java::lang::invoke::MemberName* implementationMember, ::java::lang::invoke::MethodType* dynamicMethodType);
	static bool loadedByBuiltinLoader($Class* cls);
	static bool register$($Class* caller, $String* interfaceMethodName, ::java::lang::invoke::MethodType* factoryType, ::java::lang::invoke::MethodType* interfaceMethodType, ::java::lang::invoke::MethodHandle* implementation, ::java::lang::invoke::MethodType* dynamicMethodType, bool isSerializable, $ClassArray* altInterfaces, $Array<::java::lang::invoke::MethodType>* altMethods, $Class* lambdaProxyClass);
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_LambdaProxyClassArchive_h_
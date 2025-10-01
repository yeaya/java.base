#ifndef _java_lang_invoke_SerializedLambda_h_
#define _java_lang_invoke_SerializedLambda_h_
//$ class java.lang.invoke.SerializedLambda
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {

class $export SerializedLambda : public ::java::io::Serializable {
	$class(SerializedLambda, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	SerializedLambda();
	void init$($Class* capturingClass, $String* functionalInterfaceClass, $String* functionalInterfaceMethodName, $String* functionalInterfaceMethodSignature, int32_t implMethodKind, $String* implClass, $String* implMethodName, $String* implMethodSignature, $String* instantiatedMethodType, $ObjectArray* capturedArgs);
	$Object* getCapturedArg(int32_t i);
	int32_t getCapturedArgCount();
	$String* getCapturingClass();
	$String* getFunctionalInterfaceClass();
	$String* getFunctionalInterfaceMethodName();
	$String* getFunctionalInterfaceMethodSignature();
	$String* getImplClass();
	int32_t getImplMethodKind();
	$String* getImplMethodName();
	$String* getImplMethodSignature();
	$String* getInstantiatedMethodType();
	$Object* readResolve();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6F61D0942C293685;
	$Class* capturingClass = nullptr;
	$String* functionalInterfaceClass = nullptr;
	$String* functionalInterfaceMethodName = nullptr;
	$String* functionalInterfaceMethodSignature = nullptr;
	$String* implClass = nullptr;
	$String* implMethodName = nullptr;
	$String* implMethodSignature = nullptr;
	int32_t implMethodKind = 0;
	$String* instantiatedMethodType = nullptr;
	$ObjectArray* capturedArgs = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_SerializedLambda_h_
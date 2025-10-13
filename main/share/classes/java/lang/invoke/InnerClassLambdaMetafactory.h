#ifndef _java_lang_invoke_InnerClassLambdaMetafactory_h_
#define _java_lang_invoke_InnerClassLambdaMetafactory_h_
//$ class java.lang.invoke.InnerClassLambdaMetafactory
//$ extends java.lang.invoke.AbstractValidatingLambdaMetafactory

#include <java/lang/Array.h>
#include <java/lang/invoke/AbstractValidatingLambdaMetafactory.h>

#pragma push_macro("CLASSFILE_VERSION")
#undef CLASSFILE_VERSION
#pragma push_macro("DESCR_CLASS")
#undef DESCR_CLASS
#pragma push_macro("DESCR_CTOR_NOT_SERIALIZABLE_EXCEPTION")
#undef DESCR_CTOR_NOT_SERIALIZABLE_EXCEPTION
#pragma push_macro("DESCR_CTOR_SERIALIZED_LAMBDA")
#undef DESCR_CTOR_SERIALIZED_LAMBDA
#pragma push_macro("DESCR_METHOD_READ_OBJECT")
#undef DESCR_METHOD_READ_OBJECT
#pragma push_macro("DESCR_METHOD_WRITE_OBJECT")
#undef DESCR_METHOD_WRITE_OBJECT
#pragma push_macro("DESCR_METHOD_WRITE_REPLACE")
#undef DESCR_METHOD_WRITE_REPLACE
#pragma push_macro("DESCR_OBJECT")
#undef DESCR_OBJECT
#pragma push_macro("DESCR_STRING")
#undef DESCR_STRING
#pragma push_macro("EMPTY_STRING_ARRAY")
#undef EMPTY_STRING_ARRAY
#pragma push_macro("JAVA_LANG_OBJECT")
#undef JAVA_LANG_OBJECT
#pragma push_macro("LAMBDA_INSTANCE_FIELD")
#undef LAMBDA_INSTANCE_FIELD
#pragma push_macro("METHOD_DESCRIPTOR_VOID")
#undef METHOD_DESCRIPTOR_VOID
#pragma push_macro("NAME_CTOR")
#undef NAME_CTOR
#pragma push_macro("NAME_METHOD_READ_OBJECT")
#undef NAME_METHOD_READ_OBJECT
#pragma push_macro("NAME_METHOD_WRITE_OBJECT")
#undef NAME_METHOD_WRITE_OBJECT
#pragma push_macro("NAME_METHOD_WRITE_REPLACE")
#undef NAME_METHOD_WRITE_REPLACE
#pragma push_macro("NAME_NOT_SERIALIZABLE_EXCEPTION")
#undef NAME_NOT_SERIALIZABLE_EXCEPTION
#pragma push_macro("NAME_SERIALIZED_LAMBDA")
#undef NAME_SERIALIZED_LAMBDA
#pragma push_macro("SER_HOSTILE_EXCEPTIONS")
#undef SER_HOSTILE_EXCEPTIONS

namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandle;
			class MethodHandles$Lookup;
			class MethodType;
			class ProxyClassesDumper;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ClassWriter;
					class ConstantDynamic;
				}
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class InnerClassLambdaMetafactory : public ::java::lang::invoke::AbstractValidatingLambdaMetafactory {
	$class(InnerClassLambdaMetafactory, 0, ::java::lang::invoke::AbstractValidatingLambdaMetafactory)
public:
	InnerClassLambdaMetafactory();
	void init$(::java::lang::invoke::MethodHandles$Lookup* caller, ::java::lang::invoke::MethodType* factoryType, $String* interfaceMethodName, ::java::lang::invoke::MethodType* interfaceMethodType, ::java::lang::invoke::MethodHandle* implementation, ::java::lang::invoke::MethodType* dynamicMethodType, bool isSerializable, $ClassArray* altInterfaces, $Array<::java::lang::invoke::MethodType>* altMethods);
	virtual ::java::lang::invoke::CallSite* buildCallSite() override;
	void generateClassInitializer();
	void generateConstructor();
	$Class* generateInnerClass();
	void generateSerializationFriendlyMethods();
	void generateSerializationHostileMethods();
	static int32_t getLoadOpcode($Class* c);
	static int32_t getOpcodeOffset($Class* c);
	static int32_t getParameterSize($Class* c);
	static int32_t getReturnOpcode($Class* c);
	static $String* lambdaClassName($Class* targetClass);
	$Class* spinInnerClass();
	static bool $assertionsDisabled;
	static const int32_t CLASSFILE_VERSION = 59;
	static $String* METHOD_DESCRIPTOR_VOID;
	static $String* JAVA_LANG_OBJECT;
	static $String* NAME_CTOR;
	static $String* LAMBDA_INSTANCE_FIELD;
	static $String* NAME_SERIALIZED_LAMBDA;
	static $String* NAME_NOT_SERIALIZABLE_EXCEPTION;
	static $String* DESCR_METHOD_WRITE_REPLACE;
	static $String* DESCR_METHOD_WRITE_OBJECT;
	static $String* DESCR_METHOD_READ_OBJECT;
	static $String* NAME_METHOD_WRITE_REPLACE;
	static $String* NAME_METHOD_READ_OBJECT;
	static $String* NAME_METHOD_WRITE_OBJECT;
	static $String* DESCR_CLASS;
	static $String* DESCR_STRING;
	static $String* DESCR_OBJECT;
	static $String* DESCR_CTOR_SERIALIZED_LAMBDA;
	static $String* DESCR_CTOR_NOT_SERIALIZABLE_EXCEPTION;
	static $StringArray* SER_HOSTILE_EXCEPTIONS;
	static $StringArray* EMPTY_STRING_ARRAY;
	static ::java::util::concurrent::atomic::AtomicInteger* counter;
	static ::java::lang::invoke::ProxyClassesDumper* dumper;
	static bool disableEagerInitialization;
	static ::jdk::internal::org::objectweb::asm$::ConstantDynamic* implMethodCondy;
	$String* implMethodClassName = nullptr;
	$String* implMethodName = nullptr;
	$String* implMethodDesc = nullptr;
	::java::lang::invoke::MethodType* constructorType = nullptr;
	::jdk::internal::org::objectweb::asm$::ClassWriter* cw = nullptr;
	$StringArray* argNames = nullptr;
	$StringArray* argDescs = nullptr;
	$String* lambdaClassName$ = nullptr;
	bool useImplMethodHandle = false;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("CLASSFILE_VERSION")
#pragma pop_macro("DESCR_CLASS")
#pragma pop_macro("DESCR_CTOR_NOT_SERIALIZABLE_EXCEPTION")
#pragma pop_macro("DESCR_CTOR_SERIALIZED_LAMBDA")
#pragma pop_macro("DESCR_METHOD_READ_OBJECT")
#pragma pop_macro("DESCR_METHOD_WRITE_OBJECT")
#pragma pop_macro("DESCR_METHOD_WRITE_REPLACE")
#pragma pop_macro("DESCR_OBJECT")
#pragma pop_macro("DESCR_STRING")
#pragma pop_macro("EMPTY_STRING_ARRAY")
#pragma pop_macro("JAVA_LANG_OBJECT")
#pragma pop_macro("LAMBDA_INSTANCE_FIELD")
#pragma pop_macro("METHOD_DESCRIPTOR_VOID")
#pragma pop_macro("NAME_CTOR")
#pragma pop_macro("NAME_METHOD_READ_OBJECT")
#pragma pop_macro("NAME_METHOD_WRITE_OBJECT")
#pragma pop_macro("NAME_METHOD_WRITE_REPLACE")
#pragma pop_macro("NAME_NOT_SERIALIZABLE_EXCEPTION")
#pragma pop_macro("NAME_SERIALIZED_LAMBDA")
#pragma pop_macro("SER_HOSTILE_EXCEPTIONS")

#endif // _java_lang_invoke_InnerClassLambdaMetafactory_h_
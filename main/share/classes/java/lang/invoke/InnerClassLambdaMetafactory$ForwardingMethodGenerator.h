#ifndef _java_lang_invoke_InnerClassLambdaMetafactory$ForwardingMethodGenerator_h_
#define _java_lang_invoke_InnerClassLambdaMetafactory$ForwardingMethodGenerator_h_
//$ class java.lang.invoke.InnerClassLambdaMetafactory$ForwardingMethodGenerator
//$ extends java.lang.invoke.TypeConvertingMethodAdapter

#include <java/lang/invoke/TypeConvertingMethodAdapter.h>

namespace java {
	namespace lang {
		namespace invoke {
			class InnerClassLambdaMetafactory;
			class MethodType;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class MethodVisitor;
				}
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class InnerClassLambdaMetafactory$ForwardingMethodGenerator : public ::java::lang::invoke::TypeConvertingMethodAdapter {
	$class(InnerClassLambdaMetafactory$ForwardingMethodGenerator, $NO_CLASS_INIT, ::java::lang::invoke::TypeConvertingMethodAdapter)
public:
	InnerClassLambdaMetafactory$ForwardingMethodGenerator();
	void init$(::java::lang::invoke::InnerClassLambdaMetafactory* this$0, ::jdk::internal::org::objectweb::asm$::MethodVisitor* mv);
	void convertArgumentTypes(::java::lang::invoke::MethodType* samType);
	virtual void generate(::java::lang::invoke::MethodType* methodType);
	int32_t invocationOpcode();
	::java::lang::invoke::InnerClassLambdaMetafactory* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_InnerClassLambdaMetafactory$ForwardingMethodGenerator_h_
#ifndef _java_lang_reflect_ProxyGenerator$ProxyMethod_h_
#define _java_lang_reflect_ProxyGenerator$ProxyMethod_h_
//$ class java.lang.reflect.ProxyGenerator$ProxyMethod
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ClassWriter;
					class MethodVisitor;
				}
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class ProxyGenerator$ProxyMethod : public ::java::lang::Object {
	$class(ProxyGenerator$ProxyMethod, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProxyGenerator$ProxyMethod();
	void init$(::java::lang::reflect::Method* method, $String* sig, $ClassArray* parameterTypes, $Class* returnType, $ClassArray* exceptionTypes, $Class* fromClass, $String* methodFieldName);
	void init$(::java::lang::reflect::Method* method, $String* methodFieldName);
	void codeClassForName(::jdk::internal::org::objectweb::asm$::MethodVisitor* mv, $Class* cl);
	void codeFieldInitialization(::jdk::internal::org::objectweb::asm$::MethodVisitor* mv, $String* className);
	void codeUnwrapReturnValue(::jdk::internal::org::objectweb::asm$::MethodVisitor* mv, $Class* type);
	void codeWrapArgument(::jdk::internal::org::objectweb::asm$::MethodVisitor* mv, $Class* type, int32_t slot);
	void emitIconstInsn(::jdk::internal::org::objectweb::asm$::MethodVisitor* mv, int32_t cst);
	void generateMethod(::jdk::internal::org::objectweb::asm$::ClassWriter* cw, $String* className);
	virtual $String* toString() override;
	::java::lang::reflect::Method* method = nullptr;
	$String* shortSignature = nullptr;
	$Class* fromClass = nullptr;
	$ClassArray* parameterTypes = nullptr;
	$Class* returnType = nullptr;
	$String* methodFieldName = nullptr;
	$ClassArray* exceptionTypes = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_ProxyGenerator$ProxyMethod_h_
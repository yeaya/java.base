#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef ASM4
#undef ASM5
#undef ASM6
#undef ASM7
#undef ASM8
#undef ASM9_EXPERIMENTAL
#undef EXTENDS
#undef INSTANCEOF
#undef SUPER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace signature {

$FieldInfo _SignatureVisitor_FieldInfo_[] = {
	{"EXTENDS", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SignatureVisitor, EXTENDS)},
	{"SUPER", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SignatureVisitor, SUPER)},
	{"INSTANCEOF", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SignatureVisitor, INSTANCEOF)},
	{"api", "I", nullptr, $PROTECTED | $FINAL, $field(SignatureVisitor, api)},
	{}
};

$MethodInfo _SignatureVisitor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureVisitor::*)(int32_t)>(&SignatureVisitor::init$))},
	{"visitArrayType", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitBaseType", "(C)V", nullptr, $PUBLIC},
	{"visitClassBound", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitClassType", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitExceptionType", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitFormalTypeParameter", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitInnerClassType", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitInterface", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitInterfaceBound", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitParameterType", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitReturnType", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitSuperclass", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitTypeArgument", "()V", nullptr, $PUBLIC},
	{"visitTypeArgument", "(C)Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC},
	{"visitTypeVariable", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SignatureVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.signature.SignatureVisitor",
	"java.lang.Object",
	nullptr,
	_SignatureVisitor_FieldInfo_,
	_SignatureVisitor_MethodInfo_
};

$Object* allocate$SignatureVisitor($Class* clazz) {
	return $of($alloc(SignatureVisitor));
}

void SignatureVisitor::init$(int32_t api) {
	if (api != $Opcodes::ASM8 && api != $Opcodes::ASM7 && api != $Opcodes::ASM6 && api != $Opcodes::ASM5 && api != $Opcodes::ASM4 && api != $Opcodes::ASM9_EXPERIMENTAL) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported api "_s, $$str(api)}));
	}
	this->api = api;
}

void SignatureVisitor::visitFormalTypeParameter($String* name) {
}

SignatureVisitor* SignatureVisitor::visitClassBound() {
	return this;
}

SignatureVisitor* SignatureVisitor::visitInterfaceBound() {
	return this;
}

SignatureVisitor* SignatureVisitor::visitSuperclass() {
	return this;
}

SignatureVisitor* SignatureVisitor::visitInterface() {
	return this;
}

SignatureVisitor* SignatureVisitor::visitParameterType() {
	return this;
}

SignatureVisitor* SignatureVisitor::visitReturnType() {
	return this;
}

SignatureVisitor* SignatureVisitor::visitExceptionType() {
	return this;
}

void SignatureVisitor::visitBaseType(char16_t descriptor) {
}

void SignatureVisitor::visitTypeVariable($String* name) {
}

SignatureVisitor* SignatureVisitor::visitArrayType() {
	return this;
}

void SignatureVisitor::visitClassType($String* name) {
}

void SignatureVisitor::visitInnerClassType($String* name) {
}

void SignatureVisitor::visitTypeArgument() {
}

SignatureVisitor* SignatureVisitor::visitTypeArgument(char16_t wildcard) {
	return this;
}

void SignatureVisitor::visitEnd() {
}

SignatureVisitor::SignatureVisitor() {
}

$Class* SignatureVisitor::load$($String* name, bool initialize) {
	$loadClass(SignatureVisitor, name, initialize, &_SignatureVisitor_ClassInfo_, allocate$SignatureVisitor);
	return class$;
}

$Class* SignatureVisitor::class$ = nullptr;

					} // signature
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
#include <jdk/internal/org/objectweb/asm/signature/SignatureWriter.h>

#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $SignatureVisitor = ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace signature {

$FieldInfo _SignatureWriter_FieldInfo_[] = {
	{"stringBuilder", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(SignatureWriter, stringBuilder)},
	{"hasFormals", "Z", nullptr, $PRIVATE, $field(SignatureWriter, hasFormals)},
	{"hasParameters", "Z", nullptr, $PRIVATE, $field(SignatureWriter, hasParameters)},
	{"argumentStack", "I", nullptr, $PRIVATE, $field(SignatureWriter, argumentStack)},
	{}
};

$MethodInfo _SignatureWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureWriter::*)()>(&SignatureWriter::init$))},
	{"endArguments", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureWriter::*)()>(&SignatureWriter::endArguments))},
	{"endFormals", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureWriter::*)()>(&SignatureWriter::endFormals))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
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

$ClassInfo _SignatureWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.signature.SignatureWriter",
	"jdk.internal.org.objectweb.asm.signature.SignatureVisitor",
	nullptr,
	_SignatureWriter_FieldInfo_,
	_SignatureWriter_MethodInfo_
};

$Object* allocate$SignatureWriter($Class* clazz) {
	return $of($alloc(SignatureWriter));
}

void SignatureWriter::init$() {
	$SignatureVisitor::init$($Opcodes::ASM8);
	$set(this, stringBuilder, $new($StringBuilder));
}

void SignatureWriter::visitFormalTypeParameter($String* name) {
	if (!this->hasFormals) {
		this->hasFormals = true;
		$nc(this->stringBuilder)->append(u'<');
	}
	$nc(this->stringBuilder)->append(name);
	$nc(this->stringBuilder)->append(u':');
}

$SignatureVisitor* SignatureWriter::visitClassBound() {
	return this;
}

$SignatureVisitor* SignatureWriter::visitInterfaceBound() {
	$nc(this->stringBuilder)->append(u':');
	return this;
}

$SignatureVisitor* SignatureWriter::visitSuperclass() {
	endFormals();
	return this;
}

$SignatureVisitor* SignatureWriter::visitInterface() {
	return this;
}

$SignatureVisitor* SignatureWriter::visitParameterType() {
	endFormals();
	if (!this->hasParameters) {
		this->hasParameters = true;
		$nc(this->stringBuilder)->append(u'(');
	}
	return this;
}

$SignatureVisitor* SignatureWriter::visitReturnType() {
	endFormals();
	if (!this->hasParameters) {
		$nc(this->stringBuilder)->append(u'(');
	}
	$nc(this->stringBuilder)->append(u')');
	return this;
}

$SignatureVisitor* SignatureWriter::visitExceptionType() {
	$nc(this->stringBuilder)->append(u'^');
	return this;
}

void SignatureWriter::visitBaseType(char16_t descriptor) {
	$nc(this->stringBuilder)->append(descriptor);
}

void SignatureWriter::visitTypeVariable($String* name) {
	$nc(this->stringBuilder)->append(u'T');
	$nc(this->stringBuilder)->append(name);
	$nc(this->stringBuilder)->append(u';');
}

$SignatureVisitor* SignatureWriter::visitArrayType() {
	$nc(this->stringBuilder)->append(u'[');
	return this;
}

void SignatureWriter::visitClassType($String* name) {
	$nc(this->stringBuilder)->append(u'L');
	$nc(this->stringBuilder)->append(name);
	this->argumentStack *= 2;
}

void SignatureWriter::visitInnerClassType($String* name) {
	endArguments();
	$nc(this->stringBuilder)->append(u'.');
	$nc(this->stringBuilder)->append(name);
	this->argumentStack *= 2;
}

void SignatureWriter::visitTypeArgument() {
	if (this->argumentStack % 2 == 0) {
		this->argumentStack |= 1;
		$nc(this->stringBuilder)->append(u'<');
	}
	$nc(this->stringBuilder)->append(u'*');
}

$SignatureVisitor* SignatureWriter::visitTypeArgument(char16_t wildcard) {
	if (this->argumentStack % 2 == 0) {
		this->argumentStack |= 1;
		$nc(this->stringBuilder)->append(u'<');
	}
	if (wildcard != u'=') {
		$nc(this->stringBuilder)->append(wildcard);
	}
	return this;
}

void SignatureWriter::visitEnd() {
	endArguments();
	$nc(this->stringBuilder)->append(u';');
}

$String* SignatureWriter::toString() {
	return $nc(this->stringBuilder)->toString();
}

void SignatureWriter::endFormals() {
	if (this->hasFormals) {
		this->hasFormals = false;
		$nc(this->stringBuilder)->append(u'>');
	}
}

void SignatureWriter::endArguments() {
	if (this->argumentStack % 2 == 1) {
		$nc(this->stringBuilder)->append(u'>');
	}
	this->argumentStack /= 2;
}

SignatureWriter::SignatureWriter() {
}

$Class* SignatureWriter::load$($String* name, bool initialize) {
	$loadClass(SignatureWriter, name, initialize, &_SignatureWriter_ClassInfo_, allocate$SignatureWriter);
	return class$;
}

$Class* SignatureWriter::class$ = nullptr;

					} // signature
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
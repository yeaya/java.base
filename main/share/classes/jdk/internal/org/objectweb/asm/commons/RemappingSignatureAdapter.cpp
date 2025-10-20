#include <jdk/internal/org/objectweb/asm/commons/RemappingSignatureAdapter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>
#include <jcpp.h>

#undef ASM6

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;
using $SignatureVisitor = ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {
$CompoundAttribute _RemappingSignatureAdapter_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _RemappingSignatureAdapter_FieldInfo_[] = {
	{"signatureVisitor", "Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PRIVATE | $FINAL, $field(RemappingSignatureAdapter, signatureVisitor)},
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PRIVATE | $FINAL, $field(RemappingSignatureAdapter, remapper)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RemappingSignatureAdapter, className)},
	{}
};

$MethodInfo _RemappingSignatureAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(static_cast<void(RemappingSignatureAdapter::*)($SignatureVisitor*,$Remapper*)>(&RemappingSignatureAdapter::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/signature/SignatureVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(static_cast<void(RemappingSignatureAdapter::*)(int32_t,$SignatureVisitor*,$Remapper*)>(&RemappingSignatureAdapter::init$))},
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

$ClassInfo _RemappingSignatureAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.RemappingSignatureAdapter",
	"jdk.internal.org.objectweb.asm.signature.SignatureVisitor",
	nullptr,
	_RemappingSignatureAdapter_FieldInfo_,
	_RemappingSignatureAdapter_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_RemappingSignatureAdapter_Annotations_
};

$Object* allocate$RemappingSignatureAdapter($Class* clazz) {
	return $of($alloc(RemappingSignatureAdapter));
}

void RemappingSignatureAdapter::init$($SignatureVisitor* signatureVisitor, $Remapper* remapper) {
	RemappingSignatureAdapter::init$($Opcodes::ASM6, signatureVisitor, remapper);
}

void RemappingSignatureAdapter::init$(int32_t api, $SignatureVisitor* signatureVisitor, $Remapper* remapper) {
	$SignatureVisitor::init$(api);
	$set(this, signatureVisitor, signatureVisitor);
	$set(this, remapper, remapper);
}

void RemappingSignatureAdapter::visitClassType($String* name) {
	$set(this, className, name);
	$nc(this->signatureVisitor)->visitClassType($($nc(this->remapper)->mapType(name)));
}

void RemappingSignatureAdapter::visitInnerClassType($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, remappedOuter, $str({$($nc(this->remapper)->mapType(this->className)), $$str(u'$')}));
	$set(this, className, $str({this->className, $$str(u'$'), name}));
	$var($String, remappedName, $nc(this->remapper)->mapType(this->className));
	int32_t index = $nc(remappedName)->startsWith(remappedOuter) ? $nc(remappedOuter)->length() : $nc(remappedName)->lastIndexOf((int32_t)u'$') + 1;
	$nc(this->signatureVisitor)->visitInnerClassType($(remappedName->substring(index)));
}

void RemappingSignatureAdapter::visitFormalTypeParameter($String* name) {
	$nc(this->signatureVisitor)->visitFormalTypeParameter(name);
}

void RemappingSignatureAdapter::visitTypeVariable($String* name) {
	$nc(this->signatureVisitor)->visitTypeVariable(name);
}

$SignatureVisitor* RemappingSignatureAdapter::visitArrayType() {
	$nc(this->signatureVisitor)->visitArrayType();
	return this;
}

void RemappingSignatureAdapter::visitBaseType(char16_t descriptor) {
	$nc(this->signatureVisitor)->visitBaseType(descriptor);
}

$SignatureVisitor* RemappingSignatureAdapter::visitClassBound() {
	$nc(this->signatureVisitor)->visitClassBound();
	return this;
}

$SignatureVisitor* RemappingSignatureAdapter::visitExceptionType() {
	$nc(this->signatureVisitor)->visitExceptionType();
	return this;
}

$SignatureVisitor* RemappingSignatureAdapter::visitInterface() {
	$nc(this->signatureVisitor)->visitInterface();
	return this;
}

$SignatureVisitor* RemappingSignatureAdapter::visitInterfaceBound() {
	$nc(this->signatureVisitor)->visitInterfaceBound();
	return this;
}

$SignatureVisitor* RemappingSignatureAdapter::visitParameterType() {
	$nc(this->signatureVisitor)->visitParameterType();
	return this;
}

$SignatureVisitor* RemappingSignatureAdapter::visitReturnType() {
	$nc(this->signatureVisitor)->visitReturnType();
	return this;
}

$SignatureVisitor* RemappingSignatureAdapter::visitSuperclass() {
	$nc(this->signatureVisitor)->visitSuperclass();
	return this;
}

void RemappingSignatureAdapter::visitTypeArgument() {
	$nc(this->signatureVisitor)->visitTypeArgument();
}

$SignatureVisitor* RemappingSignatureAdapter::visitTypeArgument(char16_t wildcard) {
	$nc(this->signatureVisitor)->visitTypeArgument(wildcard);
	return this;
}

void RemappingSignatureAdapter::visitEnd() {
	$nc(this->signatureVisitor)->visitEnd();
}

RemappingSignatureAdapter::RemappingSignatureAdapter() {
}

$Class* RemappingSignatureAdapter::load$($String* name, bool initialize) {
	$loadClass(RemappingSignatureAdapter, name, initialize, &_RemappingSignatureAdapter_ClassInfo_, allocate$RemappingSignatureAdapter);
	return class$;
}

$Class* RemappingSignatureAdapter::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
#include <jdk/internal/org/objectweb/asm/commons/SignatureRemapper.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;
using $SignatureVisitor = ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _SignatureRemapper_FieldInfo_[] = {
	{"signatureVisitor", "Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PRIVATE | $FINAL, $field(SignatureRemapper, signatureVisitor)},
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PRIVATE | $FINAL, $field(SignatureRemapper, remapper)},
	{"classNames", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE, $field(SignatureRemapper, classNames)},
	{}
};

$MethodInfo _SignatureRemapper_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureRemapper::*)($SignatureVisitor*,$Remapper*)>(&SignatureRemapper::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/signature/SignatureVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(static_cast<void(SignatureRemapper::*)(int32_t,$SignatureVisitor*,$Remapper*)>(&SignatureRemapper::init$))},
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

$ClassInfo _SignatureRemapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.SignatureRemapper",
	"jdk.internal.org.objectweb.asm.signature.SignatureVisitor",
	nullptr,
	_SignatureRemapper_FieldInfo_,
	_SignatureRemapper_MethodInfo_
};

$Object* allocate$SignatureRemapper($Class* clazz) {
	return $of($alloc(SignatureRemapper));
}

void SignatureRemapper::init$($SignatureVisitor* signatureVisitor, $Remapper* remapper) {
	SignatureRemapper::init$($Opcodes::ASM8, signatureVisitor, remapper);
}

void SignatureRemapper::init$(int32_t api, $SignatureVisitor* signatureVisitor, $Remapper* remapper) {
	$SignatureVisitor::init$(api);
	$set(this, classNames, $new($ArrayList));
	$set(this, signatureVisitor, signatureVisitor);
	$set(this, remapper, remapper);
}

void SignatureRemapper::visitClassType($String* name) {
	$nc(this->classNames)->add(name);
	$nc(this->signatureVisitor)->visitClassType($($nc(this->remapper)->mapType(name)));
}

void SignatureRemapper::visitInnerClassType($String* name) {
	$var($String, outerClassName, $cast($String, $nc(this->classNames)->remove($nc(this->classNames)->size() - 1)));
	$var($String, className, $str({outerClassName, $$str(u'$'), name}));
	$nc(this->classNames)->add(className);
	$var($String, remappedOuter, $str({$($nc(this->remapper)->mapType(outerClassName)), $$str(u'$')}));
	$var($String, remappedName, $nc(this->remapper)->mapType(className));
	int32_t index = $nc(remappedName)->startsWith(remappedOuter) ? $nc(remappedOuter)->length() : $nc(remappedName)->lastIndexOf((int32_t)u'$') + 1;
	$nc(this->signatureVisitor)->visitInnerClassType($(remappedName->substring(index)));
}

void SignatureRemapper::visitFormalTypeParameter($String* name) {
	$nc(this->signatureVisitor)->visitFormalTypeParameter(name);
}

void SignatureRemapper::visitTypeVariable($String* name) {
	$nc(this->signatureVisitor)->visitTypeVariable(name);
}

$SignatureVisitor* SignatureRemapper::visitArrayType() {
	$nc(this->signatureVisitor)->visitArrayType();
	return this;
}

void SignatureRemapper::visitBaseType(char16_t descriptor) {
	$nc(this->signatureVisitor)->visitBaseType(descriptor);
}

$SignatureVisitor* SignatureRemapper::visitClassBound() {
	$nc(this->signatureVisitor)->visitClassBound();
	return this;
}

$SignatureVisitor* SignatureRemapper::visitExceptionType() {
	$nc(this->signatureVisitor)->visitExceptionType();
	return this;
}

$SignatureVisitor* SignatureRemapper::visitInterface() {
	$nc(this->signatureVisitor)->visitInterface();
	return this;
}

$SignatureVisitor* SignatureRemapper::visitInterfaceBound() {
	$nc(this->signatureVisitor)->visitInterfaceBound();
	return this;
}

$SignatureVisitor* SignatureRemapper::visitParameterType() {
	$nc(this->signatureVisitor)->visitParameterType();
	return this;
}

$SignatureVisitor* SignatureRemapper::visitReturnType() {
	$nc(this->signatureVisitor)->visitReturnType();
	return this;
}

$SignatureVisitor* SignatureRemapper::visitSuperclass() {
	$nc(this->signatureVisitor)->visitSuperclass();
	return this;
}

void SignatureRemapper::visitTypeArgument() {
	$nc(this->signatureVisitor)->visitTypeArgument();
}

$SignatureVisitor* SignatureRemapper::visitTypeArgument(char16_t wildcard) {
	$nc(this->signatureVisitor)->visitTypeArgument(wildcard);
	return this;
}

void SignatureRemapper::visitEnd() {
	$nc(this->signatureVisitor)->visitEnd();
	$nc(this->classNames)->remove($nc(this->classNames)->size() - 1);
}

SignatureRemapper::SignatureRemapper() {
}

$Class* SignatureRemapper::load$($String* name, bool initialize) {
	$loadClass(SignatureRemapper, name, initialize, &_SignatureRemapper_ClassInfo_, allocate$SignatureRemapper);
	return class$;
}

$Class* SignatureRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
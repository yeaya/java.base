#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jcpp.h>

#undef ASM7
#undef ASM8
#undef ASM5
#undef ASM6
#undef ASM4
#undef ASM9_EXPERIMENTAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _FieldVisitor_FieldInfo_[] = {
	{"api", "I", nullptr, $PROTECTED | $FINAL, $field(FieldVisitor, api)},
	{"fv", "Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PROTECTED, $field(FieldVisitor, fv)},
	{}
};

$MethodInfo _FieldVisitor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(FieldVisitor::*)(int32_t)>(&FieldVisitor::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/FieldVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(FieldVisitor::*)(int32_t,FieldVisitor*)>(&FieldVisitor::init$))},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.FieldVisitor",
	"java.lang.Object",
	nullptr,
	_FieldVisitor_FieldInfo_,
	_FieldVisitor_MethodInfo_
};

$Object* allocate$FieldVisitor($Class* clazz) {
	return $of($alloc(FieldVisitor));
}

void FieldVisitor::init$(int32_t api) {
	FieldVisitor::init$(api, nullptr);
}

void FieldVisitor::init$(int32_t api, FieldVisitor* fieldVisitor) {
	if (api != $Opcodes::ASM8 && api != $Opcodes::ASM7 && api != $Opcodes::ASM6 && api != $Opcodes::ASM5 && api != $Opcodes::ASM4 && api != $Opcodes::ASM9_EXPERIMENTAL) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported api "_s, $$str(api)}));
	}
	if (api == $Opcodes::ASM9_EXPERIMENTAL) {
		$Constants::checkAsmExperimental(this);
	}
	this->api = api;
	$set(this, fv, fieldVisitor);
}

$AnnotationVisitor* FieldVisitor::visitAnnotation($String* descriptor, bool visible) {
	if (this->fv != nullptr) {
		return $nc(this->fv)->visitAnnotation(descriptor, visible);
	}
	return nullptr;
}

$AnnotationVisitor* FieldVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM5"_s);
	}
	if (this->fv != nullptr) {
		return $nc(this->fv)->visitTypeAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void FieldVisitor::visitAttribute($Attribute* attribute) {
	if (this->fv != nullptr) {
		$nc(this->fv)->visitAttribute(attribute);
	}
}

void FieldVisitor::visitEnd() {
	if (this->fv != nullptr) {
		$nc(this->fv)->visitEnd();
	}
}

FieldVisitor::FieldVisitor() {
}

$Class* FieldVisitor::load$($String* name, bool initialize) {
	$loadClass(FieldVisitor, name, initialize, &_FieldVisitor_ClassInfo_, allocate$FieldVisitor);
	return class$;
}

$Class* FieldVisitor::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
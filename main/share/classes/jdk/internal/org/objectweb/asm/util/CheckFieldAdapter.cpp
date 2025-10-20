#include <jdk/internal/org/objectweb/asm/util/CheckFieldAdapter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/TypeReference.h>
#include <jdk/internal/org/objectweb/asm/util/CheckAnnotationAdapter.h>
#include <jdk/internal/org/objectweb/asm/util/CheckClassAdapter.h>
#include <jdk/internal/org/objectweb/asm/util/CheckMethodAdapter.h>
#include <jcpp.h>

#undef ASM8
#undef FIELD

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $TypeReference = ::jdk::internal::org::objectweb::asm$::TypeReference;
using $CheckAnnotationAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckAnnotationAdapter;
using $CheckClassAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckClassAdapter;
using $CheckMethodAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _CheckFieldAdapter_FieldInfo_[] = {
	{"visitEndCalled", "Z", nullptr, $PRIVATE, $field(CheckFieldAdapter, visitEndCalled)},
	{}
};

$MethodInfo _CheckFieldAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/FieldVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(CheckFieldAdapter::*)($FieldVisitor*)>(&CheckFieldAdapter::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/FieldVisitor;)V", nullptr, $PROTECTED, $method(static_cast<void(CheckFieldAdapter::*)(int32_t,$FieldVisitor*)>(&CheckFieldAdapter::init$))},
	{"checkVisitEndNotCalled", "()V", nullptr, $PRIVATE, $method(static_cast<void(CheckFieldAdapter::*)()>(&CheckFieldAdapter::checkVisitEndNotCalled))},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CheckFieldAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.CheckFieldAdapter",
	"jdk.internal.org.objectweb.asm.FieldVisitor",
	nullptr,
	_CheckFieldAdapter_FieldInfo_,
	_CheckFieldAdapter_MethodInfo_
};

$Object* allocate$CheckFieldAdapter($Class* clazz) {
	return $of($alloc(CheckFieldAdapter));
}

void CheckFieldAdapter::init$($FieldVisitor* fieldVisitor) {
	CheckFieldAdapter::init$($Opcodes::ASM8, fieldVisitor);
	if ($of(this)->getClass() != CheckFieldAdapter::class$) {
		$throwNew($IllegalStateException);
	}
}

void CheckFieldAdapter::init$(int32_t api, $FieldVisitor* fieldVisitor) {
	$FieldVisitor::init$(api, fieldVisitor);
}

$AnnotationVisitor* CheckFieldAdapter::visitAnnotation($String* descriptor, bool visible) {
	checkVisitEndNotCalled();
	$CheckMethodAdapter::checkDescriptor($Opcodes::V1_5, descriptor, false);
	return $new($CheckAnnotationAdapter, $($FieldVisitor::visitAnnotation(descriptor, visible)));
}

$AnnotationVisitor* CheckFieldAdapter::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	checkVisitEndNotCalled();
	int32_t sort = $$new($TypeReference, typeRef)->getSort();
	if (sort != $TypeReference::FIELD) {
		$throwNew($IllegalArgumentException, $$str({"Invalid type reference sort 0x"_s, $($Integer::toHexString(sort))}));
	}
	$CheckClassAdapter::checkTypeRef(typeRef);
	$CheckMethodAdapter::checkDescriptor($Opcodes::V1_5, descriptor, false);
	return $new($CheckAnnotationAdapter, $($FieldVisitor::visitTypeAnnotation(typeRef, typePath, descriptor, visible)));
}

void CheckFieldAdapter::visitAttribute($Attribute* attribute) {
	checkVisitEndNotCalled();
	if (attribute == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid attribute (must not be null)"_s);
	}
	$FieldVisitor::visitAttribute(attribute);
}

void CheckFieldAdapter::visitEnd() {
	checkVisitEndNotCalled();
	this->visitEndCalled = true;
	$FieldVisitor::visitEnd();
}

void CheckFieldAdapter::checkVisitEndNotCalled() {
	if (this->visitEndCalled) {
		$throwNew($IllegalStateException, "Cannot call a visit method after visitEnd has been called"_s);
	}
}

CheckFieldAdapter::CheckFieldAdapter() {
}

$Class* CheckFieldAdapter::load$($String* name, bool initialize) {
	$loadClass(CheckFieldAdapter, name, initialize, &_CheckFieldAdapter_ClassInfo_, allocate$CheckFieldAdapter);
	return class$;
}

$Class* CheckFieldAdapter::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
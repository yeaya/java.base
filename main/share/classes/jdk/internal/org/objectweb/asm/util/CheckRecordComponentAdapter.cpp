#include <jdk/internal/org/objectweb/asm/util/CheckRecordComponentAdapter.h>

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
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
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
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
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

$FieldInfo _CheckRecordComponentAdapter_FieldInfo_[] = {
	{"visitEndCalled", "Z", nullptr, $PRIVATE, $field(CheckRecordComponentAdapter, visitEndCalled)},
	{}
};

$MethodInfo _CheckRecordComponentAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(CheckRecordComponentAdapter::*)($RecordComponentVisitor*)>(&CheckRecordComponentAdapter::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/RecordComponentVisitor;)V", nullptr, $PROTECTED, $method(static_cast<void(CheckRecordComponentAdapter::*)(int32_t,$RecordComponentVisitor*)>(&CheckRecordComponentAdapter::init$))},
	{"checkVisitEndNotCalled", "()V", nullptr, $PRIVATE, $method(static_cast<void(CheckRecordComponentAdapter::*)()>(&CheckRecordComponentAdapter::checkVisitEndNotCalled))},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CheckRecordComponentAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.CheckRecordComponentAdapter",
	"jdk.internal.org.objectweb.asm.RecordComponentVisitor",
	nullptr,
	_CheckRecordComponentAdapter_FieldInfo_,
	_CheckRecordComponentAdapter_MethodInfo_
};

$Object* allocate$CheckRecordComponentAdapter($Class* clazz) {
	return $of($alloc(CheckRecordComponentAdapter));
}

void CheckRecordComponentAdapter::init$($RecordComponentVisitor* recordComponentVisitor) {
	CheckRecordComponentAdapter::init$($Opcodes::ASM8, recordComponentVisitor);
	if ($of(this)->getClass() != CheckRecordComponentAdapter::class$) {
		$throwNew($IllegalStateException);
	}
}

void CheckRecordComponentAdapter::init$(int32_t api, $RecordComponentVisitor* recordComponentVisitor) {
	$RecordComponentVisitor::init$(api, recordComponentVisitor);
}

$AnnotationVisitor* CheckRecordComponentAdapter::visitAnnotation($String* descriptor, bool visible) {
	checkVisitEndNotCalled();
	$CheckMethodAdapter::checkDescriptor($Opcodes::V1_5, descriptor, false);
	return $new($CheckAnnotationAdapter, $($RecordComponentVisitor::visitAnnotation(descriptor, visible)));
}

$AnnotationVisitor* CheckRecordComponentAdapter::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	checkVisitEndNotCalled();
	int32_t sort = $$new($TypeReference, typeRef)->getSort();
	if (sort != $TypeReference::FIELD) {
		$throwNew($IllegalArgumentException, $$str({"Invalid type reference sort 0x"_s, $($Integer::toHexString(sort))}));
	}
	$CheckClassAdapter::checkTypeRef(typeRef);
	$CheckMethodAdapter::checkDescriptor($Opcodes::V1_5, descriptor, false);
	return $new($CheckAnnotationAdapter, $($RecordComponentVisitor::visitTypeAnnotation(typeRef, typePath, descriptor, visible)));
}

void CheckRecordComponentAdapter::visitAttribute($Attribute* attribute) {
	checkVisitEndNotCalled();
	if (attribute == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid attribute (must not be null)"_s);
	}
	$RecordComponentVisitor::visitAttribute(attribute);
}

void CheckRecordComponentAdapter::visitEnd() {
	checkVisitEndNotCalled();
	this->visitEndCalled = true;
	$RecordComponentVisitor::visitEnd();
}

void CheckRecordComponentAdapter::checkVisitEndNotCalled() {
	if (this->visitEndCalled) {
		$throwNew($IllegalStateException, "Cannot call a visit method after visitEnd has been called"_s);
	}
}

CheckRecordComponentAdapter::CheckRecordComponentAdapter() {
}

$Class* CheckRecordComponentAdapter::load$($String* name, bool initialize) {
	$loadClass(CheckRecordComponentAdapter, name, initialize, &_CheckRecordComponentAdapter_ClassInfo_, allocate$CheckRecordComponentAdapter);
	return class$;
}

$Class* CheckRecordComponentAdapter::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
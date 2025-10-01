#include <jdk/internal/org/objectweb/asm/commons/RecordComponentRemapper.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/commons/AnnotationRemapper.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $AnnotationRemapper = ::jdk::internal::org::objectweb::asm$::commons::AnnotationRemapper;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _RecordComponentRemapper_FieldInfo_[] = {
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(RecordComponentRemapper, remapper)},
	{}
};

$MethodInfo _RecordComponentRemapper_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(static_cast<void(RecordComponentRemapper::*)($RecordComponentVisitor*,$Remapper*)>(&RecordComponentRemapper::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/RecordComponentVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(static_cast<void(RecordComponentRemapper::*)(int32_t,$RecordComponentVisitor*,$Remapper*)>(&RecordComponentRemapper::init$))},
	{"createAnnotationRemapper", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PROTECTED},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RecordComponentRemapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.RecordComponentRemapper",
	"jdk.internal.org.objectweb.asm.RecordComponentVisitor",
	nullptr,
	_RecordComponentRemapper_FieldInfo_,
	_RecordComponentRemapper_MethodInfo_
};

$Object* allocate$RecordComponentRemapper($Class* clazz) {
	return $of($alloc(RecordComponentRemapper));
}

void RecordComponentRemapper::init$($RecordComponentVisitor* recordComponentVisitor, $Remapper* remapper) {
	RecordComponentRemapper::init$($Opcodes::ASM8, recordComponentVisitor, remapper);
}

void RecordComponentRemapper::init$(int32_t api, $RecordComponentVisitor* recordComponentVisitor, $Remapper* remapper) {
	$RecordComponentVisitor::init$(api, recordComponentVisitor);
	$set(this, remapper, remapper);
}

$AnnotationVisitor* RecordComponentRemapper::visitAnnotation($String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $RecordComponentVisitor::visitAnnotation($($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* RecordComponentRemapper::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $RecordComponentVisitor::visitTypeAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* RecordComponentRemapper::createAnnotationRemapper($AnnotationVisitor* annotationVisitor) {
	return $new($AnnotationRemapper, this->api, annotationVisitor, this->remapper);
}

RecordComponentRemapper::RecordComponentRemapper() {
}

$Class* RecordComponentRemapper::load$($String* name, bool initialize) {
	$loadClass(RecordComponentRemapper, name, initialize, &_RecordComponentRemapper_ClassInfo_, allocate$RecordComponentRemapper);
	return class$;
}

$Class* RecordComponentRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
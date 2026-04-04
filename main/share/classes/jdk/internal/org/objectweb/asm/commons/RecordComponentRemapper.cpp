#include <jdk/internal/org/objectweb/asm/commons/RecordComponentRemapper.h>
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

void RecordComponentRemapper::init$($RecordComponentVisitor* recordComponentVisitor, $Remapper* remapper) {
	RecordComponentRemapper::init$($Opcodes::ASM8, recordComponentVisitor, remapper);
}

void RecordComponentRemapper::init$(int32_t api, $RecordComponentVisitor* recordComponentVisitor, $Remapper* remapper) {
	$RecordComponentVisitor::init$(api, recordComponentVisitor);
	$set(this, remapper, remapper);
}

$AnnotationVisitor* RecordComponentRemapper::visitAnnotation($String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($AnnotationVisitor, annotationVisitor, $RecordComponentVisitor::visitAnnotation($($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* RecordComponentRemapper::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($AnnotationVisitor, annotationVisitor, $RecordComponentVisitor::visitTypeAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* RecordComponentRemapper::createAnnotationRemapper($AnnotationVisitor* annotationVisitor) {
	return $new($AnnotationRemapper, this->api, annotationVisitor, this->remapper);
}

RecordComponentRemapper::RecordComponentRemapper() {
}

$Class* RecordComponentRemapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(RecordComponentRemapper, remapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(RecordComponentRemapper, init$, void, $RecordComponentVisitor*, $Remapper*)},
		{"<init>", "(ILjdk/internal/org/objectweb/asm/RecordComponentVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(RecordComponentRemapper, init$, void, int32_t, $RecordComponentVisitor*, $Remapper*)},
		{"createAnnotationRemapper", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PROTECTED, $virtualMethod(RecordComponentRemapper, createAnnotationRemapper, $AnnotationVisitor*, $AnnotationVisitor*)},
		{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RecordComponentRemapper, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
		{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RecordComponentRemapper, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.commons.RecordComponentRemapper",
		"jdk.internal.org.objectweb.asm.RecordComponentVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RecordComponentRemapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RecordComponentRemapper);
	});
	return class$;
}

$Class* RecordComponentRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
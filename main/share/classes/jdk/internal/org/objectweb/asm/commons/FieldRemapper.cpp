#include <jdk/internal/org/objectweb/asm/commons/FieldRemapper.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/commons/AnnotationRemapper.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $AnnotationRemapper = ::jdk::internal::org::objectweb::asm$::commons::AnnotationRemapper;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

void FieldRemapper::init$($FieldVisitor* fieldVisitor, $Remapper* remapper) {
	FieldRemapper::init$($Opcodes::ASM8, fieldVisitor, remapper);
}

void FieldRemapper::init$(int32_t api, $FieldVisitor* fieldVisitor, $Remapper* remapper) {
	$FieldVisitor::init$(api, fieldVisitor);
	$set(this, remapper, remapper);
}

$AnnotationVisitor* FieldRemapper::visitAnnotation($String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($AnnotationVisitor, annotationVisitor, $FieldVisitor::visitAnnotation($($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* FieldRemapper::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($AnnotationVisitor, annotationVisitor, $FieldVisitor::visitTypeAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* FieldRemapper::createAnnotationRemapper($AnnotationVisitor* annotationVisitor) {
	return $new($AnnotationRemapper, this->api, annotationVisitor, this->remapper);
}

FieldRemapper::FieldRemapper() {
}

$Class* FieldRemapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(FieldRemapper, remapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/FieldVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(FieldRemapper, init$, void, $FieldVisitor*, $Remapper*)},
		{"<init>", "(ILjdk/internal/org/objectweb/asm/FieldVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(FieldRemapper, init$, void, int32_t, $FieldVisitor*, $Remapper*)},
		{"createAnnotationRemapper", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PROTECTED, $virtualMethod(FieldRemapper, createAnnotationRemapper, $AnnotationVisitor*, $AnnotationVisitor*)},
		{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(FieldRemapper, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
		{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(FieldRemapper, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.commons.FieldRemapper",
		"jdk.internal.org.objectweb.asm.FieldVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FieldRemapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FieldRemapper);
	});
	return class$;
}

$Class* FieldRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
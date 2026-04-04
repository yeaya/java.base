#include <jdk/internal/org/objectweb/asm/commons/AnnotationRemapper.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

void AnnotationRemapper::init$($AnnotationVisitor* annotationVisitor, $Remapper* remapper) {
	AnnotationRemapper::init$($Opcodes::ASM8, annotationVisitor, remapper);
}

void AnnotationRemapper::init$(int32_t api, $AnnotationVisitor* annotationVisitor, $Remapper* remapper) {
	$AnnotationVisitor::init$(api, annotationVisitor);
	$set(this, remapper, remapper);
}

void AnnotationRemapper::visit($String* name, Object$* value) {
	$AnnotationVisitor::visit(name, $($nc(this->remapper)->mapValue(value)));
}

void AnnotationRemapper::visitEnum($String* name, $String* descriptor, $String* value) {
	$AnnotationVisitor::visitEnum(name, $($nc(this->remapper)->mapDesc(descriptor)), value);
}

$AnnotationVisitor* AnnotationRemapper::visitAnnotation($String* name, $String* descriptor) {
	$useLocalObjectStack();
	$var($AnnotationVisitor, annotationVisitor, $AnnotationVisitor::visitAnnotation(name, $($nc(this->remapper)->mapDesc(descriptor))));
	if (annotationVisitor == nullptr) {
		return nullptr;
	} else {
		return annotationVisitor == this->av ? $cast($AnnotationVisitor, this) : createAnnotationRemapper(annotationVisitor);
	}
}

$AnnotationVisitor* AnnotationRemapper::visitArray($String* name) {
	$var($AnnotationVisitor, annotationVisitor, $AnnotationVisitor::visitArray(name));
	if (annotationVisitor == nullptr) {
		return nullptr;
	} else {
		return annotationVisitor == this->av ? $cast($AnnotationVisitor, this) : createAnnotationRemapper(annotationVisitor);
	}
}

$AnnotationVisitor* AnnotationRemapper::createAnnotationRemapper($AnnotationVisitor* annotationVisitor) {
	return $new(AnnotationRemapper, this->api, annotationVisitor, this->remapper);
}

AnnotationRemapper::AnnotationRemapper() {
}

$Class* AnnotationRemapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(AnnotationRemapper, remapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(AnnotationRemapper, init$, void, $AnnotationVisitor*, $Remapper*)},
		{"<init>", "(ILjdk/internal/org/objectweb/asm/AnnotationVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(AnnotationRemapper, init$, void, int32_t, $AnnotationVisitor*, $Remapper*)},
		{"createAnnotationRemapper", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PROTECTED, $virtualMethod(AnnotationRemapper, createAnnotationRemapper, $AnnotationVisitor*, $AnnotationVisitor*)},
		{"visit", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationRemapper, visit, void, $String*, Object$*)},
		{"visitAnnotation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(AnnotationRemapper, visitAnnotation, $AnnotationVisitor*, $String*, $String*)},
		{"visitArray", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(AnnotationRemapper, visitArray, $AnnotationVisitor*, $String*)},
		{"visitEnum", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationRemapper, visitEnum, void, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.commons.AnnotationRemapper",
		"jdk.internal.org.objectweb.asm.AnnotationVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnnotationRemapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationRemapper);
	});
	return class$;
}

$Class* AnnotationRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
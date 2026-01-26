#include <jdk/internal/org/objectweb/asm/commons/RemappingFieldAdapter.h>

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jdk/internal/org/objectweb/asm/commons/RemappingAnnotationAdapter.h>
#include <jcpp.h>

#undef ASM6

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;
using $RemappingAnnotationAdapter = ::jdk::internal::org::objectweb::asm$::commons::RemappingAnnotationAdapter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$CompoundAttribute _RemappingFieldAdapter_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _RemappingFieldAdapter_FieldInfo_[] = {
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PRIVATE | $FINAL, $field(RemappingFieldAdapter, remapper)},
	{}
};

$MethodInfo _RemappingFieldAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/FieldVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(RemappingFieldAdapter, init$, void, $FieldVisitor*, $Remapper*)},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/FieldVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(RemappingFieldAdapter, init$, void, int32_t, $FieldVisitor*, $Remapper*)},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingFieldAdapter, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingFieldAdapter, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
	{}
};

$ClassInfo _RemappingFieldAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.RemappingFieldAdapter",
	"jdk.internal.org.objectweb.asm.FieldVisitor",
	nullptr,
	_RemappingFieldAdapter_FieldInfo_,
	_RemappingFieldAdapter_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_RemappingFieldAdapter_Annotations_
};

$Object* allocate$RemappingFieldAdapter($Class* clazz) {
	return $of($alloc(RemappingFieldAdapter));
}

void RemappingFieldAdapter::init$($FieldVisitor* fieldVisitor, $Remapper* remapper) {
	RemappingFieldAdapter::init$($Opcodes::ASM6, fieldVisitor, remapper);
}

void RemappingFieldAdapter::init$(int32_t api, $FieldVisitor* fieldVisitor, $Remapper* remapper) {
	$FieldVisitor::init$(api, fieldVisitor);
	$set(this, remapper, remapper);
}

$AnnotationVisitor* RemappingFieldAdapter::visitAnnotation($String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $nc(this->fv)->visitAnnotation($($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

$AnnotationVisitor* RemappingFieldAdapter::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $FieldVisitor::visitTypeAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

RemappingFieldAdapter::RemappingFieldAdapter() {
}

$Class* RemappingFieldAdapter::load$($String* name, bool initialize) {
	$loadClass(RemappingFieldAdapter, name, initialize, &_RemappingFieldAdapter_ClassInfo_, allocate$RemappingFieldAdapter);
	return class$;
}

$Class* RemappingFieldAdapter::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
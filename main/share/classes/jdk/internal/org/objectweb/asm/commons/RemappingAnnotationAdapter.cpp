#include <jdk/internal/org/objectweb/asm/commons/RemappingAnnotationAdapter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jcpp.h>

#undef ASM6

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
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
$CompoundAttribute _RemappingAnnotationAdapter_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _RemappingAnnotationAdapter_FieldInfo_[] = {
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(RemappingAnnotationAdapter, remapper)},
	{}
};

$MethodInfo _RemappingAnnotationAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(static_cast<void(RemappingAnnotationAdapter::*)($AnnotationVisitor*,$Remapper*)>(&RemappingAnnotationAdapter::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/AnnotationVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(static_cast<void(RemappingAnnotationAdapter::*)(int32_t,$AnnotationVisitor*,$Remapper*)>(&RemappingAnnotationAdapter::init$))},
	{"visit", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitArray", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitEnum", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RemappingAnnotationAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.RemappingAnnotationAdapter",
	"jdk.internal.org.objectweb.asm.AnnotationVisitor",
	nullptr,
	_RemappingAnnotationAdapter_FieldInfo_,
	_RemappingAnnotationAdapter_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_RemappingAnnotationAdapter_Annotations_
};

$Object* allocate$RemappingAnnotationAdapter($Class* clazz) {
	return $of($alloc(RemappingAnnotationAdapter));
}

void RemappingAnnotationAdapter::init$($AnnotationVisitor* annotationVisitor, $Remapper* remapper) {
	RemappingAnnotationAdapter::init$($Opcodes::ASM6, annotationVisitor, remapper);
}

void RemappingAnnotationAdapter::init$(int32_t api, $AnnotationVisitor* annotationVisitor, $Remapper* remapper) {
	$AnnotationVisitor::init$(api, annotationVisitor);
	$set(this, remapper, remapper);
}

void RemappingAnnotationAdapter::visit($String* name, Object$* value) {
	$nc(this->av)->visit(name, $($nc(this->remapper)->mapValue(value)));
}

void RemappingAnnotationAdapter::visitEnum($String* name, $String* descriptor, $String* value) {
	$nc(this->av)->visitEnum(name, $($nc(this->remapper)->mapDesc(descriptor)), value);
}

$AnnotationVisitor* RemappingAnnotationAdapter::visitAnnotation($String* name, $String* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $nc(this->av)->visitAnnotation(name, $($nc(this->remapper)->mapDesc(descriptor))));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : (annotationVisitor == this->av ? static_cast<$AnnotationVisitor*>(this) : static_cast<$AnnotationVisitor*>($new(RemappingAnnotationAdapter, annotationVisitor, this->remapper)));
}

$AnnotationVisitor* RemappingAnnotationAdapter::visitArray($String* name) {
	$var($AnnotationVisitor, annotationVisitor, $nc(this->av)->visitArray(name));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : (annotationVisitor == this->av ? static_cast<$AnnotationVisitor*>(this) : static_cast<$AnnotationVisitor*>($new(RemappingAnnotationAdapter, annotationVisitor, this->remapper)));
}

RemappingAnnotationAdapter::RemappingAnnotationAdapter() {
}

$Class* RemappingAnnotationAdapter::load$($String* name, bool initialize) {
	$loadClass(RemappingAnnotationAdapter, name, initialize, &_RemappingAnnotationAdapter_ClassInfo_, allocate$RemappingAnnotationAdapter);
	return class$;
}

$Class* RemappingAnnotationAdapter::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
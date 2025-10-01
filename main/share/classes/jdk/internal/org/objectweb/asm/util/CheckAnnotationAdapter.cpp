#include <jdk/internal/org/objectweb/asm/util/CheckAnnotationAdapter.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/util/CheckMethodAdapter.h>
#include <jcpp.h>

#undef ASM8
#undef V1_5
#undef METHOD

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $CheckMethodAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _CheckAnnotationAdapter_FieldInfo_[] = {
	{"useNamedValue", "Z", nullptr, $PRIVATE | $FINAL, $field(CheckAnnotationAdapter, useNamedValue)},
	{"visitEndCalled", "Z", nullptr, $PRIVATE, $field(CheckAnnotationAdapter, visitEndCalled)},
	{}
};

$MethodInfo _CheckAnnotationAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(CheckAnnotationAdapter::*)($AnnotationVisitor*)>(&CheckAnnotationAdapter::init$))},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;Z)V", nullptr, 0, $method(static_cast<void(CheckAnnotationAdapter::*)($AnnotationVisitor*,bool)>(&CheckAnnotationAdapter::init$))},
	{"checkName", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckAnnotationAdapter::*)($String*)>(&CheckAnnotationAdapter::checkName))},
	{"checkVisitEndNotCalled", "()V", nullptr, $PRIVATE, $method(static_cast<void(CheckAnnotationAdapter::*)()>(&CheckAnnotationAdapter::checkVisitEndNotCalled))},
	{"visit", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitArray", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitEnum", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CheckAnnotationAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.CheckAnnotationAdapter",
	"jdk.internal.org.objectweb.asm.AnnotationVisitor",
	nullptr,
	_CheckAnnotationAdapter_FieldInfo_,
	_CheckAnnotationAdapter_MethodInfo_
};

$Object* allocate$CheckAnnotationAdapter($Class* clazz) {
	return $of($alloc(CheckAnnotationAdapter));
}

void CheckAnnotationAdapter::init$($AnnotationVisitor* annotationVisitor) {
	CheckAnnotationAdapter::init$(annotationVisitor, true);
}

void CheckAnnotationAdapter::init$($AnnotationVisitor* annotationVisitor, bool useNamedValues) {
	$AnnotationVisitor::init$($Opcodes::ASM8, annotationVisitor);
	this->useNamedValue = useNamedValues;
}

void CheckAnnotationAdapter::visit($String* name, Object$* value) {
	checkVisitEndNotCalled();
	checkName(name);
	if (!($instanceOf($Byte, value) || $instanceOf($Boolean, value) || $instanceOf($Character, value) || $instanceOf($Short, value) || $instanceOf($Integer, value) || $instanceOf($Long, value) || $instanceOf($Float, value) || $instanceOf($Double, value) || $instanceOf($String, value) || $instanceOf($Type, value) || $instanceOf($bytes, value) || $instanceOf($booleans, value) || $instanceOf($chars, value) || $instanceOf($shorts, value) || $instanceOf($ints, value) || $instanceOf($longs, value) || $instanceOf($floats, value) || $instanceOf($doubles, value))) {
		$throwNew($IllegalArgumentException, "Invalid annotation value"_s);
	}
	if ($instanceOf($Type, value) && $nc(($cast($Type, value)))->getSort() == $Type::METHOD) {
		$throwNew($IllegalArgumentException, "Invalid annotation value"_s);
	}
	$AnnotationVisitor::visit(name, value);
}

void CheckAnnotationAdapter::visitEnum($String* name, $String* descriptor, $String* value) {
	checkVisitEndNotCalled();
	checkName(name);
	$CheckMethodAdapter::checkDescriptor($Opcodes::V1_5, descriptor, false);
	if (value == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid enum value"_s);
	}
	$AnnotationVisitor::visitEnum(name, descriptor, value);
}

$AnnotationVisitor* CheckAnnotationAdapter::visitAnnotation($String* name, $String* descriptor) {
	checkVisitEndNotCalled();
	checkName(name);
	$CheckMethodAdapter::checkDescriptor($Opcodes::V1_5, descriptor, false);
	return $new(CheckAnnotationAdapter, $($AnnotationVisitor::visitAnnotation(name, descriptor)));
}

$AnnotationVisitor* CheckAnnotationAdapter::visitArray($String* name) {
	checkVisitEndNotCalled();
	checkName(name);
	return $new(CheckAnnotationAdapter, $($AnnotationVisitor::visitArray(name)), false);
}

void CheckAnnotationAdapter::visitEnd() {
	checkVisitEndNotCalled();
	this->visitEndCalled = true;
	$AnnotationVisitor::visitEnd();
}

void CheckAnnotationAdapter::checkName($String* name) {
	if (this->useNamedValue && name == nullptr) {
		$throwNew($IllegalArgumentException, "Annotation value name must not be null"_s);
	}
}

void CheckAnnotationAdapter::checkVisitEndNotCalled() {
	if (this->visitEndCalled) {
		$throwNew($IllegalStateException, "Cannot call a visit method after visitEnd has been called"_s);
	}
}

CheckAnnotationAdapter::CheckAnnotationAdapter() {
}

$Class* CheckAnnotationAdapter::load$($String* name, bool initialize) {
	$loadClass(CheckAnnotationAdapter, name, initialize, &_CheckAnnotationAdapter_ClassInfo_, allocate$CheckAnnotationAdapter);
	return class$;
}

$Class* CheckAnnotationAdapter::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
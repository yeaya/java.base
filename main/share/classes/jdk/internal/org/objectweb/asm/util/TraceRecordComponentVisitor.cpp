#include <jdk/internal/org/objectweb/asm/util/TraceRecordComponentVisitor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/util/Printer.h>
#include <jdk/internal/org/objectweb/asm/util/TraceAnnotationVisitor.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $Printer = ::jdk::internal::org::objectweb::asm$::util::Printer;
using $TraceAnnotationVisitor = ::jdk::internal::org::objectweb::asm$::util::TraceAnnotationVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _TraceRecordComponentVisitor_FieldInfo_[] = {
	{"printer", "Ljdk/internal/org/objectweb/asm/util/Printer;", nullptr, $PUBLIC | $FINAL, $field(TraceRecordComponentVisitor, printer)},
	{}
};

$MethodInfo _TraceRecordComponentVisitor_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(static_cast<void(TraceRecordComponentVisitor::*)($Printer*)>(&TraceRecordComponentVisitor::init$))},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(static_cast<void(TraceRecordComponentVisitor::*)($RecordComponentVisitor*,$Printer*)>(&TraceRecordComponentVisitor::init$))},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TraceRecordComponentVisitor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.TraceRecordComponentVisitor",
	"jdk.internal.org.objectweb.asm.RecordComponentVisitor",
	nullptr,
	_TraceRecordComponentVisitor_FieldInfo_,
	_TraceRecordComponentVisitor_MethodInfo_
};

$Object* allocate$TraceRecordComponentVisitor($Class* clazz) {
	return $of($alloc(TraceRecordComponentVisitor));
}

void TraceRecordComponentVisitor::init$($Printer* printer) {
	TraceRecordComponentVisitor::init$(nullptr, printer);
}

void TraceRecordComponentVisitor::init$($RecordComponentVisitor* recordComponentVisitor, $Printer* printer) {
	$RecordComponentVisitor::init$($Opcodes::ASM8, recordComponentVisitor);
	$set(this, printer, printer);
}

$AnnotationVisitor* TraceRecordComponentVisitor::visitAnnotation($String* descriptor, bool visible) {
	$var($Printer, annotationPrinter, $nc(this->printer)->visitRecordComponentAnnotation(descriptor, visible));
	return $new($TraceAnnotationVisitor, $($RecordComponentVisitor::visitAnnotation(descriptor, visible)), annotationPrinter);
}

$AnnotationVisitor* TraceRecordComponentVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($Printer, annotationPrinter, $nc(this->printer)->visitRecordComponentTypeAnnotation(typeRef, typePath, descriptor, visible));
	return $new($TraceAnnotationVisitor, $($RecordComponentVisitor::visitTypeAnnotation(typeRef, typePath, descriptor, visible)), annotationPrinter);
}

void TraceRecordComponentVisitor::visitAttribute($Attribute* attribute) {
	$nc(this->printer)->visitRecordComponentAttribute(attribute);
	$RecordComponentVisitor::visitAttribute(attribute);
}

void TraceRecordComponentVisitor::visitEnd() {
	$nc(this->printer)->visitRecordComponentEnd();
	$RecordComponentVisitor::visitEnd();
}

TraceRecordComponentVisitor::TraceRecordComponentVisitor() {
}

$Class* TraceRecordComponentVisitor::load$($String* name, bool initialize) {
	$loadClass(TraceRecordComponentVisitor, name, initialize, &_TraceRecordComponentVisitor_ClassInfo_, allocate$TraceRecordComponentVisitor);
	return class$;
}

$Class* TraceRecordComponentVisitor::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
#include <jdk/internal/org/objectweb/asm/util/TraceAnnotationVisitor.h>

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/util/Printer.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Printer = ::jdk::internal::org::objectweb::asm$::util::Printer;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _TraceAnnotationVisitor_FieldInfo_[] = {
	{"printer", "Ljdk/internal/org/objectweb/asm/util/Printer;", nullptr, $PRIVATE | $FINAL, $field(TraceAnnotationVisitor, printer)},
	{}
};

$MethodInfo _TraceAnnotationVisitor_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(TraceAnnotationVisitor, init$, void, $Printer*)},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(TraceAnnotationVisitor, init$, void, $AnnotationVisitor*, $Printer*)},
	{"visit", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(TraceAnnotationVisitor, visit, void, $String*, Object$*)},
	{"visitAnnotation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(TraceAnnotationVisitor, visitAnnotation, $AnnotationVisitor*, $String*, $String*)},
	{"visitArray", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(TraceAnnotationVisitor, visitArray, $AnnotationVisitor*, $String*)},
	{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(TraceAnnotationVisitor, visitEnd, void)},
	{"visitEnum", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TraceAnnotationVisitor, visitEnum, void, $String*, $String*, $String*)},
	{}
};

$ClassInfo _TraceAnnotationVisitor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.TraceAnnotationVisitor",
	"jdk.internal.org.objectweb.asm.AnnotationVisitor",
	nullptr,
	_TraceAnnotationVisitor_FieldInfo_,
	_TraceAnnotationVisitor_MethodInfo_
};

$Object* allocate$TraceAnnotationVisitor($Class* clazz) {
	return $of($alloc(TraceAnnotationVisitor));
}

void TraceAnnotationVisitor::init$($Printer* printer) {
	TraceAnnotationVisitor::init$(nullptr, printer);
}

void TraceAnnotationVisitor::init$($AnnotationVisitor* annotationVisitor, $Printer* printer) {
	$AnnotationVisitor::init$($Opcodes::ASM8, annotationVisitor);
	$set(this, printer, printer);
}

void TraceAnnotationVisitor::visit($String* name, Object$* value) {
	$nc(this->printer)->visit(name, value);
	$AnnotationVisitor::visit(name, value);
}

void TraceAnnotationVisitor::visitEnum($String* name, $String* descriptor, $String* value) {
	$nc(this->printer)->visitEnum(name, descriptor, value);
	$AnnotationVisitor::visitEnum(name, descriptor, value);
}

$AnnotationVisitor* TraceAnnotationVisitor::visitAnnotation($String* name, $String* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->printer)->visitAnnotation(name, descriptor));
	return $new(TraceAnnotationVisitor, $($AnnotationVisitor::visitAnnotation(name, descriptor)), annotationPrinter);
}

$AnnotationVisitor* TraceAnnotationVisitor::visitArray($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, arrayPrinter, $nc(this->printer)->visitArray(name));
	return $new(TraceAnnotationVisitor, $($AnnotationVisitor::visitArray(name)), arrayPrinter);
}

void TraceAnnotationVisitor::visitEnd() {
	$nc(this->printer)->visitAnnotationEnd();
	$AnnotationVisitor::visitEnd();
}

TraceAnnotationVisitor::TraceAnnotationVisitor() {
}

$Class* TraceAnnotationVisitor::load$($String* name, bool initialize) {
	$loadClass(TraceAnnotationVisitor, name, initialize, &_TraceAnnotationVisitor_ClassInfo_, allocate$TraceAnnotationVisitor);
	return class$;
}

$Class* TraceAnnotationVisitor::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
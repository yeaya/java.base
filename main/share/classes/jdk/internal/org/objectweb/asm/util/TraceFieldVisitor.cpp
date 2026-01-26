#include <jdk/internal/org/objectweb/asm/util/TraceFieldVisitor.h>

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
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
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $Printer = ::jdk::internal::org::objectweb::asm$::util::Printer;
using $TraceAnnotationVisitor = ::jdk::internal::org::objectweb::asm$::util::TraceAnnotationVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _TraceFieldVisitor_FieldInfo_[] = {
	{"p", "Ljdk/internal/org/objectweb/asm/util/Printer;", nullptr, $PUBLIC | $FINAL, $field(TraceFieldVisitor, p)},
	{}
};

$MethodInfo _TraceFieldVisitor_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(TraceFieldVisitor, init$, void, $Printer*)},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/FieldVisitor;Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(TraceFieldVisitor, init$, void, $FieldVisitor*, $Printer*)},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(TraceFieldVisitor, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(TraceFieldVisitor, visitAttribute, void, $Attribute*)},
	{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(TraceFieldVisitor, visitEnd, void)},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(TraceFieldVisitor, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
	{}
};

$ClassInfo _TraceFieldVisitor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.TraceFieldVisitor",
	"jdk.internal.org.objectweb.asm.FieldVisitor",
	nullptr,
	_TraceFieldVisitor_FieldInfo_,
	_TraceFieldVisitor_MethodInfo_
};

$Object* allocate$TraceFieldVisitor($Class* clazz) {
	return $of($alloc(TraceFieldVisitor));
}

void TraceFieldVisitor::init$($Printer* printer) {
	TraceFieldVisitor::init$(nullptr, printer);
}

void TraceFieldVisitor::init$($FieldVisitor* fieldVisitor, $Printer* printer) {
	$FieldVisitor::init$($Opcodes::ASM8, fieldVisitor);
	$set(this, p, printer);
}

$AnnotationVisitor* TraceFieldVisitor::visitAnnotation($String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitFieldAnnotation(descriptor, visible));
	return $new($TraceAnnotationVisitor, $($FieldVisitor::visitAnnotation(descriptor, visible)), annotationPrinter);
}

$AnnotationVisitor* TraceFieldVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitFieldTypeAnnotation(typeRef, typePath, descriptor, visible));
	return $new($TraceAnnotationVisitor, $($FieldVisitor::visitTypeAnnotation(typeRef, typePath, descriptor, visible)), annotationPrinter);
}

void TraceFieldVisitor::visitAttribute($Attribute* attribute) {
	$nc(this->p)->visitFieldAttribute(attribute);
	$FieldVisitor::visitAttribute(attribute);
}

void TraceFieldVisitor::visitEnd() {
	$nc(this->p)->visitFieldEnd();
	$FieldVisitor::visitEnd();
}

TraceFieldVisitor::TraceFieldVisitor() {
}

$Class* TraceFieldVisitor::load$($String* name, bool initialize) {
	$loadClass(TraceFieldVisitor, name, initialize, &_TraceFieldVisitor_ClassInfo_, allocate$TraceFieldVisitor);
	return class$;
}

$Class* TraceFieldVisitor::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
#include <jdk/internal/org/objectweb/asm/util/TraceClassVisitor.h>

#include <java/io/PrintWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/util/Printer.h>
#include <jdk/internal/org/objectweb/asm/util/Textifier.h>
#include <jdk/internal/org/objectweb/asm/util/TraceAnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/util/TraceFieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/util/TraceMethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/util/TraceModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/util/TraceRecordComponentVisitor.h>
#include <jcpp.h>

#undef ASM9_EXPERIMENTAL

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $Printer = ::jdk::internal::org::objectweb::asm$::util::Printer;
using $Textifier = ::jdk::internal::org::objectweb::asm$::util::Textifier;
using $TraceAnnotationVisitor = ::jdk::internal::org::objectweb::asm$::util::TraceAnnotationVisitor;
using $TraceFieldVisitor = ::jdk::internal::org::objectweb::asm$::util::TraceFieldVisitor;
using $TraceMethodVisitor = ::jdk::internal::org::objectweb::asm$::util::TraceMethodVisitor;
using $TraceModuleVisitor = ::jdk::internal::org::objectweb::asm$::util::TraceModuleVisitor;
using $TraceRecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::util::TraceRecordComponentVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$CompoundAttribute _TraceClassVisitor_MethodAnnotations_visitPermittedSubclassExperimental14[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TraceClassVisitor_FieldInfo_[] = {
	{"printWriter", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(TraceClassVisitor, printWriter)},
	{"p", "Ljdk/internal/org/objectweb/asm/util/Printer;", nullptr, $PUBLIC | $FINAL, $field(TraceClassVisitor, p)},
	{}
};

$MethodInfo _TraceClassVisitor_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(TraceClassVisitor::*)($PrintWriter*)>(&TraceClassVisitor::init$))},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(TraceClassVisitor::*)($ClassVisitor*,$PrintWriter*)>(&TraceClassVisitor::init$))},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/util/Printer;Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(static_cast<void(TraceClassVisitor::*)($ClassVisitor*,$Printer*,$PrintWriter*)>(&TraceClassVisitor::init$))},
	{"visit", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitField", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PUBLIC},
	{"visitInnerClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitMethod", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PUBLIC},
	{"visitModule", "(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC},
	{"visitNestHost", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitNestMember", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitOuterClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitPermittedSubclassExperimental", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TraceClassVisitor_MethodAnnotations_visitPermittedSubclassExperimental14},
	{"visitRecordComponent", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;", nullptr, $PUBLIC},
	{"visitSource", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TraceClassVisitor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.TraceClassVisitor",
	"jdk.internal.org.objectweb.asm.ClassVisitor",
	nullptr,
	_TraceClassVisitor_FieldInfo_,
	_TraceClassVisitor_MethodInfo_
};

$Object* allocate$TraceClassVisitor($Class* clazz) {
	return $of($alloc(TraceClassVisitor));
}

void TraceClassVisitor::init$($PrintWriter* printWriter) {
	TraceClassVisitor::init$(nullptr, printWriter);
}

void TraceClassVisitor::init$($ClassVisitor* classVisitor, $PrintWriter* printWriter) {
	TraceClassVisitor::init$(classVisitor, $$new($Textifier), printWriter);
}

void TraceClassVisitor::init$($ClassVisitor* classVisitor, $Printer* printer, $PrintWriter* printWriter) {
	$ClassVisitor::init$($Opcodes::ASM9_EXPERIMENTAL, classVisitor);
	$set(this, printWriter, printWriter);
	$set(this, p, printer);
}

void TraceClassVisitor::visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) {
	$nc(this->p)->visit(version, access, name, signature, superName, interfaces);
	$ClassVisitor::visit(version, access, name, signature, superName, interfaces);
}

void TraceClassVisitor::visitSource($String* file, $String* debug) {
	$nc(this->p)->visitSource(file, debug);
	$ClassVisitor::visitSource(file, debug);
}

$ModuleVisitor* TraceClassVisitor::visitModule($String* name, int32_t flags, $String* version) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, modulePrinter, $nc(this->p)->visitModule(name, flags, version));
	return $new($TraceModuleVisitor, $($ClassVisitor::visitModule(name, flags, version)), modulePrinter);
}

void TraceClassVisitor::visitNestHost($String* nestHost) {
	$nc(this->p)->visitNestHost(nestHost);
	$ClassVisitor::visitNestHost(nestHost);
}

void TraceClassVisitor::visitOuterClass($String* owner, $String* name, $String* descriptor) {
	$nc(this->p)->visitOuterClass(owner, name, descriptor);
	$ClassVisitor::visitOuterClass(owner, name, descriptor);
}

$AnnotationVisitor* TraceClassVisitor::visitAnnotation($String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitClassAnnotation(descriptor, visible));
	return $new($TraceAnnotationVisitor, $($ClassVisitor::visitAnnotation(descriptor, visible)), annotationPrinter);
}

$AnnotationVisitor* TraceClassVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitClassTypeAnnotation(typeRef, typePath, descriptor, visible));
	return $new($TraceAnnotationVisitor, $($ClassVisitor::visitTypeAnnotation(typeRef, typePath, descriptor, visible)), annotationPrinter);
}

void TraceClassVisitor::visitAttribute($Attribute* attribute) {
	$nc(this->p)->visitClassAttribute(attribute);
	$ClassVisitor::visitAttribute(attribute);
}

void TraceClassVisitor::visitNestMember($String* nestMember) {
	$nc(this->p)->visitNestMember(nestMember);
	$ClassVisitor::visitNestMember(nestMember);
}

void TraceClassVisitor::visitPermittedSubclassExperimental($String* permittedSubclass) {
	$nc(this->p)->visitPermittedSubclassExperimental(permittedSubclass);
	$ClassVisitor::visitPermittedSubclassExperimental(permittedSubclass);
}

void TraceClassVisitor::visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) {
	$nc(this->p)->visitInnerClass(name, outerName, innerName, access);
	$ClassVisitor::visitInnerClass(name, outerName, innerName, access);
}

$RecordComponentVisitor* TraceClassVisitor::visitRecordComponent($String* name, $String* descriptor, $String* signature) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, recordComponentPrinter, $nc(this->p)->visitRecordComponent(name, descriptor, signature));
	return $new($TraceRecordComponentVisitor, $($ClassVisitor::visitRecordComponent(name, descriptor, signature)), recordComponentPrinter);
}

$FieldVisitor* TraceClassVisitor::visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, fieldPrinter, $nc(this->p)->visitField(access, name, descriptor, signature, value));
	return $new($TraceFieldVisitor, $($ClassVisitor::visitField(access, name, descriptor, signature, value)), fieldPrinter);
}

$MethodVisitor* TraceClassVisitor::visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, methodPrinter, $nc(this->p)->visitMethod(access, name, descriptor, signature, exceptions));
	return $new($TraceMethodVisitor, $($ClassVisitor::visitMethod(access, name, descriptor, signature, exceptions)), methodPrinter);
}

void TraceClassVisitor::visitEnd() {
	$nc(this->p)->visitClassEnd();
	if (this->printWriter != nullptr) {
		$nc(this->p)->print(this->printWriter);
		$nc(this->printWriter)->flush();
	}
	$ClassVisitor::visitEnd();
}

TraceClassVisitor::TraceClassVisitor() {
}

$Class* TraceClassVisitor::load$($String* name, bool initialize) {
	$loadClass(TraceClassVisitor, name, initialize, &_TraceClassVisitor_ClassInfo_, allocate$TraceClassVisitor);
	return class$;
}

$Class* TraceClassVisitor::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
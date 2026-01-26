#include <jdk/internal/org/objectweb/asm/util/TraceModuleVisitor.h>

#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/util/Printer.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Printer = ::jdk::internal::org::objectweb::asm$::util::Printer;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _TraceModuleVisitor_FieldInfo_[] = {
	{"p", "Ljdk/internal/org/objectweb/asm/util/Printer;", nullptr, $PUBLIC | $FINAL, $field(TraceModuleVisitor, p)},
	{}
};

$MethodInfo _TraceModuleVisitor_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(TraceModuleVisitor, init$, void, $Printer*)},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(TraceModuleVisitor, init$, void, $ModuleVisitor*, $Printer*)},
	{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(TraceModuleVisitor, visitEnd, void)},
	{"visitExport", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(TraceModuleVisitor, visitExport, void, $String*, int32_t, $StringArray*)},
	{"visitMainClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TraceModuleVisitor, visitMainClass, void, $String*)},
	{"visitOpen", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(TraceModuleVisitor, visitOpen, void, $String*, int32_t, $StringArray*)},
	{"visitPackage", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TraceModuleVisitor, visitPackage, void, $String*)},
	{"visitProvide", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(TraceModuleVisitor, visitProvide, void, $String*, $StringArray*)},
	{"visitRequire", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TraceModuleVisitor, visitRequire, void, $String*, int32_t, $String*)},
	{"visitUse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TraceModuleVisitor, visitUse, void, $String*)},
	{}
};

$ClassInfo _TraceModuleVisitor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.TraceModuleVisitor",
	"jdk.internal.org.objectweb.asm.ModuleVisitor",
	nullptr,
	_TraceModuleVisitor_FieldInfo_,
	_TraceModuleVisitor_MethodInfo_
};

$Object* allocate$TraceModuleVisitor($Class* clazz) {
	return $of($alloc(TraceModuleVisitor));
}

void TraceModuleVisitor::init$($Printer* printer) {
	TraceModuleVisitor::init$(nullptr, printer);
}

void TraceModuleVisitor::init$($ModuleVisitor* moduleVisitor, $Printer* printer) {
	$ModuleVisitor::init$($Opcodes::ASM8, moduleVisitor);
	$set(this, p, printer);
}

void TraceModuleVisitor::visitMainClass($String* mainClass) {
	$nc(this->p)->visitMainClass(mainClass);
	$ModuleVisitor::visitMainClass(mainClass);
}

void TraceModuleVisitor::visitPackage($String* packaze) {
	$nc(this->p)->visitPackage(packaze);
	$ModuleVisitor::visitPackage(packaze);
}

void TraceModuleVisitor::visitRequire($String* module, int32_t access, $String* version) {
	$nc(this->p)->visitRequire(module, access, version);
	$ModuleVisitor::visitRequire(module, access, version);
}

void TraceModuleVisitor::visitExport($String* packaze, int32_t access, $StringArray* modules) {
	$nc(this->p)->visitExport(packaze, access, modules);
	$ModuleVisitor::visitExport(packaze, access, modules);
}

void TraceModuleVisitor::visitOpen($String* packaze, int32_t access, $StringArray* modules) {
	$nc(this->p)->visitOpen(packaze, access, modules);
	$ModuleVisitor::visitOpen(packaze, access, modules);
}

void TraceModuleVisitor::visitUse($String* use) {
	$nc(this->p)->visitUse(use);
	$ModuleVisitor::visitUse(use);
}

void TraceModuleVisitor::visitProvide($String* service, $StringArray* providers) {
	$nc(this->p)->visitProvide(service, providers);
	$ModuleVisitor::visitProvide(service, providers);
}

void TraceModuleVisitor::visitEnd() {
	$nc(this->p)->visitModuleEnd();
	$ModuleVisitor::visitEnd();
}

TraceModuleVisitor::TraceModuleVisitor() {
}

$Class* TraceModuleVisitor::load$($String* name, bool initialize) {
	$loadClass(TraceModuleVisitor, name, initialize, &_TraceModuleVisitor_ClassInfo_, allocate$TraceModuleVisitor);
	return class$;
}

$Class* TraceModuleVisitor::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
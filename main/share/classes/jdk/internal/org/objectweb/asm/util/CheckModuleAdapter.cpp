#include <jdk/internal/org/objectweb/asm/util/CheckModuleAdapter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/util/CheckClassAdapter.h>
#include <jdk/internal/org/objectweb/asm/util/CheckMethodAdapter.h>
#include <jdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet.h>
#include <jcpp.h>

#undef ACC_MANDATED
#undef ASM8
#undef V9
#undef ACC_STATIC_PHASE
#undef V10
#undef ACC_SYNTHETIC
#undef ACC_TRANSITIVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $CheckClassAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckClassAdapter;
using $CheckMethodAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter;
using $CheckModuleAdapter$NameSet = ::jdk::internal::org::objectweb::asm$::util::CheckModuleAdapter$NameSet;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _CheckModuleAdapter_FieldInfo_[] = {
	{"isOpen", "Z", nullptr, $PRIVATE | $FINAL, $field(CheckModuleAdapter, isOpen)},
	{"requiredModules", "Ljdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet;", nullptr, $PRIVATE | $FINAL, $field(CheckModuleAdapter, requiredModules)},
	{"exportedPackages", "Ljdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet;", nullptr, $PRIVATE | $FINAL, $field(CheckModuleAdapter, exportedPackages)},
	{"openedPackages", "Ljdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet;", nullptr, $PRIVATE | $FINAL, $field(CheckModuleAdapter, openedPackages)},
	{"usedServices", "Ljdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet;", nullptr, $PRIVATE | $FINAL, $field(CheckModuleAdapter, usedServices)},
	{"providedServices", "Ljdk/internal/org/objectweb/asm/util/CheckModuleAdapter$NameSet;", nullptr, $PRIVATE | $FINAL, $field(CheckModuleAdapter, providedServices)},
	{"classVersion", "I", nullptr, 0, $field(CheckModuleAdapter, classVersion)},
	{"visitEndCalled", "Z", nullptr, $PRIVATE, $field(CheckModuleAdapter, visitEndCalled)},
	{}
};

$MethodInfo _CheckModuleAdapter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;Z)V", nullptr, $PUBLIC, $method(static_cast<void(CheckModuleAdapter::*)($ModuleVisitor*,bool)>(&CheckModuleAdapter::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/ModuleVisitor;Z)V", nullptr, $PROTECTED, $method(static_cast<void(CheckModuleAdapter::*)(int32_t,$ModuleVisitor*,bool)>(&CheckModuleAdapter::init$))},
	{"checkVisitEndNotCalled", "()V", nullptr, $PRIVATE, $method(static_cast<void(CheckModuleAdapter::*)()>(&CheckModuleAdapter::checkVisitEndNotCalled))},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitExport", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitMainClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitOpen", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitPackage", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitProvide", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitRequire", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"visitUse", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CheckModuleAdapter_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter$NameSet", "jdk.internal.org.objectweb.asm.util.CheckModuleAdapter", "NameSet", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CheckModuleAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter",
	"jdk.internal.org.objectweb.asm.ModuleVisitor",
	nullptr,
	_CheckModuleAdapter_FieldInfo_,
	_CheckModuleAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_CheckModuleAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.util.CheckModuleAdapter$NameSet"
};

$Object* allocate$CheckModuleAdapter($Class* clazz) {
	return $of($alloc(CheckModuleAdapter));
}

void CheckModuleAdapter::init$($ModuleVisitor* moduleVisitor, bool isOpen) {
	CheckModuleAdapter::init$($Opcodes::ASM8, moduleVisitor, isOpen);
	if ($of(this)->getClass() != CheckModuleAdapter::class$) {
		$throwNew($IllegalStateException);
	}
}

void CheckModuleAdapter::init$(int32_t api, $ModuleVisitor* moduleVisitor, bool isOpen) {
	$ModuleVisitor::init$(api, moduleVisitor);
	$set(this, requiredModules, $new($CheckModuleAdapter$NameSet, "Modules requires"_s));
	$set(this, exportedPackages, $new($CheckModuleAdapter$NameSet, "Module exports"_s));
	$set(this, openedPackages, $new($CheckModuleAdapter$NameSet, "Module opens"_s));
	$set(this, usedServices, $new($CheckModuleAdapter$NameSet, "Module uses"_s));
	$set(this, providedServices, $new($CheckModuleAdapter$NameSet, "Module provides"_s));
	this->isOpen = isOpen;
}

void CheckModuleAdapter::visitMainClass($String* mainClass) {
	$CheckMethodAdapter::checkInternalName($Opcodes::V9, mainClass, "module main class"_s);
	$ModuleVisitor::visitMainClass(mainClass);
}

void CheckModuleAdapter::visitPackage($String* packaze) {
	$CheckMethodAdapter::checkInternalName($Opcodes::V9, packaze, "module package"_s);
	$ModuleVisitor::visitPackage(packaze);
}

void CheckModuleAdapter::visitRequire($String* module, int32_t access, $String* version) {
	checkVisitEndNotCalled();
	$CheckClassAdapter::checkFullyQualifiedName($Opcodes::V9, module, "required module"_s);
	$nc(this->requiredModules)->checkNameNotAlreadyDeclared(module);
	$CheckClassAdapter::checkAccess(access, (($Opcodes::ACC_STATIC_PHASE | $Opcodes::ACC_TRANSITIVE) | $Opcodes::ACC_SYNTHETIC) | $Opcodes::ACC_MANDATED);
	if (this->classVersion >= $Opcodes::V10 && $nc(module)->equals("java.base"_s) && ((int32_t)(access & (uint32_t)($Opcodes::ACC_STATIC_PHASE | $Opcodes::ACC_TRANSITIVE))) != 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid access flags: "_s, $$str(access), " java.base can not be declared ACC_TRANSITIVE or ACC_STATIC_PHASE"_s}));
	}
	$ModuleVisitor::visitRequire(module, access, version);
}

void CheckModuleAdapter::visitExport($String* packaze, int32_t access, $StringArray* modules) {
	checkVisitEndNotCalled();
	$CheckMethodAdapter::checkInternalName($Opcodes::V9, packaze, "package name"_s);
	$nc(this->exportedPackages)->checkNameNotAlreadyDeclared(packaze);
	$CheckClassAdapter::checkAccess(access, $Opcodes::ACC_SYNTHETIC | $Opcodes::ACC_MANDATED);
	if (modules != nullptr) {
		{
			$var($StringArray, arr$, modules);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, module, arr$->get(i$));
				{
					$CheckClassAdapter::checkFullyQualifiedName($Opcodes::V9, module, "module export to"_s);
				}
			}
		}
	}
	$ModuleVisitor::visitExport(packaze, access, modules);
}

void CheckModuleAdapter::visitOpen($String* packaze, int32_t access, $StringArray* modules) {
	checkVisitEndNotCalled();
	if (this->isOpen) {
		$throwNew($UnsupportedOperationException, "An open module can not use open directive"_s);
	}
	$CheckMethodAdapter::checkInternalName($Opcodes::V9, packaze, "package name"_s);
	$nc(this->openedPackages)->checkNameNotAlreadyDeclared(packaze);
	$CheckClassAdapter::checkAccess(access, $Opcodes::ACC_SYNTHETIC | $Opcodes::ACC_MANDATED);
	if (modules != nullptr) {
		{
			$var($StringArray, arr$, modules);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, module, arr$->get(i$));
				{
					$CheckClassAdapter::checkFullyQualifiedName($Opcodes::V9, module, "module open to"_s);
				}
			}
		}
	}
	$ModuleVisitor::visitOpen(packaze, access, modules);
}

void CheckModuleAdapter::visitUse($String* service) {
	checkVisitEndNotCalled();
	$CheckMethodAdapter::checkInternalName($Opcodes::V9, service, "service"_s);
	$nc(this->usedServices)->checkNameNotAlreadyDeclared(service);
	$ModuleVisitor::visitUse(service);
}

void CheckModuleAdapter::visitProvide($String* service, $StringArray* providers) {
	checkVisitEndNotCalled();
	$CheckMethodAdapter::checkInternalName($Opcodes::V9, service, "service"_s);
	$nc(this->providedServices)->checkNameNotAlreadyDeclared(service);
	if (providers == nullptr || $nc(providers)->length == 0) {
		$throwNew($IllegalArgumentException, "Providers cannot be null or empty"_s);
	}
	{
		$var($StringArray, arr$, providers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, provider, arr$->get(i$));
			{
				$CheckMethodAdapter::checkInternalName($Opcodes::V9, provider, "provider"_s);
			}
		}
	}
	$ModuleVisitor::visitProvide(service, providers);
}

void CheckModuleAdapter::visitEnd() {
	checkVisitEndNotCalled();
	this->visitEndCalled = true;
	$ModuleVisitor::visitEnd();
}

void CheckModuleAdapter::checkVisitEndNotCalled() {
	if (this->visitEndCalled) {
		$throwNew($IllegalStateException, "Cannot call a visit method after visitEnd has been called"_s);
	}
}

CheckModuleAdapter::CheckModuleAdapter() {
}

$Class* CheckModuleAdapter::load$($String* name, bool initialize) {
	$loadClass(CheckModuleAdapter, name, initialize, &_CheckModuleAdapter_ClassInfo_, allocate$CheckModuleAdapter);
	return class$;
}

$Class* CheckModuleAdapter::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
#include <jdk/internal/org/objectweb/asm/commons/ModuleRemapper.h>

#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _ModuleRemapper_FieldInfo_[] = {
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(ModuleRemapper, remapper)},
	{}
};

$MethodInfo _ModuleRemapper_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleRemapper::*)($ModuleVisitor*,$Remapper*)>(&ModuleRemapper::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/ModuleVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(static_cast<void(ModuleRemapper::*)(int32_t,$ModuleVisitor*,$Remapper*)>(&ModuleRemapper::init$))},
	{"visitExport", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitMainClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitOpen", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitPackage", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitProvide", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitRequire", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"visitUse", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModuleRemapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.ModuleRemapper",
	"jdk.internal.org.objectweb.asm.ModuleVisitor",
	nullptr,
	_ModuleRemapper_FieldInfo_,
	_ModuleRemapper_MethodInfo_
};

$Object* allocate$ModuleRemapper($Class* clazz) {
	return $of($alloc(ModuleRemapper));
}

void ModuleRemapper::init$($ModuleVisitor* moduleVisitor, $Remapper* remapper) {
	ModuleRemapper::init$($Opcodes::ASM8, moduleVisitor, remapper);
}

void ModuleRemapper::init$(int32_t api, $ModuleVisitor* moduleVisitor, $Remapper* remapper) {
	$ModuleVisitor::init$(api, moduleVisitor);
	$set(this, remapper, remapper);
}

void ModuleRemapper::visitMainClass($String* mainClass) {
	$ModuleVisitor::visitMainClass($($nc(this->remapper)->mapType(mainClass)));
}

void ModuleRemapper::visitPackage($String* packaze) {
	$ModuleVisitor::visitPackage($($nc(this->remapper)->mapPackageName(packaze)));
}

void ModuleRemapper::visitRequire($String* module, int32_t access, $String* version) {
	$ModuleVisitor::visitRequire($($nc(this->remapper)->mapModuleName(module)), access, version);
}

void ModuleRemapper::visitExport($String* packaze, int32_t access, $StringArray* modules) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, remappedModules, nullptr);
	if (modules != nullptr) {
		$assign(remappedModules, $new($StringArray, modules->length));
		for (int32_t i = 0; i < modules->length; ++i) {
			remappedModules->set(i, $($nc(this->remapper)->mapModuleName(modules->get(i))));
		}
	}
	$ModuleVisitor::visitExport($($nc(this->remapper)->mapPackageName(packaze)), access, remappedModules);
}

void ModuleRemapper::visitOpen($String* packaze, int32_t access, $StringArray* modules) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, remappedModules, nullptr);
	if (modules != nullptr) {
		$assign(remappedModules, $new($StringArray, modules->length));
		for (int32_t i = 0; i < modules->length; ++i) {
			remappedModules->set(i, $($nc(this->remapper)->mapModuleName(modules->get(i))));
		}
	}
	$ModuleVisitor::visitOpen($($nc(this->remapper)->mapPackageName(packaze)), access, remappedModules);
}

void ModuleRemapper::visitUse($String* service) {
	$ModuleVisitor::visitUse($($nc(this->remapper)->mapType(service)));
}

void ModuleRemapper::visitProvide($String* service, $StringArray* providers) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, remappedProviders, $new($StringArray, $nc(providers)->length));
	for (int32_t i = 0; i < providers->length; ++i) {
		remappedProviders->set(i, $($nc(this->remapper)->mapType(providers->get(i))));
	}
	$ModuleVisitor::visitProvide($($nc(this->remapper)->mapType(service)), remappedProviders);
}

ModuleRemapper::ModuleRemapper() {
}

$Class* ModuleRemapper::load$($String* name, bool initialize) {
	$loadClass(ModuleRemapper, name, initialize, &_ModuleRemapper_ClassInfo_, allocate$ModuleRemapper);
	return class$;
}

$Class* ModuleRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
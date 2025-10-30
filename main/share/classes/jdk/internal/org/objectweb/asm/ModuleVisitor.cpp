#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>

#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef ASM4
#undef ASM5
#undef ASM6
#undef ASM7
#undef ASM8
#undef ASM9_EXPERIMENTAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _ModuleVisitor_FieldInfo_[] = {
	{"api", "I", nullptr, $PROTECTED | $FINAL, $field(ModuleVisitor, api)},
	{"mv", "Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PROTECTED, $field(ModuleVisitor, mv)},
	{}
};

$MethodInfo _ModuleVisitor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleVisitor::*)(int32_t)>(&ModuleVisitor::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleVisitor::*)(int32_t,ModuleVisitor*)>(&ModuleVisitor::init$))},
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

$ClassInfo _ModuleVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.ModuleVisitor",
	"java.lang.Object",
	nullptr,
	_ModuleVisitor_FieldInfo_,
	_ModuleVisitor_MethodInfo_
};

$Object* allocate$ModuleVisitor($Class* clazz) {
	return $of($alloc(ModuleVisitor));
}

void ModuleVisitor::init$(int32_t api) {
	ModuleVisitor::init$(api, nullptr);
}

void ModuleVisitor::init$(int32_t api, ModuleVisitor* moduleVisitor) {
	$useLocalCurrentObjectStackCache();
	if (api != $Opcodes::ASM8 && api != $Opcodes::ASM7 && api != $Opcodes::ASM6 && api != $Opcodes::ASM5 && api != $Opcodes::ASM4 && api != $Opcodes::ASM9_EXPERIMENTAL) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported api "_s, $$str(api)}));
	}
	if (api == $Opcodes::ASM9_EXPERIMENTAL) {
		$Constants::checkAsmExperimental(this);
	}
	this->api = api;
	$set(this, mv, moduleVisitor);
}

void ModuleVisitor::visitMainClass($String* mainClass) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitMainClass(mainClass);
	}
}

void ModuleVisitor::visitPackage($String* packaze) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitPackage(packaze);
	}
}

void ModuleVisitor::visitRequire($String* module, int32_t access, $String* version) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitRequire(module, access, version);
	}
}

void ModuleVisitor::visitExport($String* packaze, int32_t access, $StringArray* modules) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitExport(packaze, access, modules);
	}
}

void ModuleVisitor::visitOpen($String* packaze, int32_t access, $StringArray* modules) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitOpen(packaze, access, modules);
	}
}

void ModuleVisitor::visitUse($String* service) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitUse(service);
	}
}

void ModuleVisitor::visitProvide($String* service, $StringArray* providers) {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitProvide(service, providers);
	}
}

void ModuleVisitor::visitEnd() {
	if (this->mv != nullptr) {
		$nc(this->mv)->visitEnd();
	}
}

ModuleVisitor::ModuleVisitor() {
}

$Class* ModuleVisitor::load$($String* name, bool initialize) {
	$loadClass(ModuleVisitor, name, initialize, &_ModuleVisitor_ClassInfo_, allocate$ModuleVisitor);
	return class$;
}

$Class* ModuleVisitor::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk
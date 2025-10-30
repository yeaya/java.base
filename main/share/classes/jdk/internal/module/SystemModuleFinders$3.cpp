#include <jdk/internal/module/SystemModuleFinders$3.h>

#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleHashes$HashSupplier = ::jdk::internal::module::ModuleHashes$HashSupplier;
using $SystemModuleFinders = ::jdk::internal::module::SystemModuleFinders;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _SystemModuleFinders$3_FieldInfo_[] = {
	{"val$hash", "[B", nullptr, $FINAL | $SYNTHETIC, $field(SystemModuleFinders$3, val$hash)},
	{}
};

$MethodInfo _SystemModuleFinders$3_MethodInfo_[] = {
	{"<init>", "([B)V", "()V", 0, $method(static_cast<void(SystemModuleFinders$3::*)($bytes*)>(&SystemModuleFinders$3::init$))},
	{"generate", "(Ljava/lang/String;)[B", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SystemModuleFinders$3_EnclosingMethodInfo_ = {
	"jdk.internal.module.SystemModuleFinders",
	"hashSupplier",
	"(Ljava/util/Map;Ljava/lang/String;)Ljdk/internal/module/ModuleHashes$HashSupplier;"
};

$InnerClassInfo _SystemModuleFinders$3_InnerClassesInfo_[] = {
	{"jdk.internal.module.SystemModuleFinders$3", nullptr, nullptr, 0},
	{"jdk.internal.module.ModuleHashes$HashSupplier", "jdk.internal.module.ModuleHashes", "HashSupplier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SystemModuleFinders$3_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.SystemModuleFinders$3",
	"java.lang.Object",
	"jdk.internal.module.ModuleHashes$HashSupplier",
	_SystemModuleFinders$3_FieldInfo_,
	_SystemModuleFinders$3_MethodInfo_,
	nullptr,
	&_SystemModuleFinders$3_EnclosingMethodInfo_,
	_SystemModuleFinders$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.SystemModuleFinders"
};

$Object* allocate$SystemModuleFinders$3($Class* clazz) {
	return $of($alloc(SystemModuleFinders$3));
}

void SystemModuleFinders$3::init$($bytes* val$hash) {
	$set(this, val$hash, val$hash);
}

$bytes* SystemModuleFinders$3::generate($String* algorithm) {
	return this->val$hash;
}

SystemModuleFinders$3::SystemModuleFinders$3() {
}

$Class* SystemModuleFinders$3::load$($String* name, bool initialize) {
	$loadClass(SystemModuleFinders$3, name, initialize, &_SystemModuleFinders$3_ClassInfo_, allocate$SystemModuleFinders$3);
	return class$;
}

$Class* SystemModuleFinders$3::class$ = nullptr;

		} // module
	} // internal
} // jdk
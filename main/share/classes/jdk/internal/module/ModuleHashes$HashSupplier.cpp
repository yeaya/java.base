#include <jdk/internal/module/ModuleHashes$HashSupplier.h>

#include <jdk/internal/module/ModuleHashes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace module {

$MethodInfo _ModuleHashes$HashSupplier_MethodInfo_[] = {
	{"generate", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleHashes$HashSupplier, generate, $bytes*, $String*)},
	{}
};

$InnerClassInfo _ModuleHashes$HashSupplier_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModuleHashes$HashSupplier", "jdk.internal.module.ModuleHashes", "HashSupplier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModuleHashes$HashSupplier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.module.ModuleHashes$HashSupplier",
	nullptr,
	nullptr,
	nullptr,
	_ModuleHashes$HashSupplier_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleHashes$HashSupplier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModuleHashes"
};

$Object* allocate$ModuleHashes$HashSupplier($Class* clazz) {
	return $of($alloc(ModuleHashes$HashSupplier));
}

$Class* ModuleHashes$HashSupplier::load$($String* name, bool initialize) {
	$loadClass(ModuleHashes$HashSupplier, name, initialize, &_ModuleHashes$HashSupplier_ClassInfo_, allocate$ModuleHashes$HashSupplier);
	return class$;
}

$Class* ModuleHashes$HashSupplier::class$ = nullptr;

		} // module
	} // internal
} // jdk
#include <jdk/internal/module/SystemModuleFinders$2.h>

#include <java/net/URI.h>
#include <jdk/internal/module/SystemModuleFinders$SystemModuleReader.h>
#include <jdk/internal/module/SystemModuleFinders.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $SystemModuleFinders$SystemModuleReader = ::jdk::internal::module::SystemModuleFinders$SystemModuleReader;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _SystemModuleFinders$2_FieldInfo_[] = {
	{"val$uri", "Ljava/net/URI;", nullptr, $FINAL | $SYNTHETIC, $field(SystemModuleFinders$2, val$uri)},
	{"val$mn", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SystemModuleFinders$2, val$mn)},
	{}
};

$MethodInfo _SystemModuleFinders$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/URI;)V", nullptr, 0, $method(SystemModuleFinders$2, init$, void, $String*, $URI*)},
	{"get", "()Ljava/lang/module/ModuleReader;", nullptr, $PUBLIC, $virtualMethod(SystemModuleFinders$2, get, $Object*)},
	{}
};

$EnclosingMethodInfo _SystemModuleFinders$2_EnclosingMethodInfo_ = {
	"jdk.internal.module.SystemModuleFinders",
	"toModuleReference",
	"(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleTarget;Ljdk/internal/module/ModuleHashes;Ljdk/internal/module/ModuleHashes$HashSupplier;Ljdk/internal/module/ModuleResolution;)Ljava/lang/module/ModuleReference;"
};

$InnerClassInfo _SystemModuleFinders$2_InnerClassesInfo_[] = {
	{"jdk.internal.module.SystemModuleFinders$2", nullptr, nullptr, 0},
	{"jdk.internal.module.ModuleHashes$HashSupplier", "jdk.internal.module.ModuleHashes", "HashSupplier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SystemModuleFinders$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.SystemModuleFinders$2",
	"java.lang.Object",
	"java.util.function.Supplier",
	_SystemModuleFinders$2_FieldInfo_,
	_SystemModuleFinders$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Supplier<Ljava/lang/module/ModuleReader;>;",
	&_SystemModuleFinders$2_EnclosingMethodInfo_,
	_SystemModuleFinders$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.SystemModuleFinders"
};

$Object* allocate$SystemModuleFinders$2($Class* clazz) {
	return $of($alloc(SystemModuleFinders$2));
}

void SystemModuleFinders$2::init$($String* val$mn, $URI* val$uri) {
	$set(this, val$mn, val$mn);
	$set(this, val$uri, val$uri);
}

$Object* SystemModuleFinders$2::get() {
	return $of($new($SystemModuleFinders$SystemModuleReader, this->val$mn, this->val$uri));
}

SystemModuleFinders$2::SystemModuleFinders$2() {
}

$Class* SystemModuleFinders$2::load$($String* name, bool initialize) {
	$loadClass(SystemModuleFinders$2, name, initialize, &_SystemModuleFinders$2_ClassInfo_, allocate$SystemModuleFinders$2);
	return class$;
}

$Class* SystemModuleFinders$2::class$ = nullptr;

		} // module
	} // internal
} // jdk
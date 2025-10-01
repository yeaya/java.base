#include <jdk/internal/module/ServicesCatalog$ServiceProvider.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jdk/internal/module/ServicesCatalog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $Objects = ::java::util::Objects;
using $ServicesCatalog = ::jdk::internal::module::ServicesCatalog;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ServicesCatalog$ServiceProvider_FieldInfo_[] = {
	{"module", "Ljava/lang/Module;", nullptr, $PRIVATE | $FINAL, $field(ServicesCatalog$ServiceProvider, module$)},
	{"providerName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServicesCatalog$ServiceProvider, providerName$)},
	{}
};

$MethodInfo _ServicesCatalog$ServiceProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ServicesCatalog$ServiceProvider::*)($Module*,$String*)>(&ServicesCatalog$ServiceProvider::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"module", "()Ljava/lang/Module;", nullptr, $PUBLIC, $method(static_cast<$Module*(ServicesCatalog$ServiceProvider::*)()>(&ServicesCatalog$ServiceProvider::module))},
	{"providerName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ServicesCatalog$ServiceProvider::*)()>(&ServicesCatalog$ServiceProvider::providerName))},
	{}
};

$InnerClassInfo _ServicesCatalog$ServiceProvider_InnerClassesInfo_[] = {
	{"jdk.internal.module.ServicesCatalog$ServiceProvider", "jdk.internal.module.ServicesCatalog", "ServiceProvider", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ServicesCatalog$ServiceProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.ServicesCatalog$ServiceProvider",
	"java.lang.Object",
	nullptr,
	_ServicesCatalog$ServiceProvider_FieldInfo_,
	_ServicesCatalog$ServiceProvider_MethodInfo_,
	nullptr,
	nullptr,
	_ServicesCatalog$ServiceProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ServicesCatalog"
};

$Object* allocate$ServicesCatalog$ServiceProvider($Class* clazz) {
	return $of($alloc(ServicesCatalog$ServiceProvider));
}

void ServicesCatalog$ServiceProvider::init$($Module* module, $String* providerName) {
	$set(this, module$, module);
	$set(this, providerName$, providerName);
}

$Module* ServicesCatalog$ServiceProvider::module() {
	return this->module$;
}

$String* ServicesCatalog$ServiceProvider::providerName() {
	return this->providerName$;
}

int32_t ServicesCatalog$ServiceProvider::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		$of(this->module$),
		$of(this->providerName$)
	}));
}

bool ServicesCatalog$ServiceProvider::equals(Object$* ob) {
	if (!($instanceOf(ServicesCatalog$ServiceProvider, ob))) {
		return false;
	}
	$var(ServicesCatalog$ServiceProvider, that, $cast(ServicesCatalog$ServiceProvider, ob));
	bool var$0 = $Objects::equals(this->module$, $nc(that)->module$);
	return var$0 && $Objects::equals(this->providerName$, $nc(that)->providerName$);
}

ServicesCatalog$ServiceProvider::ServicesCatalog$ServiceProvider() {
}

$Class* ServicesCatalog$ServiceProvider::load$($String* name, bool initialize) {
	$loadClass(ServicesCatalog$ServiceProvider, name, initialize, &_ServicesCatalog$ServiceProvider_ClassInfo_, allocate$ServicesCatalog$ServiceProvider);
	return class$;
}

$Class* ServicesCatalog$ServiceProvider::class$ = nullptr;

		} // module
	} // internal
} // jdk
#include <jdk/internal/module/ServicesCatalog$ServiceProvider.h>
#include <java/lang/Module.h>
#include <java/util/Objects.h>
#include <jdk/internal/module/ServicesCatalog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $Objects = ::java::util::Objects;

namespace jdk {
	namespace internal {
		namespace module {

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
		this->module$,
		this->providerName$
	}));
}

bool ServicesCatalog$ServiceProvider::equals(Object$* ob) {
	if (!($instanceOf(ServicesCatalog$ServiceProvider, ob))) {
		return false;
	}
	$var(ServicesCatalog$ServiceProvider, that, $cast(ServicesCatalog$ServiceProvider, ob));
	bool var$0 = $Objects::equals(this->module$, $nc(that)->module$);
	return var$0 && $Objects::equals(this->providerName$, that->providerName$);
}

ServicesCatalog$ServiceProvider::ServicesCatalog$ServiceProvider() {
}

$Class* ServicesCatalog$ServiceProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"module", "Ljava/lang/Module;", nullptr, $PRIVATE | $FINAL, $field(ServicesCatalog$ServiceProvider, module$)},
		{"providerName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServicesCatalog$ServiceProvider, providerName$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ServicesCatalog$ServiceProvider, init$, void, $Module*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ServicesCatalog$ServiceProvider, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ServicesCatalog$ServiceProvider, hashCode, int32_t)},
		{"module", "()Ljava/lang/Module;", nullptr, $PUBLIC, $method(ServicesCatalog$ServiceProvider, module, $Module*)},
		{"providerName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ServicesCatalog$ServiceProvider, providerName, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.module.ServicesCatalog$ServiceProvider", "jdk.internal.module.ServicesCatalog", "ServiceProvider", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.ServicesCatalog$ServiceProvider",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.module.ServicesCatalog"
	};
	$loadClass(ServicesCatalog$ServiceProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServicesCatalog$ServiceProvider);
	});
	return class$;
}

$Class* ServicesCatalog$ServiceProvider::class$ = nullptr;

		} // module
	} // internal
} // jdk
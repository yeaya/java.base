#include <java/time/zone/ZoneRulesProvider$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/time/zone/TzdbZoneRulesProvider.h>
#include <java/time/zone/ZoneRulesProvider.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TzdbZoneRulesProvider = ::java::time::zone::TzdbZoneRulesProvider;
using $ZoneRulesProvider = ::java::time::zone::ZoneRulesProvider;
using $List = ::java::util::List;

namespace java {
	namespace time {
		namespace zone {

void ZoneRulesProvider$1::init$($List* val$loaded) {
	$set(this, val$loaded, val$loaded);
}

$Object* ZoneRulesProvider$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, prop, $System::getProperty("java.time.zone.DefaultZoneRulesProvider"_s));
	if (prop != nullptr) {
		try {
			$Class* c = $Class::forName(prop, true, $($ClassLoader::getSystemClassLoader()));
			$load($ZoneRulesProvider);
			$var($ZoneRulesProvider, provider, $cast($ZoneRulesProvider, $ZoneRulesProvider::class$->cast($(c->newInstance()))));
			$ZoneRulesProvider::registerProvider(provider);
			$nc(this->val$loaded)->add(provider);
		} catch ($Exception& x) {
			$throwNew($Error, x);
		}
	} else {
		$ZoneRulesProvider::registerProvider($$new($TzdbZoneRulesProvider));
	}
	return nullptr;
}

ZoneRulesProvider$1::ZoneRulesProvider$1() {
}

$Class* ZoneRulesProvider$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$loaded", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(ZoneRulesProvider$1, val$loaded)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", nullptr, 0, $method(ZoneRulesProvider$1, init$, void, $List*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ZoneRulesProvider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.zone.ZoneRulesProvider",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.zone.ZoneRulesProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.zone.ZoneRulesProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.zone.ZoneRulesProvider"
	};
	$loadClass(ZoneRulesProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZoneRulesProvider$1);
	});
	return class$;
}

$Class* ZoneRulesProvider$1::class$ = nullptr;

		} // zone
	} // time
} // java
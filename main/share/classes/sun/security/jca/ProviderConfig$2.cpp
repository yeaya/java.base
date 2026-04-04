#include <sun/security/jca/ProviderConfig$2.h>
#include <java/security/Provider.h>
#include <sun/security/jca/ProviderConfig.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $ProviderConfig = ::sun::security::jca::ProviderConfig;

namespace sun {
	namespace security {
		namespace jca {

void ProviderConfig$2::init$($ProviderConfig* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProviderConfig$2::run() {
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName("apple.security.AppleProvider"_s);
		$load($Provider);
		if ($Provider::class$->isAssignableFrom(c)) {
			$var($Object, tmp, c->newInstance());
			return $of($cast($Provider, tmp));
		} else {
			return nullptr;
		}
	} catch ($Exception& ex) {
		$init($ProviderConfig);
		if ($ProviderConfig::debug != nullptr) {
			$ProviderConfig::debug->println("Error loading provider Apple"_s);
			ex->printStackTrace();
		}
		return nullptr;
	}
	$shouldNotReachHere();
}

ProviderConfig$2::ProviderConfig$2() {
}

$Class* ProviderConfig$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/jca/ProviderConfig;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jca/ProviderConfig;)V", nullptr, 0, $method(ProviderConfig$2, init$, void, $ProviderConfig*)},
		{"run", "()Ljava/security/Provider;", nullptr, $PUBLIC, $virtualMethod(ProviderConfig$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jca.ProviderConfig",
		"getProvider",
		"()Ljava/security/Provider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderConfig$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderConfig$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/Provider;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderConfig"
	};
	$loadClass(ProviderConfig$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderConfig$2);
	});
	return class$;
}

$Class* ProviderConfig$2::class$ = nullptr;

		} // jca
	} // security
} // sun
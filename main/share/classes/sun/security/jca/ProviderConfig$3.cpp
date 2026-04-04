#include <sun/security/jca/ProviderConfig$3.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <sun/security/jca/ProviderConfig$ProviderLoader.h>
#include <sun/security/jca/ProviderConfig.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $ProviderException = ::java::security::ProviderException;
using $ProviderConfig = ::sun::security::jca::ProviderConfig;
using $ProviderConfig$ProviderLoader = ::sun::security::jca::ProviderConfig$ProviderLoader;

namespace sun {
	namespace security {
		namespace jca {

void ProviderConfig$3::init$($ProviderConfig* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProviderConfig$3::run() {
	$useLocalObjectStack();
	$init($ProviderConfig);
	if ($ProviderConfig::debug != nullptr) {
		$ProviderConfig::debug->println($$str({"Loading provider "_s, this->this$0}));
	}
	try {
		$init($ProviderConfig$ProviderLoader);
		$var($Provider, p, $nc($ProviderConfig$ProviderLoader::INSTANCE)->load(this->this$0->provName));
		if (p != nullptr) {
			if (this->this$0->hasArgument()) {
				$assign(p, p->configure(this->this$0->argument));
			}
			if ($ProviderConfig::debug != nullptr) {
				$ProviderConfig::debug->println($$str({"Loaded provider "_s, $($nc(p)->getName())}));
			}
		} else {
			if ($ProviderConfig::debug != nullptr) {
				$ProviderConfig::debug->println($$str({"Error loading provider "_s, this->this$0}));
			}
			this->this$0->disableLoad();
		}
		return $of(p);
	} catch ($Exception& e) {
		if ($instanceOf($ProviderException, e)) {
			$throw(e);
		} else {
			if ($ProviderConfig::debug != nullptr) {
				$ProviderConfig::debug->println($$str({"Error loading provider "_s, this->this$0}));
				e->printStackTrace();
			}
			this->this$0->disableLoad();
			return nullptr;
		}
	} catch ($ExceptionInInitializerError& err) {
		if ($ProviderConfig::debug != nullptr) {
			$ProviderConfig::debug->println($$str({"Error loading provider "_s, this->this$0}));
			err->printStackTrace();
		}
		this->this$0->disableLoad();
		return nullptr;
	}
	$shouldNotReachHere();
}

ProviderConfig$3::ProviderConfig$3() {
}

$Class* ProviderConfig$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/jca/ProviderConfig;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jca/ProviderConfig;)V", nullptr, 0, $method(ProviderConfig$3, init$, void, $ProviderConfig*)},
		{"run", "()Ljava/security/Provider;", nullptr, $PUBLIC, $virtualMethod(ProviderConfig$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jca.ProviderConfig",
		"doLoadProvider",
		"()Ljava/security/Provider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderConfig$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderConfig$3",
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
	$loadClass(ProviderConfig$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderConfig$3);
	});
	return class$;
}

$Class* ProviderConfig$3::class$ = nullptr;

		} // jca
	} // security
} // sun
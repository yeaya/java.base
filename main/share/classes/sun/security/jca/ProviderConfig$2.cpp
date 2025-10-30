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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $ProviderConfig = ::sun::security::jca::ProviderConfig;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ProviderConfig$2_FieldInfo_[] = {
	{"this$0", "Lsun/security/jca/ProviderConfig;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$2, this$0)},
	{}
};

$MethodInfo _ProviderConfig$2_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jca/ProviderConfig;)V", nullptr, 0, $method(static_cast<void(ProviderConfig$2::*)($ProviderConfig*)>(&ProviderConfig$2::init$))},
	{"run", "()Ljava/security/Provider;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProviderConfig$2_EnclosingMethodInfo_ = {
	"sun.security.jca.ProviderConfig",
	"getProvider",
	"()Ljava/security/Provider;"
};

$InnerClassInfo _ProviderConfig$2_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderConfig$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProviderConfig$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jca.ProviderConfig$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ProviderConfig$2_FieldInfo_,
	_ProviderConfig$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/Provider;>;",
	&_ProviderConfig$2_EnclosingMethodInfo_,
	_ProviderConfig$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderConfig"
};

$Object* allocate$ProviderConfig$2($Class* clazz) {
	return $of($alloc(ProviderConfig$2));
}

void ProviderConfig$2::init$($ProviderConfig* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProviderConfig$2::run() {
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName("apple.security.AppleProvider"_s);
		$load($Provider);
		if ($Provider::class$->isAssignableFrom(c)) {
			$var($Object, tmp, $nc(c)->newInstance());
			return $of($cast($Provider, tmp));
		} else {
			return $of(nullptr);
		}
	} catch ($Exception& ex) {
		$init($ProviderConfig);
		if ($ProviderConfig::debug != nullptr) {
			$nc($ProviderConfig::debug)->println("Error loading provider Apple"_s);
			ex->printStackTrace();
		}
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

ProviderConfig$2::ProviderConfig$2() {
}

$Class* ProviderConfig$2::load$($String* name, bool initialize) {
	$loadClass(ProviderConfig$2, name, initialize, &_ProviderConfig$2_ClassInfo_, allocate$ProviderConfig$2);
	return class$;
}

$Class* ProviderConfig$2::class$ = nullptr;

		} // jca
	} // security
} // sun
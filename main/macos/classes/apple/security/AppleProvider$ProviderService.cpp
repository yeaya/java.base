#include <apple/security/AppleProvider$ProviderService.h>

#include <apple/security/AppleProvider.h>
#include <apple/security/KeychainStore.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $AppleProvider = ::apple::security::AppleProvider;
using $KeychainStore = ::apple::security::KeychainStore;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $ProviderException = ::java::security::ProviderException;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace apple {
	namespace security {

$MethodInfo _AppleProvider$ProviderService_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AppleProvider$ProviderService::*)($Provider*,$String*,$String*,$String*)>(&AppleProvider$ProviderService::init$))},
	{"newInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _AppleProvider$ProviderService_InnerClassesInfo_[] = {
	{"apple.security.AppleProvider$ProviderService", "apple.security.AppleProvider", "ProviderService", $PRIVATE | $STATIC | $FINAL},
	{"java.security.Provider$Service", "java.security.Provider", "Service", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AppleProvider$ProviderService_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"apple.security.AppleProvider$ProviderService",
	"java.security.Provider$Service",
	nullptr,
	nullptr,
	_AppleProvider$ProviderService_MethodInfo_,
	nullptr,
	nullptr,
	_AppleProvider$ProviderService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.security.AppleProvider"
};

$Object* allocate$AppleProvider$ProviderService($Class* clazz) {
	return $of($alloc(AppleProvider$ProviderService));
}

void AppleProvider$ProviderService::init$($Provider* p, $String* type, $String* algo, $String* cn) {
	$Provider$Service::init$(p, type, algo, cn, nullptr, nullptr);
}

$Object* AppleProvider$ProviderService::newInstance(Object$* ctrParamObj) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, getType());
	if (ctrParamObj != nullptr) {
		$throwNew($InvalidParameterException, $$str({"constructorParameter not used with "_s, type, " engines"_s}));
	}
	$var($String, algo, getAlgorithm());
	try {
		if ($nc(type)->equals("KeyStore"_s)) {
			if ($nc(algo)->equals("KeychainStore"_s)) {
				return $of($new($KeychainStore));
			}
		}
	} catch ($Exception& ex) {
		$throwNew($NoSuchAlgorithmException, $$str({"Error constructing "_s, type, " for "_s, algo, " using Apple"_s}), ex);
	}
	$throwNew($ProviderException, $$str({"No impl for "_s, algo, " "_s, type}));
	$shouldNotReachHere();
}

AppleProvider$ProviderService::AppleProvider$ProviderService() {
}

$Class* AppleProvider$ProviderService::load$($String* name, bool initialize) {
	$loadClass(AppleProvider$ProviderService, name, initialize, &_AppleProvider$ProviderService_ClassInfo_, allocate$AppleProvider$ProviderService);
	return class$;
}

$Class* AppleProvider$ProviderService::class$ = nullptr;

	} // security
} // apple
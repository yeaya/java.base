#include <javax/crypto/JceSecurityManager.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <javax/crypto/CryptoAllPermission.h>
#include <javax/crypto/CryptoPermission.h>
#include <javax/crypto/CryptoPermissions.h>
#include <javax/crypto/ExemptionMechanism.h>
#include <javax/crypto/JceSecurity.h>
#include <javax/crypto/JceSecurityManager$1.h>
#include <javax/crypto/ProviderVerifier.h>
#include <jcpp.h>

#undef CACHE_NULL_MARK
#undef ENGLISH
#undef INSTANCE
#undef ALG_NAME_WILDCARD

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $SecurityManager = ::java::lang::SecurityManager;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Vector = ::java::util::Vector;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $CryptoAllPermission = ::javax::crypto::CryptoAllPermission;
using $CryptoPermission = ::javax::crypto::CryptoPermission;
using $CryptoPermissions = ::javax::crypto::CryptoPermissions;
using $ExemptionMechanism = ::javax::crypto::ExemptionMechanism;
using $JceSecurity = ::javax::crypto::JceSecurity;
using $JceSecurityManager$1 = ::javax::crypto::JceSecurityManager$1;
using $ProviderVerifier = ::javax::crypto::ProviderVerifier;

namespace javax {
	namespace crypto {

$FieldInfo _JceSecurityManager_FieldInfo_[] = {
	{"defaultPolicy", "Ljavax/crypto/CryptoPermissions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurityManager, defaultPolicy)},
	{"exemptPolicy", "Ljavax/crypto/CryptoPermissions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurityManager, exemptPolicy)},
	{"allPerm", "Ljavax/crypto/CryptoAllPermission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurityManager, allPerm)},
	{"TrustedCallersCache", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurityManager, TrustedCallersCache)},
	{"exemptCache", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/net/URL;Ljavax/crypto/CryptoPermissions;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurityManager, exemptCache)},
	{"CACHE_NULL_MARK", "Ljavax/crypto/CryptoPermissions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JceSecurityManager, CACHE_NULL_MARK)},
	{"INSTANCE", "Ljavax/crypto/JceSecurityManager;", nullptr, $STATIC | $FINAL, $staticField(JceSecurityManager, INSTANCE)},
	{}
};

$MethodInfo _JceSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JceSecurityManager::*)()>(&JceSecurityManager::init$))},
	{"getAppPermissions", "(Ljava/net/URL;)Ljavax/crypto/CryptoPermissions;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CryptoPermissions*(*)($URL*)>(&JceSecurityManager::getAppPermissions))},
	{"getCryptoPermission", "(Ljava/lang/String;)Ljavax/crypto/CryptoPermission;", nullptr, 0, $method(static_cast<$CryptoPermission*(JceSecurityManager::*)($String*)>(&JceSecurityManager::getCryptoPermission))},
	{"getDefaultPermission", "(Ljava/lang/String;)Ljavax/crypto/CryptoPermission;", nullptr, $PRIVATE, $method(static_cast<$CryptoPermission*(JceSecurityManager::*)($String*)>(&JceSecurityManager::getDefaultPermission))},
	{"isCallerTrusted", "(Ljava/security/Provider;)Z", nullptr, 0, $method(static_cast<bool(JceSecurityManager::*)($Provider*)>(&JceSecurityManager::isCallerTrusted))},
	{}
};

$InnerClassInfo _JceSecurityManager_InnerClassesInfo_[] = {
	{"javax.crypto.JceSecurityManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JceSecurityManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.JceSecurityManager",
	"java.lang.SecurityManager",
	nullptr,
	_JceSecurityManager_FieldInfo_,
	_JceSecurityManager_MethodInfo_,
	nullptr,
	nullptr,
	_JceSecurityManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.crypto.JceSecurityManager$1"
};

$Object* allocate$JceSecurityManager($Class* clazz) {
	return $of($alloc(JceSecurityManager));
}

$CryptoPermissions* JceSecurityManager::defaultPolicy = nullptr;
$CryptoPermissions* JceSecurityManager::exemptPolicy = nullptr;
$CryptoAllPermission* JceSecurityManager::allPerm = nullptr;
$Vector* JceSecurityManager::TrustedCallersCache = nullptr;
$ConcurrentMap* JceSecurityManager::exemptCache = nullptr;
$CryptoPermissions* JceSecurityManager::CACHE_NULL_MARK = nullptr;
JceSecurityManager* JceSecurityManager::INSTANCE = nullptr;

void JceSecurityManager::init$() {
	$SecurityManager::init$();
}

$CryptoPermission* JceSecurityManager::getCryptoPermission($String* alg$renamed) {
	$var($String, alg, alg$renamed);
	$init($Locale);
	$assign(alg, $nc(alg)->toUpperCase($Locale::ENGLISH));
	$var($CryptoPermission, defaultPerm, getDefaultPermission(alg));
	$init($CryptoAllPermission);
	if ($equals(defaultPerm, $CryptoAllPermission::INSTANCE)) {
		return defaultPerm;
	}
	$var($ClassArray, context, getClassContext());
	$var($URL, callerCodeBase, nullptr);
	int32_t i = 0;
	for (i = 0; i < $nc(context)->length; ++i) {
		$Class* cls = context->get(i);
		$assign(callerCodeBase, $JceSecurity::getCodeBase(cls));
		if (callerCodeBase != nullptr) {
			break;
		} else {
			if ($nc($($nc(cls)->getName()))->startsWith("javax.crypto."_s)) {
				continue;
			}
			return defaultPerm;
		}
	}
	if (i == $nc(context)->length) {
		return defaultPerm;
	}
	$var($CryptoPermissions, appPerms, $cast($CryptoPermissions, $nc(JceSecurityManager::exemptCache)->get(callerCodeBase)));
	if (appPerms == nullptr) {
		$synchronized($of(this)->getClass()) {
			$assign(appPerms, $cast($CryptoPermissions, $nc(JceSecurityManager::exemptCache)->get(callerCodeBase)));
			if (appPerms == nullptr) {
				$assign(appPerms, getAppPermissions(callerCodeBase));
				$nc(JceSecurityManager::exemptCache)->putIfAbsent(callerCodeBase, (appPerms == nullptr ? JceSecurityManager::CACHE_NULL_MARK : appPerms));
			}
		}
	}
	if (appPerms == nullptr || appPerms == JceSecurityManager::CACHE_NULL_MARK) {
		return defaultPerm;
	}
	if ($nc(appPerms)->implies(JceSecurityManager::allPerm)) {
		return JceSecurityManager::allPerm;
	}
	$var($PermissionCollection, appPc, $nc(appPerms)->getPermissionCollection(alg));
	if (appPc == nullptr) {
		return defaultPerm;
	}
	$var($Enumeration, enum_, $nc(appPc)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($CryptoPermission, cp, $cast($CryptoPermission, enum_->nextElement()));
		if ($nc(cp)->getExemptionMechanism() == nullptr) {
			return cp;
		}
	}
	$var($PermissionCollection, exemptPc, $nc(JceSecurityManager::exemptPolicy)->getPermissionCollection(alg));
	if (exemptPc == nullptr) {
		return defaultPerm;
	}
	$assign(enum_, $nc(exemptPc)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($CryptoPermission, cp, $cast($CryptoPermission, enum_->nextElement()));
		try {
			$ExemptionMechanism::getInstance($($nc(cp)->getExemptionMechanism()));
			if ($nc($($nc(cp)->getAlgorithm()))->equals($CryptoPermission::ALG_NAME_WILDCARD)) {
				$var($CryptoPermission, newCp, nullptr);
				if (cp->getCheckParam()) {
					$var($String, var$0, alg);
					int32_t var$1 = cp->getMaxKeySize();
					$var($AlgorithmParameterSpec, var$2, cp->getAlgorithmParameterSpec());
					$assign(newCp, $new($CryptoPermission, var$0, var$1, var$2, $(cp->getExemptionMechanism())));
				} else {
					$var($String, var$3, alg);
					int32_t var$4 = cp->getMaxKeySize();
					$assign(newCp, $new($CryptoPermission, var$3, var$4, $(cp->getExemptionMechanism())));
				}
				if (appPerms->implies(newCp)) {
					return newCp;
				}
			}
			if (appPerms->implies(cp)) {
				return cp;
			}
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			continue;
		}
	}
	return defaultPerm;
}

$CryptoPermissions* JceSecurityManager::getAppPermissions($URL* callerCodeBase) {
	$init(JceSecurityManager);
	try {
		return $JceSecurity::verifyExemptJar(callerCodeBase);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$CryptoPermission* JceSecurityManager::getDefaultPermission($String* alg) {
	$var($Enumeration, enum_, $nc($($nc(JceSecurityManager::defaultPolicy)->getPermissionCollection(alg)))->elements());
	return $cast($CryptoPermission, $nc(enum_)->nextElement());
}

bool JceSecurityManager::isCallerTrusted($Provider* provider$renamed) {
	$var($Provider, provider, provider$renamed);
	$var($ClassArray, context, getClassContext());
	if ($nc(context)->length >= 3) {
		$Class* caller = context->get(2);
		$var($URL, callerCodeBase, $JceSecurity::getCodeBase(caller));
		if (callerCodeBase == nullptr) {
			return true;
		}
		if ($nc(JceSecurityManager::TrustedCallersCache)->contains(caller)) {
			return true;
		}
		$Class* pCls = $nc($of(provider))->getClass();
		$var($Module, pMod, $nc(pCls)->getModule());
		bool sameOrigin = ($nc(pMod)->isNamed() ? $nc($of($($nc(caller)->getModule())))->equals(pMod) : $nc(callerCodeBase)->equals($($JceSecurity::getCodeBase(pCls))));
		if (sameOrigin) {
			if ($ProviderVerifier::isTrustedCryptoProvider(provider)) {
				$nc(JceSecurityManager::TrustedCallersCache)->addElement(caller);
				return true;
			}
		} else {
			$assign(provider, nullptr);
		}
		try {
			$JceSecurity::verifyProvider(callerCodeBase, provider);
		} catch ($Exception&) {
			$var($Exception, e2, $catch());
			return false;
		}
		$nc(JceSecurityManager::TrustedCallersCache)->addElement(caller);
		return true;
	}
	return false;
}

void clinit$JceSecurityManager($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(JceSecurityManager::TrustedCallersCache, $new($Vector, 2));
	$assignStatic(JceSecurityManager::exemptCache, $new($ConcurrentHashMap));
	$assignStatic(JceSecurityManager::CACHE_NULL_MARK, $new($CryptoPermissions));
	{
		$assignStatic(JceSecurityManager::defaultPolicy, $JceSecurity::getDefaultPolicy());
		$assignStatic(JceSecurityManager::exemptPolicy, $JceSecurity::getExemptPolicy());
		$init($CryptoAllPermission);
		$assignStatic(JceSecurityManager::allPerm, $CryptoAllPermission::INSTANCE);
		$assignStatic(JceSecurityManager::INSTANCE, $cast(JceSecurityManager, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JceSecurityManager$1)))));
	}
}

JceSecurityManager::JceSecurityManager() {
}

$Class* JceSecurityManager::load$($String* name, bool initialize) {
	$loadClass(JceSecurityManager, name, initialize, &_JceSecurityManager_ClassInfo_, clinit$JceSecurityManager, allocate$JceSecurityManager);
	return class$;
}

$Class* JceSecurityManager::class$ = nullptr;

	} // crypto
} // javax
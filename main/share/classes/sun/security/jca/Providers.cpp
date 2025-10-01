#include <sun/security/jca/Providers.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <sun/security/jca/JCAUtil.h>
#include <sun/security/jca/ProviderList.h>
#include <sun/security/provider/Sun.h>
#include <sun/security/provider/VerificationProvider.h>
#include <sun/security/util/Debug.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef EMPTY

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Provider = ::java::security::Provider;
using $JCAUtil = ::sun::security::jca::JCAUtil;
using $ProviderList = ::sun::security::jca::ProviderList;
using $Sun = ::sun::security::provider::Sun;
using $VerificationProvider = ::sun::security::provider::VerificationProvider;
using $Debug = ::sun::security::util::Debug;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _Providers_FieldInfo_[] = {
	{"threadLists", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lsun/security/jca/ProviderList;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Providers, threadLists)},
	{"threadListsUsed", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Providers, threadListsUsed)},
	{"providerList", "Lsun/security/jca/ProviderList;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Providers, providerList)},
	{"jarVerificationProviders", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Providers, jarVerificationProviders)},
	{}
};

$MethodInfo _Providers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Providers::*)()>(&Providers::init$))},
	{"beginThreadProviderList", "(Lsun/security/jca/ProviderList;)Lsun/security/jca/ProviderList;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$ProviderList*(*)($ProviderList*)>(&Providers::beginThreadProviderList))},
	{"changeThreadProviderList", "(Lsun/security/jca/ProviderList;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProviderList*)>(&Providers::changeThreadProviderList))},
	{"clearCachedValues", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Providers::clearCachedValues))},
	{"endThreadProviderList", "(Lsun/security/jca/ProviderList;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($ProviderList*)>(&Providers::endThreadProviderList))},
	{"getFullProviderList", "()Lsun/security/jca/ProviderList;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProviderList*(*)()>(&Providers::getFullProviderList))},
	{"getProviderList", "()Lsun/security/jca/ProviderList;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProviderList*(*)()>(&Providers::getProviderList))},
	{"getSunProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Provider*(*)()>(&Providers::getSunProvider))},
	{"getSystemProviderList", "()Lsun/security/jca/ProviderList;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ProviderList*(*)()>(&Providers::getSystemProviderList))},
	{"getThreadProviderList", "()Lsun/security/jca/ProviderList;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProviderList*(*)()>(&Providers::getThreadProviderList))},
	{"setProviderList", "(Lsun/security/jca/ProviderList;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ProviderList*)>(&Providers::setProviderList))},
	{"setSystemProviderList", "(Lsun/security/jca/ProviderList;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ProviderList*)>(&Providers::setSystemProviderList))},
	{"startJarVerification", "()Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)()>(&Providers::startJarVerification))},
	{"stopJarVerification", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(Object$*)>(&Providers::stopJarVerification))},
	{}
};

$ClassInfo _Providers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.jca.Providers",
	"java.lang.Object",
	nullptr,
	_Providers_FieldInfo_,
	_Providers_MethodInfo_
};

$Object* allocate$Providers($Class* clazz) {
	return $of($alloc(Providers));
}

$ThreadLocal* Providers::threadLists = nullptr;
$volatile(int32_t) Providers::threadListsUsed = 0;
$volatile($ProviderList*) Providers::providerList = nullptr;
$StringArray* Providers::jarVerificationProviders = nullptr;

void Providers::init$() {
}

$Provider* Providers::getSunProvider() {
	$init(Providers);
	return $new($Sun);
}

$Object* Providers::startJarVerification() {
	$init(Providers);
	$var($ProviderList, currentList, getProviderList());
	$var($ProviderList, jarList, $nc(currentList)->getJarList(Providers::jarVerificationProviders));
	if ($nc(jarList)->getProvider("SUN"_s) == nullptr) {
		$var($Provider, p, nullptr);
		try {
			$assign(p, $new($VerificationProvider));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($RuntimeException, "Missing provider for jar verification"_s, e);
		}
		$ProviderList::add(jarList, p);
	}
	return $of(beginThreadProviderList(jarList));
}

void Providers::stopJarVerification(Object$* obj) {
	$init(Providers);
	endThreadProviderList($cast($ProviderList, obj));
}

$ProviderList* Providers::getProviderList() {
	$init(Providers);
	$var($ProviderList, list, getThreadProviderList());
	if (list == nullptr) {
		$assign(list, getSystemProviderList());
	}
	return list;
}

void Providers::setProviderList($ProviderList* newList) {
	$init(Providers);
	if (getThreadProviderList() == nullptr) {
		setSystemProviderList(newList);
	} else {
		changeThreadProviderList(newList);
	}
	clearCachedValues();
}

void Providers::clearCachedValues() {
	$init(Providers);
	$JCAUtil::clearDefSecureRandom();
	$AlgorithmId::clearAliasOidsTable();
}

$ProviderList* Providers::getFullProviderList() {
	$init(Providers);
	$var($ProviderList, list, nullptr);
	$synchronized(Providers::class$) {
		$assign(list, getThreadProviderList());
		if (list != nullptr) {
			$var($ProviderList, newList, list->removeInvalid());
			if (newList != list) {
				changeThreadProviderList(newList);
				$assign(list, newList);
			}
			return list;
		}
	}
	$assign(list, getSystemProviderList());
	$var($ProviderList, newList, $nc(list)->removeInvalid());
	if (newList != list) {
		setSystemProviderList(newList);
		$assign(list, newList);
	}
	return list;
}

$ProviderList* Providers::getSystemProviderList() {
	$init(Providers);
	return Providers::providerList;
}

void Providers::setSystemProviderList($ProviderList* list) {
	$init(Providers);
	$assignStatic(Providers::providerList, list);
}

$ProviderList* Providers::getThreadProviderList() {
	$init(Providers);
	if (Providers::threadListsUsed == 0) {
		return nullptr;
	}
	return $cast($ProviderList, $nc(Providers::threadLists)->get());
}

void Providers::changeThreadProviderList($ProviderList* list) {
	$init(Providers);
	$nc(Providers::threadLists)->set(list);
}

$ProviderList* Providers::beginThreadProviderList($ProviderList* list) {
	$load(Providers);
	$synchronized(class$) {
		$init(Providers);
		$init($ProviderList);
		if ($ProviderList::debug != nullptr) {
			$nc($ProviderList::debug)->println($$str({"ThreadLocal providers: "_s, list}));
		}
		$var($ProviderList, oldList, $cast($ProviderList, $nc(Providers::threadLists)->get()));
		++Providers::threadListsUsed;
		$nc(Providers::threadLists)->set(list);
		return oldList;
	}
}

void Providers::endThreadProviderList($ProviderList* list) {
	$load(Providers);
	$synchronized(class$) {
		$init(Providers);
		if (list == nullptr) {
			$init($ProviderList);
			if ($ProviderList::debug != nullptr) {
				$nc($ProviderList::debug)->println("Disabling ThreadLocal providers"_s);
			}
			$nc(Providers::threadLists)->remove();
		} else {
			$init($ProviderList);
			if ($ProviderList::debug != nullptr) {
				$nc($ProviderList::debug)->println($$str({"Restoring previous ThreadLocal providers: "_s, list}));
			}
			$nc(Providers::threadLists)->set(list);
		}
		--Providers::threadListsUsed;
	}
}

void clinit$Providers($Class* class$) {
	$assignStatic(Providers::threadLists, $new($ThreadLocal));
	{
		$init($ProviderList);
		$assignStatic(Providers::providerList, $ProviderList::EMPTY);
		$assignStatic(Providers::providerList, $ProviderList::fromSecurityProperties());
	}
	$assignStatic(Providers::jarVerificationProviders, $new($StringArray, {
		"SUN"_s,
		"SunRsaSign"_s,
		"SunEC"_s,
		"SunJCE"_s
	}));
}

Providers::Providers() {
}

$Class* Providers::load$($String* name, bool initialize) {
	$loadClass(Providers, name, initialize, &_Providers_ClassInfo_, clinit$Providers, allocate$Providers);
	return class$;
}

$Class* Providers::class$ = nullptr;

		} // jca
	} // security
} // sun
#include <sun/security/jca/GetInstance.h>

#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/ProviderList.h>
#include <sun/security/jca/Providers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;
using $ProviderList = ::sun::security::jca::ProviderList;
using $Providers = ::sun::security::jca::Providers;

namespace sun {
	namespace security {
		namespace jca {

$CompoundAttribute _GetInstance_MethodAnnotations_getServices14[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _GetInstance_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GetInstance::*)()>(&GetInstance::init$))},
	{"checkSuperClass", "(Ljava/security/Provider$Service;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/security/Provider$Service;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Provider$Service*,$Class*,$Class*)>(&GetInstance::checkSuperClass)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*)>(&GetInstance::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*,Object$*)>(&GetInstance::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*,$String*)>(&GetInstance::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*,Object$*,$String*)>(&GetInstance::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*,$Provider*)>(&GetInstance::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $method(static_cast<$GetInstance$Instance*(*)($String*,$Class*,$String*,Object$*,$Provider*)>(&GetInstance::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/security/Provider$Service;Ljava/lang/Class;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/security/Provider$Service;Ljava/lang/Class<*>;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $method(static_cast<$GetInstance$Instance*(*)($Provider$Service*,$Class*)>(&GetInstance::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/security/Provider$Service;Ljava/lang/Class;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/security/Provider$Service;Ljava/lang/Class<*>;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $method(static_cast<$GetInstance$Instance*(*)($Provider$Service*,$Class*,Object$*)>(&GetInstance::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getService", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Provider$Service*(*)($String*,$String*)>(&GetInstance::getService)), "java.security.NoSuchAlgorithmException"},
	{"getService", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Provider$Service*(*)($String*,$String*,$String*)>(&GetInstance::getService)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getService", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Provider$Service;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Provider$Service*(*)($String*,$String*,$Provider*)>(&GetInstance::getService)), "java.security.NoSuchAlgorithmException"},
	{"getServices", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List<Ljava/security/Provider$Service;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($String*,$String*)>(&GetInstance::getServices))},
	{"getServices", "(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Ljava/security/Provider$Service;>;", $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$List*(*)($String*,$List*)>(&GetInstance::getServices)), nullptr, nullptr, _GetInstance_MethodAnnotations_getServices14},
	{"getServices", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Lsun/security/jca/ServiceId;>;)Ljava/util/List<Ljava/security/Provider$Service;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($List*)>(&GetInstance::getServices))},
	{}
};

$InnerClassInfo _GetInstance_InnerClassesInfo_[] = {
	{"sun.security.jca.GetInstance$Instance", "sun.security.jca.GetInstance", "Instance", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GetInstance_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.jca.GetInstance",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetInstance_MethodInfo_,
	nullptr,
	nullptr,
	_GetInstance_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.jca.GetInstance$Instance"
};

$Object* allocate$GetInstance($Class* clazz) {
	return $of($alloc(GetInstance));
}

void GetInstance::init$() {
}

$Provider$Service* GetInstance::getService($String* type, $String* algorithm) {
	$useLocalCurrentObjectStackCache();
	$var($ProviderList, list, $Providers::getProviderList());
	$var($Provider$Service, s, $nc(list)->getService(type, algorithm));
	if (s == nullptr) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " "_s, type, " not available"_s}));
	}
	return s;
}

$Provider$Service* GetInstance::getService($String* type, $String* algorithm, $String* provider) {
	$useLocalCurrentObjectStackCache();
	if (provider == nullptr || $nc(provider)->isEmpty()) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var($Provider, p, $nc($($Providers::getProviderList()))->getProvider(provider));
	if (p == nullptr) {
		$throwNew($NoSuchProviderException, $$str({"no such provider: "_s, provider}));
	}
	$var($Provider$Service, s, $nc(p)->getService(type, algorithm));
	if (s == nullptr) {
		$throwNew($NoSuchAlgorithmException, $$str({"no such algorithm: "_s, algorithm, " for provider "_s, provider}));
	}
	return s;
}

$Provider$Service* GetInstance::getService($String* type, $String* algorithm, $Provider* provider) {
	$useLocalCurrentObjectStackCache();
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var($Provider$Service, s, $nc(provider)->getService(type, algorithm));
	if (s == nullptr) {
		$throwNew($NoSuchAlgorithmException, $$str({"no such algorithm: "_s, algorithm, " for provider "_s, $(provider->getName())}));
	}
	return s;
}

$List* GetInstance::getServices($String* type, $String* algorithm) {
	$var($ProviderList, list, $Providers::getProviderList());
	return $nc(list)->getServices(type, algorithm);
}

$List* GetInstance::getServices($String* type, $List* algorithms) {
	$var($ProviderList, list, $Providers::getProviderList());
	return $nc(list)->getServices(type, algorithms);
}

$List* GetInstance::getServices($List* ids) {
	$var($ProviderList, list, $Providers::getProviderList());
	return $nc(list)->getServices(ids);
}

$GetInstance$Instance* GetInstance::getInstance($String* type, $Class* clazz, $String* algorithm) {
	$useLocalCurrentObjectStackCache();
	$var($ProviderList, list, $Providers::getProviderList());
	$var($Provider$Service, firstService, $nc(list)->getService(type, algorithm));
	if (firstService == nullptr) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " "_s, type, " not available"_s}));
	}
	$var($NoSuchAlgorithmException, failure, nullptr);
	try {
		return getInstance(firstService, clazz);
	} catch ($NoSuchAlgorithmException& e) {
		$assign(failure, e);
	}
	{
		$var($Iterator, i$, $nc($(list->getServices(type, algorithm)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Provider$Service, s, $cast($Provider$Service, i$->next()));
			{
				if (s == firstService) {
					continue;
				}
				try {
					return getInstance(s, clazz);
				} catch ($NoSuchAlgorithmException& e) {
					$assign(failure, e);
				}
			}
		}
	}
	$throw(failure);
	$shouldNotReachHere();
}

$GetInstance$Instance* GetInstance::getInstance($String* type, $Class* clazz, $String* algorithm, Object$* param) {
	$useLocalCurrentObjectStackCache();
	$var($List, services, getServices(type, algorithm));
	$var($NoSuchAlgorithmException, failure, nullptr);
	{
		$var($Iterator, i$, $nc(services)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Provider$Service, s, $cast($Provider$Service, i$->next()));
			{
				try {
					return getInstance(s, clazz, param);
				} catch ($NoSuchAlgorithmException& e) {
					$assign(failure, e);
				}
			}
		}
	}
	if (failure != nullptr) {
		$throw(failure);
	} else {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " "_s, type, " not available"_s}));
	}
	$shouldNotReachHere();
}

$GetInstance$Instance* GetInstance::getInstance($String* type, $Class* clazz, $String* algorithm, $String* provider) {
	return getInstance($(getService(type, algorithm, provider)), clazz);
}

$GetInstance$Instance* GetInstance::getInstance($String* type, $Class* clazz, $String* algorithm, Object$* param, $String* provider) {
	return getInstance($(getService(type, algorithm, provider)), clazz, param);
}

$GetInstance$Instance* GetInstance::getInstance($String* type, $Class* clazz, $String* algorithm, $Provider* provider) {
	return getInstance($(getService(type, algorithm, provider)), clazz);
}

$GetInstance$Instance* GetInstance::getInstance($String* type, $Class* clazz, $String* algorithm, Object$* param, $Provider* provider) {
	return getInstance($(getService(type, algorithm, provider)), clazz, param);
}

$GetInstance$Instance* GetInstance::getInstance($Provider$Service* s, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($Object, instance, $nc(s)->newInstance(nullptr));
	checkSuperClass(s, $nc($of(instance))->getClass(), clazz);
	return $new($GetInstance$Instance, $(s->getProvider()), instance);
}

$GetInstance$Instance* GetInstance::getInstance($Provider$Service* s, $Class* clazz, Object$* param) {
	$useLocalCurrentObjectStackCache();
	$var($Object, instance, $nc(s)->newInstance(param));
	checkSuperClass(s, $nc($of(instance))->getClass(), clazz);
	return $new($GetInstance$Instance, $(s->getProvider()), instance);
}

void GetInstance::checkSuperClass($Provider$Service* s, $Class* subClass, $Class* superClass) {
	$useLocalCurrentObjectStackCache();
	if (superClass == nullptr) {
		return;
	}
	if ($nc(superClass)->isAssignableFrom(subClass) == false) {
		$var($String, var$2, $$str({"class configured for "_s, $($nc(s)->getType()), ": "_s}));
		$var($String, var$1, $$concat(var$2, $(s->getClassName())));
		$var($String, var$0, $$concat(var$1, " not a "));
		$throwNew($NoSuchAlgorithmException, $$concat(var$0, $(s->getType())));
	}
}

GetInstance::GetInstance() {
}

$Class* GetInstance::load$($String* name, bool initialize) {
	$loadClass(GetInstance, name, initialize, &_GetInstance_ClassInfo_, allocate$GetInstance);
	return class$;
}

$Class* GetInstance::class$ = nullptr;

		} // jca
	} // security
} // sun
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

void GetInstance::init$() {
}

$Provider$Service* GetInstance::getService($String* type, $String* algorithm) {
	$useLocalObjectStack();
	$var($ProviderList, list, $Providers::getProviderList());
	$var($Provider$Service, s, $nc(list)->getService(type, algorithm));
	if (s == nullptr) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " "_s, type, " not available"_s}));
	}
	return s;
}

$Provider$Service* GetInstance::getService($String* type, $String* algorithm, $String* provider) {
	$useLocalObjectStack();
	if (provider == nullptr || provider->isEmpty()) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var($Provider, p, $$nc($Providers::getProviderList())->getProvider(provider));
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
	$useLocalObjectStack();
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
	$useLocalObjectStack();
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
		$var($Iterator, i$, $$nc(list->getServices(type, algorithm))->iterator());
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
	$useLocalObjectStack();
	$var($List, services, getServices(type, algorithm));
	$var($NoSuchAlgorithmException, failure, nullptr);
	{
		$var($Iterator, i$, $nc(services)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Provider$Service, s, $cast($Provider$Service, i$->next()));
			try {
				return getInstance(s, clazz, param);
			} catch ($NoSuchAlgorithmException& e) {
				$assign(failure, e);
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
	$useLocalObjectStack();
	$var($Object, instance, $nc(s)->newInstance(nullptr));
	checkSuperClass(s, $nc(instance)->getClass(), clazz);
	return $new($GetInstance$Instance, $(s->getProvider()), instance);
}

$GetInstance$Instance* GetInstance::getInstance($Provider$Service* s, $Class* clazz, Object$* param) {
	$useLocalObjectStack();
	$var($Object, instance, $nc(s)->newInstance(param));
	checkSuperClass(s, $nc(instance)->getClass(), clazz);
	return $new($GetInstance$Instance, $(s->getProvider()), instance);
}

void GetInstance::checkSuperClass($Provider$Service* s, $Class* subClass, $Class* superClass) {
	$useLocalObjectStack();
	if (superClass == nullptr) {
		return;
	}
	if ($nc(superClass)->isAssignableFrom(subClass) == false) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("class configured for "_s);
		var$0->append($($nc(s)->getType()));
		var$0->append(": "_s);
		var$0->append($(s->getClassName()));
		var$0->append(" not a "_s);
		var$0->append($(s->getType()));
		$throwNew($NoSuchAlgorithmException, $$str(var$0));
	}
}

GetInstance::GetInstance() {
}

$Class* GetInstance::load$($String* name, bool initialize) {
	$CompoundAttribute getServicesmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GetInstance, init$, void)},
		{"checkSuperClass", "(Ljava/security/Provider$Service;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/security/Provider$Service;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $staticMethod(GetInstance, checkSuperClass, void, $Provider$Service*, $Class*, $Class*), "java.security.NoSuchAlgorithmException"},
		{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getInstance, $GetInstance$Instance*, $String*, $Class*, $String*), "java.security.NoSuchAlgorithmException"},
		{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getInstance, $GetInstance$Instance*, $String*, $Class*, $String*, Object$*), "java.security.NoSuchAlgorithmException"},
		{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getInstance, $GetInstance$Instance*, $String*, $Class*, $String*, $String*), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
		{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getInstance, $GetInstance$Instance*, $String*, $Class*, $String*, Object$*, $String*), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
		{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getInstance, $GetInstance$Instance*, $String*, $Class*, $String*, $Provider*), "java.security.NoSuchAlgorithmException"},
		{"getInstance", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getInstance, $GetInstance$Instance*, $String*, $Class*, $String*, Object$*, $Provider*), "java.security.NoSuchAlgorithmException"},
		{"getInstance", "(Ljava/security/Provider$Service;Ljava/lang/Class;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/security/Provider$Service;Ljava/lang/Class<*>;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getInstance, $GetInstance$Instance*, $Provider$Service*, $Class*), "java.security.NoSuchAlgorithmException"},
		{"getInstance", "(Ljava/security/Provider$Service;Ljava/lang/Class;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;", "(Ljava/security/Provider$Service;Ljava/lang/Class<*>;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getInstance, $GetInstance$Instance*, $Provider$Service*, $Class*, Object$*), "java.security.NoSuchAlgorithmException"},
		{"getService", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;", nullptr, $PUBLIC | $STATIC, $staticMethod(GetInstance, getService, $Provider$Service*, $String*, $String*), "java.security.NoSuchAlgorithmException"},
		{"getService", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;", nullptr, $PUBLIC | $STATIC, $staticMethod(GetInstance, getService, $Provider$Service*, $String*, $String*, $String*), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
		{"getService", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Provider$Service;", nullptr, $PUBLIC | $STATIC, $staticMethod(GetInstance, getService, $Provider$Service*, $String*, $String*, $Provider*), "java.security.NoSuchAlgorithmException"},
		{"getServices", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List<Ljava/security/Provider$Service;>;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getServices, $List*, $String*, $String*)},
		{"getServices", "(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Ljava/security/Provider$Service;>;", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(GetInstance, getServices, $List*, $String*, $List*), nullptr, nullptr, getServicesmethodAnnotations$$$1},
		{"getServices", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Lsun/security/jca/ServiceId;>;)Ljava/util/List<Ljava/security/Provider$Service;>;", $PUBLIC | $STATIC, $staticMethod(GetInstance, getServices, $List*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.GetInstance$Instance", "sun.security.jca.GetInstance", "Instance", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.jca.GetInstance",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.jca.GetInstance$Instance"
	};
	$loadClass(GetInstance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetInstance);
	});
	return class$;
}

$Class* GetInstance::class$ = nullptr;

		} // jca
	} // security
} // sun
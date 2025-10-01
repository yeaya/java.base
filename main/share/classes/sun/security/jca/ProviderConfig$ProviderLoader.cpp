#include <sun/security/jca/ProviderConfig$ProviderLoader.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/LinkageError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <sun/security/jca/ProviderConfig$ProviderLoader$1.h>
#include <sun/security/jca/ProviderConfig.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessController = ::java::security::AccessController;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Provider = ::java::security::Provider;
using $ProviderException = ::java::security::ProviderException;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ProviderConfig = ::sun::security::jca::ProviderConfig;
using $ProviderConfig$ProviderLoader$1 = ::sun::security::jca::ProviderConfig$ProviderLoader$1;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ProviderConfig$ProviderLoader_FieldInfo_[] = {
	{"INSTANCE", "Lsun/security/jca/ProviderConfig$ProviderLoader;", nullptr, $STATIC | $FINAL, $staticField(ProviderConfig$ProviderLoader, INSTANCE)},
	{"services", "Ljava/util/ServiceLoader;", "Ljava/util/ServiceLoader<Ljava/security/Provider;>;", $PRIVATE | $FINAL, $field(ProviderConfig$ProviderLoader, services)},
	{}
};

$MethodInfo _ProviderConfig$ProviderLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProviderConfig$ProviderLoader::*)()>(&ProviderConfig$ProviderLoader::init$))},
	{"legacyLoad", "(Ljava/lang/String;)Ljava/security/Provider;", nullptr, $PRIVATE, $method(static_cast<$Provider*(ProviderConfig$ProviderLoader::*)($String*)>(&ProviderConfig$ProviderLoader::legacyLoad))},
	{"load", "(Ljava/lang/String;)Ljava/security/Provider;", nullptr, $PUBLIC, $method(static_cast<$Provider*(ProviderConfig$ProviderLoader::*)($String*)>(&ProviderConfig$ProviderLoader::load))},
	{}
};

$InnerClassInfo _ProviderConfig$ProviderLoader_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderConfig$ProviderLoader", "sun.security.jca.ProviderConfig", "ProviderLoader", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.jca.ProviderConfig$ProviderLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProviderConfig$ProviderLoader_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.jca.ProviderConfig$ProviderLoader",
	"java.lang.Object",
	nullptr,
	_ProviderConfig$ProviderLoader_FieldInfo_,
	_ProviderConfig$ProviderLoader_MethodInfo_,
	nullptr,
	nullptr,
	_ProviderConfig$ProviderLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderConfig"
};

$Object* allocate$ProviderConfig$ProviderLoader($Class* clazz) {
	return $of($alloc(ProviderConfig$ProviderLoader));
}

ProviderConfig$ProviderLoader* ProviderConfig$ProviderLoader::INSTANCE = nullptr;

void ProviderConfig$ProviderLoader::init$() {
	$beforeCallerSensitive();
	$load($Provider);
	$set(this, services, $ServiceLoader::load($Provider::class$, $($ClassLoader::getSystemClassLoader())));
}

$Provider* ProviderConfig$ProviderLoader::load($String* pn) {
	$init($ProviderConfig);
	if ($ProviderConfig::debug != nullptr) {
		$nc($ProviderConfig::debug)->println($$str({"Attempt to load "_s, pn, " using SL"_s}));
	}
	$var($Iterator, iter, $nc(this->services)->iterator());
	while ($nc(iter)->hasNext()) {
		try {
			$var($Provider, p, $cast($Provider, iter->next()));
			$var($String, pName, $nc(p)->getName());
			if ($ProviderConfig::debug != nullptr) {
				$nc($ProviderConfig::debug)->println($$str({"Found SL Provider named "_s, pName}));
			}
			if ($nc(pName)->equals(pn)) {
				return p;
			}
		} catch ($SecurityException&) {
			$var($Throwable, ex, $catch());
			if ($ProviderConfig::debug != nullptr) {
				$nc($ProviderConfig::debug)->println($$str({"Encountered "_s, ex, " while iterating through SL, ignore and move on"_s}));
				ex->printStackTrace();
			}
		} catch ($ServiceConfigurationError&) {
			$var($Throwable, ex, $catch());
			if ($ProviderConfig::debug != nullptr) {
				$nc($ProviderConfig::debug)->println($$str({"Encountered "_s, ex, " while iterating through SL, ignore and move on"_s}));
				ex->printStackTrace();
			}
		} catch ($InvalidParameterException&) {
			$var($Throwable, ex, $catch());
			if ($ProviderConfig::debug != nullptr) {
				$nc($ProviderConfig::debug)->println($$str({"Encountered "_s, ex, " while iterating through SL, ignore and move on"_s}));
				ex->printStackTrace();
			}
		}
	}
	try {
		return legacyLoad(pn);
	} catch ($ProviderException&) {
		$var($ProviderException, pe, $catch());
		$throw(pe);
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		if ($ProviderConfig::debug != nullptr) {
			$nc($ProviderConfig::debug)->println($$str({"Encountered "_s, ex, " during legacy load of "_s, pn}));
			ex->printStackTrace();
		}
		return nullptr;
	}
	$shouldNotReachHere();
}

$Provider* ProviderConfig$ProviderLoader::legacyLoad($String* classname) {
	$beforeCallerSensitive();
	$init($ProviderConfig);
	if ($ProviderConfig::debug != nullptr) {
		$nc($ProviderConfig::debug)->println($$str({"Loading legacy provider: "_s, classname}));
	}
	try {
		$Class* provClass = $nc($($ClassLoader::getSystemClassLoader()))->loadClass(classname);
		$load($Provider);
		if (!$Provider::class$->isAssignableFrom(provClass)) {
			if ($ProviderConfig::debug != nullptr) {
				$nc($ProviderConfig::debug)->println($$str({classname, " is not a provider"_s}));
			}
			return nullptr;
		}
		$var($Provider, p, $cast($Provider, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ProviderConfig$ProviderLoader$1, this, provClass)))));
		return p;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($Throwable, t, nullptr);
		if ($instanceOf($InvocationTargetException, e)) {
			$assign(t, $nc(($cast($InvocationTargetException, e)))->getCause());
		} else {
			$assign(t, e);
		}
		if ($ProviderConfig::debug != nullptr) {
			$nc($ProviderConfig::debug)->println($$str({"Error loading legacy provider "_s, classname}));
			$nc(t)->printStackTrace();
		}
		if ($instanceOf($ProviderException, t)) {
			$throw($cast($ProviderException, t));
		}
		return nullptr;
	} catch ($ExceptionInInitializerError&) {
		$var($LinkageError, err, $catch());
		if ($ProviderConfig::debug != nullptr) {
			$nc($ProviderConfig::debug)->println($$str({"Error loading legacy provider "_s, classname}));
			err->printStackTrace();
		}
		return nullptr;
	} catch ($NoClassDefFoundError&) {
		$var($LinkageError, err, $catch());
		if ($ProviderConfig::debug != nullptr) {
			$nc($ProviderConfig::debug)->println($$str({"Error loading legacy provider "_s, classname}));
			err->printStackTrace();
		}
		return nullptr;
	}
	$shouldNotReachHere();
}

void clinit$ProviderConfig$ProviderLoader($Class* class$) {
	$assignStatic(ProviderConfig$ProviderLoader::INSTANCE, $new(ProviderConfig$ProviderLoader));
}

ProviderConfig$ProviderLoader::ProviderConfig$ProviderLoader() {
}

$Class* ProviderConfig$ProviderLoader::load$($String* name, bool initialize) {
	$loadClass(ProviderConfig$ProviderLoader, name, initialize, &_ProviderConfig$ProviderLoader_ClassInfo_, clinit$ProviderConfig$ProviderLoader, allocate$ProviderConfig$ProviderLoader);
	return class$;
}

$Class* ProviderConfig$ProviderLoader::class$ = nullptr;

		} // jca
	} // security
} // sun
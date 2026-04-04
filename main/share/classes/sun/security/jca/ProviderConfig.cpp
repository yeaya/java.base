#include <sun/security/jca/ProviderConfig.h>
#include <com/sun/crypto/provider/SunJCE.h>
#include <java/lang/CharSequence.h>
#include <java/security/AccessController.h>
#include <java/security/Provider.h>
#include <sun/security/jca/ProviderConfig$1.h>
#include <sun/security/jca/ProviderConfig$2.h>
#include <sun/security/jca/ProviderConfig$3.h>
#include <sun/security/jca/ProviderConfig$4.h>
#include <sun/security/provider/Sun.h>
#include <sun/security/rsa/SunRsaSign.h>
#include <sun/security/ssl/SunJSSE.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef FALSE
#undef MAX_LOAD_TRIES
#undef P11_SOL_ARG
#undef P11_SOL_NAME

using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Provider = ::java::security::Provider;
using $ProviderConfig$1 = ::sun::security::jca::ProviderConfig$1;
using $ProviderConfig$2 = ::sun::security::jca::ProviderConfig$2;
using $ProviderConfig$3 = ::sun::security::jca::ProviderConfig$3;
using $ProviderConfig$4 = ::sun::security::jca::ProviderConfig$4;
using $Sun = ::sun::security::provider::Sun;
using $SunRsaSign = ::sun::security::rsa::SunRsaSign;
using $SunJSSE = ::sun::security::ssl::SunJSSE;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace jca {

$Debug* ProviderConfig::debug = nullptr;
$String* ProviderConfig::P11_SOL_NAME = nullptr;
$String* ProviderConfig::P11_SOL_ARG = nullptr;

void ProviderConfig::init$($String* provName, $String* argument) {
	bool var$0 = $nc(provName)->endsWith(ProviderConfig::P11_SOL_NAME);
	if (var$0 && $nc(argument)->equals(ProviderConfig::P11_SOL_ARG)) {
		checkSunPKCS11Solaris();
	}
	$set(this, provName, provName);
	$set(this, argument, expand(argument));
}

void ProviderConfig::init$($String* provName) {
	ProviderConfig::init$(provName, ""_s);
}

void ProviderConfig::init$($Provider* provider) {
	$set(this, provName, $nc(provider)->getName());
	$set(this, argument, ""_s);
	$set(this, provider, provider);
}

void ProviderConfig::checkSunPKCS11Solaris() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Boolean, o, $cast($Boolean, $AccessController::doPrivileged($$new($ProviderConfig$1, this))));
	if (o == $Boolean::FALSE) {
		this->tries = ProviderConfig::MAX_LOAD_TRIES;
	}
}

bool ProviderConfig::hasArgument() {
	return !$nc(this->argument)->isEmpty();
}

bool ProviderConfig::shouldLoad() {
	return (this->tries < ProviderConfig::MAX_LOAD_TRIES);
}

void ProviderConfig::disableLoad() {
	this->tries = ProviderConfig::MAX_LOAD_TRIES;
}

bool ProviderConfig::isLoaded() {
	return (this->provider != nullptr);
}

bool ProviderConfig::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(ProviderConfig, obj) == false) {
		return false;
	}
	$var(ProviderConfig, other, $cast(ProviderConfig, obj));
	bool var$0 = $nc(this->provName)->equals($nc(other)->provName);
	return var$0 && $nc(this->argument)->equals(other->argument);
}

int32_t ProviderConfig::hashCode() {
	int32_t var$0 = $nc(this->provName)->hashCode();
	return var$0 + $nc(this->argument)->hashCode();
}

$String* ProviderConfig::toString() {
	if (hasArgument()) {
		return $str({this->provName, "(\'"_s, this->argument, "\')"_s});
	} else {
		return this->provName;
	}
}

$Provider* ProviderConfig::getProvider() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Provider, p, this->provider);
	if (p != nullptr) {
		return p;
	}
	$synchronized(this) {
		$assign(p, this->provider);
		if (p != nullptr) {
			return p;
		}
		if (shouldLoad() == false) {
			return nullptr;
		}
		bool var$0 = $nc(this->provName)->equals("SUN"_s);
		if (var$0 || this->provName->equals("sun.security.provider.Sun"_s)) {
			$assign(p, $new($Sun));
		} else {
			bool var$1 = this->provName->equals("SunRsaSign"_s);
			if (var$1 || this->provName->equals("sun.security.rsa.SunRsaSign"_s)) {
				$assign(p, $new($SunRsaSign));
			} else {
				bool var$2 = this->provName->equals("SunJCE"_s);
				if (var$2 || this->provName->equals("com.sun.crypto.provider.SunJCE"_s)) {
					$assign(p, $new($SunJCE));
				} else if (this->provName->equals("SunJSSE"_s)) {
					$assign(p, $new($SunJSSE));
				} else {
					bool var$3 = this->provName->equals("Apple"_s);
					if (var$3 || this->provName->equals("apple.security.AppleProvider"_s)) {
						$var($Provider, tmp, $cast($Provider, $AccessController::doPrivileged($$new($ProviderConfig$2, this))));
						$assign(p, tmp);
					} else {
						if (this->isLoading) {
							if (ProviderConfig::debug != nullptr) {
								ProviderConfig::debug->println($$str({"Recursion loading provider: "_s, this}));
								$$new($Exception, "Call trace"_s)->printStackTrace();
							}
							return nullptr;
						}
						$var($Throwable, var$4, nullptr);
						try {
							this->isLoading = true;
							++this->tries;
							$assign(p, doLoadProvider());
						} catch ($Throwable& var$5) {
							$assign(var$4, var$5);
						} /*finally*/ {
							this->isLoading = false;
						}
						if (var$4 != nullptr) {
							$throw(var$4);
						}
					}
				}
			}
		}
		$set(this, provider, p);
	}
	return p;
}

$Provider* ProviderConfig::doLoadProvider() {
	$beforeCallerSensitive();
	return $cast($Provider, $AccessController::doPrivileged($$new($ProviderConfig$3, this)));
}

$String* ProviderConfig::expand($String* value) {
	$init(ProviderConfig);
	$beforeCallerSensitive();
	if ($nc(value)->contains("${"_s) == false) {
		return value;
	}
	return $cast($String, $AccessController::doPrivileged($$new($ProviderConfig$4, value)));
}

void ProviderConfig::clinit$($Class* clazz) {
	$assignStatic(ProviderConfig::P11_SOL_NAME, "SunPKCS11"_s);
	$assignStatic(ProviderConfig::P11_SOL_ARG, "${java.home}/conf/security/sunpkcs11-solaris.cfg"_s);
	$assignStatic(ProviderConfig::debug, $Debug::getInstance("jca"_s, "ProviderConfig"_s));
}

ProviderConfig::ProviderConfig() {
}

$Class* ProviderConfig::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProviderConfig, debug)},
		{"P11_SOL_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProviderConfig, P11_SOL_NAME)},
		{"P11_SOL_ARG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProviderConfig, P11_SOL_ARG)},
		{"MAX_LOAD_TRIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ProviderConfig, MAX_LOAD_TRIES)},
		{"provName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProviderConfig, provName)},
		{"argument", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProviderConfig, argument)},
		{"tries", "I", nullptr, $PRIVATE, $field(ProviderConfig, tries)},
		{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE | $VOLATILE, $field(ProviderConfig, provider)},
		{"isLoading", "Z", nullptr, $PRIVATE, $field(ProviderConfig, isLoading)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(ProviderConfig, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(ProviderConfig, init$, void, $String*)},
		{"<init>", "(Ljava/security/Provider;)V", nullptr, 0, $method(ProviderConfig, init$, void, $Provider*)},
		{"checkSunPKCS11Solaris", "()V", nullptr, $PRIVATE, $method(ProviderConfig, checkSunPKCS11Solaris, void)},
		{"disableLoad", "()V", nullptr, $PRIVATE, $method(ProviderConfig, disableLoad, void)},
		{"doLoadProvider", "()Ljava/security/Provider;", nullptr, $PRIVATE, $method(ProviderConfig, doLoadProvider, $Provider*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProviderConfig, equals, bool, Object$*)},
		{"expand", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(ProviderConfig, expand, $String*, $String*)},
		{"getProvider", "()Ljava/security/Provider;", nullptr, 0, $method(ProviderConfig, getProvider, $Provider*)},
		{"hasArgument", "()Z", nullptr, $PRIVATE, $method(ProviderConfig, hasArgument, bool)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ProviderConfig, hashCode, int32_t)},
		{"isLoaded", "()Z", nullptr, 0, $method(ProviderConfig, isLoaded, bool)},
		{"shouldLoad", "()Z", nullptr, $PRIVATE, $method(ProviderConfig, shouldLoad, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProviderConfig, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderConfig$ProviderLoader", "sun.security.jca.ProviderConfig", "ProviderLoader", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.jca.ProviderConfig$4", nullptr, nullptr, 0},
		{"sun.security.jca.ProviderConfig$3", nullptr, nullptr, 0},
		{"sun.security.jca.ProviderConfig$2", nullptr, nullptr, 0},
		{"sun.security.jca.ProviderConfig$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.jca.ProviderConfig",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderConfig$ProviderLoader,sun.security.jca.ProviderConfig$ProviderLoader$1,sun.security.jca.ProviderConfig$4,sun.security.jca.ProviderConfig$3,sun.security.jca.ProviderConfig$2,sun.security.jca.ProviderConfig$1"
	};
	$loadClass(ProviderConfig, name, initialize, &classInfo$$, ProviderConfig::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderConfig);
	});
	return class$;
}

$Class* ProviderConfig::class$ = nullptr;

		} // jca
	} // security
} // sun
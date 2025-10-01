#include <java/net/Authenticator.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Authenticator$RequestorType.h>
#include <java/net/InetAddress.h>
#include <java/net/NetPermission.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/URL.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <sun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess.h>
#include <sun/net/www/protocol/http/AuthenticatorKeys.h>
#include <jcpp.h>

#undef SERVER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Authenticator$RequestorType = ::java::net::Authenticator$RequestorType;
using $InetAddress = ::java::net::InetAddress;
using $NetPermission = ::java::net::NetPermission;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URL = ::java::net::URL;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $AuthenticatorKeys = ::sun::net::www::protocol::http::AuthenticatorKeys;
using $AuthenticatorKeys$AuthenticatorKeyAccess = ::sun::net::www::protocol::http::AuthenticatorKeys$AuthenticatorKeyAccess;

namespace java {
	namespace net {

class Authenticator$$Lambda$getKey : public $AuthenticatorKeys$AuthenticatorKeyAccess {
	$class(Authenticator$$Lambda$getKey, $NO_CLASS_INIT, $AuthenticatorKeys$AuthenticatorKeyAccess)
public:
	void init$() {
	}
	virtual $String* getKey(Authenticator* a) override {
		 return Authenticator::getKey(a);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Authenticator$$Lambda$getKey>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Authenticator$$Lambda$getKey::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Authenticator$$Lambda$getKey::*)()>(&Authenticator$$Lambda$getKey::init$))},
	{"getKey", "(Ljava/net/Authenticator;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Authenticator$$Lambda$getKey::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.net.Authenticator$$Lambda$getKey",
	"java.lang.Object",
	"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess",
	nullptr,
	methodInfos
};
$Class* Authenticator$$Lambda$getKey::load$($String* name, bool initialize) {
	$loadClass(Authenticator$$Lambda$getKey, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Authenticator$$Lambda$getKey::class$ = nullptr;

$FieldInfo _Authenticator_FieldInfo_[] = {
	{"theAuthenticator", "Ljava/net/Authenticator;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Authenticator, theAuthenticator)},
	{"requestingHost", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Authenticator, requestingHost)},
	{"requestingSite", "Ljava/net/InetAddress;", nullptr, $PRIVATE, $field(Authenticator, requestingSite)},
	{"requestingPort", "I", nullptr, $PRIVATE, $field(Authenticator, requestingPort)},
	{"requestingProtocol", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Authenticator, requestingProtocol)},
	{"requestingPrompt", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Authenticator, requestingPrompt)},
	{"requestingScheme", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Authenticator, requestingScheme)},
	{"requestingURL", "Ljava/net/URL;", nullptr, $PRIVATE, $field(Authenticator, requestingURL)},
	{"requestingAuthType", "Ljava/net/Authenticator$RequestorType;", nullptr, $PRIVATE, $field(Authenticator, requestingAuthType)},
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Authenticator, key)},
	{}
};

$MethodInfo _Authenticator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Authenticator::*)()>(&Authenticator::init$))},
	{"getDefault", "()Ljava/net/Authenticator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Authenticator*(*)()>(&Authenticator::getDefault))},
	{"getKey", "(Ljava/net/Authenticator;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(Authenticator*)>(&Authenticator::getKey))},
	{"getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;", nullptr, $PROTECTED},
	{"getRequestingHost", "()Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$String*(Authenticator::*)()>(&Authenticator::getRequestingHost))},
	{"getRequestingPort", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(Authenticator::*)()>(&Authenticator::getRequestingPort))},
	{"getRequestingPrompt", "()Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$String*(Authenticator::*)()>(&Authenticator::getRequestingPrompt))},
	{"getRequestingProtocol", "()Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$String*(Authenticator::*)()>(&Authenticator::getRequestingProtocol))},
	{"getRequestingScheme", "()Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$String*(Authenticator::*)()>(&Authenticator::getRequestingScheme))},
	{"getRequestingSite", "()Ljava/net/InetAddress;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$InetAddress*(Authenticator::*)()>(&Authenticator::getRequestingSite))},
	{"getRequestingURL", "()Ljava/net/URL;", nullptr, $PROTECTED},
	{"getRequestorType", "()Ljava/net/Authenticator$RequestorType;", nullptr, $PROTECTED},
	{"requestPasswordAuthentication", "(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PasswordAuthentication*(*)($InetAddress*,int32_t,$String*,$String*,$String*)>(&Authenticator::requestPasswordAuthentication))},
	{"requestPasswordAuthentication", "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PasswordAuthentication*(*)($String*,$InetAddress*,int32_t,$String*,$String*,$String*)>(&Authenticator::requestPasswordAuthentication))},
	{"requestPasswordAuthentication", "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PasswordAuthentication*(*)($String*,$InetAddress*,int32_t,$String*,$String*,$String*,$URL*,$Authenticator$RequestorType*)>(&Authenticator::requestPasswordAuthentication))},
	{"requestPasswordAuthentication", "(Ljava/net/Authenticator;Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PasswordAuthentication*(*)(Authenticator*,$String*,$InetAddress*,int32_t,$String*,$String*,$String*,$URL*,$Authenticator$RequestorType*)>(&Authenticator::requestPasswordAuthentication))},
	{"requestPasswordAuthenticationInstance", "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator::*)()>(&Authenticator::reset))},
	{"setDefault", "(Ljava/net/Authenticator;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(Authenticator*)>(&Authenticator::setDefault))},
	{}
};

$InnerClassInfo _Authenticator_InnerClassesInfo_[] = {
	{"java.net.Authenticator$RequestorType", "java.net.Authenticator", "RequestorType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Authenticator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.Authenticator",
	"java.lang.Object",
	nullptr,
	_Authenticator_FieldInfo_,
	_Authenticator_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.Authenticator$RequestorType"
};

$Object* allocate$Authenticator($Class* clazz) {
	return $of($alloc(Authenticator));
}

$volatile(Authenticator*) Authenticator::theAuthenticator = nullptr;

void Authenticator::init$() {
	$set(this, key, $AuthenticatorKeys::computeKey(this));
}

void Authenticator::reset() {
	$set(this, requestingHost, nullptr);
	$set(this, requestingSite, nullptr);
	this->requestingPort = -1;
	$set(this, requestingProtocol, nullptr);
	$set(this, requestingPrompt, nullptr);
	$set(this, requestingScheme, nullptr);
	$set(this, requestingURL, nullptr);
	$init($Authenticator$RequestorType);
	$set(this, requestingAuthType, $Authenticator$RequestorType::SERVER);
}

void Authenticator::setDefault(Authenticator* a) {
	$load(Authenticator);
	$synchronized(class$) {
		$init(Authenticator);
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$var($NetPermission, setDefaultPermission, $new($NetPermission, "setDefaultAuthenticator"_s));
			sm->checkPermission(setDefaultPermission);
		}
		$assignStatic(Authenticator::theAuthenticator, a);
	}
}

Authenticator* Authenticator::getDefault() {
	$init(Authenticator);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($NetPermission, requestPermission, $new($NetPermission, "requestPasswordAuthentication"_s));
		sm->checkPermission(requestPermission);
	}
	return Authenticator::theAuthenticator;
}

$PasswordAuthentication* Authenticator::requestPasswordAuthentication($InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme) {
	$init(Authenticator);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($NetPermission, requestPermission, $new($NetPermission, "requestPasswordAuthentication"_s));
		sm->checkPermission(requestPermission);
	}
	$var(Authenticator, a, Authenticator::theAuthenticator);
	if (a == nullptr) {
		return nullptr;
	} else {
		$synchronized(a) {
			$nc(a)->reset();
			$set(a, requestingSite, addr);
			a->requestingPort = port;
			$set(a, requestingProtocol, protocol);
			$set(a, requestingPrompt, prompt);
			$set(a, requestingScheme, scheme);
			return a->getPasswordAuthentication();
		}
	}
}

$PasswordAuthentication* Authenticator::requestPasswordAuthentication($String* host, $InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme) {
	$init(Authenticator);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($NetPermission, requestPermission, $new($NetPermission, "requestPasswordAuthentication"_s));
		sm->checkPermission(requestPermission);
	}
	$var(Authenticator, a, Authenticator::theAuthenticator);
	if (a == nullptr) {
		return nullptr;
	} else {
		$synchronized(a) {
			$nc(a)->reset();
			$set(a, requestingHost, host);
			$set(a, requestingSite, addr);
			a->requestingPort = port;
			$set(a, requestingProtocol, protocol);
			$set(a, requestingPrompt, prompt);
			$set(a, requestingScheme, scheme);
			return a->getPasswordAuthentication();
		}
	}
}

$PasswordAuthentication* Authenticator::requestPasswordAuthentication($String* host, $InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme, $URL* url, $Authenticator$RequestorType* reqType) {
	$init(Authenticator);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($NetPermission, requestPermission, $new($NetPermission, "requestPasswordAuthentication"_s));
		sm->checkPermission(requestPermission);
	}
	$var(Authenticator, a, Authenticator::theAuthenticator);
	if (a == nullptr) {
		return nullptr;
	} else {
		$synchronized(a) {
			$nc(a)->reset();
			$set(a, requestingHost, host);
			$set(a, requestingSite, addr);
			a->requestingPort = port;
			$set(a, requestingProtocol, protocol);
			$set(a, requestingPrompt, prompt);
			$set(a, requestingScheme, scheme);
			$set(a, requestingURL, url);
			$set(a, requestingAuthType, reqType);
			return a->getPasswordAuthentication();
		}
	}
}

$PasswordAuthentication* Authenticator::requestPasswordAuthentication(Authenticator* authenticator, $String* host, $InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme, $URL* url, $Authenticator$RequestorType* reqType) {
	$init(Authenticator);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($NetPermission, requestPermission, $new($NetPermission, "requestPasswordAuthentication"_s));
		sm->checkPermission(requestPermission);
	}
	$var(Authenticator, a, authenticator == nullptr ? $cast(Authenticator, Authenticator::theAuthenticator) : authenticator);
	if (a == nullptr) {
		return nullptr;
	} else {
		return $nc(a)->requestPasswordAuthenticationInstance(host, addr, port, protocol, prompt, scheme, url, reqType);
	}
}

$PasswordAuthentication* Authenticator::requestPasswordAuthenticationInstance($String* host, $InetAddress* addr, int32_t port, $String* protocol, $String* prompt, $String* scheme, $URL* url, $Authenticator$RequestorType* reqType) {
	$synchronized(this) {
		this->reset();
		$set(this, requestingHost, host);
		$set(this, requestingSite, addr);
		this->requestingPort = port;
		$set(this, requestingProtocol, protocol);
		$set(this, requestingPrompt, prompt);
		$set(this, requestingScheme, scheme);
		$set(this, requestingURL, url);
		$set(this, requestingAuthType, reqType);
		return this->getPasswordAuthentication();
	}
}

$String* Authenticator::getRequestingHost() {
	return this->requestingHost;
}

$InetAddress* Authenticator::getRequestingSite() {
	return this->requestingSite;
}

int32_t Authenticator::getRequestingPort() {
	return this->requestingPort;
}

$String* Authenticator::getRequestingProtocol() {
	return this->requestingProtocol;
}

$String* Authenticator::getRequestingPrompt() {
	return this->requestingPrompt;
}

$String* Authenticator::getRequestingScheme() {
	return this->requestingScheme;
}

$PasswordAuthentication* Authenticator::getPasswordAuthentication() {
	return nullptr;
}

$URL* Authenticator::getRequestingURL() {
	return this->requestingURL;
}

$Authenticator$RequestorType* Authenticator::getRequestorType() {
	return this->requestingAuthType;
}

$String* Authenticator::getKey(Authenticator* a) {
	$init(Authenticator);
	return $nc(a)->key;
}

void clinit$Authenticator($Class* class$) {
	{
		$AuthenticatorKeys::setAuthenticatorKeyAccess(static_cast<$AuthenticatorKeys$AuthenticatorKeyAccess*>($$new(Authenticator$$Lambda$getKey)));
	}
}

Authenticator::Authenticator() {
}

$Class* Authenticator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Authenticator$$Lambda$getKey::classInfo$.name)) {
			return Authenticator$$Lambda$getKey::load$(name, initialize);
		}
	}
	$loadClass(Authenticator, name, initialize, &_Authenticator_ClassInfo_, clinit$Authenticator, allocate$Authenticator);
	return class$;
}

$Class* Authenticator::class$ = nullptr;

	} // net
} // java
#include <sun/security/ssl/SessionTicketExtension$KeyState.h>

#include <java/util/HashMap.h>
#include <java/util/Set.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <javax/security/auth/Destroyable.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SessionTicketExtension$StatelessKey.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Set = ::java::util::Set;
using $SecretKey = ::javax::crypto::SecretKey;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SessionTicketExtension = ::sun::security::ssl::SessionTicketExtension;
using $SessionTicketExtension$StatelessKey = ::sun::security::ssl::SessionTicketExtension$StatelessKey;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SessionTicketExtension$KeyState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SessionTicketExtension$KeyState::*)()>(&SessionTicketExtension$KeyState::init$))},
	{"cleanup", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, $STATIC, $method(static_cast<void(*)($HandshakeContext*)>(&SessionTicketExtension$KeyState::cleanup))},
	{"getCurrentKey", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SessionTicketExtension$StatelessKey;", nullptr, $STATIC, $method(static_cast<$SessionTicketExtension$StatelessKey*(*)($HandshakeContext*)>(&SessionTicketExtension$KeyState::getCurrentKey))},
	{"getKey", "(Lsun/security/ssl/HandshakeContext;I)Lsun/security/ssl/SessionTicketExtension$StatelessKey;", nullptr, $STATIC, $method(static_cast<$SessionTicketExtension$StatelessKey*(*)($HandshakeContext*,int32_t)>(&SessionTicketExtension$KeyState::getKey))},
	{"getSessionTimeout", "(Lsun/security/ssl/HandshakeContext;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($HandshakeContext*)>(&SessionTicketExtension$KeyState::getSessionTimeout))},
	{"nextKey", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SessionTicketExtension$StatelessKey;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SessionTicketExtension$StatelessKey*(*)($HandshakeContext*)>(&SessionTicketExtension$KeyState::nextKey))},
	{}
};

$InnerClassInfo _SessionTicketExtension$KeyState_InnerClassesInfo_[] = {
	{"sun.security.ssl.SessionTicketExtension$KeyState", "sun.security.ssl.SessionTicketExtension", "KeyState", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SessionTicketExtension$KeyState_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionTicketExtension$KeyState",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SessionTicketExtension$KeyState_MethodInfo_,
	nullptr,
	nullptr,
	_SessionTicketExtension$KeyState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SessionTicketExtension"
};

$Object* allocate$SessionTicketExtension$KeyState($Class* clazz) {
	return $of($alloc(SessionTicketExtension$KeyState));
}

void SessionTicketExtension$KeyState::init$() {
}

$SessionTicketExtension$StatelessKey* SessionTicketExtension$KeyState::getKey($HandshakeContext* hc, int32_t num) {
	$useLocalCurrentObjectStackCache();
	$var($SessionTicketExtension$StatelessKey, ssk, $cast($SessionTicketExtension$StatelessKey, $nc($nc($nc(hc)->sslContext)->keyHashMap)->get($($Integer::valueOf(num)))));
	if (ssk == nullptr || $nc(ssk)->isInvalid(getSessionTimeout(hc))) {
		return nullptr;
	}
	return ssk;
}

$SessionTicketExtension$StatelessKey* SessionTicketExtension$KeyState::getCurrentKey($HandshakeContext* hc) {
	$useLocalCurrentObjectStackCache();
	$init($SessionTicketExtension);
	$var($SessionTicketExtension$StatelessKey, ssk, $cast($SessionTicketExtension$StatelessKey, $nc($nc($nc(hc)->sslContext)->keyHashMap)->get($($Integer::valueOf($SessionTicketExtension::currentKeyID)))));
	if (ssk != nullptr && !ssk->isExpired()) {
		return ssk;
	}
	return nextKey(hc);
}

$SessionTicketExtension$StatelessKey* SessionTicketExtension$KeyState::nextKey($HandshakeContext* hc) {
	$useLocalCurrentObjectStackCache();
	$var($SessionTicketExtension$StatelessKey, ssk, nullptr);
	$synchronized($nc($nc(hc)->sslContext)->keyHashMap) {
		$init($SessionTicketExtension);
		$assign(ssk, $cast($SessionTicketExtension$StatelessKey, $nc($nc(hc->sslContext)->keyHashMap)->get($($Integer::valueOf($SessionTicketExtension::currentKeyID)))));
		if (ssk != nullptr && !ssk->isExpired()) {
			return ssk;
		}
		int32_t newNum = 0;
		if ($SessionTicketExtension::currentKeyID == $Integer::MAX_VALUE) {
			newNum = 0;
		} else {
			newNum = $SessionTicketExtension::currentKeyID + 1;
		}
		$assign(ssk, $new($SessionTicketExtension$StatelessKey, hc, newNum));
		$SessionTicketExtension::currentKeyID = newNum;
	}
	cleanup(hc);
	return ssk;
}

void SessionTicketExtension$KeyState::cleanup($HandshakeContext* hc) {
	$useLocalCurrentObjectStackCache();
	int32_t sessionTimeout = getSessionTimeout(hc);
	$var($SessionTicketExtension$StatelessKey, ks, nullptr);
	{
		$var($ObjectArray, arr$, $nc($($nc($nc($nc(hc)->sslContext)->keyHashMap)->keySet()))->toArray());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				$var($Integer, i, $cast($Integer, o));
				$assign(ks, $cast($SessionTicketExtension$StatelessKey, $nc($nc(hc->sslContext)->keyHashMap)->get(i)));
				if ($nc(ks)->isInvalid(sessionTimeout)) {
					try {
						$nc(ks->key)->destroy();
					} catch ($Exception& e) {
					}
					$nc($nc(hc->sslContext)->keyHashMap)->remove(i);
				}
			}
		}
	}
}

int32_t SessionTicketExtension$KeyState::getSessionTimeout($HandshakeContext* hc) {
	return $nc($($nc($nc(hc)->sslContext)->engineGetServerSessionContext()))->getSessionTimeout() * 1000;
}

SessionTicketExtension$KeyState::SessionTicketExtension$KeyState() {
}

$Class* SessionTicketExtension$KeyState::load$($String* name, bool initialize) {
	$loadClass(SessionTicketExtension$KeyState, name, initialize, &_SessionTicketExtension$KeyState_ClassInfo_, allocate$SessionTicketExtension$KeyState);
	return class$;
}

$Class* SessionTicketExtension$KeyState::class$ = nullptr;

		} // ssl
	} // security
} // sun
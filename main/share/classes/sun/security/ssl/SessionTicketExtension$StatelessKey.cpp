#include <sun/security/ssl/SessionTicketExtension$StatelessKey.h>

#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/util/HashMap.h>
#include <javax/crypto/KeyGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $HashMap = ::java::util::HashMap;
using $KeyGenerator = ::javax::crypto::KeyGenerator;
using $SecretKey = ::javax::crypto::SecretKey;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SessionTicketExtension = ::sun::security::ssl::SessionTicketExtension;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SessionTicketExtension$StatelessKey_FieldInfo_[] = {
	{"timeout", "J", nullptr, $FINAL, $field(SessionTicketExtension$StatelessKey, timeout)},
	{"key", "Ljavax/crypto/SecretKey;", nullptr, $FINAL, $field(SessionTicketExtension$StatelessKey, key)},
	{"num", "I", nullptr, $FINAL, $field(SessionTicketExtension$StatelessKey, num)},
	{}
};

$MethodInfo _SessionTicketExtension$StatelessKey_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;I)V", nullptr, 0, $method(SessionTicketExtension$StatelessKey, init$, void, $HandshakeContext*, int32_t)},
	{"isExpired", "()Z", nullptr, 0, $method(SessionTicketExtension$StatelessKey, isExpired, bool)},
	{"isInvalid", "(J)Z", nullptr, 0, $method(SessionTicketExtension$StatelessKey, isInvalid, bool, int64_t)},
	{}
};

$InnerClassInfo _SessionTicketExtension$StatelessKey_InnerClassesInfo_[] = {
	{"sun.security.ssl.SessionTicketExtension$StatelessKey", "sun.security.ssl.SessionTicketExtension", "StatelessKey", $STATIC | $FINAL},
	{}
};

$ClassInfo _SessionTicketExtension$StatelessKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionTicketExtension$StatelessKey",
	"java.lang.Object",
	nullptr,
	_SessionTicketExtension$StatelessKey_FieldInfo_,
	_SessionTicketExtension$StatelessKey_MethodInfo_,
	nullptr,
	nullptr,
	_SessionTicketExtension$StatelessKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SessionTicketExtension"
};

$Object* allocate$SessionTicketExtension$StatelessKey($Class* clazz) {
	return $of($alloc(SessionTicketExtension$StatelessKey));
}

void SessionTicketExtension$StatelessKey::init$($HandshakeContext* hc, int32_t newNum) {
	$useLocalCurrentObjectStackCache();
	$var($SecretKey, k, nullptr);
	try {
		$var($KeyGenerator, kg, $KeyGenerator::getInstance("AES"_s));
		$nc(kg)->init(256, $($nc($nc(hc)->sslContext)->getSecureRandom()));
		$assign(k, kg->generateKey());
	} catch ($NoSuchAlgorithmException& e) {
	}
	$set(this, key, k);
	$init($SessionTicketExtension);
	this->timeout = $System::currentTimeMillis() + $SessionTicketExtension::keyTimeout;
	this->num = newNum;
	$nc($nc($nc(hc)->sslContext)->keyHashMap)->put($($Integer::valueOf(this->num)), this);
}

bool SessionTicketExtension$StatelessKey::isExpired() {
	return (($System::currentTimeMillis()) > this->timeout);
}

bool SessionTicketExtension$StatelessKey::isInvalid(int64_t sessionTimeout) {
	return (($System::currentTimeMillis()) > (this->timeout + sessionTimeout));
}

SessionTicketExtension$StatelessKey::SessionTicketExtension$StatelessKey() {
}

$Class* SessionTicketExtension$StatelessKey::load$($String* name, bool initialize) {
	$loadClass(SessionTicketExtension$StatelessKey, name, initialize, &_SessionTicketExtension$StatelessKey_ClassInfo_, allocate$SessionTicketExtension$StatelessKey);
	return class$;
}

$Class* SessionTicketExtension$StatelessKey::class$ = nullptr;

		} // ssl
	} // security
} // sun
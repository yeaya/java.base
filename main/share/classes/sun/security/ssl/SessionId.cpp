#include <sun/security/ssl/SessionId.h>

#include <java/security/SecureRandom.h>
#include <java/util/Arrays.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/RandomCookie.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef MAX_LENGTH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $Arrays = ::java::util::Arrays;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $RandomCookie = ::sun::security::ssl::RandomCookie;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SessionId_FieldInfo_[] = {
	{"MAX_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(SessionId, MAX_LENGTH)},
	{"sessionId", "[B", nullptr, $PRIVATE | $FINAL, $field(SessionId, sessionId)},
	{}
};

$MethodInfo _SessionId_MethodInfo_[] = {
	{"<init>", "(ZLjava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(SessionId::*)(bool,$SecureRandom*)>(&SessionId::init$))},
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(SessionId::*)($bytes*)>(&SessionId::init$))},
	{"checkLength", "(I)V", nullptr, 0, $method(static_cast<void(SessionId::*)(int32_t)>(&SessionId::checkLength)), "javax.net.ssl.SSLProtocolException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getId", "()[B", nullptr, 0, $method(static_cast<$bytes*(SessionId::*)()>(&SessionId::getId))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"length", "()I", nullptr, 0, $method(static_cast<int32_t(SessionId::*)()>(&SessionId::length))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SessionId_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionId",
	"java.lang.Object",
	nullptr,
	_SessionId_FieldInfo_,
	_SessionId_MethodInfo_
};

$Object* allocate$SessionId($Class* clazz) {
	return $of($alloc(SessionId));
}

void SessionId::init$(bool isRejoinable, $SecureRandom* generator) {
	if (isRejoinable && (generator != nullptr)) {
		$set(this, sessionId, $$new($RandomCookie, generator)->randomBytes);
	} else {
		$set(this, sessionId, $new($bytes, 0));
	}
}

void SessionId::init$($bytes* sessionId) {
	$set(this, sessionId, $cast($bytes, $nc(sessionId)->clone()));
}

int32_t SessionId::length() {
	return $nc(this->sessionId)->length;
}

$bytes* SessionId::getId() {
	return $cast($bytes, $nc(this->sessionId)->clone());
}

$String* SessionId::toString() {
	if ($nc(this->sessionId)->length == 0) {
		return ""_s;
	}
	return $Utilities::toHexString(this->sessionId);
}

int32_t SessionId::hashCode() {
	return $Arrays::hashCode(this->sessionId);
}

bool SessionId::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(SessionId, obj)) {
		$var(SessionId, that, $cast(SessionId, obj));
		return $Arrays::equals(this->sessionId, $nc(that)->sessionId);
	}
	return false;
}

void SessionId::checkLength(int32_t protocolVersion) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->sessionId)->length > SessionId::MAX_LENGTH) {
		$throwNew($SSLProtocolException, $$str({"Invalid session ID length ("_s, $$str($nc(this->sessionId)->length), " bytes)"_s}));
	}
}

SessionId::SessionId() {
}

$Class* SessionId::load$($String* name, bool initialize) {
	$loadClass(SessionId, name, initialize, &_SessionId_ClassInfo_, allocate$SessionId);
	return class$;
}

$Class* SessionId::class$ = nullptr;

		} // ssl
	} // security
} // sun
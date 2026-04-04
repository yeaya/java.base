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
		return $Arrays::equals(this->sessionId, that->sessionId);
	}
	return false;
}

void SessionId::checkLength(int32_t protocolVersion) {
	$useLocalObjectStack();
	if ($nc(this->sessionId)->length > SessionId::MAX_LENGTH) {
		$throwNew($SSLProtocolException, $$str({"Invalid session ID length ("_s, $$str(this->sessionId->length), " bytes)"_s}));
	}
}

SessionId::SessionId() {
}

$Class* SessionId::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAX_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(SessionId, MAX_LENGTH)},
		{"sessionId", "[B", nullptr, $PRIVATE | $FINAL, $field(SessionId, sessionId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLjava/security/SecureRandom;)V", nullptr, 0, $method(SessionId, init$, void, bool, $SecureRandom*)},
		{"<init>", "([B)V", nullptr, 0, $method(SessionId, init$, void, $bytes*)},
		{"checkLength", "(I)V", nullptr, 0, $method(SessionId, checkLength, void, int32_t), "javax.net.ssl.SSLProtocolException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SessionId, equals, bool, Object$*)},
		{"getId", "()[B", nullptr, 0, $method(SessionId, getId, $bytes*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SessionId, hashCode, int32_t)},
		{"length", "()I", nullptr, 0, $method(SessionId, length, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SessionId, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SessionId",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SessionId, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SessionId);
	});
	return class$;
}

$Class* SessionId::class$ = nullptr;

		} // ssl
	} // security
} // sun
#include <sun/security/ssl/Ciphertext.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

void Ciphertext::init$() {
	this->contentType = 0;
	this->handshakeType = -1;
	this->recordSN = -1;
	$set(this, handshakeStatus, nullptr);
}

void Ciphertext::init$(int8_t contentType, int8_t handshakeType, int64_t recordSN) {
	this->contentType = contentType;
	this->handshakeType = handshakeType;
	this->recordSN = recordSN;
	$set(this, handshakeStatus, nullptr);
}

Ciphertext::Ciphertext() {
}

$Class* Ciphertext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contentType", "B", nullptr, $FINAL, $field(Ciphertext, contentType)},
		{"handshakeType", "B", nullptr, $FINAL, $field(Ciphertext, handshakeType)},
		{"recordSN", "J", nullptr, $FINAL, $field(Ciphertext, recordSN)},
		{"handshakeStatus", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, 0, $field(Ciphertext, handshakeStatus)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Ciphertext, init$, void)},
		{"<init>", "(BBJ)V", nullptr, 0, $method(Ciphertext, init$, void, int8_t, int8_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Ciphertext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Ciphertext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Ciphertext);
	});
	return class$;
}

$Class* Ciphertext::class$ = nullptr;

		} // ssl
	} // security
} // sun
#include <sun/security/ssl/Ciphertext.h>

#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Ciphertext_FieldInfo_[] = {
	{"contentType", "B", nullptr, $FINAL, $field(Ciphertext, contentType)},
	{"handshakeType", "B", nullptr, $FINAL, $field(Ciphertext, handshakeType)},
	{"recordSN", "J", nullptr, $FINAL, $field(Ciphertext, recordSN)},
	{"handshakeStatus", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, 0, $field(Ciphertext, handshakeStatus)},
	{}
};

$MethodInfo _Ciphertext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Ciphertext::*)()>(&Ciphertext::init$))},
	{"<init>", "(BBJ)V", nullptr, 0, $method(static_cast<void(Ciphertext::*)(int8_t,int8_t,int64_t)>(&Ciphertext::init$))},
	{}
};

$ClassInfo _Ciphertext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Ciphertext",
	"java.lang.Object",
	nullptr,
	_Ciphertext_FieldInfo_,
	_Ciphertext_MethodInfo_
};

$Object* allocate$Ciphertext($Class* clazz) {
	return $of($alloc(Ciphertext));
}

void Ciphertext::init$() {
	this->contentType = (int8_t)0;
	this->handshakeType = (int8_t)-1;
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
	$loadClass(Ciphertext, name, initialize, &_Ciphertext_ClassInfo_, allocate$Ciphertext);
	return class$;
}

$Class* Ciphertext::class$ = nullptr;

		} // ssl
	} // security
} // sun
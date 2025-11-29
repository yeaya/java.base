#include <sun/security/ssl/Authenticator$TLS10Mac.h>

#include <java/nio/ByteBuffer.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/Authenticator$MacImpl.h>
#include <sun/security/ssl/Authenticator$TLS10Authenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SecretKey = ::javax::crypto::SecretKey;
using $Authenticator$MacImpl = ::sun::security::ssl::Authenticator$MacImpl;
using $Authenticator$TLS10Authenticator = ::sun::security::ssl::Authenticator$TLS10Authenticator;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$TLS10Mac_FieldInfo_[] = {
	{"macImpl", "Lsun/security/ssl/Authenticator$MacImpl;", nullptr, $PRIVATE | $FINAL, $field(Authenticator$TLS10Mac, macImpl)},
	{}
};

$MethodInfo _Authenticator$TLS10Mac_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/CipherSuite$MacAlg;Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC, $method(static_cast<void(Authenticator$TLS10Mac::*)($ProtocolVersion*,$CipherSuite$MacAlg*,$SecretKey*)>(&Authenticator$TLS10Mac::init$)), "java.security.NoSuchAlgorithmException,java.security.InvalidKeyException"},
	{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC},
	{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$TLS10Mac_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$TLS10Mac", "sun.security.ssl.Authenticator", "TLS10Mac", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Authenticator$TLS10Authenticator", "sun.security.ssl.Authenticator", "TLS10Authenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$TLS10Mac_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Authenticator$TLS10Mac",
	"sun.security.ssl.Authenticator$TLS10Authenticator",
	"sun.security.ssl.Authenticator$MAC",
	_Authenticator$TLS10Mac_FieldInfo_,
	_Authenticator$TLS10Mac_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$TLS10Mac_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$TLS10Mac($Class* clazz) {
	return $of($alloc(Authenticator$TLS10Mac));
}

int32_t Authenticator$TLS10Mac::hashCode() {
	 return this->$Authenticator$TLS10Authenticator::hashCode();
}

bool Authenticator$TLS10Mac::equals(Object$* obj) {
	 return this->$Authenticator$TLS10Authenticator::equals(obj);
}

$Object* Authenticator$TLS10Mac::clone() {
	 return this->$Authenticator$TLS10Authenticator::clone();
}

$String* Authenticator$TLS10Mac::toString() {
	 return this->$Authenticator$TLS10Authenticator::toString();
}

void Authenticator$TLS10Mac::finalize() {
	this->$Authenticator$TLS10Authenticator::finalize();
}

void Authenticator$TLS10Mac::init$($ProtocolVersion* protocolVersion, $CipherSuite$MacAlg* macAlg, $SecretKey* key) {
	$Authenticator$TLS10Authenticator::init$(protocolVersion);
	$set(this, macImpl, $new($Authenticator$MacImpl, this, protocolVersion, macAlg, key));
}

$CipherSuite$MacAlg* Authenticator$TLS10Mac::macAlg() {
	return $nc(this->macImpl)->macAlg$;
}

$bytes* Authenticator$TLS10Mac::compute(int8_t type, $ByteBuffer* bb, $bytes* sequence, bool isSimulated) {
	return $nc(this->macImpl)->compute(type, bb, sequence, isSimulated);
}

Authenticator$TLS10Mac::Authenticator$TLS10Mac() {
}

$Class* Authenticator$TLS10Mac::load$($String* name, bool initialize) {
	$loadClass(Authenticator$TLS10Mac, name, initialize, &_Authenticator$TLS10Mac_ClassInfo_, allocate$Authenticator$TLS10Mac);
	return class$;
}

$Class* Authenticator$TLS10Mac::class$ = nullptr;

		} // ssl
	} // security
} // sun
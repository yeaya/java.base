#include <sun/security/ssl/Authenticator$DTLS10Mac.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/Authenticator$DTLS10Authenticator.h>
#include <sun/security/ssl/Authenticator$MacImpl.h>
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
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Authenticator$DTLS10Authenticator = ::sun::security::ssl::Authenticator$DTLS10Authenticator;
using $Authenticator$MAC = ::sun::security::ssl::Authenticator$MAC;
using $Authenticator$MacImpl = ::sun::security::ssl::Authenticator$MacImpl;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$DTLS10Mac_FieldInfo_[] = {
	{"macImpl", "Lsun/security/ssl/Authenticator$MacImpl;", nullptr, $PRIVATE | $FINAL, $field(Authenticator$DTLS10Mac, macImpl)},
	{}
};

$MethodInfo _Authenticator$DTLS10Mac_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/CipherSuite$MacAlg;Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC, $method(static_cast<void(Authenticator$DTLS10Mac::*)($ProtocolVersion*,$CipherSuite$MacAlg*,$SecretKey*)>(&Authenticator$DTLS10Mac::init$)), "java.security.NoSuchAlgorithmException,java.security.InvalidKeyException"},
	{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC},
	{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$DTLS10Mac_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$DTLS10Mac", "sun.security.ssl.Authenticator", "DTLS10Mac", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Authenticator$DTLS10Authenticator", "sun.security.ssl.Authenticator", "DTLS10Authenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$DTLS10Mac_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Authenticator$DTLS10Mac",
	"sun.security.ssl.Authenticator$DTLS10Authenticator",
	"sun.security.ssl.Authenticator$MAC",
	_Authenticator$DTLS10Mac_FieldInfo_,
	_Authenticator$DTLS10Mac_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$DTLS10Mac_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$DTLS10Mac($Class* clazz) {
	return $of($alloc(Authenticator$DTLS10Mac));
}

int32_t Authenticator$DTLS10Mac::hashCode() {
	 return this->$Authenticator$DTLS10Authenticator::hashCode();
}

bool Authenticator$DTLS10Mac::equals(Object$* obj) {
	 return this->$Authenticator$DTLS10Authenticator::equals(obj);
}

$Object* Authenticator$DTLS10Mac::clone() {
	 return this->$Authenticator$DTLS10Authenticator::clone();
}

$String* Authenticator$DTLS10Mac::toString() {
	 return this->$Authenticator$DTLS10Authenticator::toString();
}

void Authenticator$DTLS10Mac::finalize() {
	this->$Authenticator$DTLS10Authenticator::finalize();
}

void Authenticator$DTLS10Mac::init$($ProtocolVersion* protocolVersion, $CipherSuite$MacAlg* macAlg, $SecretKey* key) {
	$Authenticator$DTLS10Authenticator::init$(protocolVersion);
	$set(this, macImpl, $new($Authenticator$MacImpl, this, protocolVersion, macAlg, key));
}

$CipherSuite$MacAlg* Authenticator$DTLS10Mac::macAlg() {
	return $nc(this->macImpl)->macAlg$;
}

$bytes* Authenticator$DTLS10Mac::compute(int8_t type, $ByteBuffer* bb, $bytes* sequence, bool isSimulated) {
	return $nc(this->macImpl)->compute(type, bb, sequence, isSimulated);
}

Authenticator$DTLS10Mac::Authenticator$DTLS10Mac() {
}

$Class* Authenticator$DTLS10Mac::load$($String* name, bool initialize) {
	$loadClass(Authenticator$DTLS10Mac, name, initialize, &_Authenticator$DTLS10Mac_ClassInfo_, allocate$Authenticator$DTLS10Mac);
	return class$;
}

$Class* Authenticator$DTLS10Mac::class$ = nullptr;

		} // ssl
	} // security
} // sun
#include <sun/security/ssl/Authenticator$SSL30Mac.h>

#include <java/nio/ByteBuffer.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/Authenticator$MacImpl.h>
#include <sun/security/ssl/Authenticator$SSL30Authenticator.h>
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
using $Authenticator$SSL30Authenticator = ::sun::security::ssl::Authenticator$SSL30Authenticator;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$SSL30Mac_FieldInfo_[] = {
	{"macImpl", "Lsun/security/ssl/Authenticator$MacImpl;", nullptr, $PRIVATE | $FINAL, $field(Authenticator$SSL30Mac, macImpl)},
	{}
};

$MethodInfo _Authenticator$SSL30Mac_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/CipherSuite$MacAlg;Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC, $method(Authenticator$SSL30Mac, init$, void, $ProtocolVersion*, $CipherSuite$MacAlg*, $SecretKey*), "java.security.NoSuchAlgorithmException,java.security.InvalidKeyException"},
	{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC, $virtualMethod(Authenticator$SSL30Mac, compute, $bytes*, int8_t, $ByteBuffer*, $bytes*, bool)},
	{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC, $virtualMethod(Authenticator$SSL30Mac, macAlg, $CipherSuite$MacAlg*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$SSL30Mac_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$SSL30Mac", "sun.security.ssl.Authenticator", "SSL30Mac", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Authenticator$SSL30Authenticator", "sun.security.ssl.Authenticator", "SSL30Authenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$SSL30Mac_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Authenticator$SSL30Mac",
	"sun.security.ssl.Authenticator$SSL30Authenticator",
	"sun.security.ssl.Authenticator$MAC",
	_Authenticator$SSL30Mac_FieldInfo_,
	_Authenticator$SSL30Mac_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$SSL30Mac_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$SSL30Mac($Class* clazz) {
	return $of($alloc(Authenticator$SSL30Mac));
}

int32_t Authenticator$SSL30Mac::hashCode() {
	 return this->$Authenticator$SSL30Authenticator::hashCode();
}

bool Authenticator$SSL30Mac::equals(Object$* obj) {
	 return this->$Authenticator$SSL30Authenticator::equals(obj);
}

$Object* Authenticator$SSL30Mac::clone() {
	 return this->$Authenticator$SSL30Authenticator::clone();
}

$String* Authenticator$SSL30Mac::toString() {
	 return this->$Authenticator$SSL30Authenticator::toString();
}

void Authenticator$SSL30Mac::finalize() {
	this->$Authenticator$SSL30Authenticator::finalize();
}

void Authenticator$SSL30Mac::init$($ProtocolVersion* protocolVersion, $CipherSuite$MacAlg* macAlg, $SecretKey* key) {
	$Authenticator$SSL30Authenticator::init$();
	$set(this, macImpl, $new($Authenticator$MacImpl, this, protocolVersion, macAlg, key));
}

$CipherSuite$MacAlg* Authenticator$SSL30Mac::macAlg() {
	return $nc(this->macImpl)->macAlg$;
}

$bytes* Authenticator$SSL30Mac::compute(int8_t type, $ByteBuffer* bb, $bytes* sequence, bool isSimulated) {
	return $nc(this->macImpl)->compute(type, bb, sequence, isSimulated);
}

Authenticator$SSL30Mac::Authenticator$SSL30Mac() {
}

$Class* Authenticator$SSL30Mac::load$($String* name, bool initialize) {
	$loadClass(Authenticator$SSL30Mac, name, initialize, &_Authenticator$SSL30Mac_ClassInfo_, allocate$Authenticator$SSL30Mac);
	return class$;
}

$Class* Authenticator$SSL30Mac::class$ = nullptr;

		} // ssl
	} // security
} // sun
#include <sun/security/ssl/Authenticator$SSLNullMac.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/Authenticator$MacImpl.h>
#include <sun/security/ssl/Authenticator$SSLNullAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Authenticator$MacImpl = ::sun::security::ssl::Authenticator$MacImpl;
using $Authenticator$SSLNullAuthenticator = ::sun::security::ssl::Authenticator$SSLNullAuthenticator;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$SSLNullMac_FieldInfo_[] = {
	{"macImpl", "Lsun/security/ssl/Authenticator$MacImpl;", nullptr, $PRIVATE | $FINAL, $field(Authenticator$SSLNullMac, macImpl)},
	{}
};

$MethodInfo _Authenticator$SSLNullMac_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Authenticator$SSLNullMac::*)()>(&Authenticator$SSLNullMac::init$))},
	{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC},
	{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$SSLNullMac_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$SSLNullMac", "sun.security.ssl.Authenticator", "SSLNullMac", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Authenticator$SSLNullAuthenticator", "sun.security.ssl.Authenticator", "SSLNullAuthenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$SSLNullMac_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Authenticator$SSLNullMac",
	"sun.security.ssl.Authenticator$SSLNullAuthenticator",
	"sun.security.ssl.Authenticator$MAC",
	_Authenticator$SSLNullMac_FieldInfo_,
	_Authenticator$SSLNullMac_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$SSLNullMac_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$SSLNullMac($Class* clazz) {
	return $of($alloc(Authenticator$SSLNullMac));
}

int32_t Authenticator$SSLNullMac::hashCode() {
	 return this->$Authenticator$SSLNullAuthenticator::hashCode();
}

bool Authenticator$SSLNullMac::equals(Object$* obj) {
	 return this->$Authenticator$SSLNullAuthenticator::equals(obj);
}

$Object* Authenticator$SSLNullMac::clone() {
	 return this->$Authenticator$SSLNullAuthenticator::clone();
}

$String* Authenticator$SSLNullMac::toString() {
	 return this->$Authenticator$SSLNullAuthenticator::toString();
}

void Authenticator$SSLNullMac::finalize() {
	this->$Authenticator$SSLNullAuthenticator::finalize();
}

void Authenticator$SSLNullMac::init$() {
	$Authenticator$SSLNullAuthenticator::init$();
	$set(this, macImpl, $new($Authenticator$MacImpl, this));
}

$CipherSuite$MacAlg* Authenticator$SSLNullMac::macAlg() {
	return $nc(this->macImpl)->macAlg$;
}

$bytes* Authenticator$SSLNullMac::compute(int8_t type, $ByteBuffer* bb, $bytes* sequence, bool isSimulated) {
	return $nc(this->macImpl)->compute(type, bb, sequence, isSimulated);
}

Authenticator$SSLNullMac::Authenticator$SSLNullMac() {
}

$Class* Authenticator$SSLNullMac::load$($String* name, bool initialize) {
	$loadClass(Authenticator$SSLNullMac, name, initialize, &_Authenticator$SSLNullMac_ClassInfo_, allocate$Authenticator$SSLNullMac);
	return class$;
}

$Class* Authenticator$SSLNullMac::class$ = nullptr;

		} // ssl
	} // security
} // sun
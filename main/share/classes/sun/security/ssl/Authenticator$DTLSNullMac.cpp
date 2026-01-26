#include <sun/security/ssl/Authenticator$DTLSNullMac.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/Authenticator$DTLSNullAuthenticator.h>
#include <sun/security/ssl/Authenticator$MacImpl.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Authenticator$DTLSNullAuthenticator = ::sun::security::ssl::Authenticator$DTLSNullAuthenticator;
using $Authenticator$MacImpl = ::sun::security::ssl::Authenticator$MacImpl;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$DTLSNullMac_FieldInfo_[] = {
	{"macImpl", "Lsun/security/ssl/Authenticator$MacImpl;", nullptr, $PRIVATE | $FINAL, $field(Authenticator$DTLSNullMac, macImpl)},
	{}
};

$MethodInfo _Authenticator$DTLSNullMac_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(Authenticator$DTLSNullMac, init$, void)},
	{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC, $virtualMethod(Authenticator$DTLSNullMac, compute, $bytes*, int8_t, $ByteBuffer*, $bytes*, bool)},
	{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC, $virtualMethod(Authenticator$DTLSNullMac, macAlg, $CipherSuite$MacAlg*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$DTLSNullMac_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$DTLSNullMac", "sun.security.ssl.Authenticator", "DTLSNullMac", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.Authenticator$DTLSNullAuthenticator", "sun.security.ssl.Authenticator", "DTLSNullAuthenticator", $PRIVATE | $STATIC},
	{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$DTLSNullMac_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Authenticator$DTLSNullMac",
	"sun.security.ssl.Authenticator$DTLSNullAuthenticator",
	"sun.security.ssl.Authenticator$MAC",
	_Authenticator$DTLSNullMac_FieldInfo_,
	_Authenticator$DTLSNullMac_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$DTLSNullMac_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$DTLSNullMac($Class* clazz) {
	return $of($alloc(Authenticator$DTLSNullMac));
}

int32_t Authenticator$DTLSNullMac::hashCode() {
	 return this->$Authenticator$DTLSNullAuthenticator::hashCode();
}

bool Authenticator$DTLSNullMac::equals(Object$* obj) {
	 return this->$Authenticator$DTLSNullAuthenticator::equals(obj);
}

$Object* Authenticator$DTLSNullMac::clone() {
	 return this->$Authenticator$DTLSNullAuthenticator::clone();
}

$String* Authenticator$DTLSNullMac::toString() {
	 return this->$Authenticator$DTLSNullAuthenticator::toString();
}

void Authenticator$DTLSNullMac::finalize() {
	this->$Authenticator$DTLSNullAuthenticator::finalize();
}

void Authenticator$DTLSNullMac::init$() {
	$Authenticator$DTLSNullAuthenticator::init$();
	$set(this, macImpl, $new($Authenticator$MacImpl, this));
}

$CipherSuite$MacAlg* Authenticator$DTLSNullMac::macAlg() {
	return $nc(this->macImpl)->macAlg$;
}

$bytes* Authenticator$DTLSNullMac::compute(int8_t type, $ByteBuffer* bb, $bytes* sequence, bool isSimulated) {
	return $nc(this->macImpl)->compute(type, bb, sequence, isSimulated);
}

Authenticator$DTLSNullMac::Authenticator$DTLSNullMac() {
}

$Class* Authenticator$DTLSNullMac::load$($String* name, bool initialize) {
	$loadClass(Authenticator$DTLSNullMac, name, initialize, &_Authenticator$DTLSNullMac_ClassInfo_, allocate$Authenticator$DTLSNullMac);
	return class$;
}

$Class* Authenticator$DTLSNullMac::class$ = nullptr;

		} // ssl
	} // security
} // sun
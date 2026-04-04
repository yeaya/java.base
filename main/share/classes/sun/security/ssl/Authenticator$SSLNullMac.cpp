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
	$FieldInfo fieldInfos$$[] = {
		{"macImpl", "Lsun/security/ssl/Authenticator$MacImpl;", nullptr, $PRIVATE | $FINAL, $field(Authenticator$SSLNullMac, macImpl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Authenticator$SSLNullMac, init$, void)},
		{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC, $virtualMethod(Authenticator$SSLNullMac, compute, $bytes*, int8_t, $ByteBuffer*, $bytes*, bool)},
		{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC, $virtualMethod(Authenticator$SSLNullMac, macAlg, $CipherSuite$MacAlg*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$SSLNullMac", "sun.security.ssl.Authenticator", "SSLNullMac", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.Authenticator$SSLNullAuthenticator", "sun.security.ssl.Authenticator", "SSLNullAuthenticator", $PRIVATE | $STATIC},
		{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Authenticator$SSLNullMac",
		"sun.security.ssl.Authenticator$SSLNullAuthenticator",
		"sun.security.ssl.Authenticator$MAC",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.Authenticator"
	};
	$loadClass(Authenticator$SSLNullMac, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Authenticator$SSLNullMac));
	});
	return class$;
}

$Class* Authenticator$SSLNullMac::class$ = nullptr;

		} // ssl
	} // security
} // sun
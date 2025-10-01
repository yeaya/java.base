#include <java/security/cert/LDAPCertStoreParameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertStoreParameters.h>
#include <jcpp.h>

#undef LDAP_DEFAULT_PORT

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _LDAPCertStoreParameters_FieldInfo_[] = {
	{"LDAP_DEFAULT_PORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LDAPCertStoreParameters, LDAP_DEFAULT_PORT)},
	{"port", "I", nullptr, $PRIVATE, $field(LDAPCertStoreParameters, port)},
	{"serverName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LDAPCertStoreParameters, serverName)},
	{}
};

$MethodInfo _LDAPCertStoreParameters_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(LDAPCertStoreParameters::*)($String*,int32_t)>(&LDAPCertStoreParameters::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LDAPCertStoreParameters::*)($String*)>(&LDAPCertStoreParameters::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LDAPCertStoreParameters::*)()>(&LDAPCertStoreParameters::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"getServerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LDAPCertStoreParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.LDAPCertStoreParameters",
	"java.lang.Object",
	"java.security.cert.CertStoreParameters",
	_LDAPCertStoreParameters_FieldInfo_,
	_LDAPCertStoreParameters_MethodInfo_
};

$Object* allocate$LDAPCertStoreParameters($Class* clazz) {
	return $of($alloc(LDAPCertStoreParameters));
}

void LDAPCertStoreParameters::init$($String* serverName, int32_t port) {
	if (serverName == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, serverName, serverName);
	this->port = port;
}

void LDAPCertStoreParameters::init$($String* serverName) {
	LDAPCertStoreParameters::init$(serverName, LDAPCertStoreParameters::LDAP_DEFAULT_PORT);
}

void LDAPCertStoreParameters::init$() {
	LDAPCertStoreParameters::init$("localhost"_s, LDAPCertStoreParameters::LDAP_DEFAULT_PORT);
}

$String* LDAPCertStoreParameters::getServerName() {
	return this->serverName;
}

int32_t LDAPCertStoreParameters::getPort() {
	return this->port;
}

$Object* LDAPCertStoreParameters::clone() {
	try {
		return $of($CertStoreParameters::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($InternalError, $(e->toString()), e);
	}
	$shouldNotReachHere();
}

$String* LDAPCertStoreParameters::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("LDAPCertStoreParameters: [\n"_s);
	sb->append($$str({"  serverName: "_s, this->serverName, "\n"_s}));
	sb->append($$str({"  port: "_s, $$str(this->port), "\n"_s}));
	sb->append("]"_s);
	return sb->toString();
}

LDAPCertStoreParameters::LDAPCertStoreParameters() {
}

$Class* LDAPCertStoreParameters::load$($String* name, bool initialize) {
	$loadClass(LDAPCertStoreParameters, name, initialize, &_LDAPCertStoreParameters_ClassInfo_, allocate$LDAPCertStoreParameters);
	return class$;
}

$Class* LDAPCertStoreParameters::class$ = nullptr;

		} // cert
	} // security
} // java
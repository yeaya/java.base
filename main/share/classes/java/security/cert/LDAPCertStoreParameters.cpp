#include <java/security/cert/LDAPCertStoreParameters.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <java/security/cert/CertStoreParameters.h>
#include <jcpp.h>

#undef LDAP_DEFAULT_PORT

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;

namespace java {
	namespace security {
		namespace cert {

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
		return $CertStoreParameters::clone();
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, $(e->toString()), e);
	}
	$shouldNotReachHere();
}

$String* LDAPCertStoreParameters::toString() {
	$useLocalObjectStack();
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
	$FieldInfo fieldInfos$$[] = {
		{"LDAP_DEFAULT_PORT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LDAPCertStoreParameters, LDAP_DEFAULT_PORT)},
		{"port", "I", nullptr, $PRIVATE, $field(LDAPCertStoreParameters, port)},
		{"serverName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LDAPCertStoreParameters, serverName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(LDAPCertStoreParameters, init$, void, $String*, int32_t)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LDAPCertStoreParameters, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(LDAPCertStoreParameters, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LDAPCertStoreParameters, clone, $Object*)},
		{"getPort", "()I", nullptr, $PUBLIC, $virtualMethod(LDAPCertStoreParameters, getPort, int32_t)},
		{"getServerName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LDAPCertStoreParameters, getServerName, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LDAPCertStoreParameters, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.LDAPCertStoreParameters",
		"java.lang.Object",
		"java.security.cert.CertStoreParameters",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LDAPCertStoreParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LDAPCertStoreParameters);
	});
	return class$;
}

$Class* LDAPCertStoreParameters::class$ = nullptr;

		} // cert
	} // security
} // java
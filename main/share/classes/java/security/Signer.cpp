#include <java/security/Signer.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/Identity.h>
#include <java/security/IdentityScope.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/KeyManagementException.h>
#include <java/security/KeyPair.h>
#include <java/security/PrivateKey.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PublicKey.h>
#include <java/security/Signer$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $Identity = ::java::security::Identity;
using $IdentityScope = ::java::security::IdentityScope;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $KeyManagementException = ::java::security::KeyManagementException;
using $KeyPair = ::java::security::KeyPair;
using $PrivateKey = ::java::security::PrivateKey;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PublicKey = ::java::security::PublicKey;
using $Signer$1 = ::java::security::Signer$1;

namespace java {
	namespace security {

void Signer::init$() {
	$Identity::init$();
}

void Signer::init$($String* name) {
	$Identity::init$(name);
}

void Signer::init$($String* name, $IdentityScope* scope) {
	$Identity::init$(name, scope);
}

$PrivateKey* Signer::getPrivateKey() {
	check("getSignerPrivateKey"_s);
	return this->privateKey;
}

void Signer::setKeyPair($KeyPair* pair) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	check("setSignerKeyPair"_s);
	$var($PublicKey, pub, $nc(pair)->getPublic());
	$var($PrivateKey, priv, pair->getPrivate());
	if (pub == nullptr || priv == nullptr) {
		$throwNew($InvalidParameterException);
	}
	try {
		$AccessController::doPrivileged($$new($Signer$1, this, pub));
	} catch ($PrivilegedActionException& pae) {
		$throw($$cast($KeyManagementException, pae->getException()));
	}
	$set(this, privateKey, priv);
}

$String* Signer::printKeys() {
	$useLocalObjectStack();
	$var($String, keys, ""_s);
	$var($PublicKey, publicKey, getPublicKey());
	if (publicKey != nullptr && this->privateKey != nullptr) {
		$assign(keys, "\tpublic and private keys initialized"_s);
	} else {
		$assign(keys, "\tno keys"_s);
	}
	return keys;
}

$String* Signer::toString() {
	return $str({"[Signer]"_s, $($Identity::toString())});
}

void Signer::check($String* directive) {
	$init(Signer);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkSecurityAccess(directive);
	}
}

Signer::Signer() {
}

$Class* Signer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Signer, serialVersionUID)},
		{"privateKey", "Ljava/security/PrivateKey;", nullptr, $PRIVATE, $field(Signer, privateKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Signer, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Signer, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/security/IdentityScope;)V", nullptr, $PUBLIC, $method(Signer, init$, void, $String*, $IdentityScope*), "java.security.KeyManagementException"},
		{"check", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Signer, check, void, $String*)},
		{"getPrivateKey", "()Ljava/security/PrivateKey;", nullptr, $PUBLIC, $virtualMethod(Signer, getPrivateKey, $PrivateKey*)},
		{"printKeys", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Signer, printKeys, $String*)},
		{"setKeyPair", "(Ljava/security/KeyPair;)V", nullptr, $PUBLIC | $FINAL, $method(Signer, setKeyPair, void, $KeyPair*), "java.security.InvalidParameterException,java.security.KeyException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Signer, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Signer$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.Signer",
		"java.security.Identity",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"java.security.Signer$1"
	};
	$loadClass(Signer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Signer));
	});
	return class$;
}

$Class* Signer::class$ = nullptr;

	} // security
} // java
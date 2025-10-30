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
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/PublicKey.h>
#include <java/security/Signer$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $Identity = ::java::security::Identity;
using $IdentityScope = ::java::security::IdentityScope;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $KeyManagementException = ::java::security::KeyManagementException;
using $KeyPair = ::java::security::KeyPair;
using $PrivateKey = ::java::security::PrivateKey;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $PublicKey = ::java::security::PublicKey;
using $Signer$1 = ::java::security::Signer$1;

namespace java {
	namespace security {

$NamedAttribute Signer_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Signer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Signer_Attribute_var$0},
	{}
};

$FieldInfo _Signer_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Signer, serialVersionUID)},
	{"privateKey", "Ljava/security/PrivateKey;", nullptr, $PRIVATE, $field(Signer, privateKey)},
	{}
};

$MethodInfo _Signer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Signer::*)()>(&Signer::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Signer::*)($String*)>(&Signer::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/security/IdentityScope;)V", nullptr, $PUBLIC, $method(static_cast<void(Signer::*)($String*,$IdentityScope*)>(&Signer::init$)), "java.security.KeyManagementException"},
	{"check", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Signer::check))},
	{"getPrivateKey", "()Ljava/security/PrivateKey;", nullptr, $PUBLIC},
	{"printKeys", "()Ljava/lang/String;", nullptr, 0},
	{"setKeyPair", "(Ljava/security/KeyPair;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Signer::*)($KeyPair*)>(&Signer::setKeyPair)), "java.security.InvalidParameterException,java.security.KeyException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Signer_InnerClassesInfo_[] = {
	{"java.security.Signer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Signer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.Signer",
	"java.security.Identity",
	nullptr,
	_Signer_FieldInfo_,
	_Signer_MethodInfo_,
	nullptr,
	nullptr,
	_Signer_InnerClassesInfo_,
	_Signer_Annotations_,
	nullptr,
	"java.security.Signer$1"
};

$Object* allocate$Signer($Class* clazz) {
	return $of($alloc(Signer));
}

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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	check("setSignerKeyPair"_s);
	$var($PublicKey, pub, $nc(pair)->getPublic());
	$var($PrivateKey, priv, pair->getPrivate());
	if (pub == nullptr || priv == nullptr) {
		$throwNew($InvalidParameterException);
	}
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Signer$1, this, pub)));
	} catch ($PrivilegedActionException& pae) {
		$throw($cast($KeyManagementException, $(pae->getException())));
	}
	$set(this, privateKey, priv);
}

$String* Signer::printKeys() {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Signer, name, initialize, &_Signer_ClassInfo_, allocate$Signer);
	return class$;
}

$Class* Signer::class$ = nullptr;

	} // security
} // java
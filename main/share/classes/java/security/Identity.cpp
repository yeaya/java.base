#include <java/security/Identity.h>

#include <java/lang/SecurityManager.h>
#include <java/security/Certificate.h>
#include <java/security/IdentityScope.h>
#include <java/security/KeyManagementException.h>
#include <java/security/Principal.h>
#include <java/security/PublicKey.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::Certificate>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityManager = ::java::lang::SecurityManager;
using $Certificate = ::java::security::Certificate;
using $IdentityScope = ::java::security::IdentityScope;
using $Key = ::java::security::Key;
using $KeyManagementException = ::java::security::KeyManagementException;
using $Principal = ::java::security::Principal;
using $PublicKey = ::java::security::PublicKey;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;

namespace java {
	namespace security {

$NamedAttribute Identity_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Identity_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Identity_Attribute_var$0},
	{}
};

$FieldInfo _Identity_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Identity, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Identity, name)},
	{"publicKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE, $field(Identity, publicKey)},
	{"info", "Ljava/lang/String;", nullptr, 0, $field(Identity, info)},
	{"scope", "Ljava/security/IdentityScope;", nullptr, 0, $field(Identity, scope)},
	{"certificates", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/security/Certificate;>;", 0, $field(Identity, certificates$)},
	{}
};

$MethodInfo _Identity_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Identity::*)()>(&Identity::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/security/IdentityScope;)V", nullptr, $PUBLIC, $method(static_cast<void(Identity::*)($String*,$IdentityScope*)>(&Identity::init$)), "java.security.KeyManagementException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Identity::*)($String*)>(&Identity::init$))},
	{"addCertificate", "(Ljava/security/Certificate;)V", nullptr, $PUBLIC, nullptr, "java.security.KeyManagementException"},
	{"certificates", "()[Ljava/security/Certificate;", nullptr, $PUBLIC},
	{"check", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Identity::check))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"fullName", "()Ljava/lang/String;", nullptr, 0},
	{"getInfo", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC},
	{"getScope", "()Ljava/security/IdentityScope;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$IdentityScope*(Identity::*)()>(&Identity::getScope))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"identityEquals", "(Ljava/security/Identity;)Z", nullptr, $PROTECTED},
	{"keyEquals", "(Ljava/security/PublicKey;Ljava/security/PublicKey;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Identity::*)($PublicKey*,$PublicKey*)>(&Identity::keyEquals))},
	{"printCertificates", "()Ljava/lang/String;", nullptr, 0},
	{"printKeys", "()Ljava/lang/String;", nullptr, 0},
	{"removeCertificate", "(Ljava/security/Certificate;)V", nullptr, $PUBLIC, nullptr, "java.security.KeyManagementException"},
	{"setInfo", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPublicKey", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC, nullptr, "java.security.KeyManagementException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Identity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.Identity",
	"java.lang.Object",
	"java.security.Principal,java.io.Serializable",
	_Identity_FieldInfo_,
	_Identity_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Identity_Annotations_
};

$Object* allocate$Identity($Class* clazz) {
	return $of($alloc(Identity));
}

$Object* Identity::clone() {
	 return this->$Principal::clone();
}

void Identity::finalize() {
	this->$Principal::finalize();
}

void Identity::init$() {
	Identity::init$("restoring..."_s);
}

void Identity::init$($String* name, $IdentityScope* scope) {
	Identity::init$(name);
	if (scope != nullptr) {
		scope->addIdentity(this);
	}
	$set(this, scope, scope);
}

void Identity::init$($String* name) {
	$set(this, info, "No further information available."_s);
	$set(this, name, name);
}

$String* Identity::getName() {
	return this->name;
}

$IdentityScope* Identity::getScope() {
	return this->scope;
}

$PublicKey* Identity::getPublicKey() {
	return this->publicKey;
}

void Identity::setPublicKey($PublicKey* key) {
	check("setIdentityPublicKey"_s);
	$set(this, publicKey, key);
	$set(this, certificates$, $new($Vector));
}

void Identity::setInfo($String* info) {
	check("setIdentityInfo"_s);
	$set(this, info, info);
}

$String* Identity::getInfo() {
	return this->info;
}

void Identity::addCertificate($Certificate* certificate) {
	check("addIdentityCertificate"_s);
	if (this->certificates$ == nullptr) {
		$set(this, certificates$, $new($Vector));
	}
	if (this->publicKey != nullptr) {
		if (!keyEquals(this->publicKey, $($nc(certificate)->getPublicKey()))) {
			$throwNew($KeyManagementException, "public key different from cert public key"_s);
		}
	} else {
		$set(this, publicKey, $nc(certificate)->getPublicKey());
	}
	$nc(this->certificates$)->addElement(certificate);
}

bool Identity::keyEquals($PublicKey* aKey, $PublicKey* anotherKey) {
	$useLocalCurrentObjectStackCache();
	$var($String, aKeyFormat, $nc(aKey)->getFormat());
	$var($String, anotherKeyFormat, $nc(anotherKey)->getFormat());
	if ((aKeyFormat == nullptr) ^ (anotherKeyFormat == nullptr)) {
		return false;
	}
	if (aKeyFormat != nullptr && anotherKeyFormat != nullptr) {
		if (!aKeyFormat->equalsIgnoreCase(anotherKeyFormat)) {
			return false;
		}
	}
	$var($bytes, var$0, aKey->getEncoded());
	return $Arrays::equals(var$0, $(anotherKey->getEncoded()));
}

void Identity::removeCertificate($Certificate* certificate) {
	check("removeIdentityCertificate"_s);
	if (this->certificates$ != nullptr) {
		$nc(this->certificates$)->removeElement(certificate);
	}
}

$CertificateArray* Identity::certificates() {
	if (this->certificates$ == nullptr) {
		return $new($CertificateArray, 0);
	}
	int32_t len = $nc(this->certificates$)->size();
	$var($CertificateArray, certs, $new($CertificateArray, len));
	$nc(this->certificates$)->copyInto(certs);
	return certs;
}

bool Identity::equals(Object$* identity) {
	$useLocalCurrentObjectStackCache();
	if ($equals(identity, this)) {
		return true;
	}
	$var(Identity, other, nullptr);
	bool var$1 = $instanceOf(Identity, identity);
	if (var$1) {
		$assign(other, $cast(Identity, identity));
		var$1 = true;
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$2 = $nc($(this->fullName()))->equals($($nc(other)->fullName()));
		var$0 = (var$2 || identityEquals(other));
	}
	return var$0;
}

bool Identity::identityEquals(Identity* identity) {
	if (!$nc(this->name)->equalsIgnoreCase($nc(identity)->name)) {
		return false;
	}
	if ((this->publicKey == nullptr) ^ ($nc(identity)->publicKey == nullptr)) {
		return false;
	}
	if (this->publicKey != nullptr && $nc(identity)->publicKey != nullptr) {
		if (!$nc($of(this->publicKey))->equals(identity->publicKey)) {
			return false;
		}
	}
	return true;
}

$String* Identity::fullName() {
	$useLocalCurrentObjectStackCache();
	$var($String, parsable, this->name);
	if (this->scope != nullptr) {
		$plusAssign(parsable, $$str({"."_s, $($nc(this->scope)->getName())}));
	}
	return parsable;
}

$String* Identity::toString() {
	$useLocalCurrentObjectStackCache();
	check("printIdentity"_s);
	$var($String, printable, this->name);
	if (this->scope != nullptr) {
		$plusAssign(printable, $$str({"["_s, $($nc(this->scope)->getName()), "]"_s}));
	}
	return printable;
}

$String* Identity::toString(bool detailed) {
	$useLocalCurrentObjectStackCache();
	$var($String, out, toString());
	if (detailed) {
		$plusAssign(out, "\n"_s);
		$plusAssign(out, $(printKeys()));
		$plusAssign(out, $$str({"\n"_s, $(printCertificates())}));
		if (this->info != nullptr) {
			$plusAssign(out, $$str({"\n\t"_s, this->info}));
		} else {
			$plusAssign(out, "\n\tno additional information available."_s);
		}
	}
	return out;
}

$String* Identity::printKeys() {
	$var($String, key, ""_s);
	if (this->publicKey != nullptr) {
		$assign(key, "\tpublic key initialized"_s);
	} else {
		$assign(key, "\tno public key"_s);
	}
	return key;
}

$String* Identity::printCertificates() {
	$useLocalCurrentObjectStackCache();
	$var($String, out, ""_s);
	if (this->certificates$ == nullptr) {
		return "\tno certificates"_s;
	} else {
		$plusAssign(out, "\tcertificates: \n"_s);
		int32_t i = 1;
		{
			$var($Iterator, i$, $nc(this->certificates$)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Certificate, cert, $cast($Certificate, i$->next()));
				{
					$plusAssign(out, $$str({"\tcertificate "_s, $$str(i++), "\tfor  : "_s, $($nc(cert)->getPrincipal()), "\n"_s}));
					$plusAssign(out, $$str({"\t\t\tfrom : "_s, $(cert->getGuarantor()), "\n"_s}));
				}
			}
		}
	}
	return out;
}

int32_t Identity::hashCode() {
	return $nc(this->name)->hashCode();
}

void Identity::check($String* directive) {
	$init(Identity);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkSecurityAccess(directive);
	}
}

Identity::Identity() {
}

$Class* Identity::load$($String* name, bool initialize) {
	$loadClass(Identity, name, initialize, &_Identity_ClassInfo_, allocate$Identity);
	return class$;
}

$Class* Identity::class$ = nullptr;

	} // security
} // java
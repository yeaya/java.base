#include <java/security/KeyPair.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;

namespace java {
	namespace security {

$FieldInfo _KeyPair_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyPair, serialVersionUID)},
	{"privateKey", "Ljava/security/PrivateKey;", nullptr, $PRIVATE, $field(KeyPair, privateKey)},
	{"publicKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE, $field(KeyPair, publicKey)},
	{}
};

$MethodInfo _KeyPair_MethodInfo_[] = {
	{"<init>", "(Ljava/security/PublicKey;Ljava/security/PrivateKey;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyPair::*)($PublicKey*,$PrivateKey*)>(&KeyPair::init$))},
	{"getPrivate", "()Ljava/security/PrivateKey;", nullptr, $PUBLIC, $method(static_cast<$PrivateKey*(KeyPair::*)()>(&KeyPair::getPrivate))},
	{"getPublic", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, $method(static_cast<$PublicKey*(KeyPair::*)()>(&KeyPair::getPublic))},
	{}
};

$ClassInfo _KeyPair_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.KeyPair",
	"java.lang.Object",
	"java.io.Serializable",
	_KeyPair_FieldInfo_,
	_KeyPair_MethodInfo_
};

$Object* allocate$KeyPair($Class* clazz) {
	return $of($alloc(KeyPair));
}

void KeyPair::init$($PublicKey* publicKey, $PrivateKey* privateKey) {
	$set(this, publicKey, publicKey);
	$set(this, privateKey, privateKey);
}

$PublicKey* KeyPair::getPublic() {
	return this->publicKey;
}

$PrivateKey* KeyPair::getPrivate() {
	return this->privateKey;
}

KeyPair::KeyPair() {
}

$Class* KeyPair::load$($String* name, bool initialize) {
	$loadClass(KeyPair, name, initialize, &_KeyPair_ClassInfo_, allocate$KeyPair);
	return class$;
}

$Class* KeyPair::class$ = nullptr;

	} // security
} // java
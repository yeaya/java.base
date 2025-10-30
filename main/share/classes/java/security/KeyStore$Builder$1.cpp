#include <java/security/KeyStore$Builder$1.h>

#include <java/lang/IllegalStateException.h>
#include <java/security/KeyStore$Builder.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$Builder = ::java::security::KeyStore$Builder;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;

namespace java {
	namespace security {

$FieldInfo _KeyStore$Builder$1_FieldInfo_[] = {
	{"val$protectionParameter", "Ljava/security/KeyStore$ProtectionParameter;", nullptr, $FINAL | $SYNTHETIC, $field(KeyStore$Builder$1, val$protectionParameter)},
	{"val$keyStore", "Ljava/security/KeyStore;", nullptr, $FINAL | $SYNTHETIC, $field(KeyStore$Builder$1, val$keyStore)},
	{"getCalled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(KeyStore$Builder$1, getCalled)},
	{}
};

$MethodInfo _KeyStore$Builder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)V", nullptr, 0, $method(static_cast<void(KeyStore$Builder$1::*)($KeyStore*,$KeyStore$ProtectionParameter*)>(&KeyStore$Builder$1::init$))},
	{"getKeyStore", "()Ljava/security/KeyStore;", nullptr, $PUBLIC},
	{"getProtectionParameter", "(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyStore$Builder$1_EnclosingMethodInfo_ = {
	"java.security.KeyStore$Builder",
	"newInstance",
	"(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;"
};

$InnerClassInfo _KeyStore$Builder$1_InnerClassesInfo_[] = {
	{"java.security.KeyStore$Builder", "java.security.KeyStore", "Builder", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.security.KeyStore$Builder$1", nullptr, nullptr, 0},
	{"java.security.KeyStore$ProtectionParameter", "java.security.KeyStore", "ProtectionParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStore$Builder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.KeyStore$Builder$1",
	"java.security.KeyStore$Builder",
	nullptr,
	_KeyStore$Builder$1_FieldInfo_,
	_KeyStore$Builder$1_MethodInfo_,
	nullptr,
	&_KeyStore$Builder$1_EnclosingMethodInfo_,
	_KeyStore$Builder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$Builder$1($Class* clazz) {
	return $of($alloc(KeyStore$Builder$1));
}

void KeyStore$Builder$1::init$($KeyStore* val$keyStore, $KeyStore$ProtectionParameter* val$protectionParameter) {
	$set(this, val$keyStore, val$keyStore);
	$set(this, val$protectionParameter, val$protectionParameter);
	$KeyStore$Builder::init$();
}

$KeyStore* KeyStore$Builder$1::getKeyStore() {
	this->getCalled = true;
	return this->val$keyStore;
}

$KeyStore$ProtectionParameter* KeyStore$Builder$1::getProtectionParameter($String* alias) {
	if (alias == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->getCalled == false) {
		$throwNew($IllegalStateException, "getKeyStore() must be called first"_s);
	}
	return this->val$protectionParameter;
}

KeyStore$Builder$1::KeyStore$Builder$1() {
}

$Class* KeyStore$Builder$1::load$($String* name, bool initialize) {
	$loadClass(KeyStore$Builder$1, name, initialize, &_KeyStore$Builder$1_ClassInfo_, allocate$KeyStore$Builder$1);
	return class$;
}

$Class* KeyStore$Builder$1::class$ = nullptr;

	} // security
} // java
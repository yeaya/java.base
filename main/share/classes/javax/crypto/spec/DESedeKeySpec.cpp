#include <javax/crypto/spec/DESedeKeySpec.h>

#include <java/security/InvalidKeyException.h>
#include <javax/crypto/spec/DESKeySpec.h>
#include <jcpp.h>

#undef DES_EDE_KEY_LEN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $DESKeySpec = ::javax::crypto::spec::DESKeySpec;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _DESedeKeySpec_FieldInfo_[] = {
	{"DES_EDE_KEY_LEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DESedeKeySpec, DES_EDE_KEY_LEN)},
	{"key", "[B", nullptr, $PRIVATE, $field(DESedeKeySpec, key)},
	{}
};

$MethodInfo _DESedeKeySpec_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(DESedeKeySpec::*)($bytes*)>(&DESedeKeySpec::init$)), "java.security.InvalidKeyException"},
	{"<init>", "([BI)V", nullptr, $PUBLIC, $method(static_cast<void(DESedeKeySpec::*)($bytes*,int32_t)>(&DESedeKeySpec::init$)), "java.security.InvalidKeyException"},
	{"getKey", "()[B", nullptr, $PUBLIC},
	{"isParityAdjusted", "([BI)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,int32_t)>(&DESedeKeySpec::isParityAdjusted)), "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _DESedeKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.DESedeKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_DESedeKeySpec_FieldInfo_,
	_DESedeKeySpec_MethodInfo_
};

$Object* allocate$DESedeKeySpec($Class* clazz) {
	return $of($alloc(DESedeKeySpec));
}

void DESedeKeySpec::init$($bytes* key) {
	DESedeKeySpec::init$(key, 0);
}

void DESedeKeySpec::init$($bytes* key, int32_t offset) {
	if ($nc(key)->length - offset < 24) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	$set(this, key, $new($bytes, 24));
	$System::arraycopy(key, offset, this->key, 0, 24);
}

$bytes* DESedeKeySpec::getKey() {
	return $cast($bytes, $nc(this->key)->clone());
}

bool DESedeKeySpec::isParityAdjusted($bytes* key, int32_t offset) {
	$init(DESedeKeySpec);
	if ($nc(key)->length - offset < 24) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	bool var$1 = $DESKeySpec::isParityAdjusted(key, offset) == false;
	bool var$0 = var$1 || $DESKeySpec::isParityAdjusted(key, offset + 8) == false;
	if (var$0 || $DESKeySpec::isParityAdjusted(key, offset + 16) == false) {
		return false;
	}
	return true;
}

DESedeKeySpec::DESedeKeySpec() {
}

$Class* DESedeKeySpec::load$($String* name, bool initialize) {
	$loadClass(DESedeKeySpec, name, initialize, &_DESedeKeySpec_ClassInfo_, allocate$DESedeKeySpec);
	return class$;
}

$Class* DESedeKeySpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax
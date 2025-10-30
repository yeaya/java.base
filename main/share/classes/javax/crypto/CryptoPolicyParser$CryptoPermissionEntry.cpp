#include <javax/crypto/CryptoPolicyParser$CryptoPermissionEntry.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/CryptoPolicyParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $CryptoPolicyParser = ::javax::crypto::CryptoPolicyParser;

namespace javax {
	namespace crypto {

$FieldInfo _CryptoPolicyParser$CryptoPermissionEntry_FieldInfo_[] = {
	{"cryptoPermission", "Ljava/lang/String;", nullptr, 0, $field(CryptoPolicyParser$CryptoPermissionEntry, cryptoPermission)},
	{"alg", "Ljava/lang/String;", nullptr, 0, $field(CryptoPolicyParser$CryptoPermissionEntry, alg)},
	{"exemptionMechanism", "Ljava/lang/String;", nullptr, 0, $field(CryptoPolicyParser$CryptoPermissionEntry, exemptionMechanism)},
	{"maxKeySize", "I", nullptr, 0, $field(CryptoPolicyParser$CryptoPermissionEntry, maxKeySize)},
	{"checkParam", "Z", nullptr, 0, $field(CryptoPolicyParser$CryptoPermissionEntry, checkParam)},
	{"algParamSpec", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, 0, $field(CryptoPolicyParser$CryptoPermissionEntry, algParamSpec)},
	{}
};

$MethodInfo _CryptoPolicyParser$CryptoPermissionEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CryptoPolicyParser$CryptoPermissionEntry::*)()>(&CryptoPolicyParser$CryptoPermissionEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CryptoPolicyParser$CryptoPermissionEntry_InnerClassesInfo_[] = {
	{"javax.crypto.CryptoPolicyParser$CryptoPermissionEntry", "javax.crypto.CryptoPolicyParser", "CryptoPermissionEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CryptoPolicyParser$CryptoPermissionEntry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.crypto.CryptoPolicyParser$CryptoPermissionEntry",
	"java.lang.Object",
	nullptr,
	_CryptoPolicyParser$CryptoPermissionEntry_FieldInfo_,
	_CryptoPolicyParser$CryptoPermissionEntry_MethodInfo_,
	nullptr,
	nullptr,
	_CryptoPolicyParser$CryptoPermissionEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.CryptoPolicyParser"
};

$Object* allocate$CryptoPolicyParser$CryptoPermissionEntry($Class* clazz) {
	return $of($alloc(CryptoPolicyParser$CryptoPermissionEntry));
}

void CryptoPolicyParser$CryptoPermissionEntry::init$() {
	this->maxKeySize = 0;
	$set(this, alg, nullptr);
	$set(this, exemptionMechanism, nullptr);
	this->checkParam = false;
	$set(this, algParamSpec, nullptr);
}

int32_t CryptoPolicyParser$CryptoPermissionEntry::hashCode() {
	int32_t retval = $nc(this->cryptoPermission)->hashCode();
	if (this->alg != nullptr) {
		retval ^= $nc(this->alg)->hashCode();
	}
	if (this->exemptionMechanism != nullptr) {
		retval ^= $nc(this->exemptionMechanism)->hashCode();
	}
	retval ^= this->maxKeySize;
	if (this->checkParam) {
		retval ^= 100;
	}
	if (this->algParamSpec != nullptr) {
		retval ^= $nc($of(this->algParamSpec))->hashCode();
	}
	return retval;
}

bool CryptoPolicyParser$CryptoPermissionEntry::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(CryptoPolicyParser$CryptoPermissionEntry, obj))) {
		return false;
	}
	$var(CryptoPolicyParser$CryptoPermissionEntry, that, $cast(CryptoPolicyParser$CryptoPermissionEntry, obj));
	if (this->cryptoPermission == nullptr) {
		if ($nc(that)->cryptoPermission != nullptr) {
			return false;
		}
	} else if (!$nc(this->cryptoPermission)->equals($nc(that)->cryptoPermission)) {
		return false;
	}
	if (this->alg == nullptr) {
		if ($nc(that)->alg != nullptr) {
			return false;
		}
	} else if (!$nc(this->alg)->equalsIgnoreCase($nc(that)->alg)) {
		return false;
	}
	if (!(this->maxKeySize == $nc(that)->maxKeySize)) {
		return false;
	}
	if (this->checkParam != $nc(that)->checkParam) {
		return false;
	}
	if (this->algParamSpec == nullptr) {
		if ($nc(that)->algParamSpec != nullptr) {
			return false;
		}
	} else if (!$nc($of(this->algParamSpec))->equals($nc(that)->algParamSpec)) {
		return false;
	}
	return true;
}

CryptoPolicyParser$CryptoPermissionEntry::CryptoPolicyParser$CryptoPermissionEntry() {
}

$Class* CryptoPolicyParser$CryptoPermissionEntry::load$($String* name, bool initialize) {
	$loadClass(CryptoPolicyParser$CryptoPermissionEntry, name, initialize, &_CryptoPolicyParser$CryptoPermissionEntry_ClassInfo_, allocate$CryptoPolicyParser$CryptoPermissionEntry);
	return class$;
}

$Class* CryptoPolicyParser$CryptoPermissionEntry::class$ = nullptr;

	} // crypto
} // javax
#include <com/sun/crypto/provider/PrivateKeyInfo.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef ZERO
#undef VERSION

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _PrivateKeyInfo_FieldInfo_[] = {
	{"VERSION", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrivateKeyInfo, VERSION)},
	{"algid", "Lsun/security/x509/AlgorithmId;", nullptr, $PRIVATE, $field(PrivateKeyInfo, algid)},
	{"privkey", "[B", nullptr, $PRIVATE, $field(PrivateKeyInfo, privkey)},
	{}
};

$MethodInfo _PrivateKeyInfo_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(PrivateKeyInfo::*)($bytes*)>(&PrivateKeyInfo::init$)), "java.io.IOException"},
	{"clear", "()V", nullptr, $PUBLIC, $method(static_cast<void(PrivateKeyInfo::*)()>(&PrivateKeyInfo::clear))},
	{"getAlgorithm", "()Lsun/security/x509/AlgorithmId;", nullptr, 0, $method(static_cast<$AlgorithmId*(PrivateKeyInfo::*)()>(&PrivateKeyInfo::getAlgorithm))},
	{}
};

$ClassInfo _PrivateKeyInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PrivateKeyInfo",
	"java.lang.Object",
	nullptr,
	_PrivateKeyInfo_FieldInfo_,
	_PrivateKeyInfo_MethodInfo_
};

$Object* allocate$PrivateKeyInfo($Class* clazz) {
	return $of($alloc(PrivateKeyInfo));
}

$BigInteger* PrivateKeyInfo::VERSION = nullptr;

void PrivateKeyInfo::init$($bytes* encoded) {
	$var($DerValue, val, $new($DerValue, encoded));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (val->tag != $DerValue::tag_Sequence) {
				$throwNew($IOException, "private key parse error: not a sequence"_s);
			}
			$var($BigInteger, parsedVersion, $nc(val->data$)->getBigInteger());
			if (!$nc(parsedVersion)->equals(PrivateKeyInfo::VERSION)) {
				$throwNew($IOException, $$str({"version mismatch: (supported: "_s, PrivateKeyInfo::VERSION, ", parsed: "_s, parsedVersion}));
			}
			$set(this, algid, $AlgorithmId::parse($($nc(val->data$)->getDerValue())));
			$set(this, privkey, $nc(val->data$)->getOctetString());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			val->clear();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$AlgorithmId* PrivateKeyInfo::getAlgorithm() {
	return this->algid;
}

void PrivateKeyInfo::clear() {
	$Arrays::fill(this->privkey, (int8_t)0);
}

void clinit$PrivateKeyInfo($Class* class$) {
	$init($BigInteger);
	$assignStatic(PrivateKeyInfo::VERSION, $BigInteger::ZERO);
}

PrivateKeyInfo::PrivateKeyInfo() {
}

$Class* PrivateKeyInfo::load$($String* name, bool initialize) {
	$loadClass(PrivateKeyInfo, name, initialize, &_PrivateKeyInfo_ClassInfo_, clinit$PrivateKeyInfo, allocate$PrivateKeyInfo);
	return class$;
}

$Class* PrivateKeyInfo::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com
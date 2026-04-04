#include <com/sun/crypto/provider/PrivateKeyInfo.h>
#include <java/io/IOException.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef VERSION
#undef ZERO

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$BigInteger* PrivateKeyInfo::VERSION = nullptr;

void PrivateKeyInfo::init$($bytes* encoded) {
	$useLocalObjectStack();
	$var($DerValue, val, $new($DerValue, encoded));
	$var($Throwable, var$0, nullptr);
	try {
		if (val->tag != $DerValue::tag_Sequence) {
			$throwNew($IOException, "private key parse error: not a sequence"_s);
		}
		$var($BigInteger, parsedVersion, $nc(val->data$)->getBigInteger());
		if (!$nc(parsedVersion)->equals(PrivateKeyInfo::VERSION)) {
			$throwNew($IOException, $$str({"version mismatch: (supported: "_s, PrivateKeyInfo::VERSION, ", parsed: "_s, parsedVersion}));
		}
		$set(this, algid, $AlgorithmId::parse($(val->data$->getDerValue())));
		$set(this, privkey, val->data$->getOctetString());
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		val->clear();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$AlgorithmId* PrivateKeyInfo::getAlgorithm() {
	return this->algid;
}

void PrivateKeyInfo::clear() {
	$Arrays::fill(this->privkey, (int8_t)0);
}

void PrivateKeyInfo::clinit$($Class* clazz) {
	$init($BigInteger);
	$assignStatic(PrivateKeyInfo::VERSION, $BigInteger::ZERO);
}

PrivateKeyInfo::PrivateKeyInfo() {
}

$Class* PrivateKeyInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"VERSION", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrivateKeyInfo, VERSION)},
		{"algid", "Lsun/security/x509/AlgorithmId;", nullptr, $PRIVATE, $field(PrivateKeyInfo, algid)},
		{"privkey", "[B", nullptr, $PRIVATE, $field(PrivateKeyInfo, privkey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, 0, $method(PrivateKeyInfo, init$, void, $bytes*), "java.io.IOException"},
		{"clear", "()V", nullptr, $PUBLIC, $method(PrivateKeyInfo, clear, void)},
		{"getAlgorithm", "()Lsun/security/x509/AlgorithmId;", nullptr, 0, $method(PrivateKeyInfo, getAlgorithm, $AlgorithmId*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PrivateKeyInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrivateKeyInfo, name, initialize, &classInfo$$, PrivateKeyInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateKeyInfo);
	});
	return class$;
}

$Class* PrivateKeyInfo::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com
#include <javax/crypto/spec/DESKeySpec.h>
#include <java/security/InvalidKeyException.h>
#include <jcpp.h>

#undef DES_KEY_LEN
#undef WEAK_KEYS

using $byteArray2 = $Array<int8_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidKeyException = ::java::security::InvalidKeyException;

namespace javax {
	namespace crypto {
		namespace spec {

$byteArray2* DESKeySpec::WEAK_KEYS = nullptr;

void DESKeySpec::init$($bytes* key) {
	DESKeySpec::init$(key, 0);
}

void DESKeySpec::init$($bytes* key, int32_t offset) {
	if ($nc(key)->length - offset < DESKeySpec::DES_KEY_LEN) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	$set(this, key, $new($bytes, DESKeySpec::DES_KEY_LEN));
	$System::arraycopy(key, offset, this->key, 0, DESKeySpec::DES_KEY_LEN);
}

$bytes* DESKeySpec::getKey() {
	return $cast($bytes, $nc(this->key)->clone());
}

bool DESKeySpec::isParityAdjusted($bytes* key, int32_t offset) {
	$init(DESKeySpec);
	if (key == nullptr) {
		$throwNew($InvalidKeyException, "null key"_s);
	}
	if ($nc(key)->length - offset < DESKeySpec::DES_KEY_LEN) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	for (int32_t i = 0; i < DESKeySpec::DES_KEY_LEN; ++i) {
		int32_t k = $Integer::bitCount(key->get(offset++) & 0xff);
		if ((k & 1) == 0) {
			return false;
		}
	}
	return true;
}

bool DESKeySpec::isWeak($bytes* key, int32_t offset) {
	$init(DESKeySpec);
	if (key == nullptr) {
		$throwNew($InvalidKeyException, "null key"_s);
	}
	if ($nc(key)->length - offset < DESKeySpec::DES_KEY_LEN) {
		$throwNew($InvalidKeyException, "Wrong key size"_s);
	}
	for (int32_t i = 0; i < DESKeySpec::WEAK_KEYS->length; ++i) {
		bool found = true;
		for (int32_t j = 0; j < DESKeySpec::DES_KEY_LEN && found == true; ++j) {
			if ($nc(DESKeySpec::WEAK_KEYS->get(i))->get(j) != key->get(j + offset)) {
				found = false;
			}
		}
		if (found == true) {
			return found;
		}
	}
	return false;
}

void DESKeySpec::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(DESKeySpec::WEAK_KEYS, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)1,
			(int8_t)1,
			(int8_t)1,
			(int8_t)1,
			(int8_t)1,
			(int8_t)1,
			(int8_t)1,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)254,
			(int8_t)254,
			(int8_t)254,
			(int8_t)254,
			(int8_t)254,
			(int8_t)254,
			(int8_t)254,
			(int8_t)254
		}),
		$$new($bytes, {
			(int8_t)31,
			(int8_t)31,
			(int8_t)31,
			(int8_t)31,
			(int8_t)14,
			(int8_t)14,
			(int8_t)14,
			(int8_t)14
		}),
		$$new($bytes, {
			(int8_t)224,
			(int8_t)224,
			(int8_t)224,
			(int8_t)224,
			(int8_t)241,
			(int8_t)241,
			(int8_t)241,
			(int8_t)241
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)254,
			(int8_t)1,
			(int8_t)254,
			(int8_t)1,
			(int8_t)254,
			(int8_t)1,
			(int8_t)254
		}),
		$$new($bytes, {
			(int8_t)31,
			(int8_t)224,
			(int8_t)31,
			(int8_t)224,
			(int8_t)14,
			(int8_t)241,
			(int8_t)14,
			(int8_t)241
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)224,
			(int8_t)1,
			(int8_t)224,
			(int8_t)1,
			(int8_t)241,
			(int8_t)1,
			(int8_t)241
		}),
		$$new($bytes, {
			(int8_t)31,
			(int8_t)254,
			(int8_t)31,
			(int8_t)254,
			(int8_t)14,
			(int8_t)254,
			(int8_t)14,
			(int8_t)254
		}),
		$$new($bytes, {
			(int8_t)1,
			(int8_t)31,
			(int8_t)1,
			(int8_t)31,
			(int8_t)1,
			(int8_t)14,
			(int8_t)1,
			(int8_t)14
		}),
		$$new($bytes, {
			(int8_t)224,
			(int8_t)254,
			(int8_t)224,
			(int8_t)254,
			(int8_t)241,
			(int8_t)254,
			(int8_t)241,
			(int8_t)254
		}),
		$$new($bytes, {
			(int8_t)254,
			(int8_t)1,
			(int8_t)254,
			(int8_t)1,
			(int8_t)254,
			(int8_t)1,
			(int8_t)254,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)224,
			(int8_t)31,
			(int8_t)224,
			(int8_t)31,
			(int8_t)241,
			(int8_t)14,
			(int8_t)241,
			(int8_t)14
		}),
		$$new($bytes, {
			(int8_t)224,
			(int8_t)1,
			(int8_t)224,
			(int8_t)1,
			(int8_t)241,
			(int8_t)1,
			(int8_t)241,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)254,
			(int8_t)31,
			(int8_t)254,
			(int8_t)31,
			(int8_t)254,
			(int8_t)14,
			(int8_t)254,
			(int8_t)14
		}),
		$$new($bytes, {
			(int8_t)31,
			(int8_t)1,
			(int8_t)31,
			(int8_t)1,
			(int8_t)14,
			(int8_t)1,
			(int8_t)14,
			(int8_t)1
		}),
		$$new($bytes, {
			(int8_t)254,
			(int8_t)224,
			(int8_t)254,
			(int8_t)224,
			(int8_t)254,
			(int8_t)241,
			(int8_t)254,
			(int8_t)241
		})
	}));
}

DESKeySpec::DESKeySpec() {
}

$Class* DESKeySpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DES_KEY_LEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DESKeySpec, DES_KEY_LEN)},
		{"key", "[B", nullptr, $PRIVATE, $field(DESKeySpec, key)},
		{"WEAK_KEYS", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DESKeySpec, WEAK_KEYS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(DESKeySpec, init$, void, $bytes*), "java.security.InvalidKeyException"},
		{"<init>", "([BI)V", nullptr, $PUBLIC, $method(DESKeySpec, init$, void, $bytes*, int32_t), "java.security.InvalidKeyException"},
		{"getKey", "()[B", nullptr, $PUBLIC, $virtualMethod(DESKeySpec, getKey, $bytes*)},
		{"isParityAdjusted", "([BI)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DESKeySpec, isParityAdjusted, bool, $bytes*, int32_t), "java.security.InvalidKeyException"},
		{"isWeak", "([BI)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DESKeySpec, isWeak, bool, $bytes*, int32_t), "java.security.InvalidKeyException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.spec.DESKeySpec",
		"java.lang.Object",
		"java.security.spec.KeySpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DESKeySpec, name, initialize, &classInfo$$, DESKeySpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DESKeySpec);
	});
	return class$;
}

$Class* DESKeySpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax
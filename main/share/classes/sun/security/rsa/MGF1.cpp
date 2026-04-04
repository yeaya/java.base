#include <sun/security/rsa/MGF1.h>
#include <java/security/DigestException.h>
#include <java/security/MessageDigest.h>
#include <jcpp.h>

#undef C
#undef MGF1

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DigestException = ::java::security::DigestException;
using $MessageDigest = ::java::security::MessageDigest;

namespace sun {
	namespace security {
		namespace rsa {

void MGF1::init$($String* mdAlgo) {
	$set(this, md, $MessageDigest::getInstance(mdAlgo));
}

void MGF1::generateAndXor($bytes* seed, int32_t seedOfs, int32_t seedLen, int32_t maskLen, $bytes* out, int32_t outOfs) {
	$useLocalObjectStack();
	$var($bytes, C, $new($bytes, 4));
	$var($bytes, digest, $new($bytes, $nc(this->md)->getDigestLength()));
	while (maskLen > 0) {
		this->md->update(seed, seedOfs, seedLen);
		this->md->update(C);
		try {
			this->md->digest(digest, 0, digest->length);
		} catch ($DigestException& e) {
			$throwNew($RuntimeException, $(e->toString()));
		}
		for (int32_t i = 0; (i < digest->length) && (maskLen > 0); --maskLen) {
			(*$nc(out))[outOfs++] ^= digest->get(i++);
		}
		if (maskLen > 0) {
			for (int32_t i = C->length - 1;; --i) {
				bool var$0 = ++(*C)[i] == 0;
				if (!(var$0 && (i > 0))) {
					break;
				}
				{
				}
			}
		}
	}
}

$String* MGF1::getName() {
	return $str({"MGF1"_s, $($nc(this->md)->getAlgorithm())});
}

MGF1::MGF1() {
}

$Class* MGF1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $FINAL, $field(MGF1, md)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(MGF1, init$, void, $String*), "java.security.NoSuchAlgorithmException"},
		{"generateAndXor", "([BIII[BI)V", nullptr, 0, $method(MGF1, generateAndXor, void, $bytes*, int32_t, int32_t, int32_t, $bytes*, int32_t), "java.lang.RuntimeException"},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $method(MGF1, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.MGF1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MGF1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MGF1);
	});
	return class$;
}

$Class* MGF1::class$ = nullptr;

		} // rsa
	} // security
} // sun
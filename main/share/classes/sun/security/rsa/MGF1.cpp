#include <sun/security/rsa/MGF1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/DigestException.h>
#include <java/security/MessageDigest.h>
#include <jcpp.h>

#undef MGF1
#undef C

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DigestException = ::java::security::DigestException;
using $MessageDigest = ::java::security::MessageDigest;

namespace sun {
	namespace security {
		namespace rsa {

$FieldInfo _MGF1_FieldInfo_[] = {
	{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $FINAL, $field(MGF1, md)},
	{}
};

$MethodInfo _MGF1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MGF1::*)($String*)>(&MGF1::init$)), "java.security.NoSuchAlgorithmException"},
	{"generateAndXor", "([BIII[BI)V", nullptr, 0, $method(static_cast<void(MGF1::*)($bytes*,int32_t,int32_t,int32_t,$bytes*,int32_t)>(&MGF1::generateAndXor)), "java.lang.RuntimeException"},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(MGF1::*)()>(&MGF1::getName))},
	{}
};

$ClassInfo _MGF1_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.MGF1",
	"java.lang.Object",
	nullptr,
	_MGF1_FieldInfo_,
	_MGF1_MethodInfo_
};

$Object* allocate$MGF1($Class* clazz) {
	return $of($alloc(MGF1));
}

void MGF1::init$($String* mdAlgo) {
	$set(this, md, $MessageDigest::getInstance(mdAlgo));
}

void MGF1::generateAndXor($bytes* seed, int32_t seedOfs, int32_t seedLen, int32_t maskLen, $bytes* out, int32_t outOfs) {
	$var($bytes, C, $new($bytes, 4));
	$var($bytes, digest, $new($bytes, $nc(this->md)->getDigestLength()));
	while (maskLen > 0) {
		$nc(this->md)->update(seed, seedOfs, seedLen);
		$nc(this->md)->update(C);
		try {
			$nc(this->md)->digest(digest, 0, digest->length);
		} catch ($DigestException&) {
			$var($DigestException, e, $catch());
			$throwNew($RuntimeException, $(e->toString()));
		}
		for (int32_t i = 0; (i < digest->length) && (maskLen > 0); --maskLen) {
			(*$nc(out))[outOfs++] ^= digest->get(i++);
		}
		if (maskLen > 0) {
			{
				int32_t i = C->length - 1;
				for (;; --i) {
					bool var$0 = (++(*C)[i] == 0);
					if (!(var$0 && (i > 0))) {
						break;
					}
					{
					}
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
	$loadClass(MGF1, name, initialize, &_MGF1_ClassInfo_, allocate$MGF1);
	return class$;
}

$Class* MGF1::class$ = nullptr;

		} // rsa
	} // security
} // sun
#include <com/sun/crypto/provider/KWUtil.h>

#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/AssertionError.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef BLKSIZE
#undef MIN_INPUTLEN
#undef SEMI_BLKSIZE
#undef T
#undef W
#undef W_INV

using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _KWUtil_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(KWUtil, $assertionsDisabled)},
	{"BLKSIZE", "I", nullptr, $STATIC | $FINAL, $constField(KWUtil, BLKSIZE)},
	{"SEMI_BLKSIZE", "I", nullptr, $STATIC | $FINAL, $constField(KWUtil, SEMI_BLKSIZE)},
	{"MIN_INPUTLEN", "I", nullptr, $STATIC | $FINAL, $constField(KWUtil, MIN_INPUTLEN)},
	{}
};

$MethodInfo _KWUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(KWUtil, init$, void)},
	{"W", "([B[BILcom/sun/crypto/provider/SymmetricCipher;)I", nullptr, $STATIC | $FINAL, $staticMethod(KWUtil, W, int32_t, $bytes*, $bytes*, int32_t, $SymmetricCipher*)},
	{"W_INV", "([BI[BLcom/sun/crypto/provider/SymmetricCipher;)I", nullptr, $STATIC | $FINAL, $staticMethod(KWUtil, W_INV, int32_t, $bytes*, int32_t, $bytes*, $SymmetricCipher*)},
	{}
};

$ClassInfo _KWUtil_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.crypto.provider.KWUtil",
	"java.lang.Object",
	nullptr,
	_KWUtil_FieldInfo_,
	_KWUtil_MethodInfo_
};

$Object* allocate$KWUtil($Class* clazz) {
	return $of($alloc(KWUtil));
}

bool KWUtil::$assertionsDisabled = false;

void KWUtil::init$() {
}

int32_t KWUtil::W($bytes* icvIn, $bytes* in, int32_t inLen, $SymmetricCipher* cipher) {
	$init(KWUtil);
	$useLocalCurrentObjectStackCache();
	if (!KWUtil::$assertionsDisabled && !((inLen >= KWUtil::MIN_INPUTLEN) && (($mod(inLen, KWUtil::SEMI_BLKSIZE)) == 0))) {
		$throwNew($AssertionError, ($of($$str({"Invalid data length for W: "_s, $$str(inLen)}))));
	}
	if (!KWUtil::$assertionsDisabled && !($nc(icvIn)->length == KWUtil::SEMI_BLKSIZE)) {
		$throwNew($AssertionError, $of("Invalid ICV buffer size"_s));
	}
	$System::arraycopy(icvIn, 0, in, 0, KWUtil::SEMI_BLKSIZE);
	int32_t n = $div(inLen, KWUtil::SEMI_BLKSIZE) - 1;
	$var($bytes, buffer, $new($bytes, KWUtil::BLKSIZE));
	$var($bytes, out, in);
	for (int32_t j = 0; j < 6; ++j) {
		for (int32_t i = 1; i <= n; ++i) {
			int32_t T = i + j * n;
			$System::arraycopy(out, 0, buffer, 0, KWUtil::SEMI_BLKSIZE);
			$System::arraycopy(out, i << 3, buffer, KWUtil::SEMI_BLKSIZE, 8);
			$nc(cipher)->encryptBlock(buffer, 0, buffer, 0);
			for (int32_t k = 1; T != 0; ++k) {
				int8_t v = (int8_t)T;
				(*buffer)[KWUtil::SEMI_BLKSIZE - k] ^= v;
				$usrAssign(T, KWUtil::SEMI_BLKSIZE);
			}
			$System::arraycopy(buffer, 0, out, 0, KWUtil::SEMI_BLKSIZE);
			$System::arraycopy(buffer, KWUtil::SEMI_BLKSIZE, out, i << 3, KWUtil::SEMI_BLKSIZE);
		}
	}
	return inLen;
}

int32_t KWUtil::W_INV($bytes* in, int32_t inLen, $bytes* icvOut, $SymmetricCipher* cipher) {
	$init(KWUtil);
	$useLocalCurrentObjectStackCache();
	if (!KWUtil::$assertionsDisabled && !((inLen >= KWUtil::MIN_INPUTLEN) && (($mod(inLen, KWUtil::SEMI_BLKSIZE)) == 0))) {
		$throwNew($AssertionError, ($of($$str({"Invalid data length for W_INV: "_s, $$str(inLen)}))));
	}
	if (!KWUtil::$assertionsDisabled && !($nc(icvOut)->length == KWUtil::SEMI_BLKSIZE)) {
		$throwNew($AssertionError, $of("Invalid ICV buffer size"_s));
	}
	$var($bytes, buffer, $new($bytes, KWUtil::BLKSIZE));
	$System::arraycopy(in, 0, buffer, 0, KWUtil::SEMI_BLKSIZE);
	$System::arraycopy(in, KWUtil::SEMI_BLKSIZE, in, 0, inLen - KWUtil::SEMI_BLKSIZE);
	int32_t n = $div((inLen - KWUtil::SEMI_BLKSIZE), KWUtil::SEMI_BLKSIZE);
	for (int32_t j = 5; j >= 0; --j) {
		for (int32_t i = n; i > 0; --i) {
			int32_t T = i + n * j;
			int32_t idx = (i - 1) << 3;
			$System::arraycopy(in, idx, buffer, KWUtil::SEMI_BLKSIZE, KWUtil::SEMI_BLKSIZE);
			for (int32_t k = 1; T != 0; ++k) {
				int8_t v = (int8_t)T;
				(*buffer)[KWUtil::SEMI_BLKSIZE - k] ^= v;
				$usrAssign(T, KWUtil::SEMI_BLKSIZE);
			}
			$nc(cipher)->decryptBlock(buffer, 0, buffer, 0);
			$System::arraycopy(buffer, KWUtil::SEMI_BLKSIZE, in, idx, KWUtil::SEMI_BLKSIZE);
		}
	}
	$System::arraycopy(buffer, 0, icvOut, 0, KWUtil::SEMI_BLKSIZE);
	$Arrays::fill(buffer, (int8_t)0);
	return inLen - KWUtil::SEMI_BLKSIZE;
}

void clinit$KWUtil($Class* class$) {
	KWUtil::$assertionsDisabled = !KWUtil::class$->desiredAssertionStatus();
}

KWUtil::KWUtil() {
}

$Class* KWUtil::load$($String* name, bool initialize) {
	$loadClass(KWUtil, name, initialize, &_KWUtil_ClassInfo_, clinit$KWUtil, allocate$KWUtil);
	return class$;
}

$Class* KWUtil::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com
#include <com/sun/crypto/provider/ISO10126Padding.h>
#include <com/sun/crypto/provider/SunJCE.h>
#include <java/lang/Math.h>
#include <java/security/SecureRandom.h>
#include <javax/crypto/ShortBufferException.h>
#include <jcpp.h>

using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void ISO10126Padding::init$(int32_t blockSize) {
	this->blockSize = blockSize;
}

void ISO10126Padding::padWithLen($bytes* in, int32_t off, int32_t len) {
	$useLocalObjectStack();
	if (in == nullptr) {
		return;
	}
	int32_t idx = $Math::addExact(off, len);
	if (idx > $nc(in)->length) {
		$throwNew($ShortBufferException, "Buffer too small to hold padding"_s);
	}
	int8_t paddingOctet = (int8_t)(len & 0xff);
	$var($bytes, padding, $new($bytes, len - 1));
	$$nc($SunJCE::getRandom())->nextBytes(padding);
	$System::arraycopy(padding, 0, in, off, len - 1);
	in->set(idx - 1, paddingOctet);
	return;
}

int32_t ISO10126Padding::unpad($bytes* in, int32_t off, int32_t len) {
	if ((in == nullptr) || (len == 0)) {
		return 0;
	}
	int32_t idx = $Math::addExact(off, len);
	int8_t lastByte = $nc(in)->get(idx - 1);
	int32_t padValue = (int32_t)lastByte & 0xff;
	if ((padValue < 1) || (padValue > this->blockSize)) {
		return -1;
	}
	int32_t start = idx - padValue;
	if (start < off) {
		return -1;
	}
	return start;
}

int32_t ISO10126Padding::padLength(int32_t len) {
	int32_t paddingOctet = this->blockSize - ($mod(len, this->blockSize));
	return paddingOctet;
}

ISO10126Padding::ISO10126Padding() {
}

$Class* ISO10126Padding::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"blockSize", "I", nullptr, $PRIVATE, $field(ISO10126Padding, blockSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ISO10126Padding, init$, void, int32_t)},
		{"padLength", "(I)I", nullptr, $PUBLIC, $virtualMethod(ISO10126Padding, padLength, int32_t, int32_t)},
		{"padWithLen", "([BII)V", nullptr, $PUBLIC, $virtualMethod(ISO10126Padding, padWithLen, void, $bytes*, int32_t, int32_t), "javax.crypto.ShortBufferException"},
		{"unpad", "([BII)I", nullptr, $PUBLIC, $virtualMethod(ISO10126Padding, unpad, int32_t, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.ISO10126Padding",
		"java.lang.Object",
		"com.sun.crypto.provider.Padding",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ISO10126Padding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ISO10126Padding);
	});
	return class$;
}

$Class* ISO10126Padding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com
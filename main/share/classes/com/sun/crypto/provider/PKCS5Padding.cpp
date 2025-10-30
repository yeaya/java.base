#include <com/sun/crypto/provider/PKCS5Padding.h>

#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <javax/crypto/ShortBufferException.h>
#include <jcpp.h>

using $Padding = ::com::sun::crypto::provider::Padding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _PKCS5Padding_FieldInfo_[] = {
	{"blockSize", "I", nullptr, $PRIVATE, $field(PKCS5Padding, blockSize)},
	{}
};

$MethodInfo _PKCS5Padding_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(PKCS5Padding::*)(int32_t)>(&PKCS5Padding::init$))},
	{"padLength", "(I)I", nullptr, $PUBLIC},
	{"padWithLen", "([BII)V", nullptr, $PUBLIC, nullptr, "javax.crypto.ShortBufferException"},
	{"unpad", "([BII)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PKCS5Padding_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PKCS5Padding",
	"java.lang.Object",
	"com.sun.crypto.provider.Padding",
	_PKCS5Padding_FieldInfo_,
	_PKCS5Padding_MethodInfo_
};

$Object* allocate$PKCS5Padding($Class* clazz) {
	return $of($alloc(PKCS5Padding));
}

void PKCS5Padding::init$(int32_t blockSize) {
	this->blockSize = blockSize;
}

void PKCS5Padding::padWithLen($bytes* in, int32_t off, int32_t len) {
	if (in == nullptr) {
		return;
	}
	int32_t idx = $Math::addExact(off, len);
	if (idx > $nc(in)->length) {
		$throwNew($ShortBufferException, "Buffer too small to hold padding"_s);
	}
	int8_t paddingOctet = (int8_t)((int32_t)(len & (uint32_t)255));
	$Arrays::fill(in, off, idx, paddingOctet);
	return;
}

int32_t PKCS5Padding::unpad($bytes* in, int32_t off, int32_t len) {
	if ((in == nullptr) || (len == 0)) {
		return 0;
	}
	int32_t idx = $Math::addExact(off, len);
	int8_t lastByte = $nc(in)->get(idx - 1);
	int32_t padValue = (int32_t)((int32_t)lastByte & (uint32_t)255);
	if ((padValue < 1) || (padValue > this->blockSize)) {
		return -1;
	}
	int32_t start = idx - padValue;
	if (start < off) {
		return -1;
	}
	for (int32_t i = start; i < idx; ++i) {
		if (in->get(i) != lastByte) {
			return -1;
		}
	}
	return start;
}

int32_t PKCS5Padding::padLength(int32_t len) {
	int32_t paddingOctet = this->blockSize - ($mod(len, this->blockSize));
	return paddingOctet;
}

PKCS5Padding::PKCS5Padding() {
}

$Class* PKCS5Padding::load$($String* name, bool initialize) {
	$loadClass(PKCS5Padding, name, initialize, &_PKCS5Padding_ClassInfo_, allocate$PKCS5Padding);
	return class$;
}

$Class* PKCS5Padding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com
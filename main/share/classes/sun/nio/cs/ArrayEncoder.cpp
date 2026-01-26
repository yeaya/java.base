#include <sun/nio/cs/ArrayEncoder.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _ArrayEncoder_MethodInfo_[] = {
	{"encode", "([CII[B)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayEncoder, encode, int32_t, $chars*, int32_t, int32_t, $bytes*)},
	{"encodeFromLatin1", "([BII[B)I", nullptr, $PUBLIC, $virtualMethod(ArrayEncoder, encodeFromLatin1, int32_t, $bytes*, int32_t, int32_t, $bytes*)},
	{"encodeFromUTF16", "([BII[B)I", nullptr, $PUBLIC, $virtualMethod(ArrayEncoder, encodeFromUTF16, int32_t, $bytes*, int32_t, int32_t, $bytes*)},
	{"isASCIICompatible", "()Z", nullptr, $PUBLIC, $virtualMethod(ArrayEncoder, isASCIICompatible, bool)},
	{}
};

$ClassInfo _ArrayEncoder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.cs.ArrayEncoder",
	nullptr,
	nullptr,
	nullptr,
	_ArrayEncoder_MethodInfo_
};

$Object* allocate$ArrayEncoder($Class* clazz) {
	return $of($alloc(ArrayEncoder));
}

int32_t ArrayEncoder::encodeFromLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	return -1;
}

int32_t ArrayEncoder::encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	return -1;
}

bool ArrayEncoder::isASCIICompatible() {
	return false;
}

$Class* ArrayEncoder::load$($String* name, bool initialize) {
	$loadClass(ArrayEncoder, name, initialize, &_ArrayEncoder_ClassInfo_, allocate$ArrayEncoder);
	return class$;
}

$Class* ArrayEncoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
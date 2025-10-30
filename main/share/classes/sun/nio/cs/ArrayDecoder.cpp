#include <sun/nio/cs/ArrayDecoder.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _ArrayDecoder_MethodInfo_[] = {
	{"decode", "([BII[C)I", nullptr, $PUBLIC | $ABSTRACT},
	{"decodeToLatin1", "([BII[B)I", nullptr, $PUBLIC},
	{"isASCIICompatible", "()Z", nullptr, $PUBLIC},
	{"isLatin1Decodable", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArrayDecoder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.cs.ArrayDecoder",
	nullptr,
	nullptr,
	nullptr,
	_ArrayDecoder_MethodInfo_
};

$Object* allocate$ArrayDecoder($Class* clazz) {
	return $of($alloc(ArrayDecoder));
}

bool ArrayDecoder::isASCIICompatible() {
	return false;
}

bool ArrayDecoder::isLatin1Decodable() {
	return false;
}

int32_t ArrayDecoder::decodeToLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	return 0;
}

$Class* ArrayDecoder::load$($String* name, bool initialize) {
	$loadClass(ArrayDecoder, name, initialize, &_ArrayDecoder_ClassInfo_, allocate$ArrayDecoder);
	return class$;
}

$Class* ArrayDecoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
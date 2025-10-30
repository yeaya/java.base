#include <sun/nio/cs/DelegatableDecoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CoderResult.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CoderResult = ::java::nio::charset::CoderResult;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _DelegatableDecoder_MethodInfo_[] = {
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $ABSTRACT},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $ABSTRACT},
	{"implReset", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DelegatableDecoder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.cs.DelegatableDecoder",
	nullptr,
	nullptr,
	nullptr,
	_DelegatableDecoder_MethodInfo_
};

$Object* allocate$DelegatableDecoder($Class* clazz) {
	return $of($alloc(DelegatableDecoder));
}

$Class* DelegatableDecoder::load$($String* name, bool initialize) {
	$loadClass(DelegatableDecoder, name, initialize, &_DelegatableDecoder_ClassInfo_, allocate$DelegatableDecoder);
	return class$;
}

$Class* DelegatableDecoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
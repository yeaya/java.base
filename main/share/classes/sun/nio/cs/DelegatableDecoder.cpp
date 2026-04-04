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

$Class* DelegatableDecoder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DelegatableDecoder, decodeLoop, $CoderResult*, $ByteBuffer*, $CharBuffer*)},
		{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DelegatableDecoder, implFlush, $CoderResult*, $CharBuffer*)},
		{"implReset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DelegatableDecoder, implReset, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.nio.cs.DelegatableDecoder",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DelegatableDecoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DelegatableDecoder);
	});
	return class$;
}

$Class* DelegatableDecoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
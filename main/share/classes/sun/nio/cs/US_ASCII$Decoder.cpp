#include <sun/nio/cs/US_ASCII$Decoder.h>

#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/cs/US_ASCII.h>
#include <jcpp.h>

#undef JLA
#undef OVERFLOW
#undef UNDERFLOW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _US_ASCII$Decoder_FieldInfo_[] = {
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(US_ASCII$Decoder, JLA)},
	{}
};

$MethodInfo _US_ASCII$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(US_ASCII$Decoder::*)($Charset*)>(&US_ASCII$Decoder::init$))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(US_ASCII$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&US_ASCII$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(US_ASCII$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&US_ASCII$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _US_ASCII$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.US_ASCII$Decoder", "sun.nio.cs.US_ASCII", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _US_ASCII$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.US_ASCII$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_US_ASCII$Decoder_FieldInfo_,
	_US_ASCII$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_US_ASCII$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.US_ASCII"
};

$Object* allocate$US_ASCII$Decoder($Class* clazz) {
	return $of($alloc(US_ASCII$Decoder));
}

$JavaLangAccess* US_ASCII$Decoder::JLA = nullptr;

void US_ASCII$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
}

$CoderResult* US_ASCII$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, sa, $cast($bytes, $nc(src)->array()));
	int32_t soff = src->arrayOffset();
	int32_t sp = soff + src->position();
	int32_t sl = soff + src->limit();
	$var($chars, da, $cast($chars, $nc(dst)->array()));
	int32_t doff = dst->arrayOffset();
	int32_t dp = doff + dst->position();
	int32_t dl = doff + dst->limit();
	int32_t n = $nc(US_ASCII$Decoder::JLA)->decodeASCII(sa, sp, da, dp, $Math::min(sl - sp, dl - dp));
	sp += n;
	dp += n;
	src->position(sp - soff);
	dst->position(dp - doff);
	if (sp < sl) {
		if (dp >= dl) {
			$init($CoderResult);
			return $CoderResult::OVERFLOW;
		}
		return $CoderResult::malformedForLength(1);
	}
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* US_ASCII$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				int8_t b = src->get();
				if (b >= 0) {
					if (!$nc(dst)->hasRemaining()) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((char16_t)b);
					++mark;
					continue;
				}
				$assign(var$2, $CoderResult::malformedForLength(1));
				return$1 = true;
				goto $finally;
			}
			$init($CoderResult);
			$assign(var$2, $CoderResult::UNDERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			src->position(mark);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$CoderResult* US_ASCII$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

void clinit$US_ASCII$Decoder($Class* class$) {
	$assignStatic(US_ASCII$Decoder::JLA, $SharedSecrets::getJavaLangAccess());
}

US_ASCII$Decoder::US_ASCII$Decoder() {
}

$Class* US_ASCII$Decoder::load$($String* name, bool initialize) {
	$loadClass(US_ASCII$Decoder, name, initialize, &_US_ASCII$Decoder_ClassInfo_, clinit$US_ASCII$Decoder, allocate$US_ASCII$Decoder);
	return class$;
}

$Class* US_ASCII$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
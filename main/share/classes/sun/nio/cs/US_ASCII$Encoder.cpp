#include <sun/nio/cs/US_ASCII$Encoder.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <sun/nio/cs/US_ASCII.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;
using $US_ASCII = ::sun::nio::cs::US_ASCII;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _US_ASCII$Encoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(US_ASCII$Encoder, $assertionsDisabled)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(US_ASCII$Encoder, sgp)},
	{}
};

$MethodInfo _US_ASCII$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(US_ASCII$Encoder::*)($Charset*)>(&US_ASCII$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(US_ASCII$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&US_ASCII$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(US_ASCII$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&US_ASCII$Encoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _US_ASCII$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.US_ASCII$Encoder", "sun.nio.cs.US_ASCII", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _US_ASCII$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.US_ASCII$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_US_ASCII$Encoder_FieldInfo_,
	_US_ASCII$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_US_ASCII$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.US_ASCII"
};

$Object* allocate$US_ASCII$Encoder($Class* clazz) {
	return $of($alloc(US_ASCII$Encoder));
}

bool US_ASCII$Encoder::$assertionsDisabled = false;

void US_ASCII$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 1.0f, 1.0f);
	$set(this, sgp, $new($Surrogate$Parser));
}

bool US_ASCII$Encoder::canEncode(char16_t c) {
	return c < 128;
}

bool US_ASCII$Encoder::isLegalReplacement($bytes* repl) {
	return ($nc(repl)->length == 1 && repl->get(0) >= 0) || $CharsetEncoder::isLegalReplacement(repl);
}

$CoderResult* US_ASCII$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	if (!US_ASCII$Encoder::$assertionsDisabled && !(sp <= sl)) {
		$throwNew($AssertionError);
	}
	sp = (sp <= sl ? sp : sl);
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	if (!US_ASCII$Encoder::$assertionsDisabled && !(dp <= dl)) {
		$throwNew($AssertionError);
	}
	dp = (dp <= dl ? dp : dl);
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				char16_t c = $nc(sa)->get(sp);
				if (c < 128) {
					if (dp >= dl) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp, (int8_t)c);
					++sp;
					++dp;
					continue;
				}
				if ($nc(this->sgp)->parse(c, sa, sp, sl) < 0) {
					$assign(var$6, $nc(this->sgp)->error());
					return$5 = true;
					goto $finally;
				}
				$assign(var$6, $nc(this->sgp)->unmappableResult());
				return$5 = true;
				goto $finally;
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$4, var$7);
		} $finally: {
			src->position(sp - src->arrayOffset());
			dst->position(dp - dst->arrayOffset());
		}
		if (var$4 != nullptr) {
			$throw(var$4);
		}
		if (return$5) {
			return var$6;
		}
	}
	$shouldNotReachHere();
}

$CoderResult* US_ASCII$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				if (c < 128) {
					if (!$nc(dst)->hasRemaining()) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)c);
					++mark;
					continue;
				}
				if ($nc(this->sgp)->parse(c, src) < 0) {
					$assign(var$2, $nc(this->sgp)->error());
					return$1 = true;
					goto $finally;
				}
				$assign(var$2, $nc(this->sgp)->unmappableResult());
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

$CoderResult* US_ASCII$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void clinit$US_ASCII$Encoder($Class* class$) {
	$load($US_ASCII);
	US_ASCII$Encoder::$assertionsDisabled = !$US_ASCII::class$->desiredAssertionStatus();
}

US_ASCII$Encoder::US_ASCII$Encoder() {
}

$Class* US_ASCII$Encoder::load$($String* name, bool initialize) {
	$loadClass(US_ASCII$Encoder, name, initialize, &_US_ASCII$Encoder_ClassInfo_, clinit$US_ASCII$Encoder, allocate$US_ASCII$Encoder);
	return class$;
}

$Class* US_ASCII$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
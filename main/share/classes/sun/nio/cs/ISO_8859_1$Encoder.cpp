#include <sun/nio/cs/ISO_8859_1$Encoder.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/util/Objects.h>
#include <sun/nio/cs/ISO_8859_1.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Objects = ::java::util::Objects;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$CompoundAttribute _ISO_8859_1$Encoder_MethodAnnotations_implEncodeISOArray7[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _ISO_8859_1$Encoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ISO_8859_1$Encoder, $assertionsDisabled)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(ISO_8859_1$Encoder, sgp)},
	{}
};

$MethodInfo _ISO_8859_1$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ISO_8859_1$Encoder::*)($Charset*)>(&ISO_8859_1$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO_8859_1$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&ISO_8859_1$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO_8859_1$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&ISO_8859_1$Encoder::encodeBufferLoop))},
	{"encodeISOArray", "([CI[BII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,$bytes*,int32_t,int32_t)>(&ISO_8859_1$Encoder::encodeISOArray))},
	{"encodeISOArrayCheck", "([CI[BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($chars*,int32_t,$bytes*,int32_t,int32_t)>(&ISO_8859_1$Encoder::encodeISOArrayCheck))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implEncodeISOArray", "([CI[BII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,$bytes*,int32_t,int32_t)>(&ISO_8859_1$Encoder::implEncodeISOArray)), nullptr, nullptr, _ISO_8859_1$Encoder_MethodAnnotations_implEncodeISOArray7},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ISO_8859_1$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_1$Encoder", "sun.nio.cs.ISO_8859_1", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_1$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ISO_8859_1$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_ISO_8859_1$Encoder_FieldInfo_,
	_ISO_8859_1$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_1$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_1"
};

$Object* allocate$ISO_8859_1$Encoder($Class* clazz) {
	return $of($alloc(ISO_8859_1$Encoder));
}

bool ISO_8859_1$Encoder::$assertionsDisabled = false;

void ISO_8859_1$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 1.0f, 1.0f);
	$set(this, sgp, $new($Surrogate$Parser));
}

bool ISO_8859_1$Encoder::canEncode(char16_t c) {
	return c <= (char16_t)0xFF;
}

bool ISO_8859_1$Encoder::isLegalReplacement($bytes* repl) {
	return true;
}

int32_t ISO_8859_1$Encoder::encodeISOArray($chars* sa, int32_t sp, $bytes* da, int32_t dp, int32_t len) {
	$init(ISO_8859_1$Encoder);
	if (len <= 0) {
		return 0;
	}
	encodeISOArrayCheck(sa, sp, da, dp, len);
	return implEncodeISOArray(sa, sp, da, dp, len);
}

int32_t ISO_8859_1$Encoder::implEncodeISOArray($chars* sa, int32_t sp, $bytes* da, int32_t dp, int32_t len) {
	$init(ISO_8859_1$Encoder);
	int32_t i = 0;
	for (; i < len; ++i) {
		char16_t c = $nc(sa)->get(sp++);
		if (c > (char16_t)0xFF) {
			break;
		}
		$nc(da)->set(dp++, (int8_t)c);
	}
	return i;
}

void ISO_8859_1$Encoder::encodeISOArrayCheck($chars* sa, int32_t sp, $bytes* da, int32_t dp, int32_t len) {
	$init(ISO_8859_1$Encoder);
	$Objects::requireNonNull(sa);
	$Objects::requireNonNull(da);
	if (sp < 0 || sp >= sa->length) {
		$throwNew($ArrayIndexOutOfBoundsException, sp);
	}
	if (dp < 0 || dp >= da->length) {
		$throwNew($ArrayIndexOutOfBoundsException, dp);
	}
	int32_t endIndexSP = sp + len - 1;
	if (endIndexSP < 0 || endIndexSP >= sa->length) {
		$throwNew($ArrayIndexOutOfBoundsException, endIndexSP);
	}
	int32_t endIndexDP = dp + len - 1;
	if (endIndexDP < 0 || endIndexDP >= da->length) {
		$throwNew($ArrayIndexOutOfBoundsException, endIndexDP);
	}
}

$CoderResult* ISO_8859_1$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t soff = src->arrayOffset();
	int32_t sp = soff + src->position();
	int32_t sl = soff + src->limit();
	if (!ISO_8859_1$Encoder::$assertionsDisabled && !(sp <= sl)) {
		$throwNew($AssertionError);
	}
	sp = (sp <= sl ? sp : sl);
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t doff = dst->arrayOffset();
	int32_t dp = doff + dst->position();
	int32_t dl = doff + dst->limit();
	if (!ISO_8859_1$Encoder::$assertionsDisabled && !(dp <= dl)) {
		$throwNew($AssertionError);
	}
	dp = (dp <= dl ? dp : dl);
	int32_t dlen = dl - dp;
	int32_t slen = sl - sp;
	int32_t len = (dlen < slen) ? dlen : slen;
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			int32_t ret = encodeISOArray(sa, sp, da, dp, len);
			sp = sp + ret;
			dp = dp + ret;
			if (ret != len) {
				if ($nc(this->sgp)->parse($nc(sa)->get(sp), sa, sp, sl) < 0) {
					$assign(var$2, $nc(this->sgp)->error());
					return$1 = true;
					goto $finally;
				}
				$assign(var$2, $nc(this->sgp)->unmappableResult());
				return$1 = true;
				goto $finally;
			}
			if (len < slen) {
				$init($CoderResult);
				$assign(var$2, $CoderResult::OVERFLOW);
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
			src->position(sp - soff);
			dst->position(dp - doff);
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

$CoderResult* ISO_8859_1$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				if (c <= (char16_t)0xFF) {
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

$CoderResult* ISO_8859_1$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void clinit$ISO_8859_1$Encoder($Class* class$) {
	$load($ISO_8859_1);
	ISO_8859_1$Encoder::$assertionsDisabled = !$ISO_8859_1::class$->desiredAssertionStatus();
}

ISO_8859_1$Encoder::ISO_8859_1$Encoder() {
}

$Class* ISO_8859_1$Encoder::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_1$Encoder, name, initialize, &_ISO_8859_1$Encoder_ClassInfo_, clinit$ISO_8859_1$Encoder, allocate$ISO_8859_1$Encoder);
	return class$;
}

$Class* ISO_8859_1$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
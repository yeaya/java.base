#include <sun/nio/cs/ISO_8859_1$Decoder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/cs/ISO_8859_1.h>
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
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _ISO_8859_1$Decoder_FieldInfo_[] = {
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO_8859_1$Decoder, JLA)},
	{}
};

$MethodInfo _ISO_8859_1$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ISO_8859_1$Decoder::*)($Charset*)>(&ISO_8859_1$Decoder::init$))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO_8859_1$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISO_8859_1$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(ISO_8859_1$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&ISO_8859_1$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ISO_8859_1$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ISO_8859_1$Decoder", "sun.nio.cs.ISO_8859_1", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO_8859_1$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ISO_8859_1$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_ISO_8859_1$Decoder_FieldInfo_,
	_ISO_8859_1$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO_8859_1$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ISO_8859_1"
};

$Object* allocate$ISO_8859_1$Decoder($Class* clazz) {
	return $of($alloc(ISO_8859_1$Decoder));
}

$JavaLangAccess* ISO_8859_1$Decoder::JLA = nullptr;

void ISO_8859_1$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
}

$CoderResult* ISO_8859_1$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$var($bytes, sa, $cast($bytes, $nc(src)->array()));
	int32_t soff = src->arrayOffset();
	int32_t sp = soff + src->position();
	int32_t sl = soff + src->limit();
	$var($chars, da, $cast($chars, $nc(dst)->array()));
	int32_t doff = dst->arrayOffset();
	int32_t dp = doff + dst->position();
	int32_t dl = doff + dst->limit();
	int32_t decodeLen = $Math::min(sl - sp, dl - dp);
	$nc(ISO_8859_1$Decoder::JLA)->inflateBytesToChars(sa, sp, da, dp, decodeLen);
	sp += decodeLen;
	dp += decodeLen;
	src->position(sp - soff);
	dst->position(dp - doff);
	if (sl - sp > dl - dp) {
		$init($CoderResult);
		return $CoderResult::OVERFLOW;
	}
	$init($CoderResult);
	return $CoderResult::UNDERFLOW;
}

$CoderResult* ISO_8859_1$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				int8_t b = src->get();
				if (!$nc(dst)->hasRemaining()) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				$nc(dst)->put((char16_t)((int32_t)(b & (uint32_t)255)));
				++mark;
			}
			$init($CoderResult);
			$assign(var$2, $CoderResult::UNDERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

$CoderResult* ISO_8859_1$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

void clinit$ISO_8859_1$Decoder($Class* class$) {
	$assignStatic(ISO_8859_1$Decoder::JLA, $SharedSecrets::getJavaLangAccess());
}

ISO_8859_1$Decoder::ISO_8859_1$Decoder() {
}

$Class* ISO_8859_1$Decoder::load$($String* name, bool initialize) {
	$loadClass(ISO_8859_1$Decoder, name, initialize, &_ISO_8859_1$Decoder_ClassInfo_, clinit$ISO_8859_1$Decoder, allocate$ISO_8859_1$Decoder);
	return class$;
}

$Class* ISO_8859_1$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
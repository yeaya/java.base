#include <sun/nio/cs/EUC_JP$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/EUC_JP.h>
#include <sun/nio/cs/JIS_X_0201.h>
#include <sun/nio/cs/JIS_X_0208.h>
#include <sun/nio/cs/JIS_X_0212.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $DelegatableDecoder = ::sun::nio::cs::DelegatableDecoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $EUC_JP = ::sun::nio::cs::EUC_JP;
using $JIS_X_0201 = ::sun::nio::cs::JIS_X_0201;
using $JIS_X_0208 = ::sun::nio::cs::JIS_X_0208;
using $JIS_X_0212 = ::sun::nio::cs::JIS_X_0212;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _EUC_JP$Decoder_FieldInfo_[] = {
	{"DEC0201", "Lsun/nio/cs/SingleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(EUC_JP$Decoder, DEC0201)},
	{"DEC0208", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(EUC_JP$Decoder, DEC0208)},
	{"DEC0212", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(EUC_JP$Decoder, DEC0212)},
	{"dec0201", "Lsun/nio/cs/SingleByte$Decoder;", nullptr, $PRIVATE | $FINAL, $field(EUC_JP$Decoder, dec0201)},
	{"dec0208", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $FINAL, $field(EUC_JP$Decoder, dec0208)},
	{"dec0212", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $FINAL, $field(EUC_JP$Decoder, dec0212)},
	{}
};

$MethodInfo _EUC_JP$Decoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(EUC_JP$Decoder::*)($Charset*)>(&EUC_JP$Decoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;FFLsun/nio/cs/SingleByte$Decoder;Lsun/nio/cs/DoubleByte$Decoder;Lsun/nio/cs/DoubleByte$Decoder;)V", nullptr, $PROTECTED, $method(static_cast<void(EUC_JP$Decoder::*)($Charset*,float,float,$SingleByte$Decoder*,$DoubleByte$Decoder*,$DoubleByte$Decoder*)>(&EUC_JP$Decoder::init$))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(EUC_JP$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&EUC_JP$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(EUC_JP$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&EUC_JP$Decoder::decodeBufferLoop))},
	{"decodeDouble", "(II)C", nullptr, $PROTECTED},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC},
	{"implReset", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EUC_JP$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_JP$Decoder", "sun.nio.cs.EUC_JP", "Decoder", $STATIC},
	{}
};

$ClassInfo _EUC_JP$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.EUC_JP$Decoder",
	"java.nio.charset.CharsetDecoder",
	"sun.nio.cs.DelegatableDecoder",
	_EUC_JP$Decoder_FieldInfo_,
	_EUC_JP$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_JP$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_JP"
};

$Object* allocate$EUC_JP$Decoder($Class* clazz) {
	return $of($alloc(EUC_JP$Decoder));
}

int32_t EUC_JP$Decoder::hashCode() {
	 return this->$CharsetDecoder::hashCode();
}

bool EUC_JP$Decoder::equals(Object$* obj) {
	 return this->$CharsetDecoder::equals(obj);
}

$Object* EUC_JP$Decoder::clone() {
	 return this->$CharsetDecoder::clone();
}

$String* EUC_JP$Decoder::toString() {
	 return this->$CharsetDecoder::toString();
}

void EUC_JP$Decoder::finalize() {
	this->$CharsetDecoder::finalize();
}

$SingleByte$Decoder* EUC_JP$Decoder::DEC0201 = nullptr;
$DoubleByte$Decoder* EUC_JP$Decoder::DEC0208 = nullptr;
$DoubleByte$Decoder* EUC_JP$Decoder::DEC0212 = nullptr;

void EUC_JP$Decoder::init$($Charset* cs) {
	EUC_JP$Decoder::init$(cs, 0.5f, 1.0f, EUC_JP$Decoder::DEC0201, EUC_JP$Decoder::DEC0208, EUC_JP$Decoder::DEC0212);
}

void EUC_JP$Decoder::init$($Charset* cs, float avgCpb, float maxCpb, $SingleByte$Decoder* dec0201, $DoubleByte$Decoder* dec0208, $DoubleByte$Decoder* dec0212) {
	$CharsetDecoder::init$(cs, avgCpb, maxCpb);
	$set(this, dec0201, dec0201);
	$set(this, dec0208, dec0208);
	$set(this, dec0212, dec0212);
}

char16_t EUC_JP$Decoder::decodeDouble(int32_t byte1, int32_t byte2) {
	if (byte1 == 142) {
		if (byte2 < 128) {
			return (char16_t)0xFFFD;
		}
		return $nc(this->dec0201)->decode((int32_t)(int8_t)byte2);
	}
	return $nc(this->dec0208)->decodeDouble(byte1 - 128, byte2 - 128);
}

$CoderResult* EUC_JP$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, sa, $cast($bytes, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	$var($chars, da, $cast($chars, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t inputSize = 0;
	char16_t outputChar = (char16_t)0xFFFD;
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				b1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				inputSize = 1;
				if (((int32_t)(b1 & (uint32_t)128)) == 0) {
					outputChar = (char16_t)b1;
				} else if (b1 == 143) {
					if (sp + 3 > sl) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					b1 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
					b2 = (int32_t)(sa->get(sp + 2) & (uint32_t)255);
					inputSize += 2;
					if (this->dec0212 == nullptr) {
						$assign(var$6, $CoderResult::unmappableForLength(inputSize));
						return$5 = true;
						goto $finally;
					}
					outputChar = $nc(this->dec0212)->decodeDouble(b1 - 128, b2 - 128);
				} else {
					if (sp + 2 > sl) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					b2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
					++inputSize;
					outputChar = decodeDouble(b1, b2);
				}
				if (outputChar == (char16_t)0xFFFD) {
					$assign(var$6, $CoderResult::unmappableForLength(inputSize));
					return$5 = true;
					goto $finally;
				}
				if (dp + 1 > dl) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				$nc(da)->set(dp++, outputChar);
				sp += inputSize;
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

$CoderResult* EUC_JP$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t inputSize = 0;
	char16_t outputChar = (char16_t)0xFFFD;
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				b1 = (int32_t)(src->get() & (uint32_t)255);
				inputSize = 1;
				if (((int32_t)(b1 & (uint32_t)128)) == 0) {
					outputChar = (char16_t)b1;
				} else if (b1 == 143) {
					if (src->remaining() < 2) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					b1 = (int32_t)(src->get() & (uint32_t)255);
					b2 = (int32_t)(src->get() & (uint32_t)255);
					inputSize += 2;
					if (this->dec0212 == nullptr) {
						$assign(var$2, $CoderResult::unmappableForLength(inputSize));
						return$1 = true;
						goto $finally;
					}
					outputChar = $nc(this->dec0212)->decodeDouble(b1 - 128, b2 - 128);
				} else {
					if (src->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					b2 = (int32_t)(src->get() & (uint32_t)255);
					++inputSize;
					outputChar = decodeDouble(b1, b2);
				}
				if (outputChar == (char16_t)0xFFFD) {
					$assign(var$2, $CoderResult::unmappableForLength(inputSize));
					return$1 = true;
					goto $finally;
				}
				if ($nc(dst)->remaining() < 1) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				$nc(dst)->put(outputChar);
				mark += inputSize;
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

$CoderResult* EUC_JP$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

void EUC_JP$Decoder::implReset() {
	$CharsetDecoder::implReset();
}

$CoderResult* EUC_JP$Decoder::implFlush($CharBuffer* out) {
	return $CharsetDecoder::implFlush(out);
}

void clinit$EUC_JP$Decoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(EUC_JP$Decoder::DEC0201, $cast($SingleByte$Decoder, $$new($JIS_X_0201)->newDecoder()));
	$assignStatic(EUC_JP$Decoder::DEC0208, $cast($DoubleByte$Decoder, $$new($JIS_X_0208)->newDecoder()));
	$assignStatic(EUC_JP$Decoder::DEC0212, $cast($DoubleByte$Decoder, $$new($JIS_X_0212)->newDecoder()));
}

EUC_JP$Decoder::EUC_JP$Decoder() {
}

$Class* EUC_JP$Decoder::load$($String* name, bool initialize) {
	$loadClass(EUC_JP$Decoder, name, initialize, &_EUC_JP$Decoder_ClassInfo_, clinit$EUC_JP$Decoder, allocate$EUC_JP$Decoder);
	return class$;
}

$Class* EUC_JP$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
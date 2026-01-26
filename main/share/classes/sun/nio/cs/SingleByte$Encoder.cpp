#include <sun/nio/cs/SingleByte$Encoder.h>

#include <java/lang/Math.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/SingleByte.h>
#include <sun/nio/cs/StringUTF16.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $Character = ::java::lang::Character;
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
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $SingleByte = ::sun::nio::cs::SingleByte;
using $StringUTF16 = ::sun::nio::cs::StringUTF16;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _SingleByte$Encoder_FieldInfo_[] = {
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE, $field(SingleByte$Encoder, sgp)},
	{"c2b", "[C", nullptr, $PRIVATE | $FINAL, $field(SingleByte$Encoder, c2b)},
	{"c2bIndex", "[C", nullptr, $PRIVATE | $FINAL, $field(SingleByte$Encoder, c2bIndex)},
	{"isASCIICompatible", "Z", nullptr, $PRIVATE | $FINAL, $field(SingleByte$Encoder, isASCIICompatible$)},
	{"repl", "B", nullptr, $PRIVATE, $field(SingleByte$Encoder, repl)},
	{}
};

$MethodInfo _SingleByte$Encoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;[C[CZ)V", nullptr, $PUBLIC, $method(SingleByte$Encoder, init$, void, $Charset*, $chars*, $chars*, bool)},
	{"canEncode", "(C)Z", nullptr, $PUBLIC, $virtualMethod(SingleByte$Encoder, canEncode, bool, char16_t)},
	{"encode", "(C)I", nullptr, $PUBLIC | $FINAL, $method(SingleByte$Encoder, encode, int32_t, char16_t)},
	{"encode", "([CII[B)I", nullptr, $PUBLIC, $virtualMethod(SingleByte$Encoder, encode, int32_t, $chars*, int32_t, int32_t, $bytes*)},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(SingleByte$Encoder, encodeArrayLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(SingleByte$Encoder, encodeBufferLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
	{"encodeFromLatin1", "([BII[B)I", nullptr, $PUBLIC, $virtualMethod(SingleByte$Encoder, encodeFromLatin1, int32_t, $bytes*, int32_t, int32_t, $bytes*)},
	{"encodeFromUTF16", "([BII[B)I", nullptr, $PUBLIC, $virtualMethod(SingleByte$Encoder, encodeFromUTF16, int32_t, $bytes*, int32_t, int32_t, $bytes*)},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(SingleByte$Encoder, encodeLoop, $CoderResult*, $CharBuffer*, $ByteBuffer*)},
	{"implReplaceWith", "([B)V", nullptr, $PROTECTED, $virtualMethod(SingleByte$Encoder, implReplaceWith, void, $bytes*)},
	{"isASCIICompatible", "()Z", nullptr, $PUBLIC, $virtualMethod(SingleByte$Encoder, isASCIICompatible, bool)},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC, $virtualMethod(SingleByte$Encoder, isLegalReplacement, bool, $bytes*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SingleByte$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.SingleByte$Encoder", "sun.nio.cs.SingleByte", "Encoder", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SingleByte$Encoder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.nio.cs.SingleByte$Encoder",
	"java.nio.charset.CharsetEncoder",
	"sun.nio.cs.ArrayEncoder",
	_SingleByte$Encoder_FieldInfo_,
	_SingleByte$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_SingleByte$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.SingleByte"
};

$Object* allocate$SingleByte$Encoder($Class* clazz) {
	return $of($alloc(SingleByte$Encoder));
}

int32_t SingleByte$Encoder::hashCode() {
	 return this->$CharsetEncoder::hashCode();
}

bool SingleByte$Encoder::equals(Object$* obj) {
	 return this->$CharsetEncoder::equals(obj);
}

$Object* SingleByte$Encoder::clone() {
	 return this->$CharsetEncoder::clone();
}

$String* SingleByte$Encoder::toString() {
	 return this->$CharsetEncoder::toString();
}

void SingleByte$Encoder::finalize() {
	this->$CharsetEncoder::finalize();
}

void SingleByte$Encoder::init$($Charset* cs, $chars* c2b, $chars* c2bIndex, bool isASCIICompatible) {
	$CharsetEncoder::init$(cs, 1.0f, 1.0f);
	this->repl = (int8_t)u'?';
	$set(this, c2b, c2b);
	$set(this, c2bIndex, c2bIndex);
	this->isASCIICompatible$ = isASCIICompatible;
}

bool SingleByte$Encoder::canEncode(char16_t c) {
	return encode(c) != 0x0000FFFD;
}

bool SingleByte$Encoder::isLegalReplacement($bytes* repl) {
	return (($nc(repl)->length == 1 && repl->get(0) == (int8_t)u'?') || $CharsetEncoder::isLegalReplacement(repl));
}

$CoderResult* SingleByte$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	$var($chars, sa, $cast($chars, $nc(src)->array()));
	int32_t var$0 = src->arrayOffset();
	int32_t sp = var$0 + src->position();
	int32_t var$1 = src->arrayOffset();
	int32_t sl = var$1 + src->limit();
	$var($bytes, da, $cast($bytes, $nc(dst)->array()));
	int32_t var$2 = dst->arrayOffset();
	int32_t dp = var$2 + dst->position();
	int32_t var$3 = dst->arrayOffset();
	int32_t dl = var$3 + dst->limit();
	int32_t len = $Math::min(dl - dp, sl - sp);
	while (len-- > 0) {
		char16_t c = $nc(sa)->get(sp);
		int32_t b = encode(c);
		if (b == 0x0000FFFD) {
			if ($Character::isSurrogate(c)) {
				if (this->sgp == nullptr) {
					$set(this, sgp, $new($Surrogate$Parser));
				}
				if ($nc(this->sgp)->parse(c, sa, sp, sl) < 0) {
					return $SingleByte::withResult($($nc(this->sgp)->error()), src, sp, dst, dp);
				}
				return $SingleByte::withResult($($nc(this->sgp)->unmappableResult()), src, sp, dst, dp);
			}
			return $SingleByte::withResult($($CoderResult::unmappableForLength(1)), src, sp, dst, dp);
		}
		$nc(da)->set(dp++, (int8_t)b);
		++sp;
	}
	$init($CoderResult);
	return $SingleByte::withResult(sp < sl ? $CoderResult::OVERFLOW : $CoderResult::UNDERFLOW, src, sp, dst, dp);
}

$CoderResult* SingleByte$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				int32_t b = encode(c);
				if (b == 0x0000FFFD) {
					if ($Character::isSurrogate(c)) {
						if (this->sgp == nullptr) {
							$set(this, sgp, $new($Surrogate$Parser));
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
					$assign(var$2, $CoderResult::unmappableForLength(1));
					return$1 = true;
					goto $finally;
				}
				if (!$nc(dst)->hasRemaining()) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				$nc(dst)->put((int8_t)b);
				++mark;
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

$CoderResult* SingleByte$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

int32_t SingleByte$Encoder::encode(char16_t ch) {
	char16_t index = $nc(this->c2bIndex)->get(ch >> 8);
	if (index == 0x0000FFFD) {
		return 0x0000FFFD;
	}
	return $nc(this->c2b)->get(index + ((int32_t)(ch & (uint32_t)255)));
}

void SingleByte$Encoder::implReplaceWith($bytes* newReplacement) {
	this->repl = $nc(newReplacement)->get(0);
}

int32_t SingleByte$Encoder::encode($chars* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + $Math::min(len, $nc(dst)->length);
	while (sp < sl) {
		char16_t c = $nc(src)->get(sp++);
		int32_t b = encode(c);
		if (b != 0x0000FFFD) {
			$nc(dst)->set(dp++, (int8_t)b);
			continue;
		}
		bool var$0 = $Character::isHighSurrogate(c) && sp < sl;
		if (var$0 && $Character::isLowSurrogate(src->get(sp))) {
			if (len > $nc(dst)->length) {
				++sl;
				--len;
			}
			++sp;
		}
		$nc(dst)->set(dp++, this->repl);
	}
	return dp;
}

int32_t SingleByte$Encoder::encodeFromLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + $Math::min(len, $nc(dst)->length);
	while (sp < sl) {
		char16_t c = (char16_t)((int32_t)($nc(src)->get(sp++) & (uint32_t)255));
		int32_t b = encode(c);
		if (b == 0x0000FFFD) {
			$nc(dst)->set(dp++, this->repl);
		} else {
			$nc(dst)->set(dp++, (int8_t)b);
		}
	}
	return dp;
}

int32_t SingleByte$Encoder::encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	int32_t dp = 0;
	int32_t sl = sp + $Math::min(len, $nc(dst)->length);
	while (sp < sl) {
		char16_t c = $StringUTF16::getChar(src, sp++);
		int32_t b = encode(c);
		if (b != 0x0000FFFD) {
			$nc(dst)->set(dp++, (int8_t)b);
			continue;
		}
		bool var$0 = $Character::isHighSurrogate(c) && sp < sl;
		if (var$0 && $Character::isLowSurrogate($StringUTF16::getChar(src, sp))) {
			if (len > $nc(dst)->length) {
				++sl;
				--len;
			}
			++sp;
		}
		$nc(dst)->set(dp++, this->repl);
	}
	return dp;
}

bool SingleByte$Encoder::isASCIICompatible() {
	return this->isASCIICompatible$;
}

SingleByte$Encoder::SingleByte$Encoder() {
}

$Class* SingleByte$Encoder::load$($String* name, bool initialize) {
	$loadClass(SingleByte$Encoder, name, initialize, &_SingleByte$Encoder_ClassInfo_, allocate$SingleByte$Encoder);
	return class$;
}

$Class* SingleByte$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
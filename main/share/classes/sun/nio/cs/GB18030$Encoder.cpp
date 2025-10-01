#include <sun/nio/cs/GB18030$Encoder.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/GB18030.h>
#include <sun/nio/cs/Surrogate$Parser.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $GB18030 = ::sun::nio::cs::GB18030;
using $Surrogate$Parser = ::sun::nio::cs::Surrogate$Parser;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _GB18030$Encoder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GB18030$Encoder, $assertionsDisabled)},
	{"currentState", "I", nullptr, $PRIVATE, $field(GB18030$Encoder, currentState)},
	{"sgp", "Lsun/nio/cs/Surrogate$Parser;", nullptr, $PRIVATE | $FINAL, $field(GB18030$Encoder, sgp)},
	{}
};

$MethodInfo _GB18030$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(GB18030$Encoder::*)($Charset*)>(&GB18030$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"encodeArrayLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(GB18030$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&GB18030$Encoder::encodeArrayLoop))},
	{"encodeBufferLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(GB18030$Encoder::*)($CharBuffer*,$ByteBuffer*)>(&GB18030$Encoder::encodeBufferLoop))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"getGB18030", "([S[Ljava/lang/String;C)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GB18030$Encoder::*)($shorts*,$StringArray*,char16_t)>(&GB18030$Encoder::getGB18030))},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _GB18030$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.GB18030$Encoder", "sun.nio.cs.GB18030", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GB18030$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.GB18030$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_GB18030$Encoder_FieldInfo_,
	_GB18030$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_GB18030$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.GB18030"
};

$Object* allocate$GB18030$Encoder($Class* clazz) {
	return $of($alloc(GB18030$Encoder));
}

bool GB18030$Encoder::$assertionsDisabled = false;

void GB18030$Encoder::init$($Charset* cs) {
	$CharsetEncoder::init$(cs, 4.0f, 4.0f);
	this->currentState = 2;
	$set(this, sgp, $new($Surrogate$Parser));
}

bool GB18030$Encoder::canEncode(char16_t c) {
	return !$Character::isSurrogate(c);
}

int32_t GB18030$Encoder::getGB18030($shorts* outerIndex, $StringArray* innerEncoderIndex, char16_t ch) {
	int32_t offset = $nc(outerIndex)->get(((int32_t)(ch & (uint32_t)0x0000FF00)) >> 8) << 8;
	return $nc($nc(innerEncoderIndex)->get(offset >> 12))->charAt(((int32_t)(offset & (uint32_t)4095)) + ((int32_t)(ch & (uint32_t)255)));
}

void GB18030$Encoder::implReset() {
	this->currentState = 2;
}

$CoderResult* GB18030$Encoder::encodeArrayLoop($CharBuffer* src, $ByteBuffer* dst) {
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
	int32_t condensedKey = 0;
	int32_t hiByte = 0;
	int32_t loByte = 0;
	this->currentState = 2;
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				int32_t inputSize = 1;
				char16_t c = $nc(sa)->get(sp);
				if ($Character::isSurrogate(c)) {
					if ((condensedKey = $nc(this->sgp)->parse(c, sa, sp, sl)) < 0) {
						$assign(var$6, $nc(this->sgp)->error());
						return$5 = true;
						goto $finally;
					}
					condensedKey += 0x0001E248;
					this->currentState = 3;
					inputSize = $nc(this->sgp)->increment();
				} else if (c >= 0 && c <= 127) {
					this->currentState = 1;
				} else if (c <= 0x0000A4C6 || c >= 0x0000E000) {
					$init($GB18030);
					int32_t outByteVal = getGB18030($GB18030::encoderIndex1, $GB18030::encoderIndex2, c);
					if (outByteVal == 0x0000FFFD) {
						$assign(var$6, $CoderResult::unmappableForLength(1));
						return$5 = true;
						goto $finally;
					}
					hiByte = ((int32_t)(outByteVal & (uint32_t)0x0000FF00)) >> 8;
					loByte = ((int32_t)(outByteVal & (uint32_t)255));
					condensedKey = (hiByte - 32) * 256 + loByte;
					if (c >= 0x0000E000 && c < 0x0000F900) {
						condensedKey += 0x000082BD;
					} else if (c >= 0x0000F900) {
						condensedKey += 0x000093A9;
					}
					if (hiByte > 128) {
						this->currentState = 2;
					} else {
						this->currentState = 3;
					}
				} else if (c >= 0x0000A4C7 && c <= 0x0000D7FF) {
					condensedKey = c - 21827;
					this->currentState = 3;
				}
				{
					int8_t b1 = 0;
					int8_t b2 = 0;
					int8_t b3 = 0;
					int8_t b4 = 0;
					switch (this->currentState) {
					case 1:
						{
							if (dl - dp < 1) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							$nc(da)->set(dp++, (int8_t)c);
							break;
						}
					case 2:
						{
							if (dl - dp < 2) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							$nc(da)->set(dp++, (int8_t)hiByte);
							$nc(da)->set(dp++, (int8_t)loByte);
							break;
						}
					case 3:
						{
							if (dl - dp < 4) {
								$init($CoderResult);
								$assign(var$6, $CoderResult::OVERFLOW);
								return$5 = true;
								goto $finally;
							}
							b4 = (int8_t)((condensedKey % 10) + 48);
							condensedKey /= 10;
							b3 = (int8_t)((condensedKey % 126) + 129);
							condensedKey /= 126;
							b2 = (int8_t)((condensedKey % 10) + 48);
							b1 = (int8_t)((condensedKey / 10) + 129);
							$nc(da)->set(dp++, b1);
							$nc(da)->set(dp++, b2);
							$nc(da)->set(dp++, b3);
							$nc(da)->set(dp++, b4);
							break;
						}
					default:
						{
							if (!GB18030$Encoder::$assertionsDisabled) {
								$throwNew($AssertionError);
							}
						}
					}
				}
				sp += inputSize;
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$4, $catch());
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

$CoderResult* GB18030$Encoder::encodeBufferLoop($CharBuffer* src, $ByteBuffer* dst) {
	int32_t condensedKey = 0;
	int32_t hiByte = 0;
	int32_t loByte = 0;
	this->currentState = 2;
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				int32_t inputSize = 1;
				if ($Character::isSurrogate(c)) {
					if ((condensedKey = $nc(this->sgp)->parse(c, src)) < 0) {
						$assign(var$2, $nc(this->sgp)->error());
						return$1 = true;
						goto $finally;
					}
					condensedKey += 0x0001E248;
					this->currentState = 3;
					inputSize = 2;
				} else if (c >= 0 && c <= 127) {
					this->currentState = 1;
				} else if (c <= 0x0000A4C6 || c >= 0x0000E000) {
					$init($GB18030);
					int32_t outByteVal = getGB18030($GB18030::encoderIndex1, $GB18030::encoderIndex2, c);
					if (outByteVal == 0x0000FFFD) {
						$assign(var$2, $CoderResult::unmappableForLength(1));
						return$1 = true;
						goto $finally;
					}
					hiByte = ((int32_t)(outByteVal & (uint32_t)0x0000FF00)) >> 8;
					loByte = ((int32_t)(outByteVal & (uint32_t)255));
					condensedKey = (hiByte - 32) * 256 + loByte;
					if (c >= 0x0000E000 && c < 0x0000F900) {
						condensedKey += 0x000082BD;
					} else if (c >= 0x0000F900) {
						condensedKey += 0x000093A9;
					}
					if (hiByte > 128) {
						this->currentState = 2;
					} else {
						this->currentState = 3;
					}
				} else if (c >= 0x0000A4C7 && c <= 0x0000D7FF) {
					condensedKey = c - 21827;
					this->currentState = 3;
				}
				if (this->currentState == 1) {
					if ($nc(dst)->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)c);
				} else if (this->currentState == 2) {
					if ($nc(dst)->remaining() < 2) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((int8_t)hiByte);
					dst->put((int8_t)loByte);
				} else {
					int8_t b1 = 0;
					int8_t b2 = 0;
					int8_t b3 = 0;
					int8_t b4 = 0;
					if ($nc(dst)->remaining() < 4) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					b4 = (int8_t)((condensedKey % 10) + 48);
					condensedKey /= 10;
					b3 = (int8_t)((condensedKey % 126) + 129);
					condensedKey /= 126;
					b2 = (int8_t)((condensedKey % 10) + 48);
					b1 = (int8_t)((condensedKey / 10) + 129);
					$nc(dst)->put(b1);
					dst->put(b2);
					dst->put(b3);
					dst->put(b4);
				}
				mark += inputSize;
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

$CoderResult* GB18030$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return encodeArrayLoop(src, dst);
	} else {
		return encodeBufferLoop(src, dst);
	}
}

void clinit$GB18030$Encoder($Class* class$) {
	$load($GB18030);
	GB18030$Encoder::$assertionsDisabled = !$GB18030::class$->desiredAssertionStatus();
}

GB18030$Encoder::GB18030$Encoder() {
}

$Class* GB18030$Encoder::load$($String* name, bool initialize) {
	$loadClass(GB18030$Encoder, name, initialize, &_GB18030$Encoder_ClassInfo_, clinit$GB18030$Encoder, allocate$GB18030$Encoder);
	return class$;
}

$Class* GB18030$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
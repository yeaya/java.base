#include <sun/nio/cs/EUC_TW$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/EUC_TW.h>
#include <sun/nio/cs/EUC_TWMapping.h>
#include <jcpp.h>

#undef OVERFLOW
#undef UNDERFLOW

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $Arrays = ::java::util::Arrays;
using $EUC_TWMapping = ::sun::nio::cs::EUC_TWMapping;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _EUC_TW$Decoder_FieldInfo_[] = {
	{"c1", "[C", nullptr, 0, $field(EUC_TW$Decoder, c1)},
	{"c2", "[C", nullptr, 0, $field(EUC_TW$Decoder, c2)},
	{"b2c", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(EUC_TW$Decoder, b2c)},
	{"b1Min", "I", nullptr, $STATIC | $FINAL, $constField(EUC_TW$Decoder, b1Min)},
	{"b1Max", "I", nullptr, $STATIC | $FINAL, $constField(EUC_TW$Decoder, b1Max)},
	{"b2Min", "I", nullptr, $STATIC | $FINAL, $constField(EUC_TW$Decoder, b2Min)},
	{"b2Max", "I", nullptr, $STATIC | $FINAL, $constField(EUC_TW$Decoder, b2Max)},
	{"dbSegSize", "I", nullptr, $STATIC | $FINAL, $constField(EUC_TW$Decoder, dbSegSize)},
	{"b2cIsSupp", "[B", nullptr, $STATIC | $FINAL, $staticField(EUC_TW$Decoder, b2cIsSupp)},
	{"cnspToIndex", "[B", nullptr, $STATIC | $FINAL, $staticField(EUC_TW$Decoder, cnspToIndex)},
	{}
};

$MethodInfo _EUC_TW$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(EUC_TW$Decoder::*)($Charset*)>(&EUC_TW$Decoder::init$))},
	{"decode", "(III[C[C)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)(int32_t,int32_t,int32_t,$chars*,$chars*)>(&EUC_TW$Decoder::decode))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(EUC_TW$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&EUC_TW$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(EUC_TW$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&EUC_TW$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decodeSingleOrReplace", "(IIIC)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int32_t,int32_t,int32_t,char16_t)>(&EUC_TW$Decoder::decodeSingleOrReplace))},
	{"isLegalDB", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&EUC_TW$Decoder::isLegalDB))},
	{"toUnicode", "(III)[C", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EUC_TW$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.EUC_TW$Decoder", "sun.nio.cs.EUC_TW", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _EUC_TW$Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.EUC_TW$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_EUC_TW$Decoder_FieldInfo_,
	_EUC_TW$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_TW$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.EUC_TW"
};

$Object* allocate$EUC_TW$Decoder($Class* clazz) {
	return $of($alloc(EUC_TW$Decoder));
}

$StringArray* EUC_TW$Decoder::b2c = nullptr;
$bytes* EUC_TW$Decoder::b2cIsSupp = nullptr;
$bytes* EUC_TW$Decoder::cnspToIndex = nullptr;

void EUC_TW$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 2.0f, 2.0f);
	$set(this, c1, $new($chars, 1));
	$set(this, c2, $new($chars, 2));
}

$chars* EUC_TW$Decoder::toUnicode(int32_t b1, int32_t b2, int32_t p) {
	return decode(b1, b2, p, this->c1, this->c2);
}

bool EUC_TW$Decoder::isLegalDB(int32_t b) {
	$init(EUC_TW$Decoder);
	return b >= EUC_TW$Decoder::b1Min && b <= EUC_TW$Decoder::b1Max;
}

char16_t EUC_TW$Decoder::decodeSingleOrReplace(int32_t b1, int32_t b2, int32_t p, char16_t replace) {
	$init(EUC_TW$Decoder);
	if (b1 < EUC_TW$Decoder::b1Min || b1 > EUC_TW$Decoder::b1Max || b2 < EUC_TW$Decoder::b2Min || b2 > EUC_TW$Decoder::b2Max) {
		return replace;
	}
	int32_t index = (b1 - EUC_TW$Decoder::b1Min) * EUC_TW$Decoder::dbSegSize + b2 - EUC_TW$Decoder::b2Min;
	char16_t c = $nc($nc(EUC_TW$Decoder::b2c)->get(p))->charAt(index);
	if (c == (char16_t)0xFFFD) {
		return replace;
	}
	if (((int32_t)($nc(EUC_TW$Decoder::b2cIsSupp)->get(index) & (uint32_t)($sl(1, p)))) == 0) {
		return c;
	}
	return replace;
}

$chars* EUC_TW$Decoder::decode(int32_t b1, int32_t b2, int32_t p, $chars* c1, $chars* c2) {
	$init(EUC_TW$Decoder);
	if (b1 < EUC_TW$Decoder::b1Min || b1 > EUC_TW$Decoder::b1Max || b2 < EUC_TW$Decoder::b2Min || b2 > EUC_TW$Decoder::b2Max) {
		return nullptr;
	}
	int32_t index = (b1 - EUC_TW$Decoder::b1Min) * EUC_TW$Decoder::dbSegSize + b2 - EUC_TW$Decoder::b2Min;
	char16_t c = $nc($nc(EUC_TW$Decoder::b2c)->get(p))->charAt(index);
	if (c == (char16_t)0xFFFD) {
		return nullptr;
	}
	if (((int32_t)($nc(EUC_TW$Decoder::b2cIsSupp)->get(index) & (uint32_t)($sl(1, p)))) == 0) {
		$nc(c1)->set(0, c);
		return c1;
	} else {
		$nc(c2)->set(0, $Character::highSurrogate(0x00020000 + c));
		c2->set(1, $Character::lowSurrogate(0x00020000 + c));
		return c2;
	}
}

$CoderResult* EUC_TW$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
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
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				int32_t byte1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				if (byte1 == 142) {
					if (sl - sp < 4) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					int32_t cnsPlane = $nc(EUC_TW$Decoder::cnspToIndex)->get((int32_t)(sa->get(sp + 1) & (uint32_t)255));
					if (cnsPlane < 0) {
						$assign(var$6, $CoderResult::malformedForLength(2));
						return$5 = true;
						goto $finally;
					}
					byte1 = (int32_t)(sa->get(sp + 2) & (uint32_t)255);
					int32_t byte2 = (int32_t)(sa->get(sp + 3) & (uint32_t)255);
					$var($chars, cc, toUnicode(byte1, byte2, cnsPlane));
					if (cc == nullptr) {
						bool var$7 = !isLegalDB(byte1);
						if (var$7 || !isLegalDB(byte2)) {
							$assign(var$6, $CoderResult::malformedForLength(4));
							return$5 = true;
							goto $finally;
						}
						$assign(var$6, $CoderResult::unmappableForLength(4));
						return$5 = true;
						goto $finally;
					}
					if (dl - dp < $nc(cc)->length) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					if ($nc(cc)->length == 1) {
						$nc(da)->set(dp++, cc->get(0));
					} else {
						$nc(da)->set(dp++, cc->get(0));
						da->set(dp++, cc->get(1));
					}
					sp += 4;
				} else if (byte1 < 128) {
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, (char16_t)byte1);
					++sp;
				} else {
					if (sl - sp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					int32_t byte2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
					$var($chars, cc, toUnicode(byte1, byte2, 0));
					if (cc == nullptr) {
						bool var$8 = !isLegalDB(byte1);
						if (var$8 || !isLegalDB(byte2)) {
							$assign(var$6, $CoderResult::malformedForLength(1));
							return$5 = true;
							goto $finally;
						}
						$assign(var$6, $CoderResult::unmappableForLength(2));
						return$5 = true;
						goto $finally;
					}
					if (dl - dp < 1) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::OVERFLOW);
						return$5 = true;
						goto $finally;
					}
					$nc(da)->set(dp++, $nc(cc)->get(0));
					sp += 2;
				}
			}
			$init($CoderResult);
			$assign(var$6, $CoderResult::UNDERFLOW);
			return$5 = true;
			goto $finally;
		} catch ($Throwable& var$9) {
			$assign(var$4, var$9);
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

$CoderResult* EUC_TW$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				int32_t byte1 = (int32_t)(src->get() & (uint32_t)255);
				if (byte1 == 142) {
					if (src->remaining() < 3) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					int32_t cnsPlane = $nc(EUC_TW$Decoder::cnspToIndex)->get((int32_t)(src->get() & (uint32_t)255));
					if (cnsPlane < 0) {
						$assign(var$2, $CoderResult::malformedForLength(2));
						return$1 = true;
						goto $finally;
					}
					byte1 = (int32_t)(src->get() & (uint32_t)255);
					int32_t byte2 = (int32_t)(src->get() & (uint32_t)255);
					$var($chars, cc, toUnicode(byte1, byte2, cnsPlane));
					if (cc == nullptr) {
						bool var$3 = !isLegalDB(byte1);
						if (var$3 || !isLegalDB(byte2)) {
							$assign(var$2, $CoderResult::malformedForLength(4));
							return$1 = true;
							goto $finally;
						}
						$assign(var$2, $CoderResult::unmappableForLength(4));
						return$1 = true;
						goto $finally;
					}
					if ($nc(dst)->remaining() < $nc(cc)->length) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					if ($nc(cc)->length == 1) {
						$nc(dst)->put(cc->get(0));
					} else {
						$nc(dst)->put(cc->get(0));
						dst->put(cc->get(1));
					}
					mark += 4;
				} else if (byte1 < 128) {
					if (!$nc(dst)->hasRemaining()) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put((char16_t)byte1);
					++mark;
				} else {
					if (!src->hasRemaining()) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					int32_t byte2 = (int32_t)(src->get() & (uint32_t)255);
					$var($chars, cc, toUnicode(byte1, byte2, 0));
					if (cc == nullptr) {
						bool var$4 = !isLegalDB(byte1);
						if (var$4 || !isLegalDB(byte2)) {
							$assign(var$2, $CoderResult::malformedForLength(1));
							return$1 = true;
							goto $finally;
						}
						$assign(var$2, $CoderResult::unmappableForLength(2));
						return$1 = true;
						goto $finally;
					}
					if (!$nc(dst)->hasRemaining()) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					$nc(dst)->put($nc(cc)->get(0));
					mark += 2;
				}
			}
			$init($CoderResult);
			$assign(var$2, $CoderResult::UNDERFLOW);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
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

$CoderResult* EUC_TW$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

void clinit$EUC_TW$Decoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($EUC_TWMapping);
	$assignStatic(EUC_TW$Decoder::b2c, $EUC_TWMapping::b2c);
	$assignStatic(EUC_TW$Decoder::cnspToIndex, $new($bytes, 256));
	{
		$Arrays::fill(EUC_TW$Decoder::cnspToIndex, (int8_t)-1);
		$nc(EUC_TW$Decoder::cnspToIndex)->set(162, (int8_t)1);
		$nc(EUC_TW$Decoder::cnspToIndex)->set(163, (int8_t)2);
		$nc(EUC_TW$Decoder::cnspToIndex)->set(164, (int8_t)3);
		$nc(EUC_TW$Decoder::cnspToIndex)->set(165, (int8_t)4);
		$nc(EUC_TW$Decoder::cnspToIndex)->set(166, (int8_t)5);
		$nc(EUC_TW$Decoder::cnspToIndex)->set(167, (int8_t)6);
		$nc(EUC_TW$Decoder::cnspToIndex)->set(175, (int8_t)7);
	}
	{
		$var($String, b2cIsSuppStr, $EUC_TWMapping::b2cIsSuppStr);
		$var($bytes, flag, $new($bytes, $nc(b2cIsSuppStr)->length() << 1));
		int32_t off = 0;
		for (int32_t i = 0; i < b2cIsSuppStr->length(); ++i) {
			char16_t c = b2cIsSuppStr->charAt(i);
			flag->set(off++, (int8_t)(c >> 8));
			flag->set(off++, (int8_t)((int32_t)(c & (uint32_t)255)));
		}
		$assignStatic(EUC_TW$Decoder::b2cIsSupp, flag);
	}
}

EUC_TW$Decoder::EUC_TW$Decoder() {
}

$Class* EUC_TW$Decoder::load$($String* name, bool initialize) {
	$loadClass(EUC_TW$Decoder, name, initialize, &_EUC_TW$Decoder_ClassInfo_, clinit$EUC_TW$Decoder, allocate$EUC_TW$Decoder);
	return class$;
}

$Class* EUC_TW$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
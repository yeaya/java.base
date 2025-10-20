#include <sun/nio/cs/SingleByte$Decoder.h>

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
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/cs/SingleByte.h>
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
using $ArrayDecoder = ::sun::nio::cs::ArrayDecoder;
using $SingleByte = ::sun::nio::cs::SingleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _SingleByte$Decoder_FieldInfo_[] = {
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SingleByte$Decoder, JLA)},
	{"b2c", "[C", nullptr, $PRIVATE | $FINAL, $field(SingleByte$Decoder, b2c)},
	{"isASCIICompatible", "Z", nullptr, $PRIVATE | $FINAL, $field(SingleByte$Decoder, isASCIICompatible$)},
	{"isLatin1Decodable", "Z", nullptr, $PRIVATE | $FINAL, $field(SingleByte$Decoder, isLatin1Decodable$)},
	{"repl", "C", nullptr, $PRIVATE, $field(SingleByte$Decoder, repl)},
	{}
};

$MethodInfo _SingleByte$Decoder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/charset/Charset;[C)V", nullptr, $PUBLIC, $method(static_cast<void(SingleByte$Decoder::*)($Charset*,$chars*)>(&SingleByte$Decoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[CZ)V", nullptr, $PUBLIC, $method(static_cast<void(SingleByte$Decoder::*)($Charset*,$chars*,bool)>(&SingleByte$Decoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;[CZZ)V", nullptr, $PUBLIC, $method(static_cast<void(SingleByte$Decoder::*)($Charset*,$chars*,bool,bool)>(&SingleByte$Decoder::init$))},
	{"decode", "(I)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(SingleByte$Decoder::*)(int32_t)>(&SingleByte$Decoder::decode))},
	{"decode", "([BII[C)I", nullptr, $PUBLIC},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(SingleByte$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&SingleByte$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(SingleByte$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&SingleByte$Decoder::decodeBufferLoop))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"decodeToLatin1", "([BII[B)I", nullptr, $PUBLIC},
	{"implReplaceWith", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"isASCIICompatible", "()Z", nullptr, $PUBLIC},
	{"isLatin1Decodable", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SingleByte$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.SingleByte$Decoder", "sun.nio.cs.SingleByte", "Decoder", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SingleByte$Decoder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.nio.cs.SingleByte$Decoder",
	"java.nio.charset.CharsetDecoder",
	"sun.nio.cs.ArrayDecoder",
	_SingleByte$Decoder_FieldInfo_,
	_SingleByte$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_SingleByte$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.SingleByte"
};

$Object* allocate$SingleByte$Decoder($Class* clazz) {
	return $of($alloc(SingleByte$Decoder));
}

int32_t SingleByte$Decoder::hashCode() {
	 return this->$CharsetDecoder::hashCode();
}

bool SingleByte$Decoder::equals(Object$* obj) {
	 return this->$CharsetDecoder::equals(obj);
}

$Object* SingleByte$Decoder::clone() {
	 return this->$CharsetDecoder::clone();
}

$String* SingleByte$Decoder::toString() {
	 return this->$CharsetDecoder::toString();
}

void SingleByte$Decoder::finalize() {
	this->$CharsetDecoder::finalize();
}

$JavaLangAccess* SingleByte$Decoder::JLA = nullptr;

void SingleByte$Decoder::init$($Charset* cs, $chars* b2c) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
	this->repl = (char16_t)0xFFFD;
	$set(this, b2c, b2c);
	this->isASCIICompatible$ = false;
	this->isLatin1Decodable$ = false;
}

void SingleByte$Decoder::init$($Charset* cs, $chars* b2c, bool isASCIICompatible) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
	this->repl = (char16_t)0xFFFD;
	$set(this, b2c, b2c);
	this->isASCIICompatible$ = isASCIICompatible;
	this->isLatin1Decodable$ = false;
}

void SingleByte$Decoder::init$($Charset* cs, $chars* b2c, bool isASCIICompatible, bool isLatin1Decodable) {
	$CharsetDecoder::init$(cs, 1.0f, 1.0f);
	this->repl = (char16_t)0xFFFD;
	$set(this, b2c, b2c);
	this->isASCIICompatible$ = isASCIICompatible;
	this->isLatin1Decodable$ = isLatin1Decodable;
}

$CoderResult* SingleByte$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
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
	$init($CoderResult);
	$var($CoderResult, cr, $CoderResult::UNDERFLOW);
	if ((dl - dp) < (sl - sp)) {
		sl = sp + (dl - dp);
		$assign(cr, $CoderResult::OVERFLOW);
	}
	if (this->isASCIICompatible$) {
		int32_t n = $nc(SingleByte$Decoder::JLA)->decodeASCII(sa, sp, da, dp, $Math::min(dl - dp, sl - sp));
		sp += n;
		dp += n;
	}
	while (sp < sl) {
		char16_t c = decode((int32_t)$nc(sa)->get(sp));
		if (c == (char16_t)0xFFFD) {
			return $SingleByte::withResult($($CoderResult::unmappableForLength(1)), src, sp, dst, dp);
		}
		$nc(da)->set(dp++, c);
		++sp;
	}
	return $SingleByte::withResult(cr, src, sp, dst, dp);
}

$CoderResult* SingleByte$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = decode((int32_t)src->get());
				if (c == (char16_t)0xFFFD) {
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
				$nc(dst)->put(c);
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

$CoderResult* SingleByte$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

char16_t SingleByte$Decoder::decode(int32_t b) {
	return $nc(this->b2c)->get(b + 128);
}

void SingleByte$Decoder::implReplaceWith($String* newReplacement) {
	this->repl = $nc(newReplacement)->charAt(0);
}

int32_t SingleByte$Decoder::decodeToLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst) {
	if (len > $nc(dst)->length) {
		len = dst->length;
	}
	int32_t dp = 0;
	while (dp < len) {
		$nc(dst)->set(dp++, (int8_t)decode((int32_t)$nc(src)->get(sp++)));
	}
	return dp;
}

int32_t SingleByte$Decoder::decode($bytes* src, int32_t sp, int32_t len, $chars* dst) {
	if (len > $nc(dst)->length) {
		len = dst->length;
	}
	int32_t dp = 0;
	while (dp < len) {
		$nc(dst)->set(dp, decode((int32_t)$nc(src)->get(sp++)));
		if (dst->get(dp) == (char16_t)0xFFFD) {
			dst->set(dp, this->repl);
		}
		++dp;
	}
	return dp;
}

bool SingleByte$Decoder::isASCIICompatible() {
	return this->isASCIICompatible$;
}

bool SingleByte$Decoder::isLatin1Decodable() {
	return this->isLatin1Decodable$;
}

void clinit$SingleByte$Decoder($Class* class$) {
	$assignStatic(SingleByte$Decoder::JLA, $SharedSecrets::getJavaLangAccess());
}

SingleByte$Decoder::SingleByte$Decoder() {
}

$Class* SingleByte$Decoder::load$($String* name, bool initialize) {
	$loadClass(SingleByte$Decoder, name, initialize, &_SingleByte$Decoder_ClassInfo_, clinit$SingleByte$Decoder, allocate$SingleByte$Decoder);
	return class$;
}

$Class* SingleByte$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
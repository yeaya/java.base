#include <sun/nio/cs/UTF_32Coder$Encoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/UTF_32Coder.h>
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
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _UTF_32Coder$Encoder_FieldInfo_[] = {
	{"doBOM", "Z", nullptr, $PRIVATE, $field(UTF_32Coder$Encoder, doBOM)},
	{"doneBOM", "Z", nullptr, $PRIVATE, $field(UTF_32Coder$Encoder, doneBOM)},
	{"byteOrder", "I", nullptr, $PRIVATE, $field(UTF_32Coder$Encoder, byteOrder)},
	{}
};

$MethodInfo _UTF_32Coder$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;IZ)V", nullptr, $PROTECTED, $method(static_cast<void(UTF_32Coder$Encoder::*)($Charset*,int32_t,bool)>(&UTF_32Coder$Encoder::init$))},
	{"encodeLoop", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{"put", "(ILjava/nio/ByteBuffer;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _UTF_32Coder$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_32Coder$Encoder", "sun.nio.cs.UTF_32Coder", "Encoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _UTF_32Coder$Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.UTF_32Coder$Encoder",
	"java.nio.charset.CharsetEncoder",
	nullptr,
	_UTF_32Coder$Encoder_FieldInfo_,
	_UTF_32Coder$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_32Coder$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_32Coder"
};

$Object* allocate$UTF_32Coder$Encoder($Class* clazz) {
	return $of($alloc(UTF_32Coder$Encoder));
}

void UTF_32Coder$Encoder::put(int32_t cp, $ByteBuffer* dst) {
	if (this->byteOrder == 1) {
		$nc(dst)->put((int8_t)(cp >> 24));
		dst->put((int8_t)(cp >> 16));
		dst->put((int8_t)(cp >> 8));
		dst->put((int8_t)cp);
	} else {
		$nc(dst)->put((int8_t)cp);
		dst->put((int8_t)(cp >> 8));
		dst->put((int8_t)(cp >> 16));
		dst->put((int8_t)(cp >> 24));
	}
}

void UTF_32Coder$Encoder::init$($Charset* cs, int32_t byteOrder, bool doBOM) {
	$useLocalCurrentObjectStackCache();
	$CharsetEncoder::init$(cs, 4.0f, doBOM ? 8.0f : 4.0f, (byteOrder == 1) ? $$new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)255,
		(int8_t)253
	}) : $$new($bytes, {
		(int8_t)253,
		(int8_t)255,
		(int8_t)0,
		(int8_t)0
	}));
	this->doBOM = false;
	this->doneBOM = true;
	this->byteOrder = byteOrder;
	this->doBOM = doBOM;
	this->doneBOM = !doBOM;
}

$CoderResult* UTF_32Coder$Encoder::encodeLoop($CharBuffer* src, $ByteBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	if (!this->doneBOM && src->hasRemaining()) {
		if ($nc(dst)->remaining() < 4) {
			$init($CoderResult);
			return $CoderResult::OVERFLOW;
		}
		put(0x0000FEFF, dst);
		this->doneBOM = true;
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				char16_t c = src->get();
				if (!$Character::isSurrogate(c)) {
					if ($nc(dst)->remaining() < 4) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					++mark;
					put(c, dst);
				} else if ($Character::isHighSurrogate(c)) {
					if (!src->hasRemaining()) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					char16_t low = src->get();
					if ($Character::isLowSurrogate(low)) {
						if ($nc(dst)->remaining() < 4) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						mark += 2;
						put($Character::toCodePoint(c, low), dst);
					} else {
						$assign(var$2, $CoderResult::malformedForLength(1));
						return$1 = true;
						goto $finally;
					}
				} else {
					$assign(var$2, $CoderResult::malformedForLength(1));
					return$1 = true;
					goto $finally;
				}
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

void UTF_32Coder$Encoder::implReset() {
	this->doneBOM = !this->doBOM;
}

UTF_32Coder$Encoder::UTF_32Coder$Encoder() {
}

$Class* UTF_32Coder$Encoder::load$($String* name, bool initialize) {
	$loadClass(UTF_32Coder$Encoder, name, initialize, &_UTF_32Coder$Encoder_ClassInfo_, allocate$UTF_32Coder$Encoder);
	return class$;
}

$Class* UTF_32Coder$Encoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
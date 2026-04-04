#include <sun/nio/cs/UTF_32Coder$Decoder.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
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
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;

namespace sun {
	namespace nio {
		namespace cs {

void UTF_32Coder$Decoder::init$($Charset* cs, int32_t bo) {
	$CharsetDecoder::init$(cs, 0.25f, 1.0f);
	this->expectedBO = bo;
	this->currentBO = 0;
}

int32_t UTF_32Coder$Decoder::getCP($ByteBuffer* src) {
	int32_t var$0 = 0;
	if (this->currentBO == 1) {
		int32_t var$3 = ($nc(src)->get() & 0xff) << 24;
		int32_t var$2 = var$3 | ((src->get() & 0xff) << 16);
		int32_t var$1 = var$2 | ((src->get() & 0xff) << 8);
		var$0 = (var$1 | (src->get() & 0xff));
	} else {
		int32_t var$6 = src->get() & 0xff;
		int32_t var$5 = var$6 | ((src->get() & 0xff) << 8);
		int32_t var$4 = var$5 | ((src->get() & 0xff) << 16);
		var$0 = (var$4 | ((src->get() & 0xff) << 24));
	}
	return var$0;
}

$CoderResult* UTF_32Coder$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalObjectStack();
	if ($nc(src)->remaining() < 4) {
		$init($CoderResult);
		return $CoderResult::UNDERFLOW;
	}
	int32_t mark = src->position();
	int32_t cp = 0;
	$var($Throwable, var$0, nullptr);
	$var($CoderResult, var$2, nullptr);
	bool return$1 = false;
	try {
		if (this->currentBO == 0) {
			int32_t var$5 = (src->get() & 0xff) << 24;
			int32_t var$4 = var$5 | ((src->get() & 0xff) << 16);
			int32_t var$3 = var$4 | ((src->get() & 0xff) << 8);
			cp = var$3 | (src->get() & 0xff);
			if (cp == 0x0000feff && this->expectedBO != 2) {
				this->currentBO = 1;
				mark += 4;
			} else if (cp == (int32_t)0xfffe0000 && this->expectedBO != 1) {
				this->currentBO = 2;
				mark += 4;
			} else {
				if (this->expectedBO == 0) {
					this->currentBO = 1;
				} else {
					this->currentBO = this->expectedBO;
				}
				src->position(mark);
			}
		}
		while (src->remaining() >= 4) {
			cp = getCP(src);
			if ($Character::isBmpCodePoint(cp)) {
				if (!$nc(dst)->hasRemaining()) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				mark += 4;
				dst->put((char16_t)cp);
			} else if ($Character::isValidCodePoint(cp)) {
				if ($nc(dst)->remaining() < 2) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				mark += 4;
				dst->put($Character::highSurrogate(cp));
				dst->put($Character::lowSurrogate(cp));
			} else {
				$assign(var$2, $CoderResult::malformedForLength(4));
				return$1 = true;
				goto $finally;
			}
		}
		$init($CoderResult);
		$assign(var$2, $CoderResult::UNDERFLOW);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$6) {
		$assign(var$0, var$6);
	} $finally: {
		src->position(mark);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void UTF_32Coder$Decoder::implReset() {
	this->currentBO = 0;
}

UTF_32Coder$Decoder::UTF_32Coder$Decoder() {
}

$Class* UTF_32Coder$Decoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"currentBO", "I", nullptr, $PRIVATE, $field(UTF_32Coder$Decoder, currentBO)},
		{"expectedBO", "I", nullptr, $PRIVATE, $field(UTF_32Coder$Decoder, expectedBO)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;I)V", nullptr, $PROTECTED, $method(UTF_32Coder$Decoder, init$, void, $Charset*, int32_t)},
		{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(UTF_32Coder$Decoder, decodeLoop, $CoderResult*, $ByteBuffer*, $CharBuffer*)},
		{"getCP", "(Ljava/nio/ByteBuffer;)I", nullptr, $PRIVATE, $method(UTF_32Coder$Decoder, getCP, int32_t, $ByteBuffer*)},
		{"implReset", "()V", nullptr, $PROTECTED, $virtualMethod(UTF_32Coder$Decoder, implReset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.UTF_32Coder$Decoder", "sun.nio.cs.UTF_32Coder", "Decoder", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.UTF_32Coder$Decoder",
		"java.nio.charset.CharsetDecoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.UTF_32Coder"
	};
	$loadClass(UTF_32Coder$Decoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTF_32Coder$Decoder);
	});
	return class$;
}

$Class* UTF_32Coder$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
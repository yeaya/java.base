#include <sun/nio/cs/UTF_32Coder$Decoder.h>

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
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $UTF_32Coder = ::sun::nio::cs::UTF_32Coder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _UTF_32Coder$Decoder_FieldInfo_[] = {
	{"currentBO", "I", nullptr, $PRIVATE, $field(UTF_32Coder$Decoder, currentBO)},
	{"expectedBO", "I", nullptr, $PRIVATE, $field(UTF_32Coder$Decoder, expectedBO)},
	{}
};

$MethodInfo _UTF_32Coder$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;I)V", nullptr, $PROTECTED, $method(static_cast<void(UTF_32Coder$Decoder::*)($Charset*,int32_t)>(&UTF_32Coder$Decoder::init$))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"getCP", "(Ljava/nio/ByteBuffer;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(UTF_32Coder$Decoder::*)($ByteBuffer*)>(&UTF_32Coder$Decoder::getCP))},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _UTF_32Coder$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.UTF_32Coder$Decoder", "sun.nio.cs.UTF_32Coder", "Decoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _UTF_32Coder$Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.UTF_32Coder$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_UTF_32Coder$Decoder_FieldInfo_,
	_UTF_32Coder$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_UTF_32Coder$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.UTF_32Coder"
};

$Object* allocate$UTF_32Coder$Decoder($Class* clazz) {
	return $of($alloc(UTF_32Coder$Decoder));
}

void UTF_32Coder$Decoder::init$($Charset* cs, int32_t bo) {
	$CharsetDecoder::init$(cs, 0.25f, 1.0f);
	this->expectedBO = bo;
	this->currentBO = 0;
}

int32_t UTF_32Coder$Decoder::getCP($ByteBuffer* src) {
	int32_t var$0 = 0;
	if (this->currentBO == 1) {
		int32_t var$3 = (((int32_t)($nc(src)->get() & (uint32_t)255)) << 24);
		int32_t var$2 = var$3 | (((int32_t)(src->get() & (uint32_t)255)) << 16);
		int32_t var$1 = var$2 | (((int32_t)(src->get() & (uint32_t)255)) << 8);
		var$0 = (var$1 | ((int32_t)(src->get() & (uint32_t)255)));
	} else {
		int32_t var$6 = ((int32_t)(src->get() & (uint32_t)255));
		int32_t var$5 = var$6 | (((int32_t)(src->get() & (uint32_t)255)) << 8);
		int32_t var$4 = var$5 | (((int32_t)(src->get() & (uint32_t)255)) << 16);
		var$0 = (var$4 | (((int32_t)(src->get() & (uint32_t)255)) << 24));
	}
	return var$0;
}

$CoderResult* UTF_32Coder$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	if ($nc(src)->remaining() < 4) {
		$init($CoderResult);
		return $CoderResult::UNDERFLOW;
	}
	int32_t mark = $nc(src)->position();
	int32_t cp = 0;
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			if (this->currentBO == 0) {
				int32_t var$5 = (((int32_t)(src->get() & (uint32_t)255)) << 24);
				int32_t var$4 = var$5 | (((int32_t)(src->get() & (uint32_t)255)) << 16);
				int32_t var$3 = var$4 | (((int32_t)(src->get() & (uint32_t)255)) << 8);
				cp = var$3 | ((int32_t)(src->get() & (uint32_t)255));
				if (cp == 0x0000FEFF && this->expectedBO != 2) {
					this->currentBO = 1;
					mark += 4;
				} else if (cp == (int32_t)0xFFFE0000 && this->expectedBO != 1) {
					this->currentBO = 2;
					mark += 4;
				} else {
					if (this->expectedBO == 0) {
						this->currentBO = 1;
					} else {
						this->currentBO = this->expectedBO;
					}
					$nc(src)->position(mark);
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
					$nc(dst)->put((char16_t)cp);
				} else if ($Character::isValidCodePoint(cp)) {
					if ($nc(dst)->remaining() < 2) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::OVERFLOW);
						return$1 = true;
						goto $finally;
					}
					mark += 4;
					$nc(dst)->put($Character::highSurrogate(cp));
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

void UTF_32Coder$Decoder::implReset() {
	this->currentBO = 0;
}

UTF_32Coder$Decoder::UTF_32Coder$Decoder() {
}

$Class* UTF_32Coder$Decoder::load$($String* name, bool initialize) {
	$loadClass(UTF_32Coder$Decoder, name, initialize, &_UTF_32Coder$Decoder_ClassInfo_, allocate$UTF_32Coder$Decoder);
	return class$;
}

$Class* UTF_32Coder$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
#include <sun/nio/cs/UnicodeDecoder.h>

#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
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
#include <jcpp.h>

#undef BIG
#undef OVERFLOW
#undef REVERSED_MARK
#undef UNDERFLOW
#undef LITTLE
#undef BYTE_ORDER_MARK
#undef NONE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _UnicodeDecoder_FieldInfo_[] = {
	{"BYTE_ORDER_MARK", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeDecoder, BYTE_ORDER_MARK)},
	{"REVERSED_MARK", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeDecoder, REVERSED_MARK)},
	{"NONE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeDecoder, NONE)},
	{"BIG", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeDecoder, BIG)},
	{"LITTLE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(UnicodeDecoder, LITTLE)},
	{"expectedByteOrder", "I", nullptr, $PRIVATE | $FINAL, $field(UnicodeDecoder, expectedByteOrder)},
	{"currentByteOrder", "I", nullptr, $PRIVATE, $field(UnicodeDecoder, currentByteOrder)},
	{"defaultByteOrder", "I", nullptr, $PRIVATE, $field(UnicodeDecoder, defaultByteOrder)},
	{}
};

$MethodInfo _UnicodeDecoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;I)V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeDecoder::*)($Charset*,int32_t)>(&UnicodeDecoder::init$))},
	{"<init>", "(Ljava/nio/charset/Charset;II)V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeDecoder::*)($Charset*,int32_t,int32_t)>(&UnicodeDecoder::init$))},
	{"decode", "(II)C", nullptr, $PRIVATE, $method(static_cast<char16_t(UnicodeDecoder::*)(int32_t,int32_t)>(&UnicodeDecoder::decode))},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _UnicodeDecoder_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.cs.UnicodeDecoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_UnicodeDecoder_FieldInfo_,
	_UnicodeDecoder_MethodInfo_
};

$Object* allocate$UnicodeDecoder($Class* clazz) {
	return $of($alloc(UnicodeDecoder));
}

void UnicodeDecoder::init$($Charset* cs, int32_t bo) {
	$CharsetDecoder::init$(cs, 0.5f, 1.0f);
	this->defaultByteOrder = UnicodeDecoder::BIG;
	this->expectedByteOrder = (this->currentByteOrder = bo);
}

void UnicodeDecoder::init$($Charset* cs, int32_t bo, int32_t defaultBO) {
	UnicodeDecoder::init$(cs, bo);
	this->defaultByteOrder = defaultBO;
}

char16_t UnicodeDecoder::decode(int32_t b1, int32_t b2) {
	if (this->currentByteOrder == UnicodeDecoder::BIG) {
		return (char16_t)((b1 << 8) | b2);
	} else {
		return (char16_t)((b2 << 8) | b1);
	}
}

$CoderResult* UnicodeDecoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->remaining() > 1) {
				int32_t b1 = (int32_t)(src->get() & (uint32_t)255);
				int32_t b2 = (int32_t)(src->get() & (uint32_t)255);
				if (this->currentByteOrder == UnicodeDecoder::NONE) {
					char16_t c = (char16_t)((b1 << 8) | b2);
					if (c == UnicodeDecoder::BYTE_ORDER_MARK) {
						this->currentByteOrder = UnicodeDecoder::BIG;
						mark += 2;
						continue;
					} else if (c == UnicodeDecoder::REVERSED_MARK) {
						this->currentByteOrder = UnicodeDecoder::LITTLE;
						mark += 2;
						continue;
					} else {
						this->currentByteOrder = this->defaultByteOrder;
					}
				}
				char16_t c = decode(b1, b2);
				if ($Character::isSurrogate(c)) {
					if ($Character::isHighSurrogate(c)) {
						if (src->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						int32_t var$3 = (int32_t)(src->get() & (uint32_t)255);
						char16_t c2 = decode(var$3, (int32_t)(src->get() & (uint32_t)255));
						if (!$Character::isLowSurrogate(c2)) {
							$assign(var$2, $CoderResult::malformedForLength(4));
							return$1 = true;
							goto $finally;
						}
						if ($nc(dst)->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::OVERFLOW);
							return$1 = true;
							goto $finally;
						}
						mark += 4;
						$nc(dst)->put(c);
						dst->put(c2);
						continue;
					}
					$assign(var$2, $CoderResult::malformedForLength(2));
					return$1 = true;
					goto $finally;
				}
				if (!$nc(dst)->hasRemaining()) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				mark += 2;
				$nc(dst)->put(c);
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

void UnicodeDecoder::implReset() {
	this->currentByteOrder = this->expectedByteOrder;
}

UnicodeDecoder::UnicodeDecoder() {
}

$Class* UnicodeDecoder::load$($String* name, bool initialize) {
	$loadClass(UnicodeDecoder, name, initialize, &_UnicodeDecoder_ClassInfo_, allocate$UnicodeDecoder);
	return class$;
}

$Class* UnicodeDecoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
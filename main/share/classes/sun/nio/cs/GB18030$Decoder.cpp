#include <sun/nio/cs/GB18030$Decoder.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <sun/nio/cs/GB18030.h>
#include <jcpp.h>

#undef OVERFLOW
#undef REPLACE_CHAR
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
using $GB18030 = ::sun::nio::cs::GB18030;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _GB18030$Decoder_FieldInfo_[] = {
	{"REPLACE_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GB18030$Decoder, REPLACE_CHAR)},
	{"currentState", "I", nullptr, $PRIVATE, $field(GB18030$Decoder, currentState)},
	{}
};

$MethodInfo _GB18030$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(GB18030$Decoder::*)($Charset*)>(&GB18030$Decoder::init$))},
	{"decodeArrayLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(GB18030$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&GB18030$Decoder::decodeArrayLoop))},
	{"decodeBufferLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE, $method(static_cast<$CoderResult*(GB18030$Decoder::*)($ByteBuffer*,$CharBuffer*)>(&GB18030$Decoder::decodeBufferLoop))},
	{"decodeDouble", "(II)C", nullptr, $PROTECTED},
	{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED},
	{"getChar", "(I)C", nullptr, $PRIVATE, $method(static_cast<char16_t(GB18030$Decoder::*)(int32_t)>(&GB18030$Decoder::getChar))},
	{"implReset", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _GB18030$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.GB18030$Decoder", "sun.nio.cs.GB18030", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GB18030$Decoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.GB18030$Decoder",
	"java.nio.charset.CharsetDecoder",
	nullptr,
	_GB18030$Decoder_FieldInfo_,
	_GB18030$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_GB18030$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.GB18030"
};

$Object* allocate$GB18030$Decoder($Class* clazz) {
	return $of($alloc(GB18030$Decoder));
}

void GB18030$Decoder::init$($Charset* cs) {
	$CharsetDecoder::init$(cs, 1.0f, 2.0f);
	this->currentState = 2;
}

char16_t GB18030$Decoder::getChar(int32_t offset) {
	int32_t byte1 = (int32_t)((offset >> 8) & (uint32_t)255);
	int32_t byte2 = ((int32_t)(offset & (uint32_t)255));
	int32_t start = 0;
	int32_t end = 255;
	$init($GB18030);
	if (((byte1 < 0) || (byte1 > $nc($GB18030::decoderIndex1)->length)) || ((byte2 < start) || (byte2 > end))) {
		return GB18030$Decoder::REPLACE_CHAR;
	}
	int32_t n = ((int32_t)($nc($GB18030::decoderIndex1)->get(byte1) & (uint32_t)15)) * (end - start + 1) + (byte2 - start);
	return $nc($nc($GB18030::decoderIndex2)->get($nc($GB18030::decoderIndex1)->get(byte1) >> 4))->charAt(n);
}

char16_t GB18030$Decoder::decodeDouble(int32_t byte1, int32_t byte2) {
	int32_t start = 64;
	int32_t end = 254;
	$init($GB18030);
	if (((byte1 < 0) || (byte1 > $nc($GB18030::index1)->length)) || ((byte2 < start) || (byte2 > end))) {
		return (char16_t)0xFFFD;
	}
	int32_t n = ((int32_t)($nc($GB18030::index1)->get(byte1) & (uint32_t)15)) * (end - start + 1) + (byte2 - start);
	return $nc($nc($GB18030::index2)->get($nc($GB18030::index1)->get(byte1) >> 4))->charAt(n);
}

void GB18030$Decoder::implReset() {
	this->currentState = 2;
}

$CoderResult* GB18030$Decoder::decodeArrayLoop($ByteBuffer* src, $CharBuffer* dst) {
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
	int32_t inputSize = 1;
	{
		$var($Throwable, var$4, nullptr);
		$var($CoderResult, var$6, nullptr);
		bool return$5 = false;
		try {
			while (sp < sl) {
				int32_t byte1 = 0;
				int32_t byte2 = 0;
				int32_t byte3 = 0;
				int32_t byte4 = 0;
				byte1 = (int32_t)($nc(sa)->get(sp) & (uint32_t)255);
				inputSize = 1;
				if (((int32_t)(byte1 & (uint32_t)(int32_t)(int8_t)128)) == 0) {
					this->currentState = 1;
				} else if (byte1 < 129 || byte1 > 254) {
					$assign(var$6, $CoderResult::malformedForLength(1));
					return$5 = true;
					goto $finally;
				} else {
					if (sl - sp < 2) {
						$init($CoderResult);
						$assign(var$6, $CoderResult::UNDERFLOW);
						return$5 = true;
						goto $finally;
					}
					byte2 = (int32_t)(sa->get(sp + 1) & (uint32_t)255);
					inputSize = 2;
					if (byte2 < 48) {
						$assign(var$6, $CoderResult::malformedForLength(1));
						return$5 = true;
						goto $finally;
					} else if (byte2 >= 48 && byte2 <= 57) {
						this->currentState = 3;
						if (sl - sp < 4) {
							$init($CoderResult);
							$assign(var$6, $CoderResult::UNDERFLOW);
							return$5 = true;
							goto $finally;
						}
						byte3 = (int32_t)(sa->get(sp + 2) & (uint32_t)255);
						if (byte3 < 129 || byte3 > 254) {
							$assign(var$6, $CoderResult::malformedForLength(3));
							return$5 = true;
							goto $finally;
						}
						byte4 = (int32_t)(sa->get(sp + 3) & (uint32_t)255);
						inputSize = 4;
						if (byte4 < 48 || byte4 > 57) {
							$assign(var$6, $CoderResult::malformedForLength(4));
							return$5 = true;
							goto $finally;
						}
					} else if (byte2 == 127 || byte2 == 255 || (byte2 < 64)) {
						$assign(var$6, $CoderResult::malformedForLength(2));
						return$5 = true;
						goto $finally;
					} else {
						this->currentState = 2;
					}
				}
				if (dl - dp < 1) {
					$init($CoderResult);
					$assign(var$6, $CoderResult::OVERFLOW);
					return$5 = true;
					goto $finally;
				}
				{
					int32_t offset = 0;
					int32_t hiByte = 0;
					int32_t lowByte = 0;
					switch (this->currentState) {
					case 1:
						{
							$nc(da)->set(dp++, (char16_t)byte1);
							break;
						}
					case 2:
						{
							$nc(da)->set(dp++, decodeDouble(byte1, byte2));
							break;
						}
					case 3:
						{
							offset = (((byte1 - 129) * 10 + (byte2 - 48)) * 126 + byte3 - 129) * 10 + byte4 - 48;
							hiByte = (int32_t)((offset >> 8) & (uint32_t)255);
							lowByte = ((int32_t)(offset & (uint32_t)255));
							if (offset <= 19042) {
								$nc(da)->set(dp++, getChar(offset));
							} else if (offset > 19042 && offset <= 0x000082BC) {
								$nc(da)->set(dp++, (char16_t)(offset + 21827));
							} else if (offset >= 0x000082BD && offset <= 0x0000830D) {
								$nc(da)->set(dp++, getChar(offset));
							} else if (offset >= 0x0000830D && offset <= 0x000093A8) {
								$nc(da)->set(dp++, (char16_t)(offset + 25943));
							} else if (offset >= 0x000093A9 && offset <= 0x000099FB) {
								$nc(da)->set(dp++, getChar(offset));
							} else if (offset >= 0x0002E248 && offset < 0x0012E248) {
								if (offset >= 0x0012E248) {
									$assign(var$6, $CoderResult::malformedForLength(4));
									return$5 = true;
									goto $finally;
								}
								offset -= 0x0001E248;
								if (dl - dp < 2) {
									$init($CoderResult);
									$assign(var$6, $CoderResult::OVERFLOW);
									return$5 = true;
									goto $finally;
								}
								$nc(da)->set(dp++, (char16_t)((offset - 0x00010000) / 1024 + 0x0000D800));
								da->set(dp++, (char16_t)((offset - 0x00010000) % 1024 + 0x0000DC00));
							} else {
								$assign(var$6, $CoderResult::malformedForLength(inputSize));
								return$5 = true;
								goto $finally;
							}
							break;
						}
					}
				}
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

$CoderResult* GB18030$Decoder::decodeBufferLoop($ByteBuffer* src, $CharBuffer* dst) {
	$useLocalCurrentObjectStackCache();
	int32_t mark = $nc(src)->position();
	{
		$var($Throwable, var$0, nullptr);
		$var($CoderResult, var$2, nullptr);
		bool return$1 = false;
		try {
			while (src->hasRemaining()) {
				int32_t byte1 = 0;
				int32_t byte2 = 0;
				int32_t byte3 = 0;
				int32_t byte4 = 0;
				byte1 = (int32_t)(src->get() & (uint32_t)255);
				int32_t inputSize = 1;
				if (((int32_t)(byte1 & (uint32_t)(int32_t)(int8_t)128)) == 0) {
					this->currentState = 1;
				} else if (byte1 < 129 || byte1 > 254) {
					$assign(var$2, $CoderResult::malformedForLength(1));
					return$1 = true;
					goto $finally;
				} else {
					if (src->remaining() < 1) {
						$init($CoderResult);
						$assign(var$2, $CoderResult::UNDERFLOW);
						return$1 = true;
						goto $finally;
					}
					byte2 = (int32_t)(src->get() & (uint32_t)255);
					inputSize = 2;
					if (byte2 < 48) {
						$assign(var$2, $CoderResult::malformedForLength(1));
						return$1 = true;
						goto $finally;
					} else if (byte2 >= 48 && byte2 <= 57) {
						this->currentState = 3;
						if (src->remaining() < 2) {
							$init($CoderResult);
							$assign(var$2, $CoderResult::UNDERFLOW);
							return$1 = true;
							goto $finally;
						}
						byte3 = (int32_t)(src->get() & (uint32_t)255);
						if (byte3 < 129 || byte3 > 254) {
							$assign(var$2, $CoderResult::malformedForLength(3));
							return$1 = true;
							goto $finally;
						}
						byte4 = (int32_t)(src->get() & (uint32_t)255);
						inputSize = 4;
						if (byte4 < 48 || byte4 > 57) {
							$assign(var$2, $CoderResult::malformedForLength(4));
							return$1 = true;
							goto $finally;
						}
					} else if (byte2 == 127 || byte2 == 255 || (byte2 < 64)) {
						$assign(var$2, $CoderResult::malformedForLength(2));
						return$1 = true;
						goto $finally;
					} else {
						this->currentState = 2;
					}
				}
				if ($nc(dst)->remaining() < 1) {
					$init($CoderResult);
					$assign(var$2, $CoderResult::OVERFLOW);
					return$1 = true;
					goto $finally;
				}
				{
					int32_t offset = 0;
					int32_t hiByte = 0;
					int32_t lowByte = 0;
					switch (this->currentState) {
					case 1:
						{
							$nc(dst)->put((char16_t)byte1);
							break;
						}
					case 2:
						{
							$nc(dst)->put(decodeDouble(byte1, byte2));
							break;
						}
					case 3:
						{
							offset = (((byte1 - 129) * 10 + (byte2 - 48)) * 126 + byte3 - 129) * 10 + byte4 - 48;
							hiByte = (int32_t)((offset >> 8) & (uint32_t)255);
							lowByte = ((int32_t)(offset & (uint32_t)255));
							if (offset <= 19042) {
								$nc(dst)->put(getChar(offset));
							} else if (offset > 19042 && offset <= 0x000082BC) {
								$nc(dst)->put((char16_t)(offset + 21827));
							} else if (offset >= 0x000082BD && offset <= 0x0000830D) {
								$nc(dst)->put(getChar(offset));
							} else if (offset >= 0x0000830D && offset <= 0x000093A8) {
								$nc(dst)->put((char16_t)(offset + 25943));
							} else if (offset >= 0x000093A9 && offset <= 0x000099FB) {
								$nc(dst)->put(getChar(offset));
							} else if (offset >= 0x0002E248 && offset < 0x0012E248) {
								if (offset >= 0x0012E248) {
									$assign(var$2, $CoderResult::malformedForLength(4));
									return$1 = true;
									goto $finally;
								}
								offset -= 0x0001E248;
								if ($nc(dst)->remaining() < 2) {
									$init($CoderResult);
									$assign(var$2, $CoderResult::OVERFLOW);
									return$1 = true;
									goto $finally;
								}
								$nc(dst)->put((char16_t)((offset - 0x00010000) / 1024 + 0x0000D800));
								dst->put((char16_t)((offset - 0x00010000) % 1024 + 0x0000DC00));
							} else {
								$assign(var$2, $CoderResult::malformedForLength(inputSize));
								return$1 = true;
								goto $finally;
							}
						}
					}
				}
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

$CoderResult* GB18030$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	bool var$0 = $nc(src)->hasArray();
	if (var$0 && $nc(dst)->hasArray()) {
		return decodeArrayLoop(src, dst);
	} else {
		return decodeBufferLoop(src, dst);
	}
}

GB18030$Decoder::GB18030$Decoder() {
}

$Class* GB18030$Decoder::load$($String* name, bool initialize) {
	$loadClass(GB18030$Decoder, name, initialize, &_GB18030$Decoder_ClassInfo_, allocate$GB18030$Decoder);
	return class$;
}

$Class* GB18030$Decoder::class$ = nullptr;

		} // cs
	} // nio
} // sun
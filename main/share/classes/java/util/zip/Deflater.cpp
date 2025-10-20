#include <java/util/zip/Deflater.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <java/util/zip/Deflater$DeflaterZStreamRef.h>
#include <java/util/zip/ZipUtils.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#include "_java_util_zip_Deflater.h"

#undef BEST_COMPRESSION
#undef BEST_SPEED
#undef DEFAULT_COMPRESSION
#undef DEFAULT_STRATEGY
#undef DEFLATED
#undef FILTERED
#undef FINISH
#undef FULL_FLUSH
#undef HUFFMAN_ONLY
#undef NO_COMPRESSION
#undef NO_FLUSH
#undef SYNC_FLUSH

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $Deflater$DeflaterZStreamRef = ::java::util::zip::Deflater$DeflaterZStreamRef;
using $ZipUtils = ::java::util::zip::ZipUtils;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _Deflater_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Deflater, $assertionsDisabled)},
	{"zsRef", "Ljava/util/zip/Deflater$DeflaterZStreamRef;", nullptr, $PRIVATE | $FINAL, $field(Deflater, zsRef)},
	{"input", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(Deflater, input)},
	{"inputArray", "[B", nullptr, $PRIVATE, $field(Deflater, inputArray)},
	{"inputPos", "I", nullptr, $PRIVATE, $field(Deflater, inputPos)},
	{"inputLim", "I", nullptr, $PRIVATE, $field(Deflater, inputLim)},
	{"level", "I", nullptr, $PRIVATE, $field(Deflater, level)},
	{"strategy", "I", nullptr, $PRIVATE, $field(Deflater, strategy)},
	{"setParams", "Z", nullptr, $PRIVATE, $field(Deflater, setParams)},
	{"finish", "Z", nullptr, $PRIVATE, $field(Deflater, finish$)},
	{"finished", "Z", nullptr, $PRIVATE, $field(Deflater, finished$)},
	{"bytesRead", "J", nullptr, $PRIVATE, $field(Deflater, bytesRead)},
	{"bytesWritten", "J", nullptr, $PRIVATE, $field(Deflater, bytesWritten)},
	{"DEFLATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, DEFLATED)},
	{"NO_COMPRESSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, NO_COMPRESSION)},
	{"BEST_SPEED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, BEST_SPEED)},
	{"BEST_COMPRESSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, BEST_COMPRESSION)},
	{"DEFAULT_COMPRESSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, DEFAULT_COMPRESSION)},
	{"FILTERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, FILTERED)},
	{"HUFFMAN_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, HUFFMAN_ONLY)},
	{"DEFAULT_STRATEGY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, DEFAULT_STRATEGY)},
	{"NO_FLUSH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, NO_FLUSH)},
	{"SYNC_FLUSH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, SYNC_FLUSH)},
	{"FULL_FLUSH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Deflater, FULL_FLUSH)},
	{"FINISH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Deflater, FINISH)},
	{}
};

$MethodInfo _Deflater_MethodInfo_[] = {
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(Deflater::*)(int32_t,bool)>(&Deflater::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Deflater::*)(int32_t)>(&Deflater::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Deflater::*)()>(&Deflater::init$))},
	{"deflate", "([BII)I", nullptr, $PUBLIC},
	{"deflate", "([B)I", nullptr, $PUBLIC},
	{"deflate", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"deflate", "([BIII)I", nullptr, $PUBLIC},
	{"deflate", "(Ljava/nio/ByteBuffer;I)I", nullptr, $PUBLIC},
	{"deflateBufferBuffer", "(JJIJIII)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Deflater::*)(int64_t,int64_t,int32_t,int64_t,int32_t,int32_t,int32_t)>(&Deflater::deflateBufferBuffer))},
	{"deflateBufferBytes", "(JJI[BIIII)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Deflater::*)(int64_t,int64_t,int32_t,$bytes*,int32_t,int32_t,int32_t,int32_t)>(&Deflater::deflateBufferBytes))},
	{"deflateBytesBuffer", "(J[BIIJIII)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Deflater::*)(int64_t,$bytes*,int32_t,int32_t,int64_t,int32_t,int32_t,int32_t)>(&Deflater::deflateBytesBuffer))},
	{"deflateBytesBytes", "(J[BII[BIIII)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Deflater::*)(int64_t,$bytes*,int32_t,int32_t,$bytes*,int32_t,int32_t,int32_t,int32_t)>(&Deflater::deflateBytesBytes))},
	{"end", "()V", nullptr, $PUBLIC},
	{"end", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&Deflater::end))},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(Deflater::*)()>(&Deflater::ensureOpen))},
	{"finish", "()V", nullptr, $PUBLIC},
	{"finished", "()Z", nullptr, $PUBLIC},
	{"getAdler", "()I", nullptr, $PUBLIC},
	{"getAdler", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&Deflater::getAdler))},
	{"getBytesRead", "()J", nullptr, $PUBLIC},
	{"getBytesWritten", "()J", nullptr, $PUBLIC},
	{"getTotalIn", "()I", nullptr, $PUBLIC},
	{"getTotalOut", "()I", nullptr, $PUBLIC},
	{"init", "(IIZ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t,int32_t,bool)>(&Deflater::init))},
	{"needsInput", "()Z", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"reset", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&Deflater::reset))},
	{"setDictionary", "([BII)V", nullptr, $PUBLIC},
	{"setDictionary", "([B)V", nullptr, $PUBLIC},
	{"setDictionary", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"setDictionary", "(J[BII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$bytes*,int32_t,int32_t)>(&Deflater::setDictionary))},
	{"setDictionaryBuffer", "(JJI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t)>(&Deflater::setDictionaryBuffer))},
	{"setInput", "([BII)V", nullptr, $PUBLIC},
	{"setInput", "([B)V", nullptr, $PUBLIC},
	{"setInput", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"setLevel", "(I)V", nullptr, $PUBLIC},
	{"setStrategy", "(I)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_deflateBufferBuffer 8
#define _METHOD_INDEX_deflateBufferBytes 9
#define _METHOD_INDEX_deflateBytesBuffer 10
#define _METHOD_INDEX_deflateBytesBytes 11
#define _METHOD_INDEX_end 13
#define _METHOD_INDEX_getAdler 18
#define _METHOD_INDEX_init 23
#define _METHOD_INDEX_reset 26
#define _METHOD_INDEX_setDictionary 30
#define _METHOD_INDEX_setDictionaryBuffer 31

$InnerClassInfo _Deflater_InnerClassesInfo_[] = {
	{"java.util.zip.Deflater$DeflaterZStreamRef", "java.util.zip.Deflater", "DeflaterZStreamRef", $STATIC},
	{}
};

$ClassInfo _Deflater_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.Deflater",
	"java.lang.Object",
	nullptr,
	_Deflater_FieldInfo_,
	_Deflater_MethodInfo_,
	nullptr,
	nullptr,
	_Deflater_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.zip.Deflater$DeflaterZStreamRef"
};

$Object* allocate$Deflater($Class* clazz) {
	return $of($alloc(Deflater));
}

bool Deflater::$assertionsDisabled = false;

void Deflater::init$(int32_t level, bool nowrap) {
	$init($ZipUtils);
	$set(this, input, $ZipUtils::defaultBuf);
	this->level = level;
	this->strategy = Deflater::DEFAULT_STRATEGY;
	$set(this, zsRef, $new($Deflater$DeflaterZStreamRef, this, init(level, Deflater::DEFAULT_STRATEGY, nowrap)));
}

void Deflater::init$(int32_t level) {
	Deflater::init$(level, false);
}

void Deflater::init$() {
	Deflater::init$(Deflater::DEFAULT_COMPRESSION, false);
}

void Deflater::setInput($bytes* input, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off > $nc(input)->length - len) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	$synchronized(this->zsRef) {
		$set(this, input, nullptr);
		$set(this, inputArray, input);
		this->inputPos = off;
		this->inputLim = off + len;
	}
}

void Deflater::setInput($bytes* input) {
	setInput(input, 0, $nc(input)->length);
}

void Deflater::setInput($ByteBuffer* input) {
	$Objects::requireNonNull(input);
	$synchronized(this->zsRef) {
		$set(this, input, input);
		$set(this, inputArray, nullptr);
	}
}

void Deflater::setDictionary($bytes* dictionary, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off > $nc(dictionary)->length - len) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	$synchronized(this->zsRef) {
		ensureOpen();
		setDictionary($nc(this->zsRef)->address(), dictionary, off, len);
	}
}

void Deflater::setDictionary($bytes* dictionary) {
	setDictionary(dictionary, 0, $nc(dictionary)->length);
}

void Deflater::setDictionary($ByteBuffer* dictionary) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->zsRef) {
		int32_t position = $nc(dictionary)->position();
		int32_t remaining = $Math::max(dictionary->limit() - position, 0);
		ensureOpen();
		if (dictionary->isDirect()) {
			int64_t address = $nc(($cast($DirectBuffer, dictionary)))->address();
			{
				$var($Throwable, var$0, nullptr);
				try {
					setDictionaryBuffer($nc(this->zsRef)->address(), address + position, remaining);
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					$Reference::reachabilityFence(dictionary);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} else {
			$var($bytes, array, $ZipUtils::getBufferArray(dictionary));
			int32_t offset = $ZipUtils::getBufferOffset(dictionary);
			setDictionary($nc(this->zsRef)->address(), array, offset + position, remaining);
		}
		dictionary->position(position + remaining);
	}
}

void Deflater::setStrategy(int32_t strategy) {
	switch (strategy) {
	case Deflater::DEFAULT_STRATEGY:
		{}
	case Deflater::FILTERED:
		{}
	case Deflater::HUFFMAN_ONLY:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
	$synchronized(this->zsRef) {
		if (this->strategy != strategy) {
			this->strategy = strategy;
			this->setParams = true;
		}
	}
}

void Deflater::setLevel(int32_t level) {
	if ((level < 0 || level > 9) && level != Deflater::DEFAULT_COMPRESSION) {
		$throwNew($IllegalArgumentException, "invalid compression level"_s);
	}
	$synchronized(this->zsRef) {
		if (this->level != level) {
			this->level = level;
			this->setParams = true;
		}
	}
}

bool Deflater::needsInput() {
	$synchronized(this->zsRef) {
		$var($ByteBuffer, input, this->input);
		return input == nullptr ? this->inputLim == this->inputPos : !$nc(input)->hasRemaining();
	}
}

void Deflater::finish() {
	$synchronized(this->zsRef) {
		this->finish$ = true;
	}
}

bool Deflater::finished() {
	$synchronized(this->zsRef) {
		return this->finished$;
	}
}

int32_t Deflater::deflate($bytes* output, int32_t off, int32_t len) {
	return deflate(output, off, len, Deflater::NO_FLUSH);
}

int32_t Deflater::deflate($bytes* output) {
	return deflate(output, 0, $nc(output)->length, Deflater::NO_FLUSH);
}

int32_t Deflater::deflate($ByteBuffer* output) {
	return deflate(output, Deflater::NO_FLUSH);
}

int32_t Deflater::deflate($bytes* output, int32_t off, int32_t len, int32_t flush) {
	$useLocalCurrentObjectStackCache();
	if (off < 0 || len < 0 || off > $nc(output)->length - len) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	if (flush != Deflater::NO_FLUSH && flush != Deflater::SYNC_FLUSH && flush != Deflater::FULL_FLUSH) {
		$throwNew($IllegalArgumentException);
	}
	$synchronized(this->zsRef) {
		ensureOpen();
		$var($ByteBuffer, input, this->input);
		if (this->finish$) {
			flush = Deflater::FINISH;
		}
		int32_t params = 0;
		if (this->setParams) {
			params = (1 | (this->strategy << 1)) | (this->level << 3);
		} else {
			params = 0;
		}
		int32_t inputPos = 0;
		int64_t result = 0;
		if (input == nullptr) {
			inputPos = this->inputPos;
			result = deflateBytesBytes($nc(this->zsRef)->address(), this->inputArray, inputPos, this->inputLim - inputPos, output, off, len, flush, params);
		} else {
			inputPos = $nc(input)->position();
			int32_t inputRem = $Math::max(input->limit() - inputPos, 0);
			if (input->isDirect()) {
				{
					$var($Throwable, var$0, nullptr);
					try {
						int64_t inputAddress = $nc(($cast($DirectBuffer, input)))->address();
						result = deflateBufferBytes($nc(this->zsRef)->address(), inputAddress + inputPos, inputRem, output, off, len, flush, params);
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						$Reference::reachabilityFence(input);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			} else {
				$var($bytes, inputArray, $ZipUtils::getBufferArray(input));
				int32_t inputOffset = $ZipUtils::getBufferOffset(input);
				result = deflateBytesBytes($nc(this->zsRef)->address(), inputArray, inputOffset + inputPos, inputRem, output, off, len, flush, params);
			}
		}
		int32_t read = (int32_t)((int64_t)(result & (uint64_t)(int64_t)2147483647));
		int32_t written = (int32_t)((int64_t)((int64_t)((uint64_t)result >> 31) & (uint64_t)(int64_t)2147483647));
		if (((int64_t)((int64_t)((uint64_t)result >> 62) & (uint64_t)(int64_t)1)) != 0) {
			this->finished$ = true;
		}
		if (params != 0 && ((int64_t)((int64_t)((uint64_t)result >> 63) & (uint64_t)(int64_t)1)) == 0) {
			this->setParams = false;
		}
		if (input != nullptr) {
			input->position(inputPos + read);
		} else {
			this->inputPos = inputPos + read;
		}
		this->bytesWritten += written;
		this->bytesRead += read;
		return written;
	}
}

int32_t Deflater::deflate($ByteBuffer* output, int32_t flush) {
	$useLocalCurrentObjectStackCache();
	if ($nc(output)->isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	if (flush != Deflater::NO_FLUSH && flush != Deflater::SYNC_FLUSH && flush != Deflater::FULL_FLUSH) {
		$throwNew($IllegalArgumentException);
	}
	$synchronized(this->zsRef) {
		ensureOpen();
		$var($ByteBuffer, input, this->input);
		if (this->finish$) {
			flush = Deflater::FINISH;
		}
		int32_t params = 0;
		if (this->setParams) {
			params = (1 | (this->strategy << 1)) | (this->level << 3);
		} else {
			params = 0;
		}
		int32_t outputPos = $nc(output)->position();
		int32_t outputRem = $Math::max(output->limit() - outputPos, 0);
		int32_t inputPos = 0;
		int64_t result = 0;
		if (input == nullptr) {
			inputPos = this->inputPos;
			if (output->isDirect()) {
				int64_t outputAddress = $nc(($cast($DirectBuffer, output)))->address();
				{
					$var($Throwable, var$0, nullptr);
					try {
						result = deflateBytesBuffer($nc(this->zsRef)->address(), this->inputArray, inputPos, this->inputLim - inputPos, outputAddress + outputPos, outputRem, flush, params);
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						$Reference::reachabilityFence(output);
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			} else {
				$var($bytes, outputArray, $ZipUtils::getBufferArray(output));
				int32_t outputOffset = $ZipUtils::getBufferOffset(output);
				result = deflateBytesBytes($nc(this->zsRef)->address(), this->inputArray, inputPos, this->inputLim - inputPos, outputArray, outputOffset + outputPos, outputRem, flush, params);
			}
		} else {
			inputPos = $nc(input)->position();
			int32_t inputRem = $Math::max(input->limit() - inputPos, 0);
			if (input->isDirect()) {
				int64_t inputAddress = $nc(($cast($DirectBuffer, input)))->address();
				{
					$var($Throwable, var$1, nullptr);
					try {
						if (output->isDirect()) {
							int64_t outputAddress = outputPos + $nc(($cast($DirectBuffer, output)))->address();
							{
								$var($Throwable, var$2, nullptr);
								try {
									result = deflateBufferBuffer($nc(this->zsRef)->address(), inputAddress + inputPos, inputRem, outputAddress, outputRem, flush, params);
								} catch ($Throwable&) {
									$assign(var$2, $catch());
								} /*finally*/ {
									$Reference::reachabilityFence(output);
								}
								if (var$2 != nullptr) {
									$throw(var$2);
								}
							}
						} else {
							$var($bytes, outputArray, $ZipUtils::getBufferArray(output));
							int32_t outputOffset = $ZipUtils::getBufferOffset(output);
							result = deflateBufferBytes($nc(this->zsRef)->address(), inputAddress + inputPos, inputRem, outputArray, outputOffset + outputPos, outputRem, flush, params);
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						$Reference::reachabilityFence(input);
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} else {
				$var($bytes, inputArray, $ZipUtils::getBufferArray(input));
				int32_t inputOffset = $ZipUtils::getBufferOffset(input);
				if (output->isDirect()) {
					int64_t outputAddress = $nc(($cast($DirectBuffer, output)))->address();
					{
						$var($Throwable, var$3, nullptr);
						try {
							result = deflateBytesBuffer($nc(this->zsRef)->address(), inputArray, inputOffset + inputPos, inputRem, outputAddress + outputPos, outputRem, flush, params);
						} catch ($Throwable&) {
							$assign(var$3, $catch());
						} /*finally*/ {
							$Reference::reachabilityFence(output);
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
					}
				} else {
					$var($bytes, outputArray, $ZipUtils::getBufferArray(output));
					int32_t outputOffset = $ZipUtils::getBufferOffset(output);
					result = deflateBytesBytes($nc(this->zsRef)->address(), inputArray, inputOffset + inputPos, inputRem, outputArray, outputOffset + outputPos, outputRem, flush, params);
				}
			}
		}
		int32_t read = (int32_t)((int64_t)(result & (uint64_t)(int64_t)2147483647));
		int32_t written = (int32_t)((int64_t)((int64_t)((uint64_t)result >> 31) & (uint64_t)(int64_t)2147483647));
		if (((int64_t)((int64_t)((uint64_t)result >> 62) & (uint64_t)(int64_t)1)) != 0) {
			this->finished$ = true;
		}
		if (params != 0 && ((int64_t)((int64_t)((uint64_t)result >> 63) & (uint64_t)(int64_t)1)) == 0) {
			this->setParams = false;
		}
		if (input != nullptr) {
			input->position(inputPos + read);
		} else {
			this->inputPos = inputPos + read;
		}
		output->position(outputPos + written);
		this->bytesWritten += written;
		this->bytesRead += read;
		return written;
	}
}

int32_t Deflater::getAdler() {
	$synchronized(this->zsRef) {
		ensureOpen();
		return getAdler($nc(this->zsRef)->address());
	}
}

int32_t Deflater::getTotalIn() {
	return (int32_t)getBytesRead();
}

int64_t Deflater::getBytesRead() {
	$synchronized(this->zsRef) {
		ensureOpen();
		return this->bytesRead;
	}
}

int32_t Deflater::getTotalOut() {
	return (int32_t)getBytesWritten();
}

int64_t Deflater::getBytesWritten() {
	$synchronized(this->zsRef) {
		ensureOpen();
		return this->bytesWritten;
	}
}

void Deflater::reset() {
	$synchronized(this->zsRef) {
		ensureOpen();
		reset($nc(this->zsRef)->address());
		this->finish$ = false;
		this->finished$ = false;
		$init($ZipUtils);
		$set(this, input, $ZipUtils::defaultBuf);
		$set(this, inputArray, nullptr);
		this->bytesRead = (this->bytesWritten = 0);
	}
}

void Deflater::end() {
	$synchronized(this->zsRef) {
		$nc(this->zsRef)->clean();
		$init($ZipUtils);
		$set(this, input, $ZipUtils::defaultBuf);
	}
}

void Deflater::ensureOpen() {
	if (!Deflater::$assertionsDisabled && !$Thread::holdsLock(this->zsRef)) {
		$throwNew($AssertionError);
	}
	if ($nc(this->zsRef)->address() == 0) {
		$throwNew($NullPointerException, "Deflater has been closed"_s);
	}
}

int64_t Deflater::init(int32_t level, int32_t strategy, bool nowrap) {
	return _Java_java_util_zip_Deflater_init(level, strategy, nowrap);
}

void Deflater::setDictionary(int64_t addr, $bytes* b, int32_t off, int32_t len) {
	_Java_java_util_zip_Deflater_setDictionary(addr, b, off, len);
}

void Deflater::setDictionaryBuffer(int64_t addr, int64_t bufAddress, int32_t len) {
	_Java_java_util_zip_Deflater_setDictionaryBuffer(addr, bufAddress, len);
}

int64_t Deflater::deflateBytesBytes(int64_t addr, $bytes* inputArray, int32_t inputOff, int32_t inputLen, $bytes* outputArray, int32_t outputOff, int32_t outputLen, int32_t flush, int32_t params) {
	return _Java_java_util_zip_Deflater_deflateBytesBytes(this, addr, inputArray, inputOff, inputLen, outputArray, outputOff, outputLen, flush, params);
}

int64_t Deflater::deflateBytesBuffer(int64_t addr, $bytes* inputArray, int32_t inputOff, int32_t inputLen, int64_t outputAddress, int32_t outputLen, int32_t flush, int32_t params) {
	return _Java_java_util_zip_Deflater_deflateBytesBuffer(this, addr, inputArray, inputOff, inputLen, outputAddress, outputLen, flush, params);
}

int64_t Deflater::deflateBufferBytes(int64_t addr, int64_t inputAddress, int32_t inputLen, $bytes* outputArray, int32_t outputOff, int32_t outputLen, int32_t flush, int32_t params) {
	return _Java_java_util_zip_Deflater_deflateBufferBytes(this, addr, inputAddress, inputLen, outputArray, outputOff, outputLen, flush, params);
}

int64_t Deflater::deflateBufferBuffer(int64_t addr, int64_t inputAddress, int32_t inputLen, int64_t outputAddress, int32_t outputLen, int32_t flush, int32_t params) {
	return _Java_java_util_zip_Deflater_deflateBufferBuffer(this, addr, inputAddress, inputLen, outputAddress, outputLen, flush, params);
}

int32_t Deflater::getAdler(int64_t addr) {
	return _Java_java_util_zip_Deflater_getAdler(addr);
}

void Deflater::reset(int64_t addr) {
	_Java_java_util_zip_Deflater_reset(addr);
}

void Deflater::end(int64_t addr) {
	_Java_java_util_zip_Deflater_end(addr);
}

void clinit$Deflater($Class* class$) {
	Deflater::$assertionsDisabled = !Deflater::class$->desiredAssertionStatus();
	{
		$ZipUtils::loadLibrary();
	}
}

Deflater::Deflater() {
}

$Class* Deflater::load$($String* name, bool initialize) {
	$loadClass(Deflater, name, initialize, &_Deflater_ClassInfo_, clinit$Deflater, allocate$Deflater);
	return class$;
}

$Class* Deflater::class$ = nullptr;

		} // zip
	} // util
} // java
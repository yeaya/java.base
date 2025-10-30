#include <java/util/zip/Inflater.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <java/util/zip/DataFormatException.h>
#include <java/util/zip/Inflater$InflaterZStreamRef.h>
#include <java/util/zip/ZipUtils.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#include "_java_util_zip_Inflater.h"

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $DataFormatException = ::java::util::zip::DataFormatException;
using $Inflater$InflaterZStreamRef = ::java::util::zip::Inflater$InflaterZStreamRef;
using $ZipUtils = ::java::util::zip::ZipUtils;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _Inflater_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Inflater, $assertionsDisabled)},
	{"zsRef", "Ljava/util/zip/Inflater$InflaterZStreamRef;", nullptr, $PRIVATE | $FINAL, $field(Inflater, zsRef)},
	{"input", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(Inflater, input)},
	{"inputArray", "[B", nullptr, $PRIVATE, $field(Inflater, inputArray)},
	{"inputPos", "I", nullptr, $PRIVATE, $field(Inflater, inputPos)},
	{"inputLim", "I", nullptr, $PRIVATE, $field(Inflater, inputLim)},
	{"finished", "Z", nullptr, $PRIVATE, $field(Inflater, finished$)},
	{"needDict", "Z", nullptr, $PRIVATE, $field(Inflater, needDict)},
	{"bytesRead", "J", nullptr, $PRIVATE, $field(Inflater, bytesRead)},
	{"bytesWritten", "J", nullptr, $PRIVATE, $field(Inflater, bytesWritten)},
	{"inputConsumed", "I", nullptr, $PRIVATE, $field(Inflater, inputConsumed)},
	{"outputConsumed", "I", nullptr, $PRIVATE, $field(Inflater, outputConsumed)},
	{}
};

$MethodInfo _Inflater_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(Inflater::*)(bool)>(&Inflater::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Inflater::*)()>(&Inflater::init$))},
	{"end", "()V", nullptr, $PUBLIC},
	{"end", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&Inflater::end))},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(Inflater::*)()>(&Inflater::ensureOpen))},
	{"finished", "()Z", nullptr, $PUBLIC},
	{"getAdler", "()I", nullptr, $PUBLIC},
	{"getAdler", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&Inflater::getAdler))},
	{"getBytesRead", "()J", nullptr, $PUBLIC},
	{"getBytesWritten", "()J", nullptr, $PUBLIC},
	{"getRemaining", "()I", nullptr, $PUBLIC},
	{"getTotalIn", "()I", nullptr, $PUBLIC},
	{"getTotalOut", "()I", nullptr, $PUBLIC},
	{"inflate", "([BII)I", nullptr, $PUBLIC, nullptr, "java.util.zip.DataFormatException"},
	{"inflate", "([B)I", nullptr, $PUBLIC, nullptr, "java.util.zip.DataFormatException"},
	{"inflate", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.util.zip.DataFormatException"},
	{"inflateBufferBuffer", "(JJIJI)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Inflater::*)(int64_t,int64_t,int32_t,int64_t,int32_t)>(&Inflater::inflateBufferBuffer)), "java.util.zip.DataFormatException"},
	{"inflateBufferBytes", "(JJI[BII)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Inflater::*)(int64_t,int64_t,int32_t,$bytes*,int32_t,int32_t)>(&Inflater::inflateBufferBytes)), "java.util.zip.DataFormatException"},
	{"inflateBytesBuffer", "(J[BIIJI)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Inflater::*)(int64_t,$bytes*,int32_t,int32_t,int64_t,int32_t)>(&Inflater::inflateBytesBuffer)), "java.util.zip.DataFormatException"},
	{"inflateBytesBytes", "(J[BII[BII)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(Inflater::*)(int64_t,$bytes*,int32_t,int32_t,$bytes*,int32_t,int32_t)>(&Inflater::inflateBytesBytes)), "java.util.zip.DataFormatException"},
	{"init", "(Z)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(bool)>(&Inflater::init))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Inflater::initIDs))},
	{"needsDictionary", "()Z", nullptr, $PUBLIC},
	{"needsInput", "()Z", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"reset", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&Inflater::reset))},
	{"setDictionary", "([BII)V", nullptr, $PUBLIC},
	{"setDictionary", "([B)V", nullptr, $PUBLIC},
	{"setDictionary", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{"setDictionary", "(J[BII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$bytes*,int32_t,int32_t)>(&Inflater::setDictionary))},
	{"setDictionaryBuffer", "(JJI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int32_t)>(&Inflater::setDictionaryBuffer))},
	{"setInput", "([BII)V", nullptr, $PUBLIC},
	{"setInput", "([B)V", nullptr, $PUBLIC},
	{"setInput", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_end 3
#define _METHOD_INDEX_getAdler 7
#define _METHOD_INDEX_inflateBufferBuffer 16
#define _METHOD_INDEX_inflateBufferBytes 17
#define _METHOD_INDEX_inflateBytesBuffer 18
#define _METHOD_INDEX_inflateBytesBytes 19
#define _METHOD_INDEX_init 20
#define _METHOD_INDEX_initIDs 21
#define _METHOD_INDEX_reset 25
#define _METHOD_INDEX_setDictionary 29
#define _METHOD_INDEX_setDictionaryBuffer 30

$InnerClassInfo _Inflater_InnerClassesInfo_[] = {
	{"java.util.zip.Inflater$InflaterZStreamRef", "java.util.zip.Inflater", "InflaterZStreamRef", $STATIC},
	{}
};

$ClassInfo _Inflater_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.Inflater",
	"java.lang.Object",
	nullptr,
	_Inflater_FieldInfo_,
	_Inflater_MethodInfo_,
	nullptr,
	nullptr,
	_Inflater_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.zip.Inflater$InflaterZStreamRef"
};

$Object* allocate$Inflater($Class* clazz) {
	return $of($alloc(Inflater));
}

bool Inflater::$assertionsDisabled = false;

void Inflater::init$(bool nowrap) {
	$init($ZipUtils);
	$set(this, input, $ZipUtils::defaultBuf);
	$set(this, zsRef, $new($Inflater$InflaterZStreamRef, this, init(nowrap)));
}

void Inflater::init$() {
	Inflater::init$(false);
}

void Inflater::setInput($bytes* input, int32_t off, int32_t len) {
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

void Inflater::setInput($bytes* input) {
	setInput(input, 0, $nc(input)->length);
}

void Inflater::setInput($ByteBuffer* input) {
	$Objects::requireNonNull(input);
	$synchronized(this->zsRef) {
		$set(this, input, input);
		$set(this, inputArray, nullptr);
	}
}

void Inflater::setDictionary($bytes* dictionary, int32_t off, int32_t len) {
	if (off < 0 || len < 0 || off > $nc(dictionary)->length - len) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	$synchronized(this->zsRef) {
		ensureOpen();
		setDictionary($nc(this->zsRef)->address(), dictionary, off, len);
		this->needDict = false;
	}
}

void Inflater::setDictionary($bytes* dictionary) {
	setDictionary(dictionary, 0, $nc(dictionary)->length);
}

void Inflater::setDictionary($ByteBuffer* dictionary) {
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
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
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
		this->needDict = false;
	}
}

int32_t Inflater::getRemaining() {
	$synchronized(this->zsRef) {
		$var($ByteBuffer, input, this->input);
		return input == nullptr ? this->inputLim - this->inputPos : $nc(input)->remaining();
	}
}

bool Inflater::needsInput() {
	$synchronized(this->zsRef) {
		$var($ByteBuffer, input, this->input);
		return input == nullptr ? this->inputLim == this->inputPos : !$nc(input)->hasRemaining();
	}
}

bool Inflater::needsDictionary() {
	$synchronized(this->zsRef) {
		return this->needDict;
	}
}

bool Inflater::finished() {
	$synchronized(this->zsRef) {
		return this->finished$;
	}
}

int32_t Inflater::inflate($bytes* output, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (off < 0 || len < 0 || off > $nc(output)->length - len) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	$synchronized(this->zsRef) {
		ensureOpen();
		$var($ByteBuffer, input, this->input);
		int64_t result = 0;
		int32_t inputPos = 0;
		try {
			if (input == nullptr) {
				inputPos = this->inputPos;
				try {
					result = inflateBytesBytes($nc(this->zsRef)->address(), this->inputArray, inputPos, this->inputLim - inputPos, output, off, len);
				} catch ($DataFormatException& e) {
					this->inputPos = inputPos + this->inputConsumed;
					$throw(e);
				}
			} else {
				inputPos = $nc(input)->position();
				try {
					int32_t inputRem = $Math::max(input->limit() - inputPos, 0);
					if (input->isDirect()) {
						{
							$var($Throwable, var$0, nullptr);
							try {
								int64_t inputAddress = $nc(($cast($DirectBuffer, input)))->address();
								result = inflateBufferBytes($nc(this->zsRef)->address(), inputAddress + inputPos, inputRem, output, off, len);
							} catch ($Throwable& var$1) {
								$assign(var$0, var$1);
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
						result = inflateBytesBytes($nc(this->zsRef)->address(), inputArray, inputOffset + inputPos, inputRem, output, off, len);
					}
				} catch ($DataFormatException& e) {
					input->position(inputPos + this->inputConsumed);
					$throw(e);
				}
			}
		} catch ($DataFormatException& e) {
			this->bytesRead += this->inputConsumed;
			this->inputConsumed = 0;
			int32_t written = this->outputConsumed;
			this->bytesWritten += written;
			this->outputConsumed = 0;
			$throw(e);
		}
		int32_t read = (int32_t)((int64_t)(result & (uint64_t)(int64_t)2147483647));
		int32_t written = (int32_t)((int64_t)((int64_t)((uint64_t)result >> 31) & (uint64_t)(int64_t)2147483647));
		if (((int64_t)((int64_t)((uint64_t)result >> 62) & (uint64_t)(int64_t)1)) != 0) {
			this->finished$ = true;
		}
		if (((int64_t)((int64_t)((uint64_t)result >> 63) & (uint64_t)(int64_t)1)) != 0) {
			this->needDict = true;
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

int32_t Inflater::inflate($bytes* output) {
	return inflate(output, 0, $nc(output)->length);
}

int32_t Inflater::inflate($ByteBuffer* output) {
	$useLocalCurrentObjectStackCache();
	if ($nc(output)->isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	$synchronized(this->zsRef) {
		ensureOpen();
		$var($ByteBuffer, input, this->input);
		int64_t result = 0;
		int32_t inputPos = 0;
		int32_t outputPos = $nc(output)->position();
		int32_t outputRem = $Math::max(output->limit() - outputPos, 0);
		try {
			if (input == nullptr) {
				inputPos = this->inputPos;
				try {
					if (output->isDirect()) {
						int64_t outputAddress = $nc(($cast($DirectBuffer, output)))->address();
						{
							$var($Throwable, var$0, nullptr);
							try {
								result = inflateBytesBuffer($nc(this->zsRef)->address(), this->inputArray, inputPos, this->inputLim - inputPos, outputAddress + outputPos, outputRem);
							} catch ($Throwable& var$1) {
								$assign(var$0, var$1);
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
						result = inflateBytesBytes($nc(this->zsRef)->address(), this->inputArray, inputPos, this->inputLim - inputPos, outputArray, outputOffset + outputPos, outputRem);
					}
				} catch ($DataFormatException& e) {
					this->inputPos = inputPos + this->inputConsumed;
					$throw(e);
				}
			} else {
				inputPos = $nc(input)->position();
				int32_t inputRem = $Math::max(input->limit() - inputPos, 0);
				try {
					if (input->isDirect()) {
						int64_t inputAddress = $nc(($cast($DirectBuffer, input)))->address();
						{
							$var($Throwable, var$2, nullptr);
							try {
								if (output->isDirect()) {
									int64_t outputAddress = $nc(($cast($DirectBuffer, output)))->address();
									{
										$var($Throwable, var$3, nullptr);
										try {
											result = inflateBufferBuffer($nc(this->zsRef)->address(), inputAddress + inputPos, inputRem, outputAddress + outputPos, outputRem);
										} catch ($Throwable& var$4) {
											$assign(var$3, var$4);
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
									result = inflateBufferBytes($nc(this->zsRef)->address(), inputAddress + inputPos, inputRem, outputArray, outputOffset + outputPos, outputRem);
								}
							} catch ($Throwable& var$5) {
								$assign(var$2, var$5);
							} /*finally*/ {
								$Reference::reachabilityFence(input);
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					} else {
						$var($bytes, inputArray, $ZipUtils::getBufferArray(input));
						int32_t inputOffset = $ZipUtils::getBufferOffset(input);
						if (output->isDirect()) {
							int64_t outputAddress = $nc(($cast($DirectBuffer, output)))->address();
							{
								$var($Throwable, var$6, nullptr);
								try {
									result = inflateBytesBuffer($nc(this->zsRef)->address(), inputArray, inputOffset + inputPos, inputRem, outputAddress + outputPos, outputRem);
								} catch ($Throwable& var$7) {
									$assign(var$6, var$7);
								} /*finally*/ {
									$Reference::reachabilityFence(output);
								}
								if (var$6 != nullptr) {
									$throw(var$6);
								}
							}
						} else {
							$var($bytes, outputArray, $ZipUtils::getBufferArray(output));
							int32_t outputOffset = $ZipUtils::getBufferOffset(output);
							result = inflateBytesBytes($nc(this->zsRef)->address(), inputArray, inputOffset + inputPos, inputRem, outputArray, outputOffset + outputPos, outputRem);
						}
					}
				} catch ($DataFormatException& e) {
					input->position(inputPos + this->inputConsumed);
					$throw(e);
				}
			}
		} catch ($DataFormatException& e) {
			this->bytesRead += this->inputConsumed;
			this->inputConsumed = 0;
			int32_t written = this->outputConsumed;
			output->position(outputPos + written);
			this->bytesWritten += written;
			this->outputConsumed = 0;
			$throw(e);
		}
		int32_t read = (int32_t)((int64_t)(result & (uint64_t)(int64_t)2147483647));
		int32_t written = (int32_t)((int64_t)((int64_t)((uint64_t)result >> 31) & (uint64_t)(int64_t)2147483647));
		if (((int64_t)((int64_t)((uint64_t)result >> 62) & (uint64_t)(int64_t)1)) != 0) {
			this->finished$ = true;
		}
		if (((int64_t)((int64_t)((uint64_t)result >> 63) & (uint64_t)(int64_t)1)) != 0) {
			this->needDict = true;
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

int32_t Inflater::getAdler() {
	$synchronized(this->zsRef) {
		ensureOpen();
		return getAdler($nc(this->zsRef)->address());
	}
}

int32_t Inflater::getTotalIn() {
	return (int32_t)getBytesRead();
}

int64_t Inflater::getBytesRead() {
	$synchronized(this->zsRef) {
		ensureOpen();
		return this->bytesRead;
	}
}

int32_t Inflater::getTotalOut() {
	return (int32_t)getBytesWritten();
}

int64_t Inflater::getBytesWritten() {
	$synchronized(this->zsRef) {
		ensureOpen();
		return this->bytesWritten;
	}
}

void Inflater::reset() {
	$synchronized(this->zsRef) {
		ensureOpen();
		reset($nc(this->zsRef)->address());
		$init($ZipUtils);
		$set(this, input, $ZipUtils::defaultBuf);
		$set(this, inputArray, nullptr);
		this->finished$ = false;
		this->needDict = false;
		this->bytesRead = (this->bytesWritten = 0);
	}
}

void Inflater::end() {
	$synchronized(this->zsRef) {
		$nc(this->zsRef)->clean();
		$init($ZipUtils);
		$set(this, input, $ZipUtils::defaultBuf);
		$set(this, inputArray, nullptr);
	}
}

void Inflater::ensureOpen() {
	if (!Inflater::$assertionsDisabled && !$Thread::holdsLock(this->zsRef)) {
		$throwNew($AssertionError);
	}
	if ($nc(this->zsRef)->address() == 0) {
		$throwNew($NullPointerException, "Inflater has been closed"_s);
	}
}

void Inflater::initIDs() {
}

int64_t Inflater::init(bool nowrap) {
	return _Java_java_util_zip_Inflater_init(nowrap);
}

void Inflater::setDictionary(int64_t addr, $bytes* b, int32_t off, int32_t len) {
	_Java_java_util_zip_Inflater_setDictionary(addr, b, off, len);
}

void Inflater::setDictionaryBuffer(int64_t addr, int64_t bufAddress, int32_t len) {
	_Java_java_util_zip_Inflater_setDictionaryBuffer(addr, bufAddress, len);
}

int64_t Inflater::inflateBytesBytes(int64_t addr, $bytes* inputArray, int32_t inputOff, int32_t inputLen, $bytes* outputArray, int32_t outputOff, int32_t outputLen) {
	return _Java_java_util_zip_Inflater_inflateBytesBytes(this, addr, inputArray, inputOff, inputLen, outputArray, outputOff, outputLen);
}

int64_t Inflater::inflateBytesBuffer(int64_t addr, $bytes* inputArray, int32_t inputOff, int32_t inputLen, int64_t outputAddress, int32_t outputLen) {
	return _Java_java_util_zip_Inflater_inflateBytesBuffer(this, addr, inputArray, inputOff, inputLen, outputAddress, outputLen);
}

int64_t Inflater::inflateBufferBytes(int64_t addr, int64_t inputAddress, int32_t inputLen, $bytes* outputArray, int32_t outputOff, int32_t outputLen) {
	return _Java_java_util_zip_Inflater_inflateBufferBytes(this, addr, inputAddress, inputLen, outputArray, outputOff, outputLen);
}

int64_t Inflater::inflateBufferBuffer(int64_t addr, int64_t inputAddress, int32_t inputLen, int64_t outputAddress, int32_t outputLen) {
	return _Java_java_util_zip_Inflater_inflateBufferBuffer(this, addr, inputAddress, inputLen, outputAddress, outputLen);
}

int32_t Inflater::getAdler(int64_t addr) {
	return _Java_java_util_zip_Inflater_getAdler(addr);
}

void Inflater::reset(int64_t addr) {
	_Java_java_util_zip_Inflater_reset(addr);
}

void Inflater::end(int64_t addr) {
	_Java_java_util_zip_Inflater_end(addr);
}

void clinit$Inflater($Class* class$) {
	Inflater::$assertionsDisabled = !Inflater::class$->desiredAssertionStatus();
	{
		$ZipUtils::loadLibrary();
		Inflater::initIDs();
	}
}

Inflater::Inflater() {
}

$Class* Inflater::load$($String* name, bool initialize) {
	$loadClass(Inflater, name, initialize, &_Inflater_ClassInfo_, clinit$Inflater, allocate$Inflater);
	return class$;
}

$Class* Inflater::class$ = nullptr;

		} // zip
	} // util
} // java
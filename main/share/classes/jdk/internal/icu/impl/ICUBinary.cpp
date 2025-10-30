#include <jdk/internal/icu/impl/ICUBinary.h>

#include <java/io/DataInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <jdk/internal/icu/impl/ICUBinary$1.h>
#include <jdk/internal/icu/impl/ICUBinary$Authenticate.h>
#include <jdk/internal/icu/util/VersionInfo.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef BIG_ENDIAN_
#undef CHAR_SET_
#undef CHAR_SIZE_
#undef HEADER_AUTHENTICATION_FAILED_
#undef LITTLE_ENDIAN
#undef MAGIC1
#undef MAGIC2
#undef MAGIC_NUMBER_AUTHENTICATION_FAILED_

using $DataInputStream = ::java::io::DataInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $ICUBinary$1 = ::jdk::internal::icu::impl::ICUBinary$1;
using $ICUBinary$Authenticate = ::jdk::internal::icu::impl::ICUBinary$Authenticate;
using $VersionInfo = ::jdk::internal::icu::util::VersionInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _ICUBinary_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ICUBinary, $assertionsDisabled)},
	{"BIG_ENDIAN_", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICUBinary, BIG_ENDIAN_)},
	{"MAGIC1", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICUBinary, MAGIC1)},
	{"MAGIC2", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICUBinary, MAGIC2)},
	{"CHAR_SET_", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICUBinary, CHAR_SET_)},
	{"CHAR_SIZE_", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ICUBinary, CHAR_SIZE_)},
	{"MAGIC_NUMBER_AUTHENTICATION_FAILED_", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ICUBinary, MAGIC_NUMBER_AUTHENTICATION_FAILED_)},
	{"HEADER_AUTHENTICATION_FAILED_", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ICUBinary, HEADER_AUTHENTICATION_FAILED_)},
	{}
};

$MethodInfo _ICUBinary_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ICUBinary::*)()>(&ICUBinary::init$))},
	{"getBytes", "(Ljava/nio/ByteBuffer;II)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ByteBuffer*,int32_t,int32_t)>(&ICUBinary::getBytes))},
	{"getChars", "(Ljava/nio/ByteBuffer;II)[C", nullptr, $PUBLIC | $STATIC, $method(static_cast<$chars*(*)($ByteBuffer*,int32_t,int32_t)>(&ICUBinary::getChars))},
	{"getInts", "(Ljava/nio/ByteBuffer;II)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($ByteBuffer*,int32_t,int32_t)>(&ICUBinary::getInts))},
	{"getRequiredData", "(Ljava/lang/String;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ByteBuffer*(*)($String*)>(&ICUBinary::getRequiredData))},
	{"getString", "(Ljava/nio/ByteBuffer;II)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($ByteBuffer*,int32_t,int32_t)>(&ICUBinary::getString))},
	{"getVersionInfoFromCompactInt", "(I)Ljdk/internal/icu/util/VersionInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$VersionInfo*(*)(int32_t)>(&ICUBinary::getVersionInfoFromCompactInt))},
	{"readHeader", "(Ljava/io/InputStream;[BLjdk/internal/icu/impl/ICUBinary$Authenticate;)[B", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($InputStream*,$bytes*,$ICUBinary$Authenticate*)>(&ICUBinary::readHeader)), "java.io.IOException"},
	{"readHeader", "(Ljava/nio/ByteBuffer;ILjdk/internal/icu/impl/ICUBinary$Authenticate;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ByteBuffer*,int32_t,$ICUBinary$Authenticate*)>(&ICUBinary::readHeader)), "java.io.IOException"},
	{"readHeaderAndDataVersion", "(Ljava/nio/ByteBuffer;ILjdk/internal/icu/impl/ICUBinary$Authenticate;)Ljdk/internal/icu/util/VersionInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$VersionInfo*(*)($ByteBuffer*,int32_t,$ICUBinary$Authenticate*)>(&ICUBinary::readHeaderAndDataVersion)), "java.io.IOException"},
	{"skipBytes", "(Ljava/nio/ByteBuffer;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,int32_t)>(&ICUBinary::skipBytes))},
	{}
};

$InnerClassInfo _ICUBinary_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.icu.impl.ICUBinary$IsAcceptable", "jdk.internal.icu.impl.ICUBinary", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.ICUBinary$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ICUBinary_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.ICUBinary",
	"java.lang.Object",
	nullptr,
	_ICUBinary_FieldInfo_,
	_ICUBinary_MethodInfo_,
	nullptr,
	nullptr,
	_ICUBinary_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.ICUBinary$Authenticate,jdk.internal.icu.impl.ICUBinary$IsAcceptable,jdk.internal.icu.impl.ICUBinary$1"
};

$Object* allocate$ICUBinary($Class* clazz) {
	return $of($alloc(ICUBinary));
}

bool ICUBinary::$assertionsDisabled = false;
$String* ICUBinary::MAGIC_NUMBER_AUTHENTICATION_FAILED_ = nullptr;
$String* ICUBinary::HEADER_AUTHENTICATION_FAILED_ = nullptr;

void ICUBinary::init$() {
}

$ByteBuffer* ICUBinary::getRequiredData($String* itemPath) {
	$init(ICUBinary);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* root = ICUBinary::class$;
	try {
		$var($InputStream, is, $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ICUBinary$1, root, itemPath)))));
		{
			$var($Throwable, var$0, nullptr);
			$var($ByteBuffer, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($bytes, bytes, nullptr);
					int32_t avail = $nc(is)->available();
					if (avail > 32) {
						$assign(bytes, $new($bytes, avail));
					} else {
						$assign(bytes, $new($bytes, 128));
					}
					int32_t length = 0;
					for (;;) {
						if (length < $nc(bytes)->length) {
							int32_t numRead = is->read(bytes, length, bytes->length - length);
							if (numRead < 0) {
								break;
							}
							length += numRead;
						} else {
							int32_t nextByte = is->read();
							if (nextByte < 0) {
								break;
							}
							int32_t capacity = 2 * bytes->length;
							if (capacity < 128) {
								capacity = 128;
							} else if (capacity < 16384) {
								capacity *= 2;
							}
							$assign(bytes, $Arrays::copyOf(bytes, capacity));
							bytes->set(length++, (int8_t)nextByte);
						}
					}
					$assign(var$2, $ByteBuffer::wrap(bytes, 0, length));
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException& e) {
		$throwNew($UncheckedIOException, e);
	}
	$shouldNotReachHere();
}

$VersionInfo* ICUBinary::readHeaderAndDataVersion($ByteBuffer* bytes, int32_t dataFormat, $ICUBinary$Authenticate* authenticate) {
	$init(ICUBinary);
	return getVersionInfoFromCompactInt(readHeader(bytes, dataFormat, authenticate));
}

$bytes* ICUBinary::readHeader($InputStream* inputStream, $bytes* dataFormatIDExpected, $ICUBinary$Authenticate* authenticate) {
	$init(ICUBinary);
	$useLocalCurrentObjectStackCache();
	$var($DataInputStream, input, $new($DataInputStream, inputStream));
	char16_t headersize = input->readChar();
	int32_t readcount = 2;
	int8_t magic1 = input->readByte();
	++readcount;
	int8_t magic2 = input->readByte();
	++readcount;
	if (magic1 != ICUBinary::MAGIC1 || magic2 != ICUBinary::MAGIC2) {
		$throwNew($IOException, ICUBinary::MAGIC_NUMBER_AUTHENTICATION_FAILED_);
	}
	input->readChar();
	readcount += 2;
	input->readChar();
	readcount += 2;
	int8_t bigendian = input->readByte();
	++readcount;
	int8_t charset = input->readByte();
	++readcount;
	int8_t charsize = input->readByte();
	++readcount;
	input->readByte();
	++readcount;
	$var($bytes, dataFormatID, $new($bytes, 4));
	input->readFully(dataFormatID);
	readcount += 4;
	$var($bytes, dataVersion, $new($bytes, 4));
	input->readFully(dataVersion);
	readcount += 4;
	$var($bytes, unicodeVersion, $new($bytes, 4));
	input->readFully(unicodeVersion);
	readcount += 4;
	if (headersize < readcount) {
		$throwNew($IOException, "Internal Error: Header size error"_s);
	}
	input->skipBytes(headersize - readcount);
	bool var$0 = bigendian != ICUBinary::BIG_ENDIAN_ || charset != ICUBinary::CHAR_SET_ || charsize != ICUBinary::CHAR_SIZE_ || !$Arrays::equals(dataFormatIDExpected, dataFormatID);
	if (var$0 || (authenticate != nullptr && !authenticate->isDataVersionAcceptable(dataVersion))) {
		$throwNew($IOException, ICUBinary::HEADER_AUTHENTICATION_FAILED_);
	}
	return unicodeVersion;
}

int32_t ICUBinary::readHeader($ByteBuffer* bytes, int32_t dataFormat, $ICUBinary$Authenticate* authenticate) {
	$init(ICUBinary);
	$useLocalCurrentObjectStackCache();
	if (!ICUBinary::$assertionsDisabled && !($nc(bytes)->position() == 0)) {
		$throwNew($AssertionError);
	}
	int8_t magic1 = $nc(bytes)->get(2);
	int8_t magic2 = bytes->get(3);
	if (magic1 != ICUBinary::MAGIC1 || magic2 != ICUBinary::MAGIC2) {
		$throwNew($IOException, ICUBinary::MAGIC_NUMBER_AUTHENTICATION_FAILED_);
	}
	int8_t isBigEndian = bytes->get(8);
	int8_t charsetFamily = bytes->get(9);
	int8_t sizeofUChar = bytes->get(10);
	if (isBigEndian < 0 || 1 < isBigEndian || charsetFamily != ICUBinary::CHAR_SET_ || sizeofUChar != ICUBinary::CHAR_SIZE_) {
		$throwNew($IOException, ICUBinary::HEADER_AUTHENTICATION_FAILED_);
	}
	$init($ByteOrder);
	bytes->order(isBigEndian != 0 ? $ByteOrder::BIG_ENDIAN : $ByteOrder::LITTLE_ENDIAN);
	int32_t headerSize = bytes->getChar(0);
	int32_t sizeofUDataInfo = bytes->getChar(4);
	if (sizeofUDataInfo < 20 || headerSize < (sizeofUDataInfo + 4)) {
		$throwNew($IOException, "Internal Error: Header size error"_s);
	}
	$var($bytes, formatVersion, $new($bytes, {
		bytes->get(16),
		bytes->get(17),
		bytes->get(18),
		bytes->get(19)
	}));
	bool var$3 = bytes->get(12) != (int8_t)(dataFormat >> 24);
	bool var$2 = var$3 || bytes->get(13) != (int8_t)(dataFormat >> 16);
	bool var$1 = var$2 || bytes->get(14) != (int8_t)(dataFormat >> 8);
	bool var$0 = var$1 || bytes->get(15) != (int8_t)dataFormat;
	if (var$0 || (authenticate != nullptr && !authenticate->isDataVersionAcceptable(formatVersion))) {
		$throwNew($IOException, $$str({ICUBinary::HEADER_AUTHENTICATION_FAILED_, $($String::format("; data format %02x%02x%02x%02x, format version %d.%d.%d.%d"_s, $$new($ObjectArray, {
			$($of($Byte::valueOf(bytes->get(12)))),
			$($of($Byte::valueOf(bytes->get(13)))),
			$($of($Byte::valueOf(bytes->get(14)))),
			$($of($Byte::valueOf(bytes->get(15)))),
			$($of($Integer::valueOf((int32_t)(formatVersion->get(0) & (uint32_t)255)))),
			$($of($Integer::valueOf((int32_t)(formatVersion->get(1) & (uint32_t)255)))),
			$($of($Integer::valueOf((int32_t)(formatVersion->get(2) & (uint32_t)255)))),
			$($of($Integer::valueOf((int32_t)(formatVersion->get(3) & (uint32_t)255))))
		})))}));
	}
	bytes->position(headerSize);
	int32_t var$6 = ((int32_t)bytes->get(20) << 24);
	int32_t var$5 = var$6 | (((int32_t)(bytes->get(21) & (uint32_t)255)) << 16);
	int32_t var$4 = var$5 | (((int32_t)(bytes->get(22) & (uint32_t)255)) << 8);
	return var$4 | ((int32_t)(bytes->get(23) & (uint32_t)255));
}

void ICUBinary::skipBytes($ByteBuffer* bytes, int32_t skipLength) {
	$init(ICUBinary);
	if (skipLength > 0) {
		$nc(bytes)->position(bytes->position() + skipLength);
	}
}

$bytes* ICUBinary::getBytes($ByteBuffer* bytes, int32_t length, int32_t additionalSkipLength) {
	$init(ICUBinary);
	$var($bytes, dest, $new($bytes, length));
	$nc(bytes)->get(dest);
	if (additionalSkipLength > 0) {
		skipBytes(bytes, additionalSkipLength);
	}
	return dest;
}

$String* ICUBinary::getString($ByteBuffer* bytes, int32_t length, int32_t additionalSkipLength) {
	$init(ICUBinary);
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, cs, $nc(bytes)->asCharBuffer());
	$var($String, s, $nc($($nc(cs)->subSequence(0, length)))->toString());
	skipBytes(bytes, length * 2 + additionalSkipLength);
	return s;
}

$chars* ICUBinary::getChars($ByteBuffer* bytes, int32_t length, int32_t additionalSkipLength) {
	$init(ICUBinary);
	$useLocalCurrentObjectStackCache();
	$var($chars, dest, $new($chars, length));
	$nc($($nc(bytes)->asCharBuffer()))->get(dest);
	skipBytes(bytes, length * 2 + additionalSkipLength);
	return dest;
}

$ints* ICUBinary::getInts($ByteBuffer* bytes, int32_t length, int32_t additionalSkipLength) {
	$init(ICUBinary);
	$useLocalCurrentObjectStackCache();
	$var($ints, dest, $new($ints, length));
	$nc($($nc(bytes)->asIntBuffer()))->get(dest);
	skipBytes(bytes, length * 4 + additionalSkipLength);
	return dest;
}

$VersionInfo* ICUBinary::getVersionInfoFromCompactInt(int32_t version) {
	$init(ICUBinary);
	return $VersionInfo::getInstance((int32_t)((uint32_t)version >> 24), (int32_t)((version >> 16) & (uint32_t)255), (int32_t)((version >> 8) & (uint32_t)255), (int32_t)(version & (uint32_t)255));
}

void clinit$ICUBinary($Class* class$) {
	$assignStatic(ICUBinary::MAGIC_NUMBER_AUTHENTICATION_FAILED_, "ICUBinary data file error: Magic number authentication failed"_s);
	$assignStatic(ICUBinary::HEADER_AUTHENTICATION_FAILED_, "ICUBinary data file error: Header authentication failed"_s);
	ICUBinary::$assertionsDisabled = !ICUBinary::class$->desiredAssertionStatus();
}

ICUBinary::ICUBinary() {
}

$Class* ICUBinary::load$($String* name, bool initialize) {
	$loadClass(ICUBinary, name, initialize, &_ICUBinary_ClassInfo_, clinit$ICUBinary, allocate$ICUBinary);
	return class$;
}

$Class* ICUBinary::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk
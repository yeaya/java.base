#include <java/io/FileInputStream.h>

#include <java/io/Closeable.h>
#include <java/io/File.h>
#include <java/io/FileCleanable.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream$1.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/Arrays.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

#undef DEFAULT_BUFFER_SIZE
#undef MAX_VALUE

using $Closeable = ::java::io::Closeable;
using $File = ::java::io::File;
using $FileCleanable = ::java::io::FileCleanable;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream$1 = ::java::io::FileInputStream$1;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $SecurityManager = ::java::lang::SecurityManager;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Arrays = ::java::util::Arrays;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;
using $FileChannelImpl = ::sun::nio::ch::FileChannelImpl;

namespace java {
	namespace io {

$FieldInfo _FileInputStream_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileInputStream, DEFAULT_BUFFER_SIZE)},
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(FileInputStream, fd)},
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileInputStream, path)},
	{"channel", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $VOLATILE, $field(FileInputStream, channel)},
	{"closeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(FileInputStream, closeLock)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(FileInputStream, closed)},
	{}
};

$MethodInfo _FileInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileInputStream::*)($String*)>(&FileInputStream::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(FileInputStream::*)($File*)>(&FileInputStream::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(FileInputStream::*)($FileDescriptor*)>(&FileInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"available0", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(FileInputStream::*)()>(&FileInputStream::available0)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getChannel", "()Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$FileDescriptor*(FileInputStream::*)()>(&FileInputStream::getFD)), "java.io.IOException"},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&FileInputStream::initIDs))},
	{"length", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(FileInputStream::*)()>(&FileInputStream::length)), "java.io.IOException"},
	{"length0", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(FileInputStream::*)()>(&FileInputStream::length0)), "java.io.IOException"},
	{"open", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(FileInputStream::*)($String*)>(&FileInputStream::open)), "java.io.FileNotFoundException"},
	{"open0", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(FileInputStream::*)($String*)>(&FileInputStream::open0)), "java.io.FileNotFoundException"},
	{"position", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(FileInputStream::*)()>(&FileInputStream::position)), "java.io.IOException"},
	{"position0", "()J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(FileInputStream::*)()>(&FileInputStream::position0)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read0", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(FileInputStream::*)()>(&FileInputStream::read0)), "java.io.IOException"},
	{"readAllBytes", "()[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readBytes", "([BII)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(FileInputStream::*)($bytes*,int32_t,int32_t)>(&FileInputStream::readBytes)), "java.io.IOException"},
	{"readNBytes", "(I)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip0", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(FileInputStream::*)(int64_t)>(&FileInputStream::skip0)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_available0 4
#define _METHOD_INDEX_initIDs 8
#define _METHOD_INDEX_length0 10
#define _METHOD_INDEX_open0 12
#define _METHOD_INDEX_position0 14
#define _METHOD_INDEX_read0 18
#define _METHOD_INDEX_readBytes 20
#define _METHOD_INDEX_skip0 23

$InnerClassInfo _FileInputStream_InnerClassesInfo_[] = {
	{"java.io.FileInputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.FileInputStream",
	"java.io.InputStream",
	nullptr,
	_FileInputStream_FieldInfo_,
	_FileInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_FileInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.FileInputStream$1"
};

$Object* allocate$FileInputStream($Class* clazz) {
	return $of($alloc(FileInputStream));
}

void FileInputStream::init$($String* name) {
	FileInputStream::init$(name != nullptr ? $$new($File, name) : ($File*)nullptr);
}

void FileInputStream::init$($File* file) {
	$InputStream::init$();
	$set(this, closeLock, $new($Object));
	$var($String, name, file != nullptr ? $nc(file)->getPath() : ($String*)nullptr);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkRead(name);
	}
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	if (file->isInvalid()) {
		$throwNew($FileNotFoundException, "Invalid file path"_s);
	}
	$set(this, fd, $new($FileDescriptor));
	$nc(this->fd)->attach(this);
	$set(this, path, name);
	open(name);
	$FileCleanable::register$(this->fd);
}

void FileInputStream::init$($FileDescriptor* fdObj) {
	$InputStream::init$();
	$set(this, closeLock, $new($Object));
	$var($SecurityManager, security, $System::getSecurityManager());
	if (fdObj == nullptr) {
		$throwNew($NullPointerException);
	}
	if (security != nullptr) {
		security->checkRead(fdObj);
	}
	$set(this, fd, fdObj);
	$set(this, path, nullptr);
	$nc(this->fd)->attach(this);
}

void FileInputStream::open0($String* name) {
	$prepareNative(FileInputStream, open0, void, $String* name);
	$invokeNative(FileInputStream, open0, name);
	$finishNative();
}

void FileInputStream::open($String* name) {
	open0(name);
}

int32_t FileInputStream::read() {
	return read0();
}

int32_t FileInputStream::read0() {
	int32_t $ret = 0;
	$prepareNative(FileInputStream, read0, int32_t);
	$ret = $invokeNative(FileInputStream, read0);
	$finishNative();
	return $ret;
}

int32_t FileInputStream::readBytes($bytes* b, int32_t off, int32_t len) {
	int32_t $ret = 0;
	$prepareNative(FileInputStream, readBytes, int32_t, $bytes* b, int32_t off, int32_t len);
	$ret = $invokeNative(FileInputStream, readBytes, b, off, len);
	$finishNative();
	return $ret;
}

int32_t FileInputStream::read($bytes* b) {
	return readBytes(b, 0, $nc(b)->length);
}

int32_t FileInputStream::read($bytes* b, int32_t off, int32_t len) {
	return readBytes(b, off, len);
}

$bytes* FileInputStream::readAllBytes() {
	int64_t length = this->length();
	int64_t position = this->position();
	int64_t size = length - position;
	if (length <= 0 || size <= 0) {
		return $InputStream::readAllBytes();
	}
	if (size > (int64_t)$Integer::MAX_VALUE) {
		$var($String, msg, $String::format("Required array size too large for %s: %d = %d - %d"_s, $$new($ObjectArray, {
			$of(this->path),
			$($of($Long::valueOf(size))),
			$($of($Long::valueOf(length))),
			$($of($Long::valueOf(position)))
		})));
		$throwNew($OutOfMemoryError, msg);
	}
	int32_t capacity = (int32_t)size;
	$var($bytes, buf, $new($bytes, capacity));
	int32_t nread = 0;
	int32_t n = 0;
	for (;;) {
		while ((n = read(buf, nread, capacity - nread)) > 0) {
			nread += n;
		}
		if (n < 0 || (n = read()) < 0) {
			break;
		}
		capacity = $Math::max($ArraysSupport::newLength(capacity, 1, capacity), FileInputStream::DEFAULT_BUFFER_SIZE);
		$assign(buf, $Arrays::copyOf(buf, capacity));
		buf->set(nread++, (int8_t)n);
	}
	return (capacity == nread) ? buf : $Arrays::copyOf(buf, nread);
}

$bytes* FileInputStream::readNBytes(int32_t len) {
	if (len < 0) {
		$throwNew($IllegalArgumentException, "len < 0"_s);
	}
	if (len == 0) {
		return $new($bytes, 0);
	}
	int64_t length = this->length();
	int64_t position = this->position();
	int64_t size = length - position;
	if (length <= 0 || size <= 0) {
		return $InputStream::readNBytes(len);
	}
	int32_t capacity = (int32_t)$Math::min((int64_t)len, size);
	$var($bytes, buf, $new($bytes, capacity));
	int32_t remaining = capacity;
	int32_t nread = 0;
	int32_t n = 0;
	do {
		n = read(buf, nread, remaining);
		if (n > 0) {
			nread += n;
			remaining -= n;
		} else if (n == 0) {
			int8_t b = (int8_t)read();
			if (b == -1) {
				break;
			}
			$nc(buf)->set(nread++, b);
			--remaining;
		}
	} while (n >= 0 && remaining > 0);
	return (capacity == nread) ? buf : $Arrays::copyOf(buf, nread);
}

int64_t FileInputStream::length() {
	return length0();
}

int64_t FileInputStream::length0() {
	int64_t $ret = 0;
	$prepareNative(FileInputStream, length0, int64_t);
	$ret = $invokeNative(FileInputStream, length0);
	$finishNative();
	return $ret;
}

int64_t FileInputStream::position() {
	return position0();
}

int64_t FileInputStream::position0() {
	int64_t $ret = 0;
	$prepareNative(FileInputStream, position0, int64_t);
	$ret = $invokeNative(FileInputStream, position0);
	$finishNative();
	return $ret;
}

int64_t FileInputStream::skip(int64_t n) {
	return skip0(n);
}

int64_t FileInputStream::skip0(int64_t n) {
	int64_t $ret = 0;
	$prepareNative(FileInputStream, skip0, int64_t, int64_t n);
	$ret = $invokeNative(FileInputStream, skip0, n);
	$finishNative();
	return $ret;
}

int32_t FileInputStream::available() {
	return available0();
}

int32_t FileInputStream::available0() {
	int32_t $ret = 0;
	$prepareNative(FileInputStream, available0, int32_t);
	$ret = $invokeNative(FileInputStream, available0);
	$finishNative();
	return $ret;
}

void FileInputStream::close() {
	if (this->closed) {
		return;
	}
	$synchronized(this->closeLock) {
		if (this->closed) {
			return;
		}
		this->closed = true;
	}
	$var($FileChannel, fc, this->channel);
	if (fc != nullptr) {
		fc->close();
	}
	$nc(this->fd)->closeAll($$new($FileInputStream$1, this));
}

$FileDescriptor* FileInputStream::getFD() {
	if (this->fd != nullptr) {
		return this->fd;
	}
	$throwNew($IOException);
}

$FileChannel* FileInputStream::getChannel() {
	$var($FileChannel, fc, this->channel);
	if (fc == nullptr) {
		$synchronized(this) {
			$assign(fc, this->channel);
			if (fc == nullptr) {
				$set(this, channel, ($assign(fc, $FileChannelImpl::open(this->fd, this->path, true, false, false, this))));
				if (this->closed) {
					try {
						$nc(fc)->close();
					} catch ($IOException&) {
						$var($IOException, ioe, $catch());
						$throwNew($InternalError, static_cast<$Throwable*>(ioe));
					}
				}
			}
		}
	}
	return fc;
}

void FileInputStream::initIDs() {
	$init(FileInputStream);
	$prepareNativeStatic(FileInputStream, initIDs, void);
	$invokeNativeStatic(FileInputStream, initIDs);
	$finishNativeStatic();
}

void clinit$FileInputStream($Class* class$) {
	{
		FileInputStream::initIDs();
	}
}

FileInputStream::FileInputStream() {
}

$Class* FileInputStream::load$($String* name, bool initialize) {
	$loadClass(FileInputStream, name, initialize, &_FileInputStream_ClassInfo_, clinit$FileInputStream, allocate$FileInputStream);
	return class$;
}

$Class* FileInputStream::class$ = nullptr;

	} // io
} // java
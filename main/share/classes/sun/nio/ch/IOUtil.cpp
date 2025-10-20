#include <sun/nio/ch/IOUtil.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$Handle.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <sun/nio/ch/IOUtil$LinkedRunnable.h>
#include <sun/nio/ch/IOUtil$Releaser.h>
#include <sun/nio/ch/IOVecWrapper.h>
#include <sun/nio/ch/NativeDispatcher.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

#undef IOV_MAX
#undef NIO_ACCESS

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $ScopedMemoryAccess$Scope$Handle = ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;
using $IOUtil$LinkedRunnable = ::sun::nio::ch::IOUtil$LinkedRunnable;
using $IOUtil$Releaser = ::sun::nio::ch::IOUtil$Releaser;
using $IOVecWrapper = ::sun::nio::ch::IOVecWrapper;
using $NativeDispatcher = ::sun::nio::ch::NativeDispatcher;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _IOUtil_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(IOUtil, $assertionsDisabled)},
	{"IOV_MAX", "I", nullptr, $STATIC | $FINAL, $staticField(IOUtil, IOV_MAX)},
	{"NIO_ACCESS", "Ljdk/internal/access/JavaNioAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IOUtil, NIO_ACCESS)},
	{}
};

$MethodInfo _IOUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IOUtil::*)()>(&IOUtil::init$))},
	{"acquireScope", "(Ljava/nio/ByteBuffer;Z)Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;", nullptr, $STATIC, $method(static_cast<$ScopedMemoryAccess$Scope$Handle*(*)($ByteBuffer*,bool)>(&IOUtil::acquireScope))},
	{"acquireScopes", "([Ljava/nio/ByteBuffer;)Ljava/lang/Runnable;", nullptr, $STATIC, $method(static_cast<$Runnable*(*)($ByteBufferArray*)>(&IOUtil::acquireScopes))},
	{"acquireScopes", "(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljava/lang/Runnable;", nullptr, $STATIC, $method(static_cast<$Runnable*(*)($ByteBuffer*,$ByteBufferArray*)>(&IOUtil::acquireScopes))},
	{"bufferAddress", "(Ljava/nio/ByteBuffer;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($ByteBuffer*)>(&IOUtil::bufferAddress))},
	{"configureBlocking", "(Ljava/io/FileDescriptor;Z)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)($FileDescriptor*,bool)>(&IOUtil::configureBlocking)), "java.io.IOException"},
	{"drain", "(I)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)(int32_t)>(&IOUtil::drain)), "java.io.IOException"},
	{"drain1", "(I)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&IOUtil::drain1)), "java.io.IOException"},
	{"fdLimit", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&IOUtil::fdLimit))},
	{"fdVal", "(Ljava/io/FileDescriptor;)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($FileDescriptor*)>(&IOUtil::fdVal))},
	{"initIDs", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&IOUtil::initIDs))},
	{"iovMax", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&IOUtil::iovMax))},
	{"load", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&IOUtil::load))},
	{"makePipe", "(Z)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(bool)>(&IOUtil::makePipe)), "java.io.IOException"},
	{"newFD", "(I)Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileDescriptor*(*)(int32_t)>(&IOUtil::newFD))},
	{"randomBytes", "([B)Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)($bytes*)>(&IOUtil::randomBytes))},
	{"read", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JLsun/nio/ch/NativeDispatcher;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JZLsun/nio/ch/NativeDispatcher;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,bool,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JZILsun/nio/ch/NativeDispatcher;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,bool,int32_t,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JZZILsun/nio/ch/NativeDispatcher;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,bool,bool,int32_t,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;Lsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;ZLsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,bool,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;IILsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,int32_t,int32_t,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;IIZILsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,int32_t,int32_t,bool,int32_t,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"read", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;IIZZILsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,int32_t,int32_t,bool,bool,int32_t,$NativeDispatcher*)>(&IOUtil::read)), "java.io.IOException"},
	{"readIntoNativeBuffer", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JZZILsun/nio/ch/NativeDispatcher;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,bool,bool,int32_t,$NativeDispatcher*)>(&IOUtil::readIntoNativeBuffer)), "java.io.IOException"},
	{"releaseScope", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ScopedMemoryAccess$Scope$Handle*)>(&IOUtil::releaseScope))},
	{"releaseScopes", "(Ljava/lang/Runnable;)V", nullptr, $STATIC, $method(static_cast<void(*)($Runnable*)>(&IOUtil::releaseScopes))},
	{"setfdVal", "(Ljava/io/FileDescriptor;I)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)($FileDescriptor*,int32_t)>(&IOUtil::setfdVal))},
	{"write", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JLsun/nio/ch/NativeDispatcher;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,$NativeDispatcher*)>(&IOUtil::write)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JZLsun/nio/ch/NativeDispatcher;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,bool,$NativeDispatcher*)>(&IOUtil::write)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JZILsun/nio/ch/NativeDispatcher;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,bool,int32_t,$NativeDispatcher*)>(&IOUtil::write)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JZZILsun/nio/ch/NativeDispatcher;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,bool,bool,int32_t,$NativeDispatcher*)>(&IOUtil::write)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;ZLsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,bool,$NativeDispatcher*)>(&IOUtil::write)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;IILsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,int32_t,int32_t,$NativeDispatcher*)>(&IOUtil::write)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;IIZILsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,int32_t,int32_t,bool,int32_t,$NativeDispatcher*)>(&IOUtil::write)), "java.io.IOException"},
	{"write", "(Ljava/io/FileDescriptor;[Ljava/nio/ByteBuffer;IIZZILsun/nio/ch/NativeDispatcher;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($FileDescriptor*,$ByteBufferArray*,int32_t,int32_t,bool,bool,int32_t,$NativeDispatcher*)>(&IOUtil::write)), "java.io.IOException"},
	{"write1", "(IB)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int8_t)>(&IOUtil::write1)), "java.io.IOException"},
	{"writeFromNativeBuffer", "(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;JZZILsun/nio/ch/NativeDispatcher;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($FileDescriptor*,$ByteBuffer*,int64_t,bool,bool,int32_t,$NativeDispatcher*)>(&IOUtil::writeFromNativeBuffer)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_configureBlocking 5
#define _METHOD_INDEX_drain 6
#define _METHOD_INDEX_drain1 7
#define _METHOD_INDEX_fdLimit 8
#define _METHOD_INDEX_fdVal 9
#define _METHOD_INDEX_initIDs 10
#define _METHOD_INDEX_iovMax 11
#define _METHOD_INDEX_makePipe 13
#define _METHOD_INDEX_randomBytes 15
#define _METHOD_INDEX_setfdVal 28
#define _METHOD_INDEX_write1 37

$InnerClassInfo _IOUtil_InnerClassesInfo_[] = {
	{"sun.nio.ch.IOUtil$Releaser", "sun.nio.ch.IOUtil", "Releaser", $STATIC | $FINAL},
	{"sun.nio.ch.IOUtil$LinkedRunnable", "sun.nio.ch.IOUtil", "LinkedRunnable", $STATIC | $FINAL},
	{}
};

$ClassInfo _IOUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.IOUtil",
	"java.lang.Object",
	nullptr,
	_IOUtil_FieldInfo_,
	_IOUtil_MethodInfo_,
	nullptr,
	nullptr,
	_IOUtil_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.IOUtil$Releaser,sun.nio.ch.IOUtil$LinkedRunnable"
};

$Object* allocate$IOUtil($Class* clazz) {
	return $of($alloc(IOUtil));
}

bool IOUtil::$assertionsDisabled = false;

int32_t IOUtil::IOV_MAX = 0;
$JavaNioAccess* IOUtil::NIO_ACCESS = nullptr;

void IOUtil::init$() {
}

int32_t IOUtil::write($FileDescriptor* fd, $ByteBuffer* src, int64_t position, $NativeDispatcher* nd) {
	$init(IOUtil);
	return write(fd, src, position, false, false, -1, nd);
}

int32_t IOUtil::write($FileDescriptor* fd, $ByteBuffer* src, int64_t position, bool async, $NativeDispatcher* nd) {
	$init(IOUtil);
	return write(fd, src, position, false, async, -1, nd);
}

int32_t IOUtil::write($FileDescriptor* fd, $ByteBuffer* src, int64_t position, bool directIO, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	return write(fd, src, position, directIO, false, alignment, nd);
}

int32_t IOUtil::write($FileDescriptor* fd, $ByteBuffer* src, int64_t position, bool directIO, bool async, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DirectBuffer, src)) {
		return writeFromNativeBuffer(fd, src, position, directIO, async, alignment, nd);
	}
	int32_t pos = $nc(src)->position();
	int32_t lim = src->limit();
	if (!IOUtil::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	$var($ByteBuffer, bb, nullptr);
	if (directIO) {
		$Util::checkRemainingBufferSizeAligned(rem, alignment);
		$assign(bb, $Util::getTemporaryAlignedDirectBuffer(rem, alignment));
	} else {
		$assign(bb, $Util::getTemporaryDirectBuffer(rem));
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$nc(bb)->put(src);
			bb->flip();
			src->position(pos);
			int32_t n = writeFromNativeBuffer(fd, bb, position, directIO, async, alignment, nd);
			if (n > 0) {
				src->position(pos + n);
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Util::offerFirstTemporaryDirectBuffer(bb);
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

int32_t IOUtil::writeFromNativeBuffer($FileDescriptor* fd, $ByteBuffer* bb, int64_t position, bool directIO, bool async, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(bb)->position();
	int32_t lim = bb->limit();
	if (!IOUtil::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	if (directIO) {
		$Util::checkBufferPositionAligned(bb, pos, alignment);
		$Util::checkRemainingBufferSizeAligned(rem, alignment);
	}
	int32_t written = 0;
	if (rem == 0) {
		return 0;
	}
	$var($ScopedMemoryAccess$Scope$Handle, handle, acquireScope(bb, async));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (position != -1) {
				written = $nc(nd)->pwrite(fd, bufferAddress(bb) + pos, rem, position);
			} else {
				written = $nc(nd)->write(fd, bufferAddress(bb) + pos, rem);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			releaseScope(handle);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (written > 0) {
		bb->position(pos + written);
	}
	return written;
}

int64_t IOUtil::write($FileDescriptor* fd, $ByteBufferArray* bufs, bool async, $NativeDispatcher* nd) {
	$init(IOUtil);
	return write(fd, bufs, 0, $nc(bufs)->length, false, async, -1, nd);
}

int64_t IOUtil::write($FileDescriptor* fd, $ByteBufferArray* bufs, int32_t offset, int32_t length, $NativeDispatcher* nd) {
	$init(IOUtil);
	return write(fd, bufs, offset, length, false, false, -1, nd);
}

int64_t IOUtil::write($FileDescriptor* fd, $ByteBufferArray* bufs, int32_t offset, int32_t length, bool direct, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	return write(fd, bufs, offset, length, direct, false, alignment, nd);
}

int64_t IOUtil::write($FileDescriptor* fd, $ByteBufferArray* bufs, int32_t offset, int32_t length, bool directIO, bool async, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	$useLocalCurrentObjectStackCache();
	$var($IOVecWrapper, vec, $IOVecWrapper::get(length));
	bool completed = false;
	int32_t iov_len = 0;
	$var($Runnable, handleReleasers, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t count = offset + length;
			int32_t i = offset;
			while (i < count && iov_len < IOUtil::IOV_MAX) {
				$var($ByteBuffer, buf, $nc(bufs)->get(i));
				$var($ScopedMemoryAccess$Scope$Handle, h, acquireScope(buf, async));
				if (h != nullptr) {
					$assign(handleReleasers, $IOUtil$LinkedRunnable::of($($IOUtil$Releaser::of(h)), handleReleasers));
				}
				int32_t pos = $nc(buf)->position();
				int32_t lim = buf->limit();
				if (!IOUtil::$assertionsDisabled && !(pos <= lim)) {
					$throwNew($AssertionError);
				}
				int32_t rem = (pos <= lim ? lim - pos : 0);
				if (directIO) {
					$Util::checkRemainingBufferSizeAligned(rem, alignment);
				}
				if (rem > 0) {
					$nc(vec)->setBuffer(iov_len, buf, pos, rem);
					if (!($instanceOf($DirectBuffer, buf))) {
						$var($ByteBuffer, shadow, nullptr);
						if (directIO) {
							$assign(shadow, $Util::getTemporaryAlignedDirectBuffer(rem, alignment));
						} else {
							$assign(shadow, $Util::getTemporaryDirectBuffer(rem));
						}
						$nc(shadow)->put(buf);
						shadow->flip();
						vec->setShadow(iov_len, shadow);
						buf->position(pos);
						$assign(buf, shadow);
						pos = shadow->position();
					}
					vec->putBase(iov_len, bufferAddress(buf) + pos);
					vec->putLen(iov_len, rem);
					++iov_len;
				}
				++i;
			}
			if (iov_len == 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			int64_t bytesWritten = $nc(nd)->writev(fd, $nc(vec)->address, iov_len);
			int64_t left = bytesWritten;
			for (int32_t j = 0; j < iov_len; ++j) {
				if (left > 0) {
					$var($ByteBuffer, buf, $nc(vec)->getBuffer(j));
					int32_t pos = vec->getPosition(j);
					int32_t rem = vec->getRemaining(j);
					int32_t n = (left > rem) ? rem : (int32_t)left;
					$nc(buf)->position(pos + n);
					left -= n;
				}
				$var($ByteBuffer, shadow, $nc(vec)->getShadow(j));
				if (shadow != nullptr) {
					$Util::offerLastTemporaryDirectBuffer(shadow);
				}
				vec->clearRefs(j);
			}
			completed = true;
			var$2 = bytesWritten;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			releaseScopes(handleReleasers);
			if (!completed) {
				for (int32_t j = 0; j < iov_len; ++j) {
					$var($ByteBuffer, shadow, $nc(vec)->getShadow(j));
					if (shadow != nullptr) {
						$Util::offerLastTemporaryDirectBuffer(shadow);
					}
					vec->clearRefs(j);
				}
			}
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

int32_t IOUtil::read($FileDescriptor* fd, $ByteBuffer* dst, int64_t position, $NativeDispatcher* nd) {
	$init(IOUtil);
	return read(fd, dst, position, false, false, -1, nd);
}

int32_t IOUtil::read($FileDescriptor* fd, $ByteBuffer* dst, int64_t position, bool async, $NativeDispatcher* nd) {
	$init(IOUtil);
	return read(fd, dst, position, false, async, -1, nd);
}

int32_t IOUtil::read($FileDescriptor* fd, $ByteBuffer* dst, int64_t position, bool directIO, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	return read(fd, dst, position, directIO, false, alignment, nd);
}

int32_t IOUtil::read($FileDescriptor* fd, $ByteBuffer* dst, int64_t position, bool directIO, bool async, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	$useLocalCurrentObjectStackCache();
	if ($nc(dst)->isReadOnly()) {
		$throwNew($IllegalArgumentException, "Read-only buffer"_s);
	}
	if ($instanceOf($DirectBuffer, dst)) {
		return readIntoNativeBuffer(fd, dst, position, directIO, async, alignment, nd);
	}
	$var($ByteBuffer, bb, nullptr);
	int32_t rem = $nc(dst)->remaining();
	if (directIO) {
		$Util::checkRemainingBufferSizeAligned(rem, alignment);
		$assign(bb, $Util::getTemporaryAlignedDirectBuffer(rem, alignment));
	} else {
		$assign(bb, $Util::getTemporaryDirectBuffer(rem));
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t n = readIntoNativeBuffer(fd, bb, position, directIO, async, alignment, nd);
			$nc(bb)->flip();
			if (n > 0) {
				dst->put(bb);
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Util::offerFirstTemporaryDirectBuffer(bb);
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

int32_t IOUtil::readIntoNativeBuffer($FileDescriptor* fd, $ByteBuffer* bb, int64_t position, bool directIO, bool async, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	$useLocalCurrentObjectStackCache();
	int32_t pos = $nc(bb)->position();
	int32_t lim = bb->limit();
	if (!IOUtil::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	if (directIO) {
		$Util::checkBufferPositionAligned(bb, pos, alignment);
		$Util::checkRemainingBufferSizeAligned(rem, alignment);
	}
	if (rem == 0) {
		return 0;
	}
	int32_t n = 0;
	$var($ScopedMemoryAccess$Scope$Handle, handle, acquireScope(bb, async));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (position != -1) {
				n = $nc(nd)->pread(fd, bufferAddress(bb) + pos, rem, position);
			} else {
				n = $nc(nd)->read(fd, bufferAddress(bb) + pos, rem);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			releaseScope(handle);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (n > 0) {
		bb->position(pos + n);
	}
	return n;
}

int64_t IOUtil::read($FileDescriptor* fd, $ByteBufferArray* bufs, $NativeDispatcher* nd) {
	$init(IOUtil);
	return read(fd, bufs, 0, $nc(bufs)->length, false, false, -1, nd);
}

int64_t IOUtil::read($FileDescriptor* fd, $ByteBufferArray* bufs, bool async, $NativeDispatcher* nd) {
	$init(IOUtil);
	return read(fd, bufs, 0, $nc(bufs)->length, false, async, -1, nd);
}

int64_t IOUtil::read($FileDescriptor* fd, $ByteBufferArray* bufs, int32_t offset, int32_t length, $NativeDispatcher* nd) {
	$init(IOUtil);
	return read(fd, bufs, offset, length, false, false, -1, nd);
}

int64_t IOUtil::read($FileDescriptor* fd, $ByteBufferArray* bufs, int32_t offset, int32_t length, bool directIO, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	return read(fd, bufs, offset, length, directIO, false, alignment, nd);
}

int64_t IOUtil::read($FileDescriptor* fd, $ByteBufferArray* bufs, int32_t offset, int32_t length, bool directIO, bool async, int32_t alignment, $NativeDispatcher* nd) {
	$init(IOUtil);
	$useLocalCurrentObjectStackCache();
	$var($IOVecWrapper, vec, $IOVecWrapper::get(length));
	bool completed = false;
	int32_t iov_len = 0;
	$var($Runnable, handleReleasers, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t count = offset + length;
			int32_t i = offset;
			while (i < count && iov_len < IOUtil::IOV_MAX) {
				$var($ByteBuffer, buf, $nc(bufs)->get(i));
				if ($nc(buf)->isReadOnly()) {
					$throwNew($IllegalArgumentException, "Read-only buffer"_s);
				}
				$var($ScopedMemoryAccess$Scope$Handle, h, acquireScope(buf, async));
				if (h != nullptr) {
					$assign(handleReleasers, $IOUtil$LinkedRunnable::of($($IOUtil$Releaser::of(h)), handleReleasers));
				}
				int32_t pos = $nc(buf)->position();
				int32_t lim = buf->limit();
				if (!IOUtil::$assertionsDisabled && !(pos <= lim)) {
					$throwNew($AssertionError);
				}
				int32_t rem = (pos <= lim ? lim - pos : 0);
				if (directIO) {
					$Util::checkRemainingBufferSizeAligned(rem, alignment);
				}
				if (rem > 0) {
					$nc(vec)->setBuffer(iov_len, buf, pos, rem);
					if (!($instanceOf($DirectBuffer, buf))) {
						$var($ByteBuffer, shadow, nullptr);
						if (directIO) {
							$assign(shadow, $Util::getTemporaryAlignedDirectBuffer(rem, alignment));
						} else {
							$assign(shadow, $Util::getTemporaryDirectBuffer(rem));
						}
						vec->setShadow(iov_len, shadow);
						$assign(buf, shadow);
						pos = $nc(shadow)->position();
					}
					vec->putBase(iov_len, bufferAddress(buf) + pos);
					vec->putLen(iov_len, rem);
					++iov_len;
				}
				++i;
			}
			if (iov_len == 0) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			int64_t bytesRead = $nc(nd)->readv(fd, $nc(vec)->address, iov_len);
			int64_t left = bytesRead;
			for (int32_t j = 0; j < iov_len; ++j) {
				$var($ByteBuffer, shadow, $nc(vec)->getShadow(j));
				if (left > 0) {
					$var($ByteBuffer, buf, vec->getBuffer(j));
					int32_t rem = vec->getRemaining(j);
					int32_t n = (left > rem) ? rem : (int32_t)left;
					if (shadow == nullptr) {
						int32_t pos = vec->getPosition(j);
						$nc(buf)->position(pos + n);
					} else {
						$nc(shadow)->limit(shadow->position() + n);
						$nc(buf)->put(shadow);
					}
					left -= n;
				}
				if (shadow != nullptr) {
					$Util::offerLastTemporaryDirectBuffer(shadow);
				}
				vec->clearRefs(j);
			}
			completed = true;
			var$2 = bytesRead;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			releaseScopes(handleReleasers);
			if (!completed) {
				for (int32_t j = 0; j < iov_len; ++j) {
					$var($ByteBuffer, shadow, $nc(vec)->getShadow(j));
					if (shadow != nullptr) {
						$Util::offerLastTemporaryDirectBuffer(shadow);
					}
					vec->clearRefs(j);
				}
			}
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

$ScopedMemoryAccess$Scope$Handle* IOUtil::acquireScope($ByteBuffer* bb, bool async) {
	$init(IOUtil);
	return $nc(IOUtil::NIO_ACCESS)->acquireScope(bb, async);
}

void IOUtil::releaseScope($ScopedMemoryAccess$Scope$Handle* handle) {
	$init(IOUtil);
	$useLocalCurrentObjectStackCache();
	if (handle == nullptr) {
		return;
	}
	try {
		$nc($($nc(handle)->scope()))->release(handle);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($IllegalStateException, static_cast<$Throwable*>(e));
	}
}

$Runnable* IOUtil::acquireScopes($ByteBufferArray* buffers) {
	$init(IOUtil);
	return acquireScopes(nullptr, buffers);
}

$Runnable* IOUtil::acquireScopes($ByteBuffer* buf, $ByteBufferArray* buffers) {
	$init(IOUtil);
	$useLocalCurrentObjectStackCache();
	if (buffers == nullptr) {
		if (!IOUtil::$assertionsDisabled && !(buf != nullptr)) {
			$throwNew($AssertionError);
		}
		return $IOUtil$Releaser::ofNullable($(IOUtil::acquireScope(buf, true)));
	} else {
		if (!IOUtil::$assertionsDisabled && !(buf == nullptr)) {
			$throwNew($AssertionError);
		}
		$var($Runnable, handleReleasers, nullptr);
		{
			$var($ByteBufferArray, arr$, buffers);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ByteBuffer, b, arr$->get(i$));
				{
					$var($ScopedMemoryAccess$Scope$Handle, h, IOUtil::acquireScope(b, true));
					if (h != nullptr) {
						$assign(handleReleasers, $IOUtil$LinkedRunnable::of($($IOUtil$Releaser::of(h)), handleReleasers));
					}
				}
			}
		}
		return handleReleasers;
	}
}

void IOUtil::releaseScopes($Runnable* releasers) {
	$init(IOUtil);
	if (releasers != nullptr) {
		releasers->run();
	}
}

int64_t IOUtil::bufferAddress($ByteBuffer* buf) {
	$init(IOUtil);
	return $nc(IOUtil::NIO_ACCESS)->getBufferAddress(buf);
}

$FileDescriptor* IOUtil::newFD(int32_t i) {
	$init(IOUtil);
	$var($FileDescriptor, fd, $new($FileDescriptor));
	setfdVal(fd, i);
	return fd;
}

bool IOUtil::randomBytes($bytes* someBytes) {
	$init(IOUtil);
	bool $ret = false;
	$prepareNativeStatic(IOUtil, randomBytes, bool, $bytes* someBytes);
	$ret = $invokeNativeStatic(IOUtil, randomBytes, someBytes);
	$finishNativeStatic();
	return $ret;
}

int64_t IOUtil::makePipe(bool blocking) {
	$init(IOUtil);
	int64_t $ret = 0;
	$prepareNativeStatic(IOUtil, makePipe, int64_t, bool blocking);
	$ret = $invokeNativeStatic(IOUtil, makePipe, blocking);
	$finishNativeStatic();
	return $ret;
}

int32_t IOUtil::write1(int32_t fd, int8_t b) {
	$init(IOUtil);
	int32_t $ret = 0;
	$prepareNativeStatic(IOUtil, write1, int32_t, int32_t fd, int8_t b);
	$ret = $invokeNativeStatic(IOUtil, write1, fd, b);
	$finishNativeStatic();
	return $ret;
}

bool IOUtil::drain(int32_t fd) {
	$init(IOUtil);
	bool $ret = false;
	$prepareNativeStatic(IOUtil, drain, bool, int32_t fd);
	$ret = $invokeNativeStatic(IOUtil, drain, fd);
	$finishNativeStatic();
	return $ret;
}

int32_t IOUtil::drain1(int32_t fd) {
	$init(IOUtil);
	int32_t $ret = 0;
	$prepareNativeStatic(IOUtil, drain1, int32_t, int32_t fd);
	$ret = $invokeNativeStatic(IOUtil, drain1, fd);
	$finishNativeStatic();
	return $ret;
}

void IOUtil::configureBlocking($FileDescriptor* fd, bool blocking) {
	$init(IOUtil);
	$prepareNativeStatic(IOUtil, configureBlocking, void, $FileDescriptor* fd, bool blocking);
	$invokeNativeStatic(IOUtil, configureBlocking, fd, blocking);
	$finishNativeStatic();
}

int32_t IOUtil::fdVal($FileDescriptor* fd) {
	$init(IOUtil);
	int32_t $ret = 0;
	$prepareNativeStatic(IOUtil, fdVal, int32_t, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(IOUtil, fdVal, fd);
	$finishNativeStatic();
	return $ret;
}

void IOUtil::setfdVal($FileDescriptor* fd, int32_t value) {
	$init(IOUtil);
	$prepareNativeStatic(IOUtil, setfdVal, void, $FileDescriptor* fd, int32_t value);
	$invokeNativeStatic(IOUtil, setfdVal, fd, value);
	$finishNativeStatic();
}

int32_t IOUtil::fdLimit() {
	$init(IOUtil);
	int32_t $ret = 0;
	$prepareNativeStatic(IOUtil, fdLimit, int32_t);
	$ret = $invokeNativeStatic(IOUtil, fdLimit);
	$finishNativeStatic();
	return $ret;
}

int32_t IOUtil::iovMax() {
	$init(IOUtil);
	int32_t $ret = 0;
	$prepareNativeStatic(IOUtil, iovMax, int32_t);
	$ret = $invokeNativeStatic(IOUtil, iovMax);
	$finishNativeStatic();
	return $ret;
}

void IOUtil::initIDs() {
	$init(IOUtil);
	$prepareNativeStatic(IOUtil, initIDs, void);
	$invokeNativeStatic(IOUtil, initIDs);
	$finishNativeStatic();
}

void IOUtil::load() {
	$init(IOUtil);
}

void clinit$IOUtil($Class* class$) {
	IOUtil::$assertionsDisabled = !IOUtil::class$->desiredAssertionStatus();
	$assignStatic(IOUtil::NIO_ACCESS, $SharedSecrets::getJavaNioAccess());
	{
		$BootLoader::loadLibrary("net"_s);
		$BootLoader::loadLibrary("nio"_s);
		IOUtil::initIDs();
		IOUtil::IOV_MAX = IOUtil::iovMax();
	}
}

IOUtil::IOUtil() {
}

$Class* IOUtil::load$($String* name, bool initialize) {
	$loadClass(IOUtil, name, initialize, &_IOUtil_ClassInfo_, clinit$IOUtil, allocate$IOUtil);
	return class$;
}

$Class* IOUtil::class$ = nullptr;

		} // ch
	} // nio
} // sun
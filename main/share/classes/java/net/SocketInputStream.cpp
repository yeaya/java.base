#include <java/net/SocketInputStream.h>

#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/net/AbstractPlainSocketImpl.h>
#include <java/net/SocketException.h>
#include <java/nio/channels/FileChannel.h>
#include <sun/net/ConnectionResetException.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPlainSocketImpl = ::java::net::AbstractPlainSocketImpl;
using $SocketException = ::java::net::SocketException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ConnectionResetException = ::sun::net::ConnectionResetException;

namespace java {
	namespace net {

$FieldInfo _SocketInputStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketInputStream, $assertionsDisabled)},
	{"eof", "Z", nullptr, $PRIVATE, $field(SocketInputStream, eof)},
	{"impl", "Ljava/net/AbstractPlainSocketImpl;", nullptr, $PRIVATE, $field(SocketInputStream, impl)},
	{"temp", "[B", nullptr, $PRIVATE, $field(SocketInputStream, temp)},
	{}
};

$MethodInfo _SocketInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/net/AbstractPlainSocketImpl;)V", nullptr, 0, $method(static_cast<void(SocketInputStream::*)($AbstractPlainSocketImpl*)>(&SocketInputStream::init$)), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getChannel", "()Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC | $FINAL},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&SocketInputStream::init))},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BIII)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setEOF", "(Z)V", nullptr, 0},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"socketRead", "(Ljava/io/FileDescriptor;[BIII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SocketInputStream::*)($FileDescriptor*,$bytes*,int32_t,int32_t,int32_t)>(&SocketInputStream::socketRead)), "java.io.IOException"},
	{"socketRead0", "(Ljava/io/FileDescriptor;[BIII)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(SocketInputStream::*)($FileDescriptor*,$bytes*,int32_t,int32_t,int32_t)>(&SocketInputStream::socketRead0)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_init 4
#define _METHOD_INDEX_socketRead0 12

$ClassInfo _SocketInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.SocketInputStream",
	"java.io.FileInputStream",
	nullptr,
	_SocketInputStream_FieldInfo_,
	_SocketInputStream_MethodInfo_
};

$Object* allocate$SocketInputStream($Class* clazz) {
	return $of($alloc(SocketInputStream));
}

bool SocketInputStream::$assertionsDisabled = false;

void SocketInputStream::init$($AbstractPlainSocketImpl* impl) {
	$FileInputStream::init$($($nc(impl)->getFileDescriptor()));
	$set(this, impl, nullptr);
	$set(this, impl, impl);
}

$FileChannel* SocketInputStream::getChannel() {
	return nullptr;
}

int32_t SocketInputStream::socketRead0($FileDescriptor* fd, $bytes* b, int32_t off, int32_t len, int32_t timeout) {
	int32_t $ret = 0;
	$prepareNative(SocketInputStream, socketRead0, int32_t, $FileDescriptor* fd, $bytes* b, int32_t off, int32_t len, int32_t timeout);
	$ret = $invokeNative(fd, b, off, len, timeout);
	$finishNative();
	return $ret;
}

int32_t SocketInputStream::socketRead($FileDescriptor* fd, $bytes* b, int32_t off, int32_t len, int32_t timeout) {
	return socketRead0(fd, b, off, len, timeout);
}

int32_t SocketInputStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t SocketInputStream::read($bytes* b, int32_t off, int32_t length) {
	return read(b, off, length, $nc(this->impl)->getTimeout());
}

int32_t SocketInputStream::read($bytes* b, int32_t off, int32_t length, int32_t timeout) {
	$useLocalCurrentObjectStackCache();
	int32_t n = 0;
	if (this->eof) {
		return -1;
	}
	if ($nc(this->impl)->isConnectionReset()) {
		$throwNew($SocketException, "Connection reset"_s);
	}
	if (length <= 0 || off < 0 || length > $nc(b)->length - off) {
		if (length == 0) {
			return 0;
		}
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"length == "_s, $$str(length), " off == "_s, $$str(off), " buffer length == "_s, $$str(b->length)}));
	}
	$var($FileDescriptor, fd, $nc(this->impl)->acquireFD());
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			try {
				n = socketRead(fd, b, off, length, timeout);
				if (n > 0) {
					var$2 = n;
					return$1 = true;
					goto $finally;
				}
			} catch ($ConnectionResetException& rstExc) {
				$nc(this->impl)->setConnectionReset();
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->impl)->releaseFD();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	if ($nc(this->impl)->isClosedOrPending()) {
		$throwNew($SocketException, "Socket closed"_s);
	}
	if ($nc(this->impl)->isConnectionReset()) {
		$throwNew($SocketException, "Connection reset"_s);
	}
	this->eof = true;
	return -1;
}

int32_t SocketInputStream::read() {
	if (this->eof) {
		return -1;
	}
	$set(this, temp, $new($bytes, 1));
	int32_t n = read(this->temp, 0, 1);
	if (n <= 0) {
		return -1;
	}
	return (int32_t)($nc(this->temp)->get(0) & (uint32_t)255);
}

int64_t SocketInputStream::skip(int64_t numbytes) {
	if (numbytes <= 0) {
		return 0;
	}
	int64_t n = numbytes;
	int32_t buflen = (int32_t)$Math::min((int64_t)1024, n);
	$var($bytes, data, $new($bytes, buflen));
	while (n > 0) {
		int32_t r = read(data, 0, (int32_t)$Math::min((int64_t)buflen, n));
		if (r < 0) {
			break;
		}
		n -= r;
	}
	return numbytes - n;
}

int32_t SocketInputStream::available() {
	int32_t available = $nc(this->impl)->available();
	return this->eof ? 0 : available;
}

void SocketInputStream::setEOF(bool eof) {
	this->eof = eof;
}

void SocketInputStream::close() {
	if (!SocketInputStream::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
}

void SocketInputStream::init() {
	$init(SocketInputStream);
	$prepareNativeStatic(SocketInputStream, init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void clinit$SocketInputStream($Class* class$) {
	SocketInputStream::$assertionsDisabled = !SocketInputStream::class$->desiredAssertionStatus();
	{
		SocketInputStream::init();
	}
}

SocketInputStream::SocketInputStream() {
}

$Class* SocketInputStream::load$($String* name, bool initialize) {
	$loadClass(SocketInputStream, name, initialize, &_SocketInputStream_ClassInfo_, clinit$SocketInputStream, allocate$SocketInputStream);
	return class$;
}

$Class* SocketInputStream::class$ = nullptr;

	} // net
} // java
#include <java/net/SocketOutputStream.h>

#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/net/AbstractPlainSocketImpl.h>
#include <java/net/SocketException.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractPlainSocketImpl = ::java::net::AbstractPlainSocketImpl;
using $SocketException = ::java::net::SocketException;
using $SocketImpl = ::java::net::SocketImpl;
using $FileChannel = ::java::nio::channels::FileChannel;

namespace java {
	namespace net {

$FieldInfo _SocketOutputStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketOutputStream, $assertionsDisabled)},
	{"impl", "Ljava/net/AbstractPlainSocketImpl;", nullptr, $PRIVATE, $field(SocketOutputStream, impl)},
	{"temp", "[B", nullptr, $PRIVATE, $field(SocketOutputStream, temp)},
	{}
};

$MethodInfo _SocketOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/net/AbstractPlainSocketImpl;)V", nullptr, 0, $method(static_cast<void(SocketOutputStream::*)($AbstractPlainSocketImpl*)>(&SocketOutputStream::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getChannel", "()Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC | $FINAL},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&SocketOutputStream::init))},
	{"socketWrite", "([BII)V", nullptr, $PRIVATE, $method(static_cast<void(SocketOutputStream::*)($bytes*,int32_t,int32_t)>(&SocketOutputStream::socketWrite)), "java.io.IOException"},
	{"socketWrite0", "(Ljava/io/FileDescriptor;[BII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(SocketOutputStream::*)($FileDescriptor*,$bytes*,int32_t,int32_t)>(&SocketOutputStream::socketWrite0)), "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_init 3
#define _METHOD_INDEX_socketWrite0 5

$ClassInfo _SocketOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.SocketOutputStream",
	"java.io.FileOutputStream",
	nullptr,
	_SocketOutputStream_FieldInfo_,
	_SocketOutputStream_MethodInfo_
};

$Object* allocate$SocketOutputStream($Class* clazz) {
	return $of($alloc(SocketOutputStream));
}

bool SocketOutputStream::$assertionsDisabled = false;

void SocketOutputStream::init$($AbstractPlainSocketImpl* impl) {
	$FileOutputStream::init$($($nc(impl)->getFileDescriptor()));
	$set(this, impl, nullptr);
	$set(this, temp, $new($bytes, 1));
	$set(this, impl, impl);
}

$FileChannel* SocketOutputStream::getChannel() {
	return nullptr;
}

void SocketOutputStream::socketWrite0($FileDescriptor* fd, $bytes* b, int32_t off, int32_t len) {
	$prepareNative(SocketOutputStream, socketWrite0, void, $FileDescriptor* fd, $bytes* b, int32_t off, int32_t len);
	$invokeNative(SocketOutputStream, socketWrite0, fd, b, off, len);
	$finishNative();
}

void SocketOutputStream::socketWrite($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (len <= 0 || off < 0 || len > $nc(b)->length - off) {
		if (len == 0) {
			return;
		}
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"len == "_s, $$str(len), " off == "_s, $$str(off), " buffer length == "_s, $$str(b->length)}));
	}
	$var($FileDescriptor, fd, $nc(this->impl)->acquireFD());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				socketWrite0(fd, b, off, len);
			} catch ($SocketException& se) {
				if ($nc(this->impl)->isClosedOrPending()) {
					$throwNew($SocketException, "Socket closed"_s);
				} else {
					$throw(se);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->impl)->releaseFD();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SocketOutputStream::write(int32_t b) {
	$nc(this->temp)->set(0, (int8_t)b);
	socketWrite(this->temp, 0, 1);
}

void SocketOutputStream::write($bytes* b) {
	socketWrite(b, 0, $nc(b)->length);
}

void SocketOutputStream::write($bytes* b, int32_t off, int32_t len) {
	socketWrite(b, off, len);
}

void SocketOutputStream::close() {
	if (!SocketOutputStream::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
}

void SocketOutputStream::init() {
	$init(SocketOutputStream);
	$prepareNativeStatic(SocketOutputStream, init, void);
	$invokeNativeStatic(SocketOutputStream, init);
	$finishNativeStatic();
}

void clinit$SocketOutputStream($Class* class$) {
	SocketOutputStream::$assertionsDisabled = !SocketOutputStream::class$->desiredAssertionStatus();
	{
		SocketOutputStream::init();
	}
}

SocketOutputStream::SocketOutputStream() {
}

$Class* SocketOutputStream::load$($String* name, bool initialize) {
	$loadClass(SocketOutputStream, name, initialize, &_SocketOutputStream_ClassInfo_, clinit$SocketOutputStream, allocate$SocketOutputStream);
	return class$;
}

$Class* SocketOutputStream::class$ = nullptr;

	} // net
} // java
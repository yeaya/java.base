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
using $AbstractPlainSocketImpl = ::java::net::AbstractPlainSocketImpl;
using $SocketException = ::java::net::SocketException;
using $FileChannel = ::java::nio::channels::FileChannel;

namespace java {
	namespace net {

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
	$prepareNative(socketWrite0, void, $FileDescriptor* fd, $bytes* b, int32_t off, int32_t len);
	$invokeNative(fd, b, off, len);
	$finishNative();
}

void SocketOutputStream::socketWrite($bytes* b, int32_t off, int32_t len) {
	$useLocalObjectStack();
	if (len <= 0 || off < 0 || len > $nc(b)->length - off) {
		if (len == 0) {
			return;
		}
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"len == "_s, $$str(len), " off == "_s, $$str(off), " buffer length == "_s, $$str($nc(b)->length)}));
	}
	$var($FileDescriptor, fd, $nc(this->impl)->acquireFD());
	$var($Throwable, var$0, nullptr);
	try {
		try {
			socketWrite0(fd, b, off, len);
		} catch ($SocketException& se) {
			if (this->impl->isClosedOrPending()) {
				$throwNew($SocketException, "Socket closed"_s);
			} else {
				$throw(se);
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->impl->releaseFD();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
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
	$prepareNativeStatic(init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void SocketOutputStream::clinit$($Class* clazz) {
	SocketOutputStream::$assertionsDisabled = !SocketOutputStream::class$->desiredAssertionStatus();
	{
		SocketOutputStream::init();
	}
}

SocketOutputStream::SocketOutputStream() {
}

$Class* SocketOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketOutputStream, $assertionsDisabled)},
		{"impl", "Ljava/net/AbstractPlainSocketImpl;", nullptr, $PRIVATE, $field(SocketOutputStream, impl)},
		{"temp", "[B", nullptr, $PRIVATE, $field(SocketOutputStream, temp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/AbstractPlainSocketImpl;)V", nullptr, 0, $method(SocketOutputStream, init$, void, $AbstractPlainSocketImpl*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SocketOutputStream, close, void), "java.io.IOException"},
		{"getChannel", "()Ljava/nio/channels/FileChannel;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SocketOutputStream, getChannel, $FileChannel*)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketOutputStream, init, void)},
		{"socketWrite", "([BII)V", nullptr, $PRIVATE, $method(SocketOutputStream, socketWrite, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"socketWrite0", "(Ljava/io/FileDescriptor;[BII)V", nullptr, $PRIVATE | $NATIVE, $method(SocketOutputStream, socketWrite0, void, $FileDescriptor*, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(SocketOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([B)V", nullptr, $PUBLIC, $virtualMethod(SocketOutputStream, write, void, $bytes*), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(SocketOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.SocketOutputStream",
		"java.io.FileOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SocketOutputStream, name, initialize, &classInfo$$, SocketOutputStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SocketOutputStream));
	});
	return class$;
}

$Class* SocketOutputStream::class$ = nullptr;

	} // net
} // java
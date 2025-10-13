#include <sun/security/ssl/SSLSocketImpl$AppInputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/InputRecord.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSocketImpl.h>
#include <sun/security/ssl/SSLSocketInputRecord.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SocketException = ::java::net::SocketException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SSLException = ::javax::net::ssl::SSLException;
using $BaseSSLSocketImpl = ::sun::security::ssl::BaseSSLSocketImpl;
using $InputRecord = ::sun::security::ssl::InputRecord;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSocketImpl = ::sun::security::ssl::SSLSocketImpl;
using $SSLSocketInputRecord = ::sun::security::ssl::SSLSocketInputRecord;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLSocketImpl$AppInputStream_FieldInfo_[] = {
	{"this$0", "Lsun/security/ssl/SSLSocketImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SSLSocketImpl$AppInputStream, this$0)},
	{"oneByte", "[B", nullptr, $PRIVATE | $FINAL, $field(SSLSocketImpl$AppInputStream, oneByte)},
	{"buffer", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(SSLSocketImpl$AppInputStream, buffer)},
	{"appDataIsAvailable", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SSLSocketImpl$AppInputStream, appDataIsAvailable)},
	{"readLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(SSLSocketImpl$AppInputStream, readLock)},
	{"isClosing", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SSLSocketImpl$AppInputStream, isClosing)},
	{"hasDepleted", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SSLSocketImpl$AppInputStream, hasDepleted)},
	{}
};

$MethodInfo _SSLSocketImpl$AppInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/SSLSocketImpl;)V", nullptr, 0, $method(static_cast<void(SSLSocketImpl$AppInputStream::*)($SSLSocketImpl*)>(&SSLSocketImpl$AppInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"checkEOF", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SSLSocketImpl$AppInputStream::*)()>(&SSLSocketImpl$AppInputStream::checkEOF)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"deplete", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl$AppInputStream::*)()>(&SSLSocketImpl$AppInputStream::deplete))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readLockedDeplete", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLSocketImpl$AppInputStream::*)()>(&SSLSocketImpl$AppInputStream::readLockedDeplete))},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLSocketImpl$AppInputStream_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLSocketImpl$AppInputStream", "sun.security.ssl.SSLSocketImpl", "AppInputStream", $PRIVATE},
	{}
};

$ClassInfo _SSLSocketImpl$AppInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLSocketImpl$AppInputStream",
	"java.io.InputStream",
	nullptr,
	_SSLSocketImpl$AppInputStream_FieldInfo_,
	_SSLSocketImpl$AppInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_SSLSocketImpl$AppInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLSocketImpl"
};

$Object* allocate$SSLSocketImpl$AppInputStream($Class* clazz) {
	return $of($alloc(SSLSocketImpl$AppInputStream));
}

void SSLSocketImpl$AppInputStream::init$($SSLSocketImpl* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, oneByte, $new($bytes, 1));
	$set(this, readLock, $new($ReentrantLock));
	this->appDataIsAvailable = false;
	$set(this, buffer, $ByteBuffer::allocate(4096));
}

int32_t SSLSocketImpl$AppInputStream::available() {
	if ((!this->appDataIsAvailable) || checkEOF()) {
		return 0;
	}
	return $nc(this->buffer)->remaining();
}

int32_t SSLSocketImpl$AppInputStream::read() {
	int32_t n = read(this->oneByte, 0, 1);
	if (n <= 0) {
		return -1;
	}
	return (int32_t)($nc(this->oneByte)->get(0) & (uint32_t)255);
}

int32_t SSLSocketImpl$AppInputStream::read($bytes* b, int32_t off, int32_t len) {
	if (b == nullptr) {
		$throwNew($NullPointerException, "the target buffer is null"_s);
	} else if (off < 0 || len < 0 || len > b->length - off) {
		$throwNew($IndexOutOfBoundsException, $$str({"buffer length: "_s, $$str(b->length), ", offset; "_s, $$str(off), ", bytes to read:"_s, $$str(len)}));
	} else if (len == 0) {
		return 0;
	}
	if (checkEOF()) {
		return -1;
	}
	bool var$0 = !$nc(this->this$0->conContext)->isNegotiated && !$nc(this->this$0->conContext)->isBroken && !$nc(this->this$0->conContext)->isInboundClosed();
	if (var$0 && !$nc(this->this$0->conContext)->isOutboundClosed()) {
		this->this$0->ensureNegotiated(true);
	}
	if (!$nc(this->this$0->conContext)->isNegotiated || $nc(this->this$0->conContext)->isBroken || $nc(this->this$0->conContext)->isInboundClosed()) {
		$throwNew($SocketException, "Connection or inbound has closed"_s);
	}
	if (this->hasDepleted) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::fine("The input stream has been depleted"_s, $$new($ObjectArray, 0));
		}
		return -1;
	}
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$1, nullptr);
		int32_t var$3 = 0;
		bool return$2 = false;
		try {
			if ($nc(this->this$0->conContext)->isBroken || $nc(this->this$0->conContext)->isInboundClosed()) {
				$throwNew($SocketException, "Connection or inbound has closed"_s);
			}
			if (this->hasDepleted) {
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::fine("The input stream is closing"_s, $$new($ObjectArray, 0));
				}
				var$3 = -1;
				return$2 = true;
				goto $finally;
			}
			int32_t remains = available();
			if (remains > 0) {
				int32_t howmany = $Math::min(remains, len);
				$nc(this->buffer)->get(b, off, howmany);
				var$3 = howmany;
				return$2 = true;
				goto $finally;
			}
			this->appDataIsAvailable = false;
			try {
				$var($ByteBuffer, bb, this->this$0->readApplicationRecord(this->buffer));
				if (bb == nullptr) {
					return -1;
				} else {
					$set(this, buffer, bb);
				}
				$nc(bb)->flip();
				int32_t volume = $Math::min(len, bb->remaining());
				$nc(this->buffer)->get(b, off, volume);
				this->appDataIsAvailable = true;
				return volume;
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				this->this$0->handleException(e);
				return -1;
			}
		} catch ($Throwable&) {
			$assign(var$1, $catch());
		} $finally: {
			{
				$var($Throwable, var$4, nullptr);
				try {
					if (this->isClosing) {
						readLockedDeplete();
					}
				} catch ($Throwable&) {
					$assign(var$4, $catch());
				} /*finally*/ {
					$nc(this->readLock)->unlock();
				}
				if (var$4 != nullptr) {
					$throw(var$4);
				}
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
		if (return$2) {
			return var$3;
		}
	}
	$shouldNotReachHere();
}

int64_t SSLSocketImpl$AppInputStream::skip(int64_t n) {
	$var($bytes, skipArray, $new($bytes, 256));
	int64_t skipped = 0;
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (n > 0) {
				int32_t len = (int32_t)$Math::min(n, (int64_t)skipArray->length);
				int32_t r = read(skipArray, 0, len);
				if (r <= 0) {
					break;
				}
				n -= r;
				skipped += r;
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return skipped;
}

void SSLSocketImpl$AppInputStream::close() {
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
		$SSLLogger::finest("Closing input stream"_s, $$new($ObjectArray, 0));
	}
	try {
		this->this$0->close();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
			$SSLLogger::warning("input stream close failed. Debug info only. Exception details:"_s, $$new($ObjectArray, {$of(ioe)}));
		}
	}
}

bool SSLSocketImpl$AppInputStream::checkEOF() {
	if ($nc(this->this$0->conContext)->isBroken) {
		if ($nc(this->this$0->conContext)->closeReason == nullptr) {
			return true;
		} else {
			$throwNew($SSLException, $$str({"Connection has closed: "_s, $nc(this->this$0->conContext)->closeReason}), $nc(this->this$0->conContext)->closeReason);
		}
	} else if ($nc(this->this$0->conContext)->isInboundClosed()) {
		return true;
	} else if ($nc(this->this$0->conContext)->isInputCloseNotified) {
		if ($nc(this->this$0->conContext)->closeReason == nullptr) {
			return true;
		} else {
			$throwNew($SSLException, $$str({"Connection has closed: "_s, $nc(this->this$0->conContext)->closeReason}), $nc(this->this$0->conContext)->closeReason);
		}
	}
	return false;
}

void SSLSocketImpl$AppInputStream::deplete() {
	if ($nc(this->this$0->conContext)->isInboundClosed() || this->isClosing) {
		return;
	}
	this->isClosing = true;
	if ($nc(this->readLock)->tryLock()) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				readLockedDeplete();
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(this->readLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void SSLSocketImpl$AppInputStream::readLockedDeplete() {
	if (this->hasDepleted || $nc(this->this$0->conContext)->isInboundClosed()) {
		return;
	}
	if (!($instanceOf($SSLSocketInputRecord, $nc(this->this$0->conContext)->inputRecord))) {
		return;
	}
	$var($SSLSocketInputRecord, socketInputRecord, $cast($SSLSocketInputRecord, $nc(this->this$0->conContext)->inputRecord));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(socketInputRecord)->deplete($nc(this->this$0->conContext)->isNegotiated && (this->this$0->getSoTimeout() > 0));
			} catch ($Exception&) {
				$var($Exception, ex, $catch());
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl"_s)) {
					$SSLLogger::warning("input stream close depletion failed"_s, $$new($ObjectArray, {$of(ex)}));
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->hasDepleted = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

SSLSocketImpl$AppInputStream::SSLSocketImpl$AppInputStream() {
}

$Class* SSLSocketImpl$AppInputStream::load$($String* name, bool initialize) {
	$loadClass(SSLSocketImpl$AppInputStream, name, initialize, &_SSLSocketImpl$AppInputStream_ClassInfo_, allocate$SSLSocketImpl$AppInputStream);
	return class$;
}

$Class* SSLSocketImpl$AppInputStream::class$ = nullptr;

		} // ssl
	} // security
} // sun
#include <sun/net/www/http/KeepAliveStream.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/net/ProgressSource.h>
#include <sun/net/www/MeteredStream.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/http/KeepAliveCleanerEntry.h>
#include <sun/net/www/http/KeepAliveStream$1.h>
#include <sun/net/www/http/KeepAliveStreamCleaner.h>
#include <jcpp.h>

#undef MAX_DATA_REMAINING

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProgressSource = ::sun::net::ProgressSource;
using $MeteredStream = ::sun::net::www::MeteredStream;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $KeepAliveCleanerEntry = ::sun::net::www::http::KeepAliveCleanerEntry;
using $KeepAliveStream$1 = ::sun::net::www::http::KeepAliveStream$1;
using $KeepAliveStreamCleaner = ::sun::net::www::http::KeepAliveStreamCleaner;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _KeepAliveStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(KeepAliveStream, $assertionsDisabled)},
	{"hc", "Lsun/net/www/http/HttpClient;", nullptr, 0, $field(KeepAliveStream, hc)},
	{"hurried", "Z", nullptr, 0, $field(KeepAliveStream, hurried)},
	{"queuedForCleanup", "Z", nullptr, $PROTECTED | $VOLATILE, $field(KeepAliveStream, queuedForCleanup)},
	{"queue", "Lsun/net/www/http/KeepAliveStreamCleaner;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeepAliveStream, queue)},
	{"cleanerThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(KeepAliveStream, cleanerThread)},
	{}
};

$MethodInfo _KeepAliveStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/InputStream;Lsun/net/ProgressSource;JLsun/net/www/http/HttpClient;)V", nullptr, $PUBLIC, $method(KeepAliveStream, init$, void, $InputStream*, $ProgressSource*, int64_t, $HttpClient*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(KeepAliveStream, close, void), "java.io.IOException"},
	{"hurry", "()Z", nullptr, $PUBLIC, $virtualMethod(KeepAliveStream, hurry, bool)},
	{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(KeepAliveStream, mark, void, int32_t)},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(KeepAliveStream, markSupported, bool)},
	{"queueForCleanup", "(Lsun/net/www/http/KeepAliveCleanerEntry;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(KeepAliveStream, queueForCleanup, void, $KeepAliveCleanerEntry*)},
	{"remainingToRead", "()J", nullptr, $PROTECTED, $virtualMethod(KeepAliveStream, remainingToRead, int64_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(KeepAliveStream, reset, void), "java.io.IOException"},
	{"setClosed", "()V", nullptr, $PROTECTED, $virtualMethod(KeepAliveStream, setClosed, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeepAliveStream_InnerClassesInfo_[] = {
	{"sun.net.www.http.KeepAliveStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeepAliveStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.http.KeepAliveStream",
	"sun.net.www.MeteredStream",
	"sun.net.www.http.Hurryable",
	_KeepAliveStream_FieldInfo_,
	_KeepAliveStream_MethodInfo_,
	nullptr,
	nullptr,
	_KeepAliveStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.http.KeepAliveStream$1"
};

$Object* allocate$KeepAliveStream($Class* clazz) {
	return $of($alloc(KeepAliveStream));
}

void KeepAliveStream::finalize() {
	this->$MeteredStream::finalize();
}

int32_t KeepAliveStream::hashCode() {
	 return this->$MeteredStream::hashCode();
}

bool KeepAliveStream::equals(Object$* obj) {
	 return this->$MeteredStream::equals(obj);
}

$Object* KeepAliveStream::clone() {
	 return this->$MeteredStream::clone();
}

$String* KeepAliveStream::toString() {
	 return this->$MeteredStream::toString();
}

bool KeepAliveStream::$assertionsDisabled = false;
$KeepAliveStreamCleaner* KeepAliveStream::queue = nullptr;
$Thread* KeepAliveStream::cleanerThread = nullptr;

void KeepAliveStream::init$($InputStream* is, $ProgressSource* pi, int64_t expected, $HttpClient* hc) {
	$MeteredStream::init$(is, pi, expected);
	this->queuedForCleanup = false;
	$set(this, hc, hc);
}

void KeepAliveStream::close() {
	$useLocalCurrentObjectStackCache();
	if (this->queuedForCleanup) {
		return;
	}
	lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->closed || this->queuedForCleanup) {
				return$1 = true;
				goto $finally;
			}
			{
				$var($Throwable, var$2, nullptr);
				try {
					if (this->expected > this->count) {
						int64_t nskip = this->expected - this->count;
						if (nskip <= available()) {
							bool var$3 = false;
							do {
								var$3 = (nskip = (this->expected - this->count)) > (int64_t)0;
							} while (var$3 && skip($Math::min(nskip, (int64_t)available())) > (int64_t)0);
						} else {
							$init($KeepAliveStreamCleaner);
							if (this->expected <= $KeepAliveStreamCleaner::MAX_DATA_REMAINING && !this->hurried) {
								queueForCleanup($$new($KeepAliveCleanerEntry, this, this->hc));
							} else {
								$nc(this->hc)->closeServer();
							}
						}
					}
					if (!this->closed && !this->hurried && !this->queuedForCleanup) {
						$nc(this->hc)->finished();
					}
				} catch ($Throwable& var$4) {
					$assign(var$2, var$4);
				} /*finally*/ {
					if (this->pi != nullptr) {
						$nc(this->pi)->finishTracking();
					}
					if (!this->queuedForCleanup) {
						$set(this, in, nullptr);
						$set(this, hc, nullptr);
						this->closed = true;
					}
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

bool KeepAliveStream::markSupported() {
	return false;
}

void KeepAliveStream::mark(int32_t limit) {
}

void KeepAliveStream::reset() {
	$throwNew($IOException, "mark/reset not supported"_s);
}

bool KeepAliveStream::hurry() {
	$useLocalCurrentObjectStackCache();
	lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				if (this->closed || this->count >= this->expected) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				} else if ($nc(this->in)->available() < (this->expected - this->count)) {
					var$2 = false;
					return$1 = true;
					goto $finally;
				} else {
					int32_t size = (int32_t)(this->expected - this->count);
					$var($bytes, buf, $new($bytes, size));
					$var($DataInputStream, dis, $new($DataInputStream, this->in));
					dis->readFully(buf);
					$set(this, in, $new($ByteArrayInputStream, buf));
					this->hurried = true;
					var$2 = true;
					return$1 = true;
					goto $finally;
				}
			} catch ($IOException& e) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			unlock();
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

void KeepAliveStream::queueForCleanup($KeepAliveCleanerEntry* kace) {
	$init(KeepAliveStream);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc(KeepAliveStream::queue)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (!$nc(kace)->getQueuedForCleanup()) {
				if (!$nc(KeepAliveStream::queue)->offer(kace)) {
					$nc($(kace->getHttpClient()))->closeServer();
					return$1 = true;
					goto $finally;
				}
				kace->setQueuedForCleanup();
				$nc(KeepAliveStream::queue)->signalAll();
			}
			bool startCleanupThread = (KeepAliveStream::cleanerThread == nullptr);
			if (!startCleanupThread) {
				if (!$nc(KeepAliveStream::cleanerThread)->isAlive()) {
					startCleanupThread = true;
				}
			}
			if (startCleanupThread) {
				$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($KeepAliveStream$1)));
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(KeepAliveStream::queue)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

int64_t KeepAliveStream::remainingToRead() {
	if (!KeepAliveStream::$assertionsDisabled && !isLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	return this->expected - this->count;
}

void KeepAliveStream::setClosed() {
	if (!KeepAliveStream::$assertionsDisabled && !isLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$set(this, in, nullptr);
	$set(this, hc, nullptr);
	this->closed = true;
}

void clinit$KeepAliveStream($Class* class$) {
	KeepAliveStream::$assertionsDisabled = !KeepAliveStream::class$->desiredAssertionStatus();
	$assignStatic(KeepAliveStream::queue, $new($KeepAliveStreamCleaner));
}

KeepAliveStream::KeepAliveStream() {
}

$Class* KeepAliveStream::load$($String* name, bool initialize) {
	$loadClass(KeepAliveStream, name, initialize, &_KeepAliveStream_ClassInfo_, clinit$KeepAliveStream, allocate$KeepAliveStream);
	return class$;
}

$Class* KeepAliveStream::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun
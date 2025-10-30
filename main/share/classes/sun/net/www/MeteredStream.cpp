#include <sun/net/www/MeteredStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/net/ProgressSource.h>
#include <sun/net/www/http/ChunkedInputStream.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $ProgressSource = ::sun::net::ProgressSource;
using $ChunkedInputStream = ::sun::net::www::http::ChunkedInputStream;

namespace sun {
	namespace net {
		namespace www {

$FieldInfo _MeteredStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MeteredStream, $assertionsDisabled)},
	{"closed", "Z", nullptr, $PROTECTED, $field(MeteredStream, closed)},
	{"expected", "J", nullptr, $PROTECTED, $field(MeteredStream, expected)},
	{"count", "J", nullptr, $PROTECTED, $field(MeteredStream, count)},
	{"markedCount", "J", nullptr, $PROTECTED, $field(MeteredStream, markedCount)},
	{"markLimit", "I", nullptr, $PROTECTED, $field(MeteredStream, markLimit)},
	{"pi", "Lsun/net/ProgressSource;", nullptr, $PROTECTED, $field(MeteredStream, pi)},
	{"readLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(MeteredStream, readLock)},
	{}
};

$MethodInfo _MeteredStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Lsun/net/ProgressSource;J)V", nullptr, $PUBLIC, $method(static_cast<void(MeteredStream::*)($InputStream*,$ProgressSource*,int64_t)>(&MeteredStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"isLockHeldByCurrentThread", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(MeteredStream::*)()>(&MeteredStream::isLockHeldByCurrentThread))},
	{"isMarked", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(MeteredStream::*)()>(&MeteredStream::isMarked))},
	{"justRead", "(J)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(MeteredStream::*)(int64_t)>(&MeteredStream::justRead)), "java.io.IOException"},
	{"lock", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(MeteredStream::*)()>(&MeteredStream::lock))},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"unlock", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(MeteredStream::*)()>(&MeteredStream::unlock))},
	{}
};

$ClassInfo _MeteredStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.MeteredStream",
	"java.io.FilterInputStream",
	nullptr,
	_MeteredStream_FieldInfo_,
	_MeteredStream_MethodInfo_
};

$Object* allocate$MeteredStream($Class* clazz) {
	return $of($alloc(MeteredStream));
}

bool MeteredStream::$assertionsDisabled = false;

void MeteredStream::init$($InputStream* is, $ProgressSource* pi, int64_t expected) {
	$FilterInputStream::init$(is);
	this->closed = false;
	this->count = 0;
	this->markedCount = 0;
	this->markLimit = -1;
	$set(this, readLock, $new($ReentrantLock));
	$set(this, pi, pi);
	this->expected = expected;
	if (pi != nullptr) {
		pi->updateProgress(0, expected);
	}
}

void MeteredStream::justRead(int64_t n) {
	if (!MeteredStream::$assertionsDisabled && !isLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (n == -1) {
		if (!isMarked()) {
			close();
		}
		return;
	}
	this->count += n;
	if (this->count - this->markedCount > this->markLimit) {
		this->markLimit = -1;
	}
	if (this->pi != nullptr) {
		$nc(this->pi)->updateProgress(this->count, this->expected);
	}
	if (isMarked()) {
		return;
	}
	if (this->expected > 0) {
		if (this->count >= this->expected) {
			close();
		}
	}
}

bool MeteredStream::isMarked() {
	if (!MeteredStream::$assertionsDisabled && !isLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (this->markLimit < 0) {
		return false;
	}
	if (this->count - this->markedCount > this->markLimit) {
		return false;
	}
	return true;
}

int32_t MeteredStream::read() {
	lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (this->closed) {
				var$2 = -1;
				return$1 = true;
				goto $finally;
			}
			int32_t c = $nc(this->in)->read();
			if (c != -1) {
				justRead(1);
			} else {
				justRead(c);
			}
			var$2 = c;
			return$1 = true;
			goto $finally;
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

int32_t MeteredStream::read($bytes* b, int32_t off, int32_t len) {
	lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (this->closed) {
				var$2 = -1;
				return$1 = true;
				goto $finally;
			}
			int32_t n = $nc(this->in)->read(b, off, len);
			justRead(n);
			var$2 = n;
			return$1 = true;
			goto $finally;
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

int64_t MeteredStream::skip(int64_t n) {
	lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (this->closed) {
				var$2 = 0;
				return$1 = true;
				goto $finally;
			}
			if ($instanceOf($ChunkedInputStream, this->in)) {
				n = $nc(this->in)->skip(n);
			} else {
				int64_t min = (n > this->expected - this->count) ? this->expected - this->count : n;
				n = $nc(this->in)->skip(min);
			}
			justRead(n);
			var$2 = n;
			return$1 = true;
			goto $finally;
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

void MeteredStream::close() {
	lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->closed) {
				return$1 = true;
				goto $finally;
			}
			if (this->pi != nullptr) {
				$nc(this->pi)->finishTracking();
			}
			this->closed = true;
			$nc(this->in)->close();
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
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

int32_t MeteredStream::available() {
	lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = this->closed ? 0 : $nc(this->in)->available();
			return$1 = true;
			goto $finally;
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

void MeteredStream::mark(int32_t readLimit) {
	lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->closed) {
				return$1 = true;
				goto $finally;
			}
			$FilterInputStream::mark(readLimit);
			this->markedCount = this->count;
			this->markLimit = readLimit;
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
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

void MeteredStream::reset() {
	lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->closed) {
				return$1 = true;
				goto $finally;
			}
			if (!isMarked()) {
				$throwNew($IOException, "Resetting to an invalid mark"_s);
			}
			this->count = this->markedCount;
			$FilterInputStream::reset();
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
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

bool MeteredStream::markSupported() {
	lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (this->closed) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			var$2 = $FilterInputStream::markSupported();
			return$1 = true;
			goto $finally;
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

void MeteredStream::lock() {
	$nc(this->readLock)->lock();
}

void MeteredStream::unlock() {
	$nc(this->readLock)->unlock();
}

bool MeteredStream::isLockHeldByCurrentThread() {
	return $nc(this->readLock)->isHeldByCurrentThread();
}

void MeteredStream::finalize() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			close();
			if (this->pi != nullptr) {
				$nc(this->pi)->close();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$FilterInputStream::finalize();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$MeteredStream($Class* class$) {
	MeteredStream::$assertionsDisabled = !MeteredStream::class$->desiredAssertionStatus();
}

MeteredStream::MeteredStream() {
}

$Class* MeteredStream::load$($String* name, bool initialize) {
	$loadClass(MeteredStream, name, initialize, &_MeteredStream_ClassInfo_, clinit$MeteredStream, allocate$MeteredStream);
	return class$;
}

$Class* MeteredStream::class$ = nullptr;

		} // www
	} // net
} // sun
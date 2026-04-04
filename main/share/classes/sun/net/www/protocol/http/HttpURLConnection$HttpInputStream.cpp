#include <sun/net/www/protocol/http/HttpURLConnection$HttpInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Math.h>
#include <java/net/CacheRequest.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

#undef SKIP_BUFFER_SIZE

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CacheRequest = ::java::net::CacheRequest;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void HttpURLConnection$HttpInputStream::init$($HttpURLConnection* this$0, $InputStream* is) {
	$set(this, this$0, this$0);
	$FilterInputStream::init$(is);
	this->marked = false;
	this->inCache = 0;
	this->markCount = 0;
	$set(this, cacheRequest, nullptr);
	$set(this, outputStream, nullptr);
}

void HttpURLConnection$HttpInputStream::init$($HttpURLConnection* this$0, $InputStream* is, $CacheRequest* cacheRequest) {
	$set(this, this$0, this$0);
	$FilterInputStream::init$(is);
	this->marked = false;
	this->inCache = 0;
	this->markCount = 0;
	$set(this, cacheRequest, cacheRequest);
	try {
		$set(this, outputStream, $nc(cacheRequest)->getBody());
	} catch ($IOException& ioex) {
		$nc(this->cacheRequest)->abort();
		$set(this, cacheRequest, nullptr);
		$set(this, outputStream, nullptr);
	}
}

void HttpURLConnection$HttpInputStream::mark(int32_t readlimit) {
	$synchronized(this) {
		$FilterInputStream::mark(readlimit);
		if (this->cacheRequest != nullptr) {
			this->marked = true;
			this->markCount = 0;
		}
	}
}

void HttpURLConnection$HttpInputStream::reset() {
	$synchronized(this) {
		$FilterInputStream::reset();
		if (this->cacheRequest != nullptr) {
			this->marked = false;
			this->inCache += this->markCount;
		}
	}
}

void HttpURLConnection$HttpInputStream::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "stream is closed"_s);
	}
}

int32_t HttpURLConnection$HttpInputStream::read() {
	ensureOpen();
	try {
		$var($bytes, b, $new($bytes, 1));
		int32_t ret = read(b);
		return (ret == -1 ? ret : (b->get(0) & 0xff));
	} catch ($IOException& ioex) {
		if (this->cacheRequest != nullptr) {
			this->cacheRequest->abort();
		}
		$throw(ioex);
	}
	$shouldNotReachHere();
}

int32_t HttpURLConnection$HttpInputStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t HttpURLConnection$HttpInputStream::read($bytes* b, int32_t off, int32_t len) {
	ensureOpen();
	try {
		int32_t newLen = $FilterInputStream::read(b, off, len);
		int32_t nWrite = 0;
		if (this->inCache > 0) {
			if (this->inCache >= newLen) {
				this->inCache -= newLen;
				nWrite = 0;
			} else {
				nWrite = newLen - this->inCache;
				this->inCache = 0;
			}
		} else {
			nWrite = newLen;
		}
		if (nWrite > 0 && this->outputStream != nullptr) {
			this->outputStream->write(b, off + (newLen - nWrite), nWrite);
		}
		if (this->marked) {
			this->markCount += newLen;
		}
		return newLen;
	} catch ($IOException& ioex) {
		if (this->cacheRequest != nullptr) {
			this->cacheRequest->abort();
		}
		$throw(ioex);
	}
	$shouldNotReachHere();
}

int64_t HttpURLConnection$HttpInputStream::skip(int64_t n) {
	ensureOpen();
	int64_t remaining = n;
	int32_t nr = 0;
	if (this->skipBuffer == nullptr) {
		$set(this, skipBuffer, $new($bytes, HttpURLConnection$HttpInputStream::SKIP_BUFFER_SIZE));
	}
	$var($bytes, localSkipBuffer, this->skipBuffer);
	if (n <= 0) {
		return 0;
	}
	while (remaining > 0) {
		nr = read(localSkipBuffer, 0, (int32_t)$Math::min((int64_t)HttpURLConnection$HttpInputStream::SKIP_BUFFER_SIZE, remaining));
		if (nr < 0) {
			break;
		}
		remaining -= nr;
	}
	return n - remaining;
}

void HttpURLConnection$HttpInputStream::close() {
	if (this->closed) {
		return;
	}
	$var($Throwable, var$0, nullptr);
	try {
		try {
			if (this->outputStream != nullptr) {
				if (read() != -1) {
					$nc(this->cacheRequest)->abort();
				} else {
					this->outputStream->close();
				}
			}
			$FilterInputStream::close();
		} catch ($IOException& ioex) {
			if (this->cacheRequest != nullptr) {
				this->cacheRequest->abort();
			}
			$throw(ioex);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->closed = true;
		$set(this->this$0, http, nullptr);
		this->this$0->checkResponseCredentials(true);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

HttpURLConnection$HttpInputStream::HttpURLConnection$HttpInputStream() {
}

$Class* HttpURLConnection$HttpInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$HttpInputStream, this$0)},
		{"cacheRequest", "Ljava/net/CacheRequest;", nullptr, $PRIVATE, $field(HttpURLConnection$HttpInputStream, cacheRequest)},
		{"outputStream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(HttpURLConnection$HttpInputStream, outputStream)},
		{"marked", "Z", nullptr, $PRIVATE, $field(HttpURLConnection$HttpInputStream, marked)},
		{"inCache", "I", nullptr, $PRIVATE, $field(HttpURLConnection$HttpInputStream, inCache)},
		{"markCount", "I", nullptr, $PRIVATE, $field(HttpURLConnection$HttpInputStream, markCount)},
		{"closed", "Z", nullptr, $PRIVATE, $field(HttpURLConnection$HttpInputStream, closed)},
		{"skipBuffer", "[B", nullptr, $PRIVATE, $field(HttpURLConnection$HttpInputStream, skipBuffer)},
		{"SKIP_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HttpURLConnection$HttpInputStream, SKIP_BUFFER_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(HttpURLConnection$HttpInputStream, init$, void, $HttpURLConnection*, $InputStream*)},
		{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/io/InputStream;Ljava/net/CacheRequest;)V", nullptr, $PUBLIC, $method(HttpURLConnection$HttpInputStream, init$, void, $HttpURLConnection*, $InputStream*, $CacheRequest*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$HttpInputStream, close, void), "java.io.IOException"},
		{"ensureOpen", "()V", nullptr, $PRIVATE, $method(HttpURLConnection$HttpInputStream, ensureOpen, void), "java.io.IOException"},
		{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(HttpURLConnection$HttpInputStream, mark, void, int32_t)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$HttpInputStream, read, int32_t), "java.io.IOException"},
		{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$HttpInputStream, read, int32_t, $bytes*), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$HttpInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(HttpURLConnection$HttpInputStream, reset, void), "java.io.IOException"},
		{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(HttpURLConnection$HttpInputStream, skip, int64_t, int64_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.HttpURLConnection$HttpInputStream", "sun.net.www.protocol.http.HttpURLConnection", "HttpInputStream", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.protocol.http.HttpURLConnection$HttpInputStream",
		"java.io.FilterInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.HttpURLConnection"
	};
	$loadClass(HttpURLConnection$HttpInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpURLConnection$HttpInputStream);
	});
	return class$;
}

$Class* HttpURLConnection$HttpInputStream::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun
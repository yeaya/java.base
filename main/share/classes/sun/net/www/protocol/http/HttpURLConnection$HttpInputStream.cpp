#include <sun/net/www/protocol/http/HttpURLConnection$HttpInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/CacheRequest.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

#undef SKIP_BUFFER_SIZE

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CacheRequest = ::java::net::CacheRequest;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$HttpInputStream_FieldInfo_[] = {
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

$MethodInfo _HttpURLConnection$HttpInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpURLConnection$HttpInputStream::*)($HttpURLConnection*,$InputStream*)>(&HttpURLConnection$HttpInputStream::init$))},
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/io/InputStream;Ljava/net/CacheRequest;)V", nullptr, $PUBLIC, $method(static_cast<void(HttpURLConnection$HttpInputStream::*)($HttpURLConnection*,$InputStream*,$CacheRequest*)>(&HttpURLConnection$HttpInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(HttpURLConnection$HttpInputStream::*)()>(&HttpURLConnection$HttpInputStream::ensureOpen)), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HttpURLConnection$HttpInputStream_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$HttpInputStream", "sun.net.www.protocol.http.HttpURLConnection", "HttpInputStream", 0},
	{}
};

$ClassInfo _HttpURLConnection$HttpInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$HttpInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_HttpURLConnection$HttpInputStream_FieldInfo_,
	_HttpURLConnection$HttpInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_HttpURLConnection$HttpInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$HttpInputStream($Class* clazz) {
	return $of($alloc(HttpURLConnection$HttpInputStream));
}

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
	} catch ($IOException&) {
		$var($IOException, ioex, $catch());
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
		return (ret == -1 ? ret : ((int32_t)(b->get(0) & (uint32_t)255)));
	} catch ($IOException&) {
		$var($IOException, ioex, $catch());
		if (this->cacheRequest != nullptr) {
			$nc(this->cacheRequest)->abort();
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
			$nc(this->outputStream)->write(b, off + (newLen - nWrite), nWrite);
		}
		if (this->marked) {
			this->markCount += newLen;
		}
		return newLen;
	} catch ($IOException&) {
		$var($IOException, ioex, $catch());
		if (this->cacheRequest != nullptr) {
			$nc(this->cacheRequest)->abort();
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
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (this->outputStream != nullptr) {
					if (read() != -1) {
						$nc(this->cacheRequest)->abort();
					} else {
						$nc(this->outputStream)->close();
					}
				}
				$FilterInputStream::close();
			} catch ($IOException&) {
				$var($IOException, ioex, $catch());
				if (this->cacheRequest != nullptr) {
					$nc(this->cacheRequest)->abort();
				}
				$throw(ioex);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->closed = true;
			$set(this->this$0, http, nullptr);
			this->this$0->checkResponseCredentials(true);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

HttpURLConnection$HttpInputStream::HttpURLConnection$HttpInputStream() {
}

$Class* HttpURLConnection$HttpInputStream::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$HttpInputStream, name, initialize, &_HttpURLConnection$HttpInputStream_ClassInfo_, allocate$HttpURLConnection$HttpInputStream);
	return class$;
}

$Class* HttpURLConnection$HttpInputStream::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun
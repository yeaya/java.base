#include <sun/net/www/protocol/http/HttpURLConnection$ErrorStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/SocketTimeoutException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$ErrorStream_FieldInfo_[] = {
	{"buffer", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(HttpURLConnection$ErrorStream, buffer)},
	{"is", "Ljava/io/InputStream;", nullptr, 0, $field(HttpURLConnection$ErrorStream, is)},
	{}
};

$MethodInfo _HttpURLConnection$ErrorStream_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(HttpURLConnection$ErrorStream::*)($ByteBuffer*)>(&HttpURLConnection$ErrorStream::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;Ljava/io/InputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(HttpURLConnection$ErrorStream::*)($ByteBuffer*,$InputStream*)>(&HttpURLConnection$ErrorStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getErrorStream", "(Ljava/io/InputStream;JLsun/net/www/http/HttpClient;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InputStream*(*)($InputStream*,int64_t,$HttpClient*)>(&HttpURLConnection$ErrorStream::getErrorStream))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HttpURLConnection$ErrorStream_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$ErrorStream", "sun.net.www.protocol.http.HttpURLConnection", "ErrorStream", $STATIC},
	{}
};

$ClassInfo _HttpURLConnection$ErrorStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$ErrorStream",
	"java.io.InputStream",
	nullptr,
	_HttpURLConnection$ErrorStream_FieldInfo_,
	_HttpURLConnection$ErrorStream_MethodInfo_,
	nullptr,
	nullptr,
	_HttpURLConnection$ErrorStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$ErrorStream($Class* clazz) {
	return $of($alloc(HttpURLConnection$ErrorStream));
}

void HttpURLConnection$ErrorStream::init$($ByteBuffer* buf) {
	$InputStream::init$();
	$set(this, buffer, buf);
	$set(this, is, nullptr);
}

void HttpURLConnection$ErrorStream::init$($ByteBuffer* buf, $InputStream* is) {
	$InputStream::init$();
	$set(this, buffer, buf);
	$set(this, is, is);
}

$InputStream* HttpURLConnection$ErrorStream::getErrorStream($InputStream* is, int64_t cl, $HttpClient* http) {
	$init(HttpURLConnection$ErrorStream);
	$useLocalCurrentObjectStackCache();
	if (cl == 0) {
		return nullptr;
	}
	try {
		int32_t oldTimeout = $nc(http)->getReadTimeout();
		$init($HttpURLConnection);
		http->setReadTimeout($HttpURLConnection::timeout4ESBuffer / 5);
		int64_t expected = 0;
		bool isChunked = false;
		if (cl < 0) {
			expected = $HttpURLConnection::bufSize4ES;
			isChunked = true;
		} else {
			expected = cl;
		}
		if (expected <= $HttpURLConnection::bufSize4ES) {
			int32_t exp = (int32_t)expected;
			$var($bytes, buffer, $new($bytes, exp));
			int32_t count = 0;
			int32_t time = 0;
			int32_t len = 0;
			do {
				try {
					len = $nc(is)->read(buffer, count, buffer->length - count);
					if (len < 0) {
						if (isChunked) {
							break;
						}
						$throwNew($IOException, $$str({"the server closes before sending "_s, $$str(cl), " bytes of data"_s}));
					}
					count += len;
				} catch ($SocketTimeoutException& ex) {
					time += $HttpURLConnection::timeout4ESBuffer / 5;
				}
			} while (count < exp && time < $HttpURLConnection::timeout4ESBuffer);
			http->setReadTimeout(oldTimeout);
			if (count == 0) {
				return nullptr;
			} else if ((count == expected && !(isChunked)) || (isChunked && len < 0)) {
				$nc(is)->close();
				return $new(HttpURLConnection$ErrorStream, $($ByteBuffer::wrap(buffer, 0, count)));
			} else {
				return $new(HttpURLConnection$ErrorStream, $($ByteBuffer::wrap(buffer, 0, count)), is);
			}
		}
		return nullptr;
	} catch ($IOException& ioex) {
		return nullptr;
	}
	$shouldNotReachHere();
}

int32_t HttpURLConnection$ErrorStream::available() {
	if (this->is == nullptr) {
		return $nc(this->buffer)->remaining();
	} else {
		int32_t var$0 = $nc(this->buffer)->remaining();
		return var$0 + $nc(this->is)->available();
	}
}

int32_t HttpURLConnection$ErrorStream::read() {
	$var($bytes, b, $new($bytes, 1));
	int32_t ret = read(b);
	return (ret == -1 ? ret : ((int32_t)(b->get(0) & (uint32_t)255)));
}

int32_t HttpURLConnection$ErrorStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t HttpURLConnection$ErrorStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t rem = $nc(this->buffer)->remaining();
	if (rem > 0) {
		int32_t ret = rem < len ? rem : len;
		$nc(this->buffer)->get(b, off, ret);
		return ret;
	} else if (this->is == nullptr) {
		return -1;
	} else {
		return $nc(this->is)->read(b, off, len);
	}
}

void HttpURLConnection$ErrorStream::close() {
	$set(this, buffer, nullptr);
	if (this->is != nullptr) {
		$nc(this->is)->close();
	}
}

HttpURLConnection$ErrorStream::HttpURLConnection$ErrorStream() {
}

$Class* HttpURLConnection$ErrorStream::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$ErrorStream, name, initialize, &_HttpURLConnection$ErrorStream_ClassInfo_, allocate$HttpURLConnection$ErrorStream);
	return class$;
}

$Class* HttpURLConnection$ErrorStream::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun
#include <sun/net/www/http/HttpCaptureInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <sun/net/www/http/HttpCapture.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCapture = ::sun::net::www::http::HttpCapture;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _HttpCaptureInputStream_FieldInfo_[] = {
	{"capture", "Lsun/net/www/http/HttpCapture;", nullptr, $PRIVATE, $field(HttpCaptureInputStream, capture)},
	{}
};

$MethodInfo _HttpCaptureInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Lsun/net/www/http/HttpCapture;)V", nullptr, $PUBLIC, $method(HttpCaptureInputStream, init$, void, $InputStream*, $HttpCapture*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(HttpCaptureInputStream, close, void), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(HttpCaptureInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(HttpCaptureInputStream, read, int32_t, $bytes*), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(HttpCaptureInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _HttpCaptureInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.http.HttpCaptureInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_HttpCaptureInputStream_FieldInfo_,
	_HttpCaptureInputStream_MethodInfo_
};

$Object* allocate$HttpCaptureInputStream($Class* clazz) {
	return $of($alloc(HttpCaptureInputStream));
}

void HttpCaptureInputStream::init$($InputStream* in, $HttpCapture* cap) {
	$FilterInputStream::init$(in);
	$set(this, capture, nullptr);
	$set(this, capture, cap);
}

int32_t HttpCaptureInputStream::read() {
	int32_t i = $FilterInputStream::read();
	$nc(this->capture)->received(i);
	return i;
}

void HttpCaptureInputStream::close() {
	try {
		$nc(this->capture)->flush();
	} catch ($IOException& iOException) {
	}
	$FilterInputStream::close();
}

int32_t HttpCaptureInputStream::read($bytes* b) {
	int32_t ret = $FilterInputStream::read(b);
	for (int32_t i = 0; i < ret; ++i) {
		$nc(this->capture)->received($nc(b)->get(i));
	}
	return ret;
}

int32_t HttpCaptureInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t ret = $FilterInputStream::read(b, off, len);
	for (int32_t i = 0; i < ret; ++i) {
		$nc(this->capture)->received($nc(b)->get(off + i));
	}
	return ret;
}

HttpCaptureInputStream::HttpCaptureInputStream() {
}

$Class* HttpCaptureInputStream::load$($String* name, bool initialize) {
	$loadClass(HttpCaptureInputStream, name, initialize, &_HttpCaptureInputStream_ClassInfo_, allocate$HttpCaptureInputStream);
	return class$;
}

$Class* HttpCaptureInputStream::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun
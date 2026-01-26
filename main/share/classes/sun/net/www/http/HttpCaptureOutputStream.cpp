#include <sun/net/www/http/HttpCaptureOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <sun/net/www/http/HttpCapture.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCapture = ::sun::net::www::http::HttpCapture;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _HttpCaptureOutputStream_FieldInfo_[] = {
	{"capture", "Lsun/net/www/http/HttpCapture;", nullptr, $PRIVATE, $field(HttpCaptureOutputStream, capture)},
	{}
};

$MethodInfo _HttpCaptureOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Lsun/net/www/http/HttpCapture;)V", nullptr, $PUBLIC, $method(HttpCaptureOutputStream, init$, void, $OutputStream*, $HttpCapture*)},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(HttpCaptureOutputStream, flush, void), "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(HttpCaptureOutputStream, write, void, int32_t), "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, $virtualMethod(HttpCaptureOutputStream, write, void, $bytes*), "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(HttpCaptureOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _HttpCaptureOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.http.HttpCaptureOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_HttpCaptureOutputStream_FieldInfo_,
	_HttpCaptureOutputStream_MethodInfo_
};

$Object* allocate$HttpCaptureOutputStream($Class* clazz) {
	return $of($alloc(HttpCaptureOutputStream));
}

void HttpCaptureOutputStream::init$($OutputStream* out, $HttpCapture* cap) {
	$FilterOutputStream::init$(out);
	$set(this, capture, nullptr);
	$set(this, capture, cap);
}

void HttpCaptureOutputStream::write(int32_t b) {
	$nc(this->capture)->sent(b);
	$nc(this->out)->write(b);
}

void HttpCaptureOutputStream::write($bytes* ba) {
	{
		$var($bytes, arr$, ba);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t b = arr$->get(i$);
			{
				$nc(this->capture)->sent(b);
			}
		}
	}
	$nc(this->out)->write(ba);
}

void HttpCaptureOutputStream::write($bytes* b, int32_t off, int32_t len) {
	for (int32_t i = off; i < len; ++i) {
		$nc(this->capture)->sent($nc(b)->get(i));
	}
	$nc(this->out)->write(b, off, len);
}

void HttpCaptureOutputStream::flush() {
	try {
		$nc(this->capture)->flush();
	} catch ($IOException& iOException) {
	}
	$FilterOutputStream::flush();
}

HttpCaptureOutputStream::HttpCaptureOutputStream() {
}

$Class* HttpCaptureOutputStream::load$($String* name, bool initialize) {
	$loadClass(HttpCaptureOutputStream, name, initialize, &_HttpCaptureOutputStream_ClassInfo_, allocate$HttpCaptureOutputStream);
	return class$;
}

$Class* HttpCaptureOutputStream::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun
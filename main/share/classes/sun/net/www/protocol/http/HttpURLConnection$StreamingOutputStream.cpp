#include <sun/net/www/protocol/http/HttpURLConnection$StreamingOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <sun/net/www/http/ChunkedOutputStream.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ChunkedOutputStream = ::sun::net::www::http::ChunkedOutputStream;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _HttpURLConnection$StreamingOutputStream_FieldInfo_[] = {
	{"this$0", "Lsun/net/www/protocol/http/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(HttpURLConnection$StreamingOutputStream, this$0)},
	{"expected", "J", nullptr, 0, $field(HttpURLConnection$StreamingOutputStream, expected)},
	{"written", "J", nullptr, 0, $field(HttpURLConnection$StreamingOutputStream, written)},
	{"closed", "Z", nullptr, 0, $field(HttpURLConnection$StreamingOutputStream, closed)},
	{"error", "Z", nullptr, 0, $field(HttpURLConnection$StreamingOutputStream, error)},
	{"errorExcp", "Ljava/io/IOException;", nullptr, 0, $field(HttpURLConnection$StreamingOutputStream, errorExcp)},
	{}
};

$MethodInfo _HttpURLConnection$StreamingOutputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpURLConnection;Ljava/io/OutputStream;J)V", nullptr, 0, $method(static_cast<void(HttpURLConnection$StreamingOutputStream::*)($HttpURLConnection*,$OutputStream*,int64_t)>(&HttpURLConnection$StreamingOutputStream::init$))},
	{"checkError", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writtenOK", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _HttpURLConnection$StreamingOutputStream_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.HttpURLConnection$StreamingOutputStream", "sun.net.www.protocol.http.HttpURLConnection", "StreamingOutputStream", 0},
	{}
};

$ClassInfo _HttpURLConnection$StreamingOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.HttpURLConnection$StreamingOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_HttpURLConnection$StreamingOutputStream_FieldInfo_,
	_HttpURLConnection$StreamingOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_HttpURLConnection$StreamingOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.HttpURLConnection"
};

$Object* allocate$HttpURLConnection$StreamingOutputStream($Class* clazz) {
	return $of($alloc(HttpURLConnection$StreamingOutputStream));
}

void HttpURLConnection$StreamingOutputStream::init$($HttpURLConnection* this$0, $OutputStream* os, int64_t expectedLength) {
	$set(this, this$0, this$0);
	$FilterOutputStream::init$(os);
	this->expected = expectedLength;
	this->written = 0;
	this->closed = false;
	this->error = false;
}

void HttpURLConnection$StreamingOutputStream::write(int32_t b) {
	checkError();
	++this->written;
	if (this->expected != (int64_t)-1 && this->written > this->expected) {
		$throwNew($IOException, "too many bytes written"_s);
	}
	$nc(this->out)->write(b);
}

void HttpURLConnection$StreamingOutputStream::write($bytes* b) {
	write(b, 0, $nc(b)->length);
}

void HttpURLConnection$StreamingOutputStream::write($bytes* b, int32_t off, int32_t len) {
	checkError();
	this->written += len;
	if (this->expected != (int64_t)-1 && this->written > this->expected) {
		$nc(this->out)->close();
		$throwNew($IOException, "too many bytes written"_s);
	}
	$nc(this->out)->write(b, off, len);
}

void HttpURLConnection$StreamingOutputStream::checkError() {
	if (this->closed) {
		$throwNew($IOException, "Stream is closed"_s);
	}
	if (this->error) {
		$throw(this->errorExcp);
	}
	if ($instanceOf($PrintStream, this->out)) {
		if ($nc(($cast($PrintStream, this->out)))->checkError()) {
			$throwNew($IOException, "Error writing request body to server"_s);
		}
	} else if ($instanceOf($ChunkedOutputStream, this->out)) {
		if ($nc(($cast($ChunkedOutputStream, this->out)))->checkError()) {
			$throwNew($IOException, "Error writing request body to server"_s);
		}
	}
}

bool HttpURLConnection$StreamingOutputStream::writtenOK() {
	return this->closed && !this->error;
}

void HttpURLConnection$StreamingOutputStream::close() {
	if (this->closed) {
		return;
	}
	this->closed = true;
	if (this->expected != (int64_t)-1) {
		if (this->written != this->expected) {
			this->error = true;
			$set(this, errorExcp, $new($IOException, "insufficient data written"_s));
			$nc(this->out)->close();
			$throw(this->errorExcp);
		}
		$FilterOutputStream::flush();
	} else {
		$FilterOutputStream::close();
		$var($OutputStream, o, $nc(this->this$0->http)->getOutputStream());
		$nc(o)->write((int32_t)u'\r');
		o->write((int32_t)u'\n');
		o->flush();
	}
}

HttpURLConnection$StreamingOutputStream::HttpURLConnection$StreamingOutputStream() {
}

$Class* HttpURLConnection$StreamingOutputStream::load$($String* name, bool initialize) {
	$loadClass(HttpURLConnection$StreamingOutputStream, name, initialize, &_HttpURLConnection$StreamingOutputStream_ClassInfo_, allocate$HttpURLConnection$StreamingOutputStream);
	return class$;
}

$Class* HttpURLConnection$StreamingOutputStream::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun
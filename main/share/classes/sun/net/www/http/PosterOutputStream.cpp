#include <sun/net/www/http/PosterOutputStream.h>

#include <java/io/ByteArrayOutputStream.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$FieldInfo _PosterOutputStream_FieldInfo_[] = {
	{"closed", "Z", nullptr, $PRIVATE, $field(PosterOutputStream, closed)},
	{}
};

$MethodInfo _PosterOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PosterOutputStream, init$, void)},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PosterOutputStream, close, void), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PosterOutputStream, reset, void)},
	{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PosterOutputStream, write, void, int32_t)},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PosterOutputStream, write, void, $bytes*, int32_t, int32_t)},
	{}
};

$ClassInfo _PosterOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.http.PosterOutputStream",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_PosterOutputStream_FieldInfo_,
	_PosterOutputStream_MethodInfo_
};

$Object* allocate$PosterOutputStream($Class* clazz) {
	return $of($alloc(PosterOutputStream));
}

void PosterOutputStream::init$() {
	$ByteArrayOutputStream::init$(256);
}

void PosterOutputStream::write(int32_t b) {
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		$ByteArrayOutputStream::write(b);
	}
}

void PosterOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		$ByteArrayOutputStream::write(b, off, len);
	}
}

void PosterOutputStream::reset() {
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		$ByteArrayOutputStream::reset();
	}
}

void PosterOutputStream::close() {
	$synchronized(this) {
		this->closed = true;
		$ByteArrayOutputStream::close();
	}
}

PosterOutputStream::PosterOutputStream() {
}

$Class* PosterOutputStream::load$($String* name, bool initialize) {
	$loadClass(PosterOutputStream, name, initialize, &_PosterOutputStream_ClassInfo_, allocate$PosterOutputStream);
	return class$;
}

$Class* PosterOutputStream::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun
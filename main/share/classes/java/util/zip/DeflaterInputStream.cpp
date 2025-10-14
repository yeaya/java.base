#include <java/util/zip/DeflaterInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/zip/Deflater.h>
#include <jcpp.h>

#undef MAX_VALUE

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Deflater = ::java::util::zip::Deflater;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _DeflaterInputStream_FieldInfo_[] = {
	{"def", "Ljava/util/zip/Deflater;", nullptr, $PROTECTED | $FINAL, $field(DeflaterInputStream, def)},
	{"buf", "[B", nullptr, $PROTECTED | $FINAL, $field(DeflaterInputStream, buf)},
	{"rbuf", "[B", nullptr, $PRIVATE, $field(DeflaterInputStream, rbuf)},
	{"usesDefaultDeflater", "Z", nullptr, $PRIVATE, $field(DeflaterInputStream, usesDefaultDeflater)},
	{"reachEOF", "Z", nullptr, $PRIVATE, $field(DeflaterInputStream, reachEOF)},
	{}
};

$MethodInfo _DeflaterInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterInputStream::*)($InputStream*)>(&DeflaterInputStream::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/util/zip/Deflater;)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterInputStream::*)($InputStream*,$Deflater*)>(&DeflaterInputStream::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/util/zip/Deflater;I)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterInputStream::*)($InputStream*,$Deflater*,int32_t)>(&DeflaterInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(DeflaterInputStream::*)()>(&DeflaterInputStream::ensureOpen)), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DeflaterInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.DeflaterInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_DeflaterInputStream_FieldInfo_,
	_DeflaterInputStream_MethodInfo_
};

$Object* allocate$DeflaterInputStream($Class* clazz) {
	return $of($alloc(DeflaterInputStream));
}

void DeflaterInputStream::ensureOpen() {
	if (this->in == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

void DeflaterInputStream::init$($InputStream* in) {
	DeflaterInputStream::init$(in, in != nullptr ? $$new($Deflater) : ($Deflater*)nullptr);
	this->usesDefaultDeflater = true;
}

void DeflaterInputStream::init$($InputStream* in, $Deflater* defl) {
	DeflaterInputStream::init$(in, defl, 512);
}

void DeflaterInputStream::init$($InputStream* in, $Deflater* defl, int32_t bufLen) {
	$FilterInputStream::init$(in);
	$set(this, rbuf, $new($bytes, 1));
	this->usesDefaultDeflater = false;
	this->reachEOF = false;
	if (in == nullptr) {
		$throwNew($NullPointerException, "Null input"_s);
	}
	if (defl == nullptr) {
		$throwNew($NullPointerException, "Null deflater"_s);
	}
	if (bufLen < 1) {
		$throwNew($IllegalArgumentException, "Buffer size < 1"_s);
	}
	$set(this, def, defl);
	$set(this, buf, $new($bytes, bufLen));
}

void DeflaterInputStream::close() {
	if (this->in != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (this->usesDefaultDeflater) {
					$nc(this->def)->end();
				}
				$nc(this->in)->close();
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$set(this, in, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

int32_t DeflaterInputStream::read() {
	int32_t len = read(this->rbuf, 0, 1);
	if (len <= 0) {
		return -1;
	}
	return ((int32_t)($nc(this->rbuf)->get(0) & (uint32_t)255));
}

int32_t DeflaterInputStream::read($bytes* b, int32_t off, int32_t len) {
	ensureOpen();
	if (b == nullptr) {
		$throwNew($NullPointerException, "Null buffer for read"_s);
	} else if (off < 0 || len < 0 || len > $nc(b)->length - off) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return 0;
	}
	int32_t cnt = 0;
	while (len > 0 && !$nc(this->def)->finished()) {
		int32_t n = 0;
		if ($nc(this->def)->needsInput()) {
			n = $nc(this->in)->read(this->buf, 0, $nc(this->buf)->length);
			if (n < 0) {
				$nc(this->def)->finish();
			} else if (n > 0) {
				$nc(this->def)->setInput(this->buf, 0, n);
			}
		}
		n = $nc(this->def)->deflate(b, off, len);
		cnt += n;
		off += n;
		len -= n;
	}
	if (cnt == 0 && $nc(this->def)->finished()) {
		this->reachEOF = true;
		cnt = -1;
	}
	return cnt;
}

int64_t DeflaterInputStream::skip(int64_t n) {
	if (n < 0) {
		$throwNew($IllegalArgumentException, "negative skip length"_s);
	}
	ensureOpen();
	if ($nc(this->rbuf)->length < 512) {
		$set(this, rbuf, $new($bytes, 512));
	}
	int32_t total = (int32_t)$Math::min(n, (int64_t)$Integer::MAX_VALUE);
	int64_t cnt = 0;
	while (total > 0) {
		int32_t len = read(this->rbuf, 0, (total <= $nc(this->rbuf)->length ? total : $nc(this->rbuf)->length));
		if (len < 0) {
			break;
		}
		cnt += len;
		total -= len;
	}
	return cnt;
}

int32_t DeflaterInputStream::available() {
	ensureOpen();
	if (this->reachEOF) {
		return 0;
	}
	return 1;
}

bool DeflaterInputStream::markSupported() {
	return false;
}

void DeflaterInputStream::mark(int32_t limit) {
}

void DeflaterInputStream::reset() {
	$throwNew($IOException, "mark/reset not supported"_s);
}

DeflaterInputStream::DeflaterInputStream() {
}

$Class* DeflaterInputStream::load$($String* name, bool initialize) {
	$loadClass(DeflaterInputStream, name, initialize, &_DeflaterInputStream_ClassInfo_, allocate$DeflaterInputStream);
	return class$;
}

$Class* DeflaterInputStream::class$ = nullptr;

		} // zip
	} // util
} // java
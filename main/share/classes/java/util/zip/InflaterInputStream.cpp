#include <java/util/zip/InflaterInputStream.h>

#include <java/io/EOFException.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>
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
#include <java/util/zip/DataFormatException.h>
#include <java/util/zip/Inflater.h>
#include <java/util/zip/ZipException.h>
#include <jcpp.h>

#undef MAX_VALUE

using $EOFException = ::java::io::EOFException;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DataFormatException = ::java::util::zip::DataFormatException;
using $Inflater = ::java::util::zip::Inflater;
using $ZipException = ::java::util::zip::ZipException;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _InflaterInputStream_FieldInfo_[] = {
	{"inf", "Ljava/util/zip/Inflater;", nullptr, $PROTECTED, $field(InflaterInputStream, inf)},
	{"buf", "[B", nullptr, $PROTECTED, $field(InflaterInputStream, buf)},
	{"len", "I", nullptr, $PROTECTED, $field(InflaterInputStream, len)},
	{"closed", "Z", nullptr, $PRIVATE, $field(InflaterInputStream, closed)},
	{"reachEOF", "Z", nullptr, $PRIVATE, $field(InflaterInputStream, reachEOF)},
	{"usesDefaultInflater", "Z", nullptr, 0, $field(InflaterInputStream, usesDefaultInflater)},
	{"singleByteBuf", "[B", nullptr, $PRIVATE, $field(InflaterInputStream, singleByteBuf)},
	{"b", "[B", nullptr, $PRIVATE, $field(InflaterInputStream, b)},
	{}
};

$MethodInfo _InflaterInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/util/zip/Inflater;I)V", nullptr, $PUBLIC, $method(static_cast<void(InflaterInputStream::*)($InputStream*,$Inflater*,int32_t)>(&InflaterInputStream::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/util/zip/Inflater;)V", nullptr, $PUBLIC, $method(static_cast<void(InflaterInputStream::*)($InputStream*,$Inflater*)>(&InflaterInputStream::init$))},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(InflaterInputStream::*)($InputStream*)>(&InflaterInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(InflaterInputStream::*)()>(&InflaterInputStream::ensureOpen)), "java.io.IOException"},
	{"fill", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _InflaterInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.InflaterInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_InflaterInputStream_FieldInfo_,
	_InflaterInputStream_MethodInfo_
};

$Object* allocate$InflaterInputStream($Class* clazz) {
	return $of($alloc(InflaterInputStream));
}

void InflaterInputStream::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

void InflaterInputStream::init$($InputStream* in, $Inflater* inf, int32_t size) {
	$FilterInputStream::init$(in);
	this->closed = false;
	this->reachEOF = false;
	this->usesDefaultInflater = false;
	$set(this, singleByteBuf, $new($bytes, 1));
	$set(this, b, $new($bytes, 512));
	if (in == nullptr || inf == nullptr) {
		$throwNew($NullPointerException);
	} else if (size <= 0) {
		$throwNew($IllegalArgumentException, "buffer size <= 0"_s);
	}
	$set(this, inf, inf);
	$set(this, buf, $new($bytes, size));
}

void InflaterInputStream::init$($InputStream* in, $Inflater* inf) {
	InflaterInputStream::init$(in, inf, 512);
}

void InflaterInputStream::init$($InputStream* in) {
	InflaterInputStream::init$(in, in != nullptr ? $$new($Inflater) : ($Inflater*)nullptr);
	this->usesDefaultInflater = true;
}

int32_t InflaterInputStream::read() {
	ensureOpen();
	return read(this->singleByteBuf, 0, 1) == -1 ? -1 : $Byte::toUnsignedInt($nc(this->singleByteBuf)->get(0));
}

int32_t InflaterInputStream::read($bytes* b, int32_t off, int32_t len) {
	ensureOpen();
	if (b == nullptr) {
		$throwNew($NullPointerException);
	} else if (off < 0 || len < 0 || len > $nc(b)->length - off) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return 0;
	}
	try {
		int32_t n = 0;
		while ((n = $nc(this->inf)->inflate(b, off, len)) == 0) {
			bool var$0 = $nc(this->inf)->finished();
			if (var$0 || $nc(this->inf)->needsDictionary()) {
				this->reachEOF = true;
				return -1;
			}
			if ($nc(this->inf)->needsInput()) {
				fill();
			}
		}
		return n;
	} catch ($DataFormatException&) {
		$var($DataFormatException, e, $catch());
		$var($String, s, e->getMessage());
		$throwNew($ZipException, s != nullptr ? s : "Invalid ZLIB data format"_s);
	}
	$shouldNotReachHere();
}

int32_t InflaterInputStream::available() {
	ensureOpen();
	if (this->reachEOF) {
		return 0;
	} else if ($nc(this->inf)->finished()) {
		this->reachEOF = true;
		return 0;
	} else {
		return 1;
	}
}

int64_t InflaterInputStream::skip(int64_t n) {
	if (n < 0) {
		$throwNew($IllegalArgumentException, "negative skip length"_s);
	}
	ensureOpen();
	int32_t max = (int32_t)$Math::min(n, (int64_t)$Integer::MAX_VALUE);
	int32_t total = 0;
	while (total < max) {
		int32_t len = max - total;
		if (len > $nc(this->b)->length) {
			len = $nc(this->b)->length;
		}
		len = read(this->b, 0, len);
		if (len == -1) {
			this->reachEOF = true;
			break;
		}
		total += len;
	}
	return total;
}

void InflaterInputStream::close() {
	if (!this->closed) {
		if (this->usesDefaultInflater) {
			$nc(this->inf)->end();
		}
		$nc(this->in)->close();
		this->closed = true;
	}
}

void InflaterInputStream::fill() {
	ensureOpen();
	this->len = $nc(this->in)->read(this->buf, 0, $nc(this->buf)->length);
	if (this->len == -1) {
		$throwNew($EOFException, "Unexpected end of ZLIB input stream"_s);
	}
	$nc(this->inf)->setInput(this->buf, 0, this->len);
}

bool InflaterInputStream::markSupported() {
	return false;
}

void InflaterInputStream::mark(int32_t readlimit) {
	$synchronized(this) {
	}
}

void InflaterInputStream::reset() {
	$synchronized(this) {
		$throwNew($IOException, "mark/reset not supported"_s);
	}
}

InflaterInputStream::InflaterInputStream() {
}

$Class* InflaterInputStream::load$($String* name, bool initialize) {
	$loadClass(InflaterInputStream, name, initialize, &_InflaterInputStream_ClassInfo_, allocate$InflaterInputStream);
	return class$;
}

$Class* InflaterInputStream::class$ = nullptr;

		} // zip
	} // util
} // java
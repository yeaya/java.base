#include <java/util/zip/InflaterOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
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

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DataFormatException = ::java::util::zip::DataFormatException;
using $Inflater = ::java::util::zip::Inflater;
using $ZipException = ::java::util::zip::ZipException;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _InflaterOutputStream_FieldInfo_[] = {
	{"inf", "Ljava/util/zip/Inflater;", nullptr, $PROTECTED | $FINAL, $field(InflaterOutputStream, inf)},
	{"buf", "[B", nullptr, $PROTECTED | $FINAL, $field(InflaterOutputStream, buf)},
	{"wbuf", "[B", nullptr, $PRIVATE | $FINAL, $field(InflaterOutputStream, wbuf)},
	{"usesDefaultInflater", "Z", nullptr, $PRIVATE, $field(InflaterOutputStream, usesDefaultInflater)},
	{"closed", "Z", nullptr, $PRIVATE, $field(InflaterOutputStream, closed)},
	{}
};

$MethodInfo _InflaterOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(InflaterOutputStream::*)($OutputStream*)>(&InflaterOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Inflater;)V", nullptr, $PUBLIC, $method(static_cast<void(InflaterOutputStream::*)($OutputStream*,$Inflater*)>(&InflaterOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Inflater;I)V", nullptr, $PUBLIC, $method(static_cast<void(InflaterOutputStream::*)($OutputStream*,$Inflater*,int32_t)>(&InflaterOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(InflaterOutputStream::*)()>(&InflaterOutputStream::ensureOpen)), "java.io.IOException"},
	{"finish", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _InflaterOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.InflaterOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_InflaterOutputStream_FieldInfo_,
	_InflaterOutputStream_MethodInfo_
};

$Object* allocate$InflaterOutputStream($Class* clazz) {
	return $of($alloc(InflaterOutputStream));
}

void InflaterOutputStream::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

void InflaterOutputStream::init$($OutputStream* out) {
	InflaterOutputStream::init$(out, out != nullptr ? $$new($Inflater) : ($Inflater*)nullptr);
	this->usesDefaultInflater = true;
}

void InflaterOutputStream::init$($OutputStream* out, $Inflater* infl) {
	InflaterOutputStream::init$(out, infl, 512);
}

void InflaterOutputStream::init$($OutputStream* out, $Inflater* infl, int32_t bufLen) {
	$FilterOutputStream::init$(out);
	$set(this, wbuf, $new($bytes, 1));
	this->usesDefaultInflater = false;
	this->closed = false;
	if (out == nullptr) {
		$throwNew($NullPointerException, "Null output"_s);
	}
	if (infl == nullptr) {
		$throwNew($NullPointerException, "Null inflater"_s);
	}
	if (bufLen <= 0) {
		$throwNew($IllegalArgumentException, "Buffer size < 1"_s);
	}
	$set(this, inf, infl);
	$set(this, buf, $new($bytes, bufLen));
}

void InflaterOutputStream::close() {
	if (!this->closed) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				finish();
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(this->out)->close();
				this->closed = true;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void InflaterOutputStream::flush() {
	ensureOpen();
	if (!$nc(this->inf)->finished()) {
		try {
			while (true) {
				bool var$0 = !$nc(this->inf)->finished();
				if (!(var$0 && !$nc(this->inf)->needsInput())) {
					break;
				}
				{
					int32_t n = 0;
					n = $nc(this->inf)->inflate(this->buf, 0, $nc(this->buf)->length);
					if (n < 1) {
						break;
					}
					$nc(this->out)->write(this->buf, 0, n);
				}
			}
			$FilterOutputStream::flush();
		} catch ($DataFormatException&) {
			$var($DataFormatException, ex, $catch());
			$var($String, msg, ex->getMessage());
			if (msg == nullptr) {
				$assign(msg, "Invalid ZLIB data format"_s);
			}
			$throwNew($ZipException, msg);
		}
	}
}

void InflaterOutputStream::finish() {
	ensureOpen();
	flush();
	if (this->usesDefaultInflater) {
		$nc(this->inf)->end();
	}
}

void InflaterOutputStream::write(int32_t b) {
	$nc(this->wbuf)->set(0, (int8_t)b);
	write(this->wbuf, 0, 1);
}

void InflaterOutputStream::write($bytes* b, int32_t off, int32_t len) {
	ensureOpen();
	if (b == nullptr) {
		$throwNew($NullPointerException, "Null buffer for read"_s);
	} else if (off < 0 || len < 0 || len > b->length - off) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return;
	}
	try {
		for (;;) {
			int32_t n = 0;
			if ($nc(this->inf)->needsInput()) {
				$nc(this->inf)->setInput(b, off, len);
				len = 0;
			}
			do {
				n = $nc(this->inf)->inflate(this->buf, 0, $nc(this->buf)->length);
				if (n > 0) {
					$nc(this->out)->write(this->buf, 0, n);
				}
			} while (n > 0);
			if ($nc(this->inf)->needsDictionary()) {
				$throwNew($ZipException, "ZLIB dictionary missing"_s);
			}
			if ($nc(this->inf)->finished() || (len == 0)) {
				break;
			}
		}
	} catch ($DataFormatException&) {
		$var($DataFormatException, ex, $catch());
		$var($String, msg, ex->getMessage());
		if (msg == nullptr) {
			$assign(msg, "Invalid ZLIB data format"_s);
		}
		$throwNew($ZipException, msg);
	}
}

InflaterOutputStream::InflaterOutputStream() {
}

$Class* InflaterOutputStream::load$($String* name, bool initialize) {
	$loadClass(InflaterOutputStream, name, initialize, &_InflaterOutputStream_ClassInfo_, allocate$InflaterOutputStream);
	return class$;
}

$Class* InflaterOutputStream::class$ = nullptr;

		} // zip
	} // util
} // java
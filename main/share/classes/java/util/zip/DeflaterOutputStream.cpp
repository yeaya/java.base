#include <java/util/zip/DeflaterOutputStream.h>

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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/zip/Deflater.h>
#include <jcpp.h>

#undef SYNC_FLUSH

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Deflater = ::java::util::zip::Deflater;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _DeflaterOutputStream_FieldInfo_[] = {
	{"def", "Ljava/util/zip/Deflater;", nullptr, $PROTECTED, $field(DeflaterOutputStream, def)},
	{"buf", "[B", nullptr, $PROTECTED, $field(DeflaterOutputStream, buf)},
	{"closed", "Z", nullptr, $PRIVATE, $field(DeflaterOutputStream, closed)},
	{"syncFlush", "Z", nullptr, $PRIVATE | $FINAL, $field(DeflaterOutputStream, syncFlush)},
	{"usesDefaultDeflater", "Z", nullptr, 0, $field(DeflaterOutputStream, usesDefaultDeflater)},
	{}
};

$MethodInfo _DeflaterOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterOutputStream::*)($OutputStream*,$Deflater*,int32_t,bool)>(&DeflaterOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;I)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterOutputStream::*)($OutputStream*,$Deflater*,int32_t)>(&DeflaterOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterOutputStream::*)($OutputStream*,$Deflater*,bool)>(&DeflaterOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Deflater;)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterOutputStream::*)($OutputStream*,$Deflater*)>(&DeflaterOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterOutputStream::*)($OutputStream*,bool)>(&DeflaterOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(DeflaterOutputStream::*)($OutputStream*)>(&DeflaterOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"deflate", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"finish", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DeflaterOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.DeflaterOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_DeflaterOutputStream_FieldInfo_,
	_DeflaterOutputStream_MethodInfo_
};

$Object* allocate$DeflaterOutputStream($Class* clazz) {
	return $of($alloc(DeflaterOutputStream));
}

void DeflaterOutputStream::init$($OutputStream* out, $Deflater* def, int32_t size, bool syncFlush) {
	$FilterOutputStream::init$(out);
	this->closed = false;
	this->usesDefaultDeflater = false;
	if (out == nullptr || def == nullptr) {
		$throwNew($NullPointerException);
	} else if (size <= 0) {
		$throwNew($IllegalArgumentException, "buffer size <= 0"_s);
	}
	$set(this, def, def);
	$set(this, buf, $new($bytes, size));
	this->syncFlush = syncFlush;
}

void DeflaterOutputStream::init$($OutputStream* out, $Deflater* def, int32_t size) {
	DeflaterOutputStream::init$(out, def, size, false);
}

void DeflaterOutputStream::init$($OutputStream* out, $Deflater* def, bool syncFlush) {
	DeflaterOutputStream::init$(out, def, 512, syncFlush);
}

void DeflaterOutputStream::init$($OutputStream* out, $Deflater* def) {
	DeflaterOutputStream::init$(out, def, 512, false);
}

void DeflaterOutputStream::init$($OutputStream* out, bool syncFlush) {
	DeflaterOutputStream::init$(out, out != nullptr ? $$new($Deflater) : ($Deflater*)nullptr, 512, syncFlush);
	this->usesDefaultDeflater = true;
}

void DeflaterOutputStream::init$($OutputStream* out) {
	DeflaterOutputStream::init$(out, false);
	this->usesDefaultDeflater = true;
}

void DeflaterOutputStream::write(int32_t b) {
	$var($bytes, buf, $new($bytes, 1));
	buf->set(0, (int8_t)((int32_t)(b & (uint32_t)255)));
	write(buf, 0, 1);
}

void DeflaterOutputStream::write($bytes* b, int32_t off, int32_t len) {
	if ($nc(this->def)->finished()) {
		$throwNew($IOException, "write beyond end of stream"_s);
	}
	if ((((off | len) | (off + len)) | ($nc(b)->length - (off + len))) < 0) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return;
	}
	if (!$nc(this->def)->finished()) {
		$nc(this->def)->setInput(b, off, len);
		while (!$nc(this->def)->needsInput()) {
			deflate();
		}
	}
}

void DeflaterOutputStream::finish() {
	if (!$nc(this->def)->finished()) {
		$nc(this->def)->finish();
		while (!$nc(this->def)->finished()) {
			deflate();
		}
	}
}

void DeflaterOutputStream::close() {
	if (!this->closed) {
		finish();
		if (this->usesDefaultDeflater) {
			$nc(this->def)->end();
		}
		$nc(this->out)->close();
		this->closed = true;
	}
}

void DeflaterOutputStream::deflate() {
	int32_t len = $nc(this->def)->deflate(this->buf, 0, $nc(this->buf)->length);
	if (len > 0) {
		$nc(this->out)->write(this->buf, 0, len);
	}
}

void DeflaterOutputStream::flush() {
	if (this->syncFlush && !$nc(this->def)->finished()) {
		int32_t len = 0;
		while ((len = $nc(this->def)->deflate(this->buf, 0, $nc(this->buf)->length, $Deflater::SYNC_FLUSH)) > 0) {
			$nc(this->out)->write(this->buf, 0, len);
			if (len < $nc(this->buf)->length) {
				break;
			}
		}
	}
	$nc(this->out)->flush();
}

DeflaterOutputStream::DeflaterOutputStream() {
}

$Class* DeflaterOutputStream::load$($String* name, bool initialize) {
	$loadClass(DeflaterOutputStream, name, initialize, &_DeflaterOutputStream_ClassInfo_, allocate$DeflaterOutputStream);
	return class$;
}

$Class* DeflaterOutputStream::class$ = nullptr;

		} // zip
	} // util
} // java
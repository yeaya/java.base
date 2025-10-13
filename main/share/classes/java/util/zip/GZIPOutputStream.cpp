#include <java/util/zip/GZIPOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/zip/CRC32.h>
#include <java/util/zip/Deflater.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <jcpp.h>

#undef DEFAULT_COMPRESSION
#undef DEFLATED
#undef GZIP_MAGIC
#undef OS_UNKNOWN
#undef TRAILER_SIZE

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CRC32 = ::java::util::zip::CRC32;
using $Deflater = ::java::util::zip::Deflater;
using $DeflaterOutputStream = ::java::util::zip::DeflaterOutputStream;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _GZIPOutputStream_FieldInfo_[] = {
	{"crc", "Ljava/util/zip/CRC32;", nullptr, $PROTECTED, $field(GZIPOutputStream, crc)},
	{"GZIP_MAGIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GZIPOutputStream, GZIP_MAGIC)},
	{"TRAILER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GZIPOutputStream, TRAILER_SIZE)},
	{"OS_UNKNOWN", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GZIPOutputStream, OS_UNKNOWN)},
	{}
};

$MethodInfo _GZIPOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;I)V", nullptr, $PUBLIC, $method(static_cast<void(GZIPOutputStream::*)($OutputStream*,int32_t)>(&GZIPOutputStream::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/OutputStream;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(GZIPOutputStream::*)($OutputStream*,int32_t,bool)>(&GZIPOutputStream::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(GZIPOutputStream::*)($OutputStream*)>(&GZIPOutputStream::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(GZIPOutputStream::*)($OutputStream*,bool)>(&GZIPOutputStream::init$)), "java.io.IOException"},
	{"finish", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"writeHeader", "()V", nullptr, $PRIVATE, $method(static_cast<void(GZIPOutputStream::*)()>(&GZIPOutputStream::writeHeader)), "java.io.IOException"},
	{"writeInt", "(I[BI)V", nullptr, $PRIVATE, $method(static_cast<void(GZIPOutputStream::*)(int32_t,$bytes*,int32_t)>(&GZIPOutputStream::writeInt)), "java.io.IOException"},
	{"writeShort", "(I[BI)V", nullptr, $PRIVATE, $method(static_cast<void(GZIPOutputStream::*)(int32_t,$bytes*,int32_t)>(&GZIPOutputStream::writeShort)), "java.io.IOException"},
	{"writeTrailer", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(GZIPOutputStream::*)($bytes*,int32_t)>(&GZIPOutputStream::writeTrailer)), "java.io.IOException"},
	{}
};

$ClassInfo _GZIPOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.GZIPOutputStream",
	"java.util.zip.DeflaterOutputStream",
	nullptr,
	_GZIPOutputStream_FieldInfo_,
	_GZIPOutputStream_MethodInfo_
};

$Object* allocate$GZIPOutputStream($Class* clazz) {
	return $of($alloc(GZIPOutputStream));
}

void GZIPOutputStream::init$($OutputStream* out, int32_t size) {
	GZIPOutputStream::init$(out, size, false);
}

void GZIPOutputStream::init$($OutputStream* out, int32_t size, bool syncFlush) {
	$DeflaterOutputStream::init$(out, out != nullptr ? $$new($Deflater, $Deflater::DEFAULT_COMPRESSION, true) : ($Deflater*)nullptr, size, syncFlush);
	$set(this, crc, $new($CRC32));
	this->usesDefaultDeflater = true;
	writeHeader();
	$nc(this->crc)->reset();
}

void GZIPOutputStream::init$($OutputStream* out) {
	GZIPOutputStream::init$(out, 512, false);
}

void GZIPOutputStream::init$($OutputStream* out, bool syncFlush) {
	GZIPOutputStream::init$(out, 512, syncFlush);
}

void GZIPOutputStream::write($bytes* buf, int32_t off, int32_t len) {
	$synchronized(this) {
		$DeflaterOutputStream::write(buf, off, len);
		$nc(this->crc)->update(buf, off, len);
	}
}

void GZIPOutputStream::finish() {
	if (!$nc(this->def)->finished()) {
		$nc(this->def)->finish();
		while (!$nc(this->def)->finished()) {
			int32_t len = $nc(this->def)->deflate(this->buf, 0, $nc(this->buf)->length);
			if ($nc(this->def)->finished() && len <= $nc(this->buf)->length - GZIPOutputStream::TRAILER_SIZE) {
				writeTrailer(this->buf, len);
				len = len + GZIPOutputStream::TRAILER_SIZE;
				$nc(this->out)->write(this->buf, 0, len);
				return;
			}
			if (len > 0) {
				$nc(this->out)->write(this->buf, 0, len);
			}
		}
		$var($bytes, trailer, $new($bytes, GZIPOutputStream::TRAILER_SIZE));
		writeTrailer(trailer, 0);
		$nc(this->out)->write(trailer);
	}
}

void GZIPOutputStream::writeHeader() {
	$nc(this->out)->write($$new($bytes, {
		(int8_t)GZIPOutputStream::GZIP_MAGIC,
		(int8_t)(GZIPOutputStream::GZIP_MAGIC >> 8),
		(int8_t)$Deflater::DEFLATED,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		GZIPOutputStream::OS_UNKNOWN
	}));
}

void GZIPOutputStream::writeTrailer($bytes* buf, int32_t offset) {
	writeInt((int32_t)$nc(this->crc)->getValue(), buf, offset);
	writeInt($nc(this->def)->getTotalIn(), buf, offset + 4);
}

void GZIPOutputStream::writeInt(int32_t i, $bytes* buf, int32_t offset) {
	writeShort((int32_t)(i & (uint32_t)0x0000FFFF), buf, offset);
	writeShort((int32_t)((i >> 16) & (uint32_t)0x0000FFFF), buf, offset + 2);
}

void GZIPOutputStream::writeShort(int32_t s, $bytes* buf, int32_t offset) {
	$nc(buf)->set(offset, (int8_t)((int32_t)(s & (uint32_t)255)));
	buf->set(offset + 1, (int8_t)((int32_t)((s >> 8) & (uint32_t)255)));
}

GZIPOutputStream::GZIPOutputStream() {
}

$Class* GZIPOutputStream::load$($String* name, bool initialize) {
	$loadClass(GZIPOutputStream, name, initialize, &_GZIPOutputStream_ClassInfo_, allocate$GZIPOutputStream);
	return class$;
}

$Class* GZIPOutputStream::class$ = nullptr;

		} // zip
	} // util
} // java
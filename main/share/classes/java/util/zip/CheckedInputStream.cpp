#include <java/util/zip/CheckedInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/util/zip/Checksum.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Checksum = ::java::util::zip::Checksum;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _CheckedInputStream_FieldInfo_[] = {
	{"cksum", "Ljava/util/zip/Checksum;", nullptr, $PRIVATE, $field(CheckedInputStream, cksum)},
	{}
};

$MethodInfo _CheckedInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/util/zip/Checksum;)V", nullptr, $PUBLIC, $method(CheckedInputStream, init$, void, $InputStream*, $Checksum*)},
	{"getChecksum", "()Ljava/util/zip/Checksum;", nullptr, $PUBLIC, $virtualMethod(CheckedInputStream, getChecksum, $Checksum*)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(CheckedInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(CheckedInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(CheckedInputStream, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$ClassInfo _CheckedInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.CheckedInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_CheckedInputStream_FieldInfo_,
	_CheckedInputStream_MethodInfo_
};

$Object* allocate$CheckedInputStream($Class* clazz) {
	return $of($alloc(CheckedInputStream));
}

void CheckedInputStream::init$($InputStream* in, $Checksum* cksum) {
	$FilterInputStream::init$(in);
	$set(this, cksum, cksum);
}

int32_t CheckedInputStream::read() {
	int32_t b = $nc(this->in)->read();
	if (b != -1) {
		$nc(this->cksum)->update(b);
	}
	return b;
}

int32_t CheckedInputStream::read($bytes* buf, int32_t off, int32_t len) {
	len = $nc(this->in)->read(buf, off, len);
	if (len != -1) {
		$nc(this->cksum)->update(buf, off, len);
	}
	return len;
}

int64_t CheckedInputStream::skip(int64_t n) {
	$var($bytes, buf, $new($bytes, 512));
	int64_t total = 0;
	while (total < n) {
		int64_t len = n - total;
		len = read(buf, 0, len < buf->length ? (int32_t)len : buf->length);
		if (len == -1) {
			return total;
		}
		total += len;
	}
	return total;
}

$Checksum* CheckedInputStream::getChecksum() {
	return this->cksum;
}

CheckedInputStream::CheckedInputStream() {
}

$Class* CheckedInputStream::load$($String* name, bool initialize) {
	$loadClass(CheckedInputStream, name, initialize, &_CheckedInputStream_ClassInfo_, allocate$CheckedInputStream);
	return class$;
}

$Class* CheckedInputStream::class$ = nullptr;

		} // zip
	} // util
} // java
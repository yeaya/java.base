#include <java/util/zip/CheckedOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/zip/Checksum.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Checksum = ::java::util::zip::Checksum;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _CheckedOutputStream_FieldInfo_[] = {
	{"cksum", "Ljava/util/zip/Checksum;", nullptr, $PRIVATE, $field(CheckedOutputStream, cksum)},
	{}
};

$MethodInfo _CheckedOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Checksum;)V", nullptr, $PUBLIC, $method(static_cast<void(CheckedOutputStream::*)($OutputStream*,$Checksum*)>(&CheckedOutputStream::init$))},
	{"getChecksum", "()Ljava/util/zip/Checksum;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _CheckedOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.CheckedOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_CheckedOutputStream_FieldInfo_,
	_CheckedOutputStream_MethodInfo_
};

$Object* allocate$CheckedOutputStream($Class* clazz) {
	return $of($alloc(CheckedOutputStream));
}

void CheckedOutputStream::init$($OutputStream* out, $Checksum* cksum) {
	$FilterOutputStream::init$(out);
	$set(this, cksum, cksum);
}

void CheckedOutputStream::write(int32_t b) {
	$nc(this->out)->write(b);
	$nc(this->cksum)->update(b);
}

void CheckedOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->out)->write(b, off, len);
	$nc(this->cksum)->update(b, off, len);
}

$Checksum* CheckedOutputStream::getChecksum() {
	return this->cksum;
}

CheckedOutputStream::CheckedOutputStream() {
}

$Class* CheckedOutputStream::load$($String* name, bool initialize) {
	$loadClass(CheckedOutputStream, name, initialize, &_CheckedOutputStream_ClassInfo_, allocate$CheckedOutputStream);
	return class$;
}

$Class* CheckedOutputStream::class$ = nullptr;

		} // zip
	} // util
} // java
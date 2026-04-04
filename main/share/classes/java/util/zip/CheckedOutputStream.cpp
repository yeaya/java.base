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
	$FieldInfo fieldInfos$$[] = {
		{"cksum", "Ljava/util/zip/Checksum;", nullptr, $PRIVATE, $field(CheckedOutputStream, cksum)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;Ljava/util/zip/Checksum;)V", nullptr, $PUBLIC, $method(CheckedOutputStream, init$, void, $OutputStream*, $Checksum*)},
		{"getChecksum", "()Ljava/util/zip/Checksum;", nullptr, $PUBLIC, $virtualMethod(CheckedOutputStream, getChecksum, $Checksum*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(CheckedOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(CheckedOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.zip.CheckedOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CheckedOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CheckedOutputStream));
	});
	return class$;
}

$Class* CheckedOutputStream::class$ = nullptr;

		} // zip
	} // util
} // java
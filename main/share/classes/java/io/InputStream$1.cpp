#include <java/io/InputStream$1.h>

#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _InputStream$1_FieldInfo_[] = {
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(InputStream$1, closed)},
	{}
};

$MethodInfo _InputStream$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InputStream$1::*)()>(&InputStream$1::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(InputStream$1::*)()>(&InputStream$1::ensureOpen)), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readAllBytes", "()[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readNBytes", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readNBytes", "(I)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skipNBytes", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"transferTo", "(Ljava/io/OutputStream;)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _InputStream$1_EnclosingMethodInfo_ = {
	"java.io.InputStream",
	"nullInputStream",
	"()Ljava/io/InputStream;"
};

$InnerClassInfo _InputStream$1_InnerClassesInfo_[] = {
	{"java.io.InputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InputStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.InputStream$1",
	"java.io.InputStream",
	nullptr,
	_InputStream$1_FieldInfo_,
	_InputStream$1_MethodInfo_,
	nullptr,
	&_InputStream$1_EnclosingMethodInfo_,
	_InputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.InputStream"
};

$Object* allocate$InputStream$1($Class* clazz) {
	return $of($alloc(InputStream$1));
}

void InputStream$1::init$() {
	$InputStream::init$();
}

void InputStream$1::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

int32_t InputStream$1::available() {
	ensureOpen();
	return 0;
}

int32_t InputStream$1::read() {
	ensureOpen();
	return -1;
}

int32_t InputStream$1::read($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	if (len == 0) {
		return 0;
	}
	ensureOpen();
	return -1;
}

$bytes* InputStream$1::readAllBytes() {
	ensureOpen();
	return $new($bytes, 0);
}

int32_t InputStream$1::readNBytes($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	ensureOpen();
	return 0;
}

$bytes* InputStream$1::readNBytes(int32_t len) {
	if (len < 0) {
		$throwNew($IllegalArgumentException, "len < 0"_s);
	}
	ensureOpen();
	return $new($bytes, 0);
}

int64_t InputStream$1::skip(int64_t n) {
	ensureOpen();
	return 0;
}

void InputStream$1::skipNBytes(int64_t n) {
	ensureOpen();
	if (n > 0) {
		$throwNew($EOFException);
	}
}

int64_t InputStream$1::transferTo($OutputStream* out) {
	$Objects::requireNonNull(out);
	ensureOpen();
	return 0;
}

void InputStream$1::close() {
	this->closed = true;
}

InputStream$1::InputStream$1() {
}

$Class* InputStream$1::load$($String* name, bool initialize) {
	$loadClass(InputStream$1, name, initialize, &_InputStream$1_ClassInfo_, allocate$InputStream$1);
	return class$;
}

$Class* InputStream$1::class$ = nullptr;

	} // io
} // java
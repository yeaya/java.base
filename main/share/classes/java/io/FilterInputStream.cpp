#include <java/io/FilterInputStream.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _FilterInputStream_FieldInfo_[] = {
	{"in", "Ljava/io/InputStream;", nullptr, $PROTECTED | $VOLATILE, $field(FilterInputStream, in)},
	{}
};

$MethodInfo _FilterInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PROTECTED, $method(static_cast<void(FilterInputStream::*)($InputStream*)>(&FilterInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FilterInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.FilterInputStream",
	"java.io.InputStream",
	nullptr,
	_FilterInputStream_FieldInfo_,
	_FilterInputStream_MethodInfo_
};

$Object* allocate$FilterInputStream($Class* clazz) {
	return $of($alloc(FilterInputStream));
}

void FilterInputStream::init$($InputStream* in) {
	$InputStream::init$();
	$set(this, in, in);
}

int32_t FilterInputStream::read() {
	return $nc(this->in)->read();
}

int32_t FilterInputStream::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t FilterInputStream::read($bytes* b, int32_t off, int32_t len) {
	return $nc(this->in)->read(b, off, len);
}

int64_t FilterInputStream::skip(int64_t n) {
	return $nc(this->in)->skip(n);
}

int32_t FilterInputStream::available() {
	return $nc(this->in)->available();
}

void FilterInputStream::close() {
	$nc(this->in)->close();
}

void FilterInputStream::mark(int32_t readlimit) {
	$synchronized(this) {
		$nc(this->in)->mark(readlimit);
	}
}

void FilterInputStream::reset() {
	$synchronized(this) {
		$nc(this->in)->reset();
	}
}

bool FilterInputStream::markSupported() {
	return $nc(this->in)->markSupported();
}

FilterInputStream::FilterInputStream() {
}

$Class* FilterInputStream::load$($String* name, bool initialize) {
	$loadClass(FilterInputStream, name, initialize, &_FilterInputStream_ClassInfo_, allocate$FilterInputStream);
	return class$;
}

$Class* FilterInputStream::class$ = nullptr;

	} // io
} // java
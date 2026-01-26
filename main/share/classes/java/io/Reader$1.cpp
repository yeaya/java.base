#include <java/io/Reader$1.h>

#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/nio/CharBuffer.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _Reader$1_FieldInfo_[] = {
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Reader$1, closed)},
	{}
};

$MethodInfo _Reader$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Reader$1, init$, void)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Reader$1, close, void)},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(Reader$1, ensureOpen, void), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(Reader$1, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(Reader$1, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"read", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC, $virtualMethod(Reader$1, read, int32_t, $CharBuffer*), "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(Reader$1, ready, bool), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(Reader$1, skip, int64_t, int64_t), "java.io.IOException"},
	{"transferTo", "(Ljava/io/Writer;)J", nullptr, $PUBLIC, $virtualMethod(Reader$1, transferTo, int64_t, $Writer*), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Reader$1_EnclosingMethodInfo_ = {
	"java.io.Reader",
	"nullReader",
	"()Ljava/io/Reader;"
};

$InnerClassInfo _Reader$1_InnerClassesInfo_[] = {
	{"java.io.Reader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reader$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.Reader$1",
	"java.io.Reader",
	nullptr,
	_Reader$1_FieldInfo_,
	_Reader$1_MethodInfo_,
	nullptr,
	&_Reader$1_EnclosingMethodInfo_,
	_Reader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.Reader"
};

$Object* allocate$Reader$1($Class* clazz) {
	return $of($alloc(Reader$1));
}

void Reader$1::init$() {
	$Reader::init$();
}

void Reader$1::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

int32_t Reader$1::read() {
	ensureOpen();
	return -1;
}

int32_t Reader$1::read($chars* cbuf, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(cbuf)->length);
	ensureOpen();
	if (len == 0) {
		return 0;
	}
	return -1;
}

int32_t Reader$1::read($CharBuffer* target) {
	$Objects::requireNonNull(target);
	ensureOpen();
	if (target->hasRemaining()) {
		return -1;
	}
	return 0;
}

bool Reader$1::ready() {
	ensureOpen();
	return false;
}

int64_t Reader$1::skip(int64_t n) {
	ensureOpen();
	return 0;
}

int64_t Reader$1::transferTo($Writer* out) {
	$Objects::requireNonNull(out);
	ensureOpen();
	return 0;
}

void Reader$1::close() {
	this->closed = true;
}

Reader$1::Reader$1() {
}

$Class* Reader$1::load$($String* name, bool initialize) {
	$loadClass(Reader$1, name, initialize, &_Reader$1_ClassInfo_, allocate$Reader$1);
	return class$;
}

$Class* Reader$1::class$ = nullptr;

	} // io
} // java
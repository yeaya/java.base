#include <java/io/Writer$1.h>

#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _Writer$1_FieldInfo_[] = {
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Writer$1, closed)},
	{}
};

$MethodInfo _Writer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Writer$1::*)()>(&Writer$1::init$))},
	{"append", "(C)Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(Writer$1::*)()>(&Writer$1::ensureOpen)), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _Writer$1_EnclosingMethodInfo_ = {
	"java.io.Writer",
	"nullWriter",
	"()Ljava/io/Writer;"
};

$InnerClassInfo _Writer$1_InnerClassesInfo_[] = {
	{"java.io.Writer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Writer$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.Writer$1",
	"java.io.Writer",
	nullptr,
	_Writer$1_FieldInfo_,
	_Writer$1_MethodInfo_,
	nullptr,
	&_Writer$1_EnclosingMethodInfo_,
	_Writer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.Writer"
};

$Object* allocate$Writer$1($Class* clazz) {
	return $of($alloc(Writer$1));
}

void Writer$1::init$() {
	$Writer::init$();
}

void Writer$1::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

$Writer* Writer$1::append(char16_t c) {
	ensureOpen();
	return this;
}

$Writer* Writer$1::append($CharSequence* csq) {
	ensureOpen();
	return this;
}

$Writer* Writer$1::append($CharSequence* csq, int32_t start, int32_t end) {
	ensureOpen();
	if (csq != nullptr) {
		$Objects::checkFromToIndex(start, end, csq->length());
	}
	return this;
}

void Writer$1::write(int32_t c) {
	ensureOpen();
}

void Writer$1::write($chars* cbuf, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(cbuf)->length);
	ensureOpen();
}

void Writer$1::write($String* str) {
	$Objects::requireNonNull(str);
	ensureOpen();
}

void Writer$1::write($String* str, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(str)->length());
	ensureOpen();
}

void Writer$1::flush() {
	ensureOpen();
}

void Writer$1::close() {
	this->closed = true;
}

Writer$1::Writer$1() {
}

$Class* Writer$1::load$($String* name, bool initialize) {
	$loadClass(Writer$1, name, initialize, &_Writer$1_ClassInfo_, allocate$Writer$1);
	return class$;
}

$Class* Writer$1::class$ = nullptr;

	} // io
} // java
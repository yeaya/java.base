#include <java/io/OutputStream$1.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$FieldInfo _OutputStream$1_FieldInfo_[] = {
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(OutputStream$1, closed)},
	{}
};

$MethodInfo _OutputStream$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OutputStream$1::*)()>(&OutputStream$1::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(OutputStream$1::*)()>(&OutputStream$1::ensureOpen)), "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _OutputStream$1_EnclosingMethodInfo_ = {
	"java.io.OutputStream",
	"nullOutputStream",
	"()Ljava/io/OutputStream;"
};

$InnerClassInfo _OutputStream$1_InnerClassesInfo_[] = {
	{"java.io.OutputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OutputStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.OutputStream$1",
	"java.io.OutputStream",
	nullptr,
	_OutputStream$1_FieldInfo_,
	_OutputStream$1_MethodInfo_,
	nullptr,
	&_OutputStream$1_EnclosingMethodInfo_,
	_OutputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.OutputStream"
};

$Object* allocate$OutputStream$1($Class* clazz) {
	return $of($alloc(OutputStream$1));
}

void OutputStream$1::init$() {
	$OutputStream::init$();
}

void OutputStream$1::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

void OutputStream$1::write(int32_t b) {
	ensureOpen();
}

void OutputStream$1::write($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	ensureOpen();
}

void OutputStream$1::close() {
	this->closed = true;
}

OutputStream$1::OutputStream$1() {
}

$Class* OutputStream$1::load$($String* name, bool initialize) {
	$loadClass(OutputStream$1, name, initialize, &_OutputStream$1_ClassInfo_, allocate$OutputStream$1);
	return class$;
}

$Class* OutputStream$1::class$ = nullptr;

	} // io
} // java
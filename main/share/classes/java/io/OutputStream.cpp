#include <java/io/OutputStream.h>

#include <java/io/Closeable.h>
#include <java/io/OutputStream$1.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Closeable = ::java::io::Closeable;
using $OutputStream$1 = ::java::io::OutputStream$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$MethodInfo _OutputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(OutputStream, init$, void)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(OutputStream, close, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(OutputStream, flush, void), "java.io.IOException"},
	{"nullOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(OutputStream, nullOutputStream, OutputStream*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OutputStream, write, void, int32_t), "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, $virtualMethod(OutputStream, write, void, $bytes*), "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(OutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _OutputStream_InnerClassesInfo_[] = {
	{"java.io.OutputStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.io.OutputStream",
	"java.lang.Object",
	"java.io.Closeable,java.io.Flushable",
	nullptr,
	_OutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_OutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.OutputStream$1"
};

$Object* allocate$OutputStream($Class* clazz) {
	return $of($alloc(OutputStream));
}

int32_t OutputStream::hashCode() {
	 return this->$Closeable::hashCode();
}

bool OutputStream::equals(Object$* obj) {
	 return this->$Closeable::equals(obj);
}

$Object* OutputStream::clone() {
	 return this->$Closeable::clone();
}

$String* OutputStream::toString() {
	 return this->$Closeable::toString();
}

void OutputStream::finalize() {
	this->$Closeable::finalize();
}

void OutputStream::init$() {
}

OutputStream* OutputStream::nullOutputStream() {
	$init(OutputStream);
	return $new($OutputStream$1);
}

void OutputStream::write($bytes* b) {
	write(b, 0, $nc(b)->length);
}

void OutputStream::write($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	for (int32_t i = 0; i < len; ++i) {
		write((int32_t)$nc(b)->get(off + i));
	}
}

void OutputStream::flush() {
}

void OutputStream::close() {
}

OutputStream::OutputStream() {
}

$Class* OutputStream::load$($String* name, bool initialize) {
	$loadClass(OutputStream, name, initialize, &_OutputStream_ClassInfo_, allocate$OutputStream);
	return class$;
}

$Class* OutputStream::class$ = nullptr;

	} // io
} // java
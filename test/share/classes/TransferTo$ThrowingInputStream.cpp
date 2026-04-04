#include <TransferTo$ThrowingInputStream.h>
#include <TransferTo.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TransferTo$ThrowingInputStream::init$() {
	$InputStream::init$();
}

int32_t TransferTo$ThrowingInputStream::read($bytes* b) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

int32_t TransferTo$ThrowingInputStream::read($bytes* b, int32_t off, int32_t len) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

int64_t TransferTo$ThrowingInputStream::skip(int64_t n) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

int32_t TransferTo$ThrowingInputStream::available() {
	$throwNew($IOException);
	$shouldNotReachHere();
}

void TransferTo$ThrowingInputStream::close() {
	if (!this->closed) {
		this->closed = true;
		$throwNew($IOException);
	}
}

void TransferTo$ThrowingInputStream::reset() {
	$throwNew($IOException);
}

int32_t TransferTo$ThrowingInputStream::read() {
	$throwNew($IOException);
	$shouldNotReachHere();
}

TransferTo$ThrowingInputStream::TransferTo$ThrowingInputStream() {
}

$Class* TransferTo$ThrowingInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, 0, $field(TransferTo$ThrowingInputStream, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TransferTo$ThrowingInputStream, init$, void)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(TransferTo$ThrowingInputStream, available, int32_t), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(TransferTo$ThrowingInputStream, close, void), "java.io.IOException"},
		{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(TransferTo$ThrowingInputStream, read, int32_t, $bytes*), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(TransferTo$ThrowingInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(TransferTo$ThrowingInputStream, read, int32_t), "java.io.IOException"},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(TransferTo$ThrowingInputStream, reset, void), "java.io.IOException"},
		{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(TransferTo$ThrowingInputStream, skip, int64_t, int64_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TransferTo$ThrowingInputStream", "TransferTo", "ThrowingInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TransferTo$ThrowingInputStream",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TransferTo"
	};
	$loadClass(TransferTo$ThrowingInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferTo$ThrowingInputStream);
	});
	return class$;
}

$Class* TransferTo$ThrowingInputStream::class$ = nullptr;
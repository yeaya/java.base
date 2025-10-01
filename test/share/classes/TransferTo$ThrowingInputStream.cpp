#include <TransferTo$ThrowingInputStream.h>

#include <TransferTo.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TransferTo = ::TransferTo;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TransferTo$ThrowingInputStream_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(TransferTo$ThrowingInputStream, closed)},
	{}
};

$MethodInfo _TransferTo$ThrowingInputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TransferTo$ThrowingInputStream::*)()>(&TransferTo$ThrowingInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _TransferTo$ThrowingInputStream_InnerClassesInfo_[] = {
	{"TransferTo$ThrowingInputStream", "TransferTo", "ThrowingInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransferTo$ThrowingInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"TransferTo$ThrowingInputStream",
	"java.io.InputStream",
	nullptr,
	_TransferTo$ThrowingInputStream_FieldInfo_,
	_TransferTo$ThrowingInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_TransferTo$ThrowingInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TransferTo"
};

$Object* allocate$TransferTo$ThrowingInputStream($Class* clazz) {
	return $of($alloc(TransferTo$ThrowingInputStream));
}

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
	$loadClass(TransferTo$ThrowingInputStream, name, initialize, &_TransferTo$ThrowingInputStream_ClassInfo_, allocate$TransferTo$ThrowingInputStream);
	return class$;
}

$Class* TransferTo$ThrowingInputStream::class$ = nullptr;
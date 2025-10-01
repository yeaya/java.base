#include <FailingFlushAndClose$FailingCloseInputStream.h>

#include <FailingFlushAndClose.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FailingFlushAndClose = ::FailingFlushAndClose;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _FailingFlushAndClose$FailingCloseInputStream_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingCloseInputStream, closed)},
	{}
};

$MethodInfo _FailingFlushAndClose$FailingCloseInputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FailingFlushAndClose$FailingCloseInputStream::*)()>(&FailingFlushAndClose$FailingCloseInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _FailingFlushAndClose$FailingCloseInputStream_InnerClassesInfo_[] = {
	{"FailingFlushAndClose$FailingCloseInputStream", "FailingFlushAndClose", "FailingCloseInputStream", $STATIC},
	{}
};

$ClassInfo _FailingFlushAndClose$FailingCloseInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"FailingFlushAndClose$FailingCloseInputStream",
	"java.io.InputStream",
	nullptr,
	_FailingFlushAndClose$FailingCloseInputStream_FieldInfo_,
	_FailingFlushAndClose$FailingCloseInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_FailingFlushAndClose$FailingCloseInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FailingFlushAndClose"
};

$Object* allocate$FailingFlushAndClose$FailingCloseInputStream($Class* clazz) {
	return $of($alloc(FailingFlushAndClose$FailingCloseInputStream));
}

void FailingFlushAndClose$FailingCloseInputStream::init$() {
	$InputStream::init$();
}

int32_t FailingFlushAndClose$FailingCloseInputStream::read() {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("input stream is closed"_s);
	}
	return 1;
}

void FailingFlushAndClose$FailingCloseInputStream::close() {
	if (!this->closed) {
		this->closed = true;
		$throwNew($IOException, "close failed"_s);
	}
}

FailingFlushAndClose$FailingCloseInputStream::FailingFlushAndClose$FailingCloseInputStream() {
}

$Class* FailingFlushAndClose$FailingCloseInputStream::load$($String* name, bool initialize) {
	$loadClass(FailingFlushAndClose$FailingCloseInputStream, name, initialize, &_FailingFlushAndClose$FailingCloseInputStream_ClassInfo_, allocate$FailingFlushAndClose$FailingCloseInputStream);
	return class$;
}

$Class* FailingFlushAndClose$FailingCloseInputStream::class$ = nullptr;
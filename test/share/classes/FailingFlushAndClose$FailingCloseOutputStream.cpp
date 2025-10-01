#include <FailingFlushAndClose$FailingCloseOutputStream.h>

#include <FailingFlushAndClose.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
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
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _FailingFlushAndClose$FailingCloseOutputStream_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingCloseOutputStream, closed)},
	{}
};

$MethodInfo _FailingFlushAndClose$FailingCloseOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FailingFlushAndClose$FailingCloseOutputStream::*)()>(&FailingFlushAndClose$FailingCloseOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _FailingFlushAndClose$FailingCloseOutputStream_InnerClassesInfo_[] = {
	{"FailingFlushAndClose$FailingCloseOutputStream", "FailingFlushAndClose", "FailingCloseOutputStream", $STATIC},
	{}
};

$ClassInfo _FailingFlushAndClose$FailingCloseOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"FailingFlushAndClose$FailingCloseOutputStream",
	"java.io.OutputStream",
	nullptr,
	_FailingFlushAndClose$FailingCloseOutputStream_FieldInfo_,
	_FailingFlushAndClose$FailingCloseOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_FailingFlushAndClose$FailingCloseOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FailingFlushAndClose"
};

$Object* allocate$FailingFlushAndClose$FailingCloseOutputStream($Class* clazz) {
	return $of($alloc(FailingFlushAndClose$FailingCloseOutputStream));
}

void FailingFlushAndClose$FailingCloseOutputStream::init$() {
	$OutputStream::init$();
}

void FailingFlushAndClose$FailingCloseOutputStream::write(int32_t b) {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("output stream is closed"_s);
	}
}

void FailingFlushAndClose$FailingCloseOutputStream::flush() {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("output stream is closed"_s);
	}
}

void FailingFlushAndClose$FailingCloseOutputStream::close() {
	if (!this->closed) {
		this->closed = true;
		$throwNew($IOException, "close failed"_s);
	}
}

FailingFlushAndClose$FailingCloseOutputStream::FailingFlushAndClose$FailingCloseOutputStream() {
}

$Class* FailingFlushAndClose$FailingCloseOutputStream::load$($String* name, bool initialize) {
	$loadClass(FailingFlushAndClose$FailingCloseOutputStream, name, initialize, &_FailingFlushAndClose$FailingCloseOutputStream_ClassInfo_, allocate$FailingFlushAndClose$FailingCloseOutputStream);
	return class$;
}

$Class* FailingFlushAndClose$FailingCloseOutputStream::class$ = nullptr;
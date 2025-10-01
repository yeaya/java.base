#include <FailingFlushAndClose$FailingFlushOutputStream.h>

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

$FieldInfo _FailingFlushAndClose$FailingFlushOutputStream_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingFlushOutputStream, closed)},
	{}
};

$MethodInfo _FailingFlushAndClose$FailingFlushOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FailingFlushAndClose$FailingFlushOutputStream::*)()>(&FailingFlushAndClose$FailingFlushOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _FailingFlushAndClose$FailingFlushOutputStream_InnerClassesInfo_[] = {
	{"FailingFlushAndClose$FailingFlushOutputStream", "FailingFlushAndClose", "FailingFlushOutputStream", $STATIC},
	{}
};

$ClassInfo _FailingFlushAndClose$FailingFlushOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"FailingFlushAndClose$FailingFlushOutputStream",
	"java.io.OutputStream",
	nullptr,
	_FailingFlushAndClose$FailingFlushOutputStream_FieldInfo_,
	_FailingFlushAndClose$FailingFlushOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_FailingFlushAndClose$FailingFlushOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FailingFlushAndClose"
};

$Object* allocate$FailingFlushAndClose$FailingFlushOutputStream($Class* clazz) {
	return $of($alloc(FailingFlushAndClose$FailingFlushOutputStream));
}

void FailingFlushAndClose$FailingFlushOutputStream::init$() {
	$OutputStream::init$();
}

void FailingFlushAndClose$FailingFlushOutputStream::write(int32_t b) {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("output stream is closed"_s);
	}
}

void FailingFlushAndClose$FailingFlushOutputStream::flush() {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("output stream is closed"_s);
	} else {
		$throwNew($IOException, "flush failed"_s);
	}
}

void FailingFlushAndClose$FailingFlushOutputStream::close() {
	this->closed = true;
}

FailingFlushAndClose$FailingFlushOutputStream::FailingFlushAndClose$FailingFlushOutputStream() {
}

$Class* FailingFlushAndClose$FailingFlushOutputStream::load$($String* name, bool initialize) {
	$loadClass(FailingFlushAndClose$FailingFlushOutputStream, name, initialize, &_FailingFlushAndClose$FailingFlushOutputStream_ClassInfo_, allocate$FailingFlushAndClose$FailingFlushOutputStream);
	return class$;
}

$Class* FailingFlushAndClose$FailingFlushOutputStream::class$ = nullptr;
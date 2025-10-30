#include <FailingFlushAndClose$FailingCloseReader.h>

#include <FailingFlushAndClose.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $FailingFlushAndClose = ::FailingFlushAndClose;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _FailingFlushAndClose$FailingCloseReader_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingCloseReader, closed)},
	{}
};

$MethodInfo _FailingFlushAndClose$FailingCloseReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FailingFlushAndClose$FailingCloseReader::*)()>(&FailingFlushAndClose$FailingCloseReader::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _FailingFlushAndClose$FailingCloseReader_InnerClassesInfo_[] = {
	{"FailingFlushAndClose$FailingCloseReader", "FailingFlushAndClose", "FailingCloseReader", $STATIC},
	{}
};

$ClassInfo _FailingFlushAndClose$FailingCloseReader_ClassInfo_ = {
	$ACC_SUPER,
	"FailingFlushAndClose$FailingCloseReader",
	"java.io.Reader",
	nullptr,
	_FailingFlushAndClose$FailingCloseReader_FieldInfo_,
	_FailingFlushAndClose$FailingCloseReader_MethodInfo_,
	nullptr,
	nullptr,
	_FailingFlushAndClose$FailingCloseReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FailingFlushAndClose"
};

$Object* allocate$FailingFlushAndClose$FailingCloseReader($Class* clazz) {
	return $of($alloc(FailingFlushAndClose$FailingCloseReader));
}

void FailingFlushAndClose$FailingCloseReader::init$() {
	$Reader::init$();
}

int32_t FailingFlushAndClose$FailingCloseReader::read($chars* cbuf, int32_t off, int32_t len) {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("reader is closed"_s);
	}
	return 1;
}

void FailingFlushAndClose$FailingCloseReader::close() {
	if (!this->closed) {
		this->closed = true;
		$throwNew($IOException, "close failed"_s);
	}
}

FailingFlushAndClose$FailingCloseReader::FailingFlushAndClose$FailingCloseReader() {
}

$Class* FailingFlushAndClose$FailingCloseReader::load$($String* name, bool initialize) {
	$loadClass(FailingFlushAndClose$FailingCloseReader, name, initialize, &_FailingFlushAndClose$FailingCloseReader_ClassInfo_, allocate$FailingFlushAndClose$FailingCloseReader);
	return class$;
}

$Class* FailingFlushAndClose$FailingCloseReader::class$ = nullptr;
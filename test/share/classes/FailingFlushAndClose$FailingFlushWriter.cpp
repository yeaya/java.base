#include <FailingFlushAndClose$FailingFlushWriter.h>

#include <FailingFlushAndClose.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $FailingFlushAndClose = ::FailingFlushAndClose;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _FailingFlushAndClose$FailingFlushWriter_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingFlushWriter, closed)},
	{}
};

$MethodInfo _FailingFlushAndClose$FailingFlushWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FailingFlushAndClose$FailingFlushWriter::*)()>(&FailingFlushAndClose$FailingFlushWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _FailingFlushAndClose$FailingFlushWriter_InnerClassesInfo_[] = {
	{"FailingFlushAndClose$FailingFlushWriter", "FailingFlushAndClose", "FailingFlushWriter", $STATIC},
	{}
};

$ClassInfo _FailingFlushAndClose$FailingFlushWriter_ClassInfo_ = {
	$ACC_SUPER,
	"FailingFlushAndClose$FailingFlushWriter",
	"java.io.Writer",
	nullptr,
	_FailingFlushAndClose$FailingFlushWriter_FieldInfo_,
	_FailingFlushAndClose$FailingFlushWriter_MethodInfo_,
	nullptr,
	nullptr,
	_FailingFlushAndClose$FailingFlushWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FailingFlushAndClose"
};

$Object* allocate$FailingFlushAndClose$FailingFlushWriter($Class* clazz) {
	return $of($alloc(FailingFlushAndClose$FailingFlushWriter));
}

void FailingFlushAndClose$FailingFlushWriter::init$() {
	$Writer::init$();
}

void FailingFlushAndClose$FailingFlushWriter::write($chars* cbuf, int32_t off, int32_t len) {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("writer is closed"_s);
	}
}

void FailingFlushAndClose$FailingFlushWriter::flush() {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("writer is closed"_s);
	} else {
		$throwNew($IOException, "flush failed"_s);
	}
}

void FailingFlushAndClose$FailingFlushWriter::close() {
	if (!this->closed) {
		this->closed = true;
		$throwNew($IOException, "close failed"_s);
	}
}

FailingFlushAndClose$FailingFlushWriter::FailingFlushAndClose$FailingFlushWriter() {
}

$Class* FailingFlushAndClose$FailingFlushWriter::load$($String* name, bool initialize) {
	$loadClass(FailingFlushAndClose$FailingFlushWriter, name, initialize, &_FailingFlushAndClose$FailingFlushWriter_ClassInfo_, allocate$FailingFlushAndClose$FailingFlushWriter);
	return class$;
}

$Class* FailingFlushAndClose$FailingFlushWriter::class$ = nullptr;
#include <FailingFlushAndClose$FailingCloseWriter.h>

#include <FailingFlushAndClose.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
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

using $FailingFlushAndClose = ::FailingFlushAndClose;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _FailingFlushAndClose$FailingCloseWriter_FieldInfo_[] = {
	{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingCloseWriter, closed)},
	{}
};

$MethodInfo _FailingFlushAndClose$FailingCloseWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FailingFlushAndClose$FailingCloseWriter::*)()>(&FailingFlushAndClose$FailingCloseWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _FailingFlushAndClose$FailingCloseWriter_InnerClassesInfo_[] = {
	{"FailingFlushAndClose$FailingCloseWriter", "FailingFlushAndClose", "FailingCloseWriter", $STATIC},
	{}
};

$ClassInfo _FailingFlushAndClose$FailingCloseWriter_ClassInfo_ = {
	$ACC_SUPER,
	"FailingFlushAndClose$FailingCloseWriter",
	"java.io.Writer",
	nullptr,
	_FailingFlushAndClose$FailingCloseWriter_FieldInfo_,
	_FailingFlushAndClose$FailingCloseWriter_MethodInfo_,
	nullptr,
	nullptr,
	_FailingFlushAndClose$FailingCloseWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FailingFlushAndClose"
};

$Object* allocate$FailingFlushAndClose$FailingCloseWriter($Class* clazz) {
	return $of($alloc(FailingFlushAndClose$FailingCloseWriter));
}

void FailingFlushAndClose$FailingCloseWriter::init$() {
	$Writer::init$();
}

void FailingFlushAndClose$FailingCloseWriter::write($chars* cbuf, int32_t off, int32_t len) {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("writer is closed"_s);
	}
}

void FailingFlushAndClose$FailingCloseWriter::flush() {
	if (this->closed) {
		$FailingFlushAndClose::failWithIOE("writer is closed"_s);
	}
}

void FailingFlushAndClose$FailingCloseWriter::close() {
	if (!this->closed) {
		this->closed = true;
		$throwNew($IOException, "close failed"_s);
	}
}

FailingFlushAndClose$FailingCloseWriter::FailingFlushAndClose$FailingCloseWriter() {
}

$Class* FailingFlushAndClose$FailingCloseWriter::load$($String* name, bool initialize) {
	$loadClass(FailingFlushAndClose$FailingCloseWriter, name, initialize, &_FailingFlushAndClose$FailingCloseWriter_ClassInfo_, allocate$FailingFlushAndClose$FailingCloseWriter);
	return class$;
}

$Class* FailingFlushAndClose$FailingCloseWriter::class$ = nullptr;
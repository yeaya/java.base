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
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingFlushWriter, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FailingFlushAndClose$FailingFlushWriter, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingFlushWriter, close, void), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingFlushWriter, flush, void), "java.io.IOException"},
		{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingFlushWriter, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FailingFlushAndClose$FailingFlushWriter", "FailingFlushAndClose", "FailingFlushWriter", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FailingFlushAndClose$FailingFlushWriter",
		"java.io.Writer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FailingFlushAndClose"
	};
	$loadClass(FailingFlushAndClose$FailingFlushWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FailingFlushAndClose$FailingFlushWriter));
	});
	return class$;
}

$Class* FailingFlushAndClose$FailingFlushWriter::class$ = nullptr;
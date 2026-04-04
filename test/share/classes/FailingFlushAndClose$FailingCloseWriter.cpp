#include <FailingFlushAndClose$FailingCloseWriter.h>
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
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingCloseWriter, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FailingFlushAndClose$FailingCloseWriter, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseWriter, close, void), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseWriter, flush, void), "java.io.IOException"},
		{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseWriter, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FailingFlushAndClose$FailingCloseWriter", "FailingFlushAndClose", "FailingCloseWriter", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FailingFlushAndClose$FailingCloseWriter",
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
	$loadClass(FailingFlushAndClose$FailingCloseWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FailingFlushAndClose$FailingCloseWriter));
	});
	return class$;
}

$Class* FailingFlushAndClose$FailingCloseWriter::class$ = nullptr;
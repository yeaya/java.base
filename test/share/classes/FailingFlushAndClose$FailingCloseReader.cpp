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
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingCloseReader, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FailingFlushAndClose$FailingCloseReader, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseReader, close, void), "java.io.IOException"},
		{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FailingFlushAndClose$FailingCloseReader", "FailingFlushAndClose", "FailingCloseReader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FailingFlushAndClose$FailingCloseReader",
		"java.io.Reader",
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
	$loadClass(FailingFlushAndClose$FailingCloseReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FailingFlushAndClose$FailingCloseReader));
	});
	return class$;
}

$Class* FailingFlushAndClose$FailingCloseReader::class$ = nullptr;
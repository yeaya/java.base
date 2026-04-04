#include <FailingFlushAndClose$FailingCloseOutputStream.h>
#include <FailingFlushAndClose.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $FailingFlushAndClose = ::FailingFlushAndClose;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingCloseOutputStream, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FailingFlushAndClose$FailingCloseOutputStream, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseOutputStream, close, void), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseOutputStream, flush, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseOutputStream, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FailingFlushAndClose$FailingCloseOutputStream", "FailingFlushAndClose", "FailingCloseOutputStream", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FailingFlushAndClose$FailingCloseOutputStream",
		"java.io.OutputStream",
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
	$loadClass(FailingFlushAndClose$FailingCloseOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FailingFlushAndClose$FailingCloseOutputStream));
	});
	return class$;
}

$Class* FailingFlushAndClose$FailingCloseOutputStream::class$ = nullptr;
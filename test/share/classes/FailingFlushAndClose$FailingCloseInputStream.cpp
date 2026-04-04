#include <FailingFlushAndClose$FailingCloseInputStream.h>
#include <FailingFlushAndClose.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $FailingFlushAndClose = ::FailingFlushAndClose;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, 0, $field(FailingFlushAndClose$FailingCloseInputStream, closed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FailingFlushAndClose$FailingCloseInputStream, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseInputStream, close, void), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(FailingFlushAndClose$FailingCloseInputStream, read, int32_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FailingFlushAndClose$FailingCloseInputStream", "FailingFlushAndClose", "FailingCloseInputStream", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FailingFlushAndClose$FailingCloseInputStream",
		"java.io.InputStream",
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
	$loadClass(FailingFlushAndClose$FailingCloseInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FailingFlushAndClose$FailingCloseInputStream);
	});
	return class$;
}

$Class* FailingFlushAndClose$FailingCloseInputStream::class$ = nullptr;
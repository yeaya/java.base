#include <MyInputStream4CloseStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

#undef CLOSED
#undef OPEN

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MyInputStream4CloseStream::init$() {
	$InputStream::init$();
	this->status = MyInputStream4CloseStream::OPEN;
}

void MyInputStream4CloseStream::close() {
	if (this->status == MyInputStream4CloseStream::OPEN) {
		this->status = MyInputStream4CloseStream::CLOSED;
	} else {
		$throwNew($IOException);
	}
}

int32_t MyInputStream4CloseStream::read() {
	if (this->status == MyInputStream4CloseStream::CLOSED) {
		$throwNew($IOException);
	}
	return (int8_t)u'a';
}

MyInputStream4CloseStream::MyInputStream4CloseStream() {
}

$Class* MyInputStream4CloseStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OPEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MyInputStream4CloseStream, OPEN)},
		{"CLOSED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MyInputStream4CloseStream, CLOSED)},
		{"status", "I", nullptr, $PRIVATE, $field(MyInputStream4CloseStream, status)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MyInputStream4CloseStream, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(MyInputStream4CloseStream, close, void), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(MyInputStream4CloseStream, read, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyInputStream4CloseStream",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MyInputStream4CloseStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MyInputStream4CloseStream);
	});
	return class$;
}

$Class* MyInputStream4CloseStream::class$ = nullptr;
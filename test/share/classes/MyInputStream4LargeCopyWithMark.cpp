#include <MyInputStream4LargeCopyWithMark.h>
#include <java/io/InputStream.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

void MyInputStream4LargeCopyWithMark::init$(int64_t bytesLeft) {
	$InputStream::init$();
	this->bytesLeft = bytesLeft;
}

int32_t MyInputStream4LargeCopyWithMark::read() {
	return 0;
}

int32_t MyInputStream4LargeCopyWithMark::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t MyInputStream4LargeCopyWithMark::read($bytes* b, int32_t off, int32_t len) {
	if (this->bytesLeft <= 0) {
		return -1;
	}
	int64_t result = $Math::min(this->bytesLeft, (int64_t)len);
	this->bytesLeft -= result;
	return (int32_t)result;
}

int32_t MyInputStream4LargeCopyWithMark::available() {
	return (this->bytesLeft > 0) ? 1 : 0;
}

MyInputStream4LargeCopyWithMark::MyInputStream4LargeCopyWithMark() {
}

$Class* MyInputStream4LargeCopyWithMark::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bytesLeft", "J", nullptr, $PRIVATE, $field(MyInputStream4LargeCopyWithMark, bytesLeft)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(MyInputStream4LargeCopyWithMark, init$, void, int64_t)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(MyInputStream4LargeCopyWithMark, available, int32_t), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(MyInputStream4LargeCopyWithMark, read, int32_t), "java.io.IOException"},
		{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(MyInputStream4LargeCopyWithMark, read, int32_t, $bytes*), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(MyInputStream4LargeCopyWithMark, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyInputStream4LargeCopyWithMark",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MyInputStream4LargeCopyWithMark, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MyInputStream4LargeCopyWithMark);
	});
	return class$;
}

$Class* MyInputStream4LargeCopyWithMark::class$ = nullptr;
#include <MyInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MyInputStream::init$(int64_t endoffile) {
	$InputStream::init$();
	this->readctr = 0;
	this->endoffile = endoffile;
}

int32_t MyInputStream::read() {
	if (this->readctr == this->endoffile) {
		return -1;
	} else {
		++this->readctr;
		return 0;
	}
}

int32_t MyInputStream::available() {
	return 0;
}

MyInputStream::MyInputStream() {
}

$Class* MyInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"readctr", "I", nullptr, $PRIVATE, $field(MyInputStream, readctr)},
		{"endoffile", "J", nullptr, $PRIVATE, $field(MyInputStream, endoffile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(MyInputStream, init$, void, int64_t)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(MyInputStream, available, int32_t)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(MyInputStream, read, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyInputStream",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MyInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MyInputStream);
	});
	return class$;
}

$Class* MyInputStream::class$ = nullptr;
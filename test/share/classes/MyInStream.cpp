#include <MyInStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MyInStream::init$() {
	$InputStream::init$();
	$set(this, buf, $new($chars, {
		u'a',
		u'b',
		u'c',
		u'd',
		u'\n',
		u'e',
		u'f',
		u'\r',
		u'\n',
		u'g'
	}));
	this->ctr = 0;
}

int32_t MyInStream::read() {
	return ((this->ctr == 12) ? -1 : (int32_t)$nc(this->buf)->get(this->ctr++));
}

int32_t MyInStream::available() {
	return (10 - this->ctr);
}

MyInStream::MyInStream() {
}

$Class* MyInStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buf", "[C", nullptr, 0, $field(MyInStream, buf)},
		{"ctr", "I", nullptr, 0, $field(MyInStream, ctr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MyInStream, init$, void)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(MyInStream, available, int32_t)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(MyInStream, read, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyInStream",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MyInStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MyInStream);
	});
	return class$;
}

$Class* MyInStream::class$ = nullptr;
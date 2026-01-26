#include <Fill4BufferedInputStream$Source.h>

#include <Fill4BufferedInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

#undef MAX_VALUE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Fill4BufferedInputStream$Source_FieldInfo_[] = {
	{"shortFall", "I", nullptr, 0, $field(Fill4BufferedInputStream$Source, shortFall)},
	{"next", "B", nullptr, 0, $field(Fill4BufferedInputStream$Source, next)},
	{}
};

$MethodInfo _Fill4BufferedInputStream$Source_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(Fill4BufferedInputStream$Source, init$, void, int32_t)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(Fill4BufferedInputStream$Source, available, int32_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Fill4BufferedInputStream$Source, close, void), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(Fill4BufferedInputStream$Source, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(Fill4BufferedInputStream$Source, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _Fill4BufferedInputStream$Source_InnerClassesInfo_[] = {
	{"Fill4BufferedInputStream$Source", "Fill4BufferedInputStream", "Source", $STATIC},
	{}
};

$ClassInfo _Fill4BufferedInputStream$Source_ClassInfo_ = {
	$ACC_SUPER,
	"Fill4BufferedInputStream$Source",
	"java.io.InputStream",
	nullptr,
	_Fill4BufferedInputStream$Source_FieldInfo_,
	_Fill4BufferedInputStream$Source_MethodInfo_,
	nullptr,
	nullptr,
	_Fill4BufferedInputStream$Source_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Fill4BufferedInputStream"
};

$Object* allocate$Fill4BufferedInputStream$Source($Class* clazz) {
	return $of($alloc(Fill4BufferedInputStream$Source));
}

void Fill4BufferedInputStream$Source::init$(int32_t shortFall) {
	$InputStream::init$();
	this->next = (int8_t)0;
	this->shortFall = shortFall;
}

int32_t Fill4BufferedInputStream$Source::read() {
	return this->next++;
}

int32_t Fill4BufferedInputStream$Source::read($bytes* buf, int32_t off, int32_t len) {
	int32_t n = len - this->shortFall;
	for (int32_t i = off; i < n; ++i) {
		$nc(buf)->set(i, this->next++);
	}
	return n;
}

int32_t Fill4BufferedInputStream$Source::available() {
	return $Integer::MAX_VALUE;
}

void Fill4BufferedInputStream$Source::close() {
}

Fill4BufferedInputStream$Source::Fill4BufferedInputStream$Source() {
}

$Class* Fill4BufferedInputStream$Source::load$($String* name, bool initialize) {
	$loadClass(Fill4BufferedInputStream$Source, name, initialize, &_Fill4BufferedInputStream$Source_ClassInfo_, allocate$Fill4BufferedInputStream$Source);
	return class$;
}

$Class* Fill4BufferedInputStream$Source::class$ = nullptr;
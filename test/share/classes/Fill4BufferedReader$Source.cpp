#include <Fill4BufferedReader$Source.h>

#include <Fill4BufferedReader.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $Fill4BufferedReader = ::Fill4BufferedReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Fill4BufferedReader$Source_FieldInfo_[] = {
	{"shortFall", "I", nullptr, 0, $field(Fill4BufferedReader$Source, shortFall)},
	{"next", "C", nullptr, 0, $field(Fill4BufferedReader$Source, next)},
	{}
};

$MethodInfo _Fill4BufferedReader$Source_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(Fill4BufferedReader$Source::*)(int32_t)>(&Fill4BufferedReader$Source::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Fill4BufferedReader$Source_InnerClassesInfo_[] = {
	{"Fill4BufferedReader$Source", "Fill4BufferedReader", "Source", $STATIC},
	{}
};

$ClassInfo _Fill4BufferedReader$Source_ClassInfo_ = {
	$ACC_SUPER,
	"Fill4BufferedReader$Source",
	"java.io.Reader",
	nullptr,
	_Fill4BufferedReader$Source_FieldInfo_,
	_Fill4BufferedReader$Source_MethodInfo_,
	nullptr,
	nullptr,
	_Fill4BufferedReader$Source_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Fill4BufferedReader"
};

$Object* allocate$Fill4BufferedReader$Source($Class* clazz) {
	return $of($alloc(Fill4BufferedReader$Source));
}

void Fill4BufferedReader$Source::init$(int32_t shortFall) {
	$Reader::init$();
	this->next = (char16_t)0;
	this->shortFall = shortFall;
}

int32_t Fill4BufferedReader$Source::read($chars* cbuf, int32_t off, int32_t len) {
	int32_t n = len - this->shortFall;
	for (int32_t i = off; i < n; ++i) {
		$nc(cbuf)->set(i, this->next++);
	}
	return n;
}

bool Fill4BufferedReader$Source::ready() {
	return true;
}

void Fill4BufferedReader$Source::close() {
}

Fill4BufferedReader$Source::Fill4BufferedReader$Source() {
}

$Class* Fill4BufferedReader$Source::load$($String* name, bool initialize) {
	$loadClass(Fill4BufferedReader$Source, name, initialize, &_Fill4BufferedReader$Source_ClassInfo_, allocate$Fill4BufferedReader$Source);
	return class$;
}

$Class* Fill4BufferedReader$Source::class$ = nullptr;
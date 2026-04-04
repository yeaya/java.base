#include <Fill4BufferedReader$Source.h>
#include <Fill4BufferedReader.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Fill4BufferedReader$Source::init$(int32_t shortFall) {
	$Reader::init$();
	this->next = 0;
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
	$FieldInfo fieldInfos$$[] = {
		{"shortFall", "I", nullptr, 0, $field(Fill4BufferedReader$Source, shortFall)},
		{"next", "C", nullptr, 0, $field(Fill4BufferedReader$Source, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(Fill4BufferedReader$Source, init$, void, int32_t)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Fill4BufferedReader$Source, close, void), "java.io.IOException"},
		{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(Fill4BufferedReader$Source, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(Fill4BufferedReader$Source, ready, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Fill4BufferedReader$Source", "Fill4BufferedReader", "Source", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Fill4BufferedReader$Source",
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
		"Fill4BufferedReader"
	};
	$loadClass(Fill4BufferedReader$Source, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Fill4BufferedReader$Source));
	});
	return class$;
}

$Class* Fill4BufferedReader$Source::class$ = nullptr;
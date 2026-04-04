#include <MyOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MyOutputStream::init$() {
	$OutputStream::init$();
}

void MyOutputStream::write(int32_t b) {
}

MyOutputStream::MyOutputStream() {
}

$Class* MyOutputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MyOutputStream, init$, void)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(MyOutputStream, write, void, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"MyOutputStream",
		"java.io.OutputStream",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MyOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MyOutputStream));
	});
	return class$;
}

$Class* MyOutputStream::class$ = nullptr;
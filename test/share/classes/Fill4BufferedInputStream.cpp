#include <Fill4BufferedInputStream.h>
#include <Fill4BufferedInputStream$Source.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $Fill4BufferedInputStream$Source = ::Fill4BufferedInputStream$Source;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Fill4BufferedInputStream::init$() {
}

void Fill4BufferedInputStream::go(int32_t shortFall) {
	$useLocalObjectStack();
	$var($InputStream, r, $new($BufferedInputStream, $$new($Fill4BufferedInputStream$Source, shortFall), 10));
	$var($bytes, buf, $new($bytes, 8));
	int32_t n1 = r->read(buf);
	int32_t n2 = r->read(buf);
	$nc($System::err)->println($$str({"Shortfall "_s, $$str(shortFall), ": Read "_s, $$str(n1), ", then "_s, $$str(n2), " bytes"_s}));
	if (n1 != buf->length) {
		$throwNew($Exception, $$str({"First read returned "_s, $$str(n1)}));
	}
	if (n2 != buf->length) {
		$throwNew($Exception, $$str({"Second read returned "_s, $$str(n2)}));
	}
}

void Fill4BufferedInputStream::main($StringArray* args) {
	for (int32_t i = 0; i < 8; ++i) {
		go(i);
	}
}

Fill4BufferedInputStream::Fill4BufferedInputStream() {
}

$Class* Fill4BufferedInputStream::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Fill4BufferedInputStream, init$, void)},
		{"go", "(I)V", nullptr, $STATIC, $staticMethod(Fill4BufferedInputStream, go, void, int32_t), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Fill4BufferedInputStream, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Fill4BufferedInputStream$Source", "Fill4BufferedInputStream", "Source", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Fill4BufferedInputStream",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Fill4BufferedInputStream$Source"
	};
	$loadClass(Fill4BufferedInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Fill4BufferedInputStream);
	});
	return class$;
}

$Class* Fill4BufferedInputStream::class$ = nullptr;
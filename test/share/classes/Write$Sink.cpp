#include <Write$Sink.h>
#include <Write.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Write$Sink::init$() {
	$OutputStream::init$();
}

void Write$Sink::write(int32_t b) {
	$throwNew($RuntimeException, "Filter stream directly invoked write(int) method of underlying stream"_s);
}

Write$Sink::Write$Sink() {
}

$Class* Write$Sink::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Write$Sink, init$, void)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(Write$Sink, write, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Write$Sink", "Write", "Sink", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Write$Sink",
		"java.io.OutputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Write"
	};
	$loadClass(Write$Sink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Write$Sink));
	});
	return class$;
}

$Class* Write$Sink::class$ = nullptr;
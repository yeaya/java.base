#include <Write$F.h>
#include <Write.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Write$F::init$($OutputStream* o) {
	$FilterOutputStream::init$(o);
}

void Write$F::write(int32_t b) {
	$useLocalObjectStack();
	$nc($System::err)->println($$str({"Ignoring write of "_s, $$str(b)}));
}

Write$F::Write$F() {
}

$Class* Write$F::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(Write$F, init$, void, $OutputStream*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(Write$F, write, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Write$F", "Write", "F", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Write$F",
		"java.io.FilterOutputStream",
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
	$loadClass(Write$F, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Write$F));
	});
	return class$;
}

$Class* Write$F::class$ = nullptr;
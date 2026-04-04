#include <java/io/Console$1.h>
#include <java/io/Console.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $Console = ::java::io::Console;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void Console$1::init$($Console* this$0) {
	$set(this, this$0, this$0);
}

void Console$1::run() {
	try {
		if (this->this$0->restoreEcho) {
			$Console::echo(true);
		}
	} catch ($IOException& x) {
	}
}

Console$1::Console$1() {
}

$Class* Console$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/Console;", nullptr, $FINAL | $SYNTHETIC, $field(Console$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Console;)V", nullptr, 0, $method(Console$1, init$, void, $Console*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Console$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.Console",
		"installShutdownHook",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.Console$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.Console$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.Console"
	};
	$loadClass(Console$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Console$1);
	});
	return class$;
}

$Class* Console$1::class$ = nullptr;

	} // io
} // java
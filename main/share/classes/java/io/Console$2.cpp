#include <java/io/Console$2.h>
#include <java/io/Console.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

#undef CHARSET

using $Console = ::java::io::Console;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

namespace java {
	namespace io {

void Console$2::init$() {
}

$Console* Console$2::console() {
	if ($Console::istty()) {
		if ($Console::cons == nullptr) {
			$assignStatic($Console::cons, $new($Console));
		}
		return $Console::cons;
	}
	return nullptr;
}

$Charset* Console$2::charset() {
	$init($Console);
	return $Console::CHARSET;
}

Console$2::Console$2() {
}

$Class* Console$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Console$2, init$, void)},
		{"charset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC, $virtualMethod(Console$2, charset, $Charset*)},
		{"console", "()Ljava/io/Console;", nullptr, $PUBLIC, $virtualMethod(Console$2, console, $Console*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.Console",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.Console$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.Console$2",
		"java.lang.Object",
		"jdk.internal.access.JavaIOAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.Console"
	};
	$loadClass(Console$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Console$2);
	});
	return class$;
}

$Class* Console$2::class$ = nullptr;

	} // io
} // java
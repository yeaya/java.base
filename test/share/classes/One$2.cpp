#include <One$2.h>
#include <One$Test.h>
#include <One.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $One$Test = ::One$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void One$2::init$($bytes* in, $String* expect) {
	$One$Test::init$(in, expect);
}

void One$2::read() {
	$useLocalObjectStack();
	for (;;) {
		$var($chars, cb, $new($chars, 1));
		if ($nc(this->isr)->read(cb) == -1) {
			break;
		}
		$nc(this->sb)->append(cb->get(0));
	}
}

One$2::One$2() {
}

$Class* One$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BLjava/lang/String;)V", nullptr, 0, $method(One$2, init$, void, $bytes*, $String*), "java.lang.Exception"},
		{"read", "()V", nullptr, $PUBLIC, $virtualMethod(One$2, read, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"One",
		"test",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"One$2", nullptr, nullptr, 0},
		{"One$Test", "One", "Test", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"One$2",
		"One$Test",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"One"
	};
	$loadClass(One$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(One$2);
	});
	return class$;
}

$Class* One$2::class$ = nullptr;
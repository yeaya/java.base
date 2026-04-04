#include <One$1.h>
#include <One$Test.h>
#include <One.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $One$Test = ::One$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void One$1::init$($bytes* in, $String* expect) {
	$One$Test::init$(in, expect);
}

void One$1::read() {
	for (;;) {
		int32_t c = 0;
		if ((c = $nc(this->isr)->read()) == -1) {
			break;
		}
		$nc(this->sb)->append((char16_t)c);
	}
}

One$1::One$1() {
}

$Class* One$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BLjava/lang/String;)V", nullptr, 0, $method(One$1, init$, void, $bytes*, $String*), "java.lang.Exception"},
		{"read", "()V", nullptr, $PUBLIC, $virtualMethod(One$1, read, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"One",
		"test",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"One$1", nullptr, nullptr, 0},
		{"One$Test", "One", "Test", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"One$1",
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
	$loadClass(One$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(One$1);
	});
	return class$;
}

$Class* One$1::class$ = nullptr;
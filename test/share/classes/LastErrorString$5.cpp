#include <LastErrorString$5.h>
#include <LastErrorString$ClosedFISTest.h>
#include <LastErrorString.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $LastErrorString$ClosedFISTest = ::LastErrorString$ClosedFISTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$5::init$($String* name) {
	$LastErrorString$ClosedFISTest::init$(name);
}

void LastErrorString$5::run() {
	$nc(this->in)->read();
}

LastErrorString$5::LastErrorString$5() {
}

$Class* LastErrorString$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$5, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$5, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$5", nullptr, nullptr, 0},
		{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$5",
		"LastErrorString$ClosedFISTest",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LastErrorString"
	};
	$loadClass(LastErrorString$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$5);
	});
	return class$;
}

$Class* LastErrorString$5::class$ = nullptr;
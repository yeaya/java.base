#include <LastErrorString$10.h>
#include <LastErrorString$ClosedFOSTest.h>
#include <LastErrorString.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $LastErrorString$ClosedFOSTest = ::LastErrorString$ClosedFOSTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$10::init$($String* name) {
	$LastErrorString$ClosedFOSTest::init$(name);
}

void LastErrorString$10::run() {
	$nc(this->out)->write(10);
}

LastErrorString$10::LastErrorString$10() {
}

$Class* LastErrorString$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$10, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$10, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$10", nullptr, nullptr, 0},
		{"LastErrorString$ClosedFOSTest", "LastErrorString", "ClosedFOSTest", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$10",
		"LastErrorString$ClosedFOSTest",
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
	$loadClass(LastErrorString$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$10);
	});
	return class$;
}

$Class* LastErrorString$10::class$ = nullptr;
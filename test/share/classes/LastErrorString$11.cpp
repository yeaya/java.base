#include <LastErrorString$11.h>
#include <LastErrorString$ClosedFOSTest.h>
#include <LastErrorString.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $LastErrorString$ClosedFOSTest = ::LastErrorString$ClosedFOSTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$11::init$($String* name) {
	$LastErrorString$ClosedFOSTest::init$(name);
}

void LastErrorString$11::run() {
	$nc(this->out)->write($$new($bytes, {
		1,
		2,
		3
	}));
}

LastErrorString$11::LastErrorString$11() {
}

$Class* LastErrorString$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$11, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$11, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$11", nullptr, nullptr, 0},
		{"LastErrorString$ClosedFOSTest", "LastErrorString", "ClosedFOSTest", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$11",
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
	$loadClass(LastErrorString$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$11);
	});
	return class$;
}

$Class* LastErrorString$11::class$ = nullptr;
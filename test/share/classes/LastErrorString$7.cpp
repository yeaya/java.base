#include <LastErrorString$7.h>
#include <LastErrorString$ClosedFISTest.h>
#include <LastErrorString.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $LastErrorString$ClosedFISTest = ::LastErrorString$ClosedFISTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$7::init$($String* name) {
	$LastErrorString$ClosedFISTest::init$(name);
}

void LastErrorString$7::run() {
	$nc(this->in)->skip(10);
}

LastErrorString$7::LastErrorString$7() {
}

$Class* LastErrorString$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$7, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$7, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$7", nullptr, nullptr, 0},
		{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$7",
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
	$loadClass(LastErrorString$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$7);
	});
	return class$;
}

$Class* LastErrorString$7::class$ = nullptr;
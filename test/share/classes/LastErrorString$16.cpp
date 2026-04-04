#include <LastErrorString$16.h>
#include <LastErrorString$ClosedRAFTest.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $LastErrorString$ClosedRAFTest = ::LastErrorString$ClosedRAFTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$16::init$($String* name) {
	$LastErrorString$ClosedRAFTest::init$(name);
}

void LastErrorString$16::run() {
	$nc(this->raf)->setLength(0);
}

LastErrorString$16::LastErrorString$16() {
}

$Class* LastErrorString$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$16, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$16, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$16", nullptr, nullptr, 0},
		{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$16",
		"LastErrorString$ClosedRAFTest",
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
	$loadClass(LastErrorString$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$16);
	});
	return class$;
}

$Class* LastErrorString$16::class$ = nullptr;
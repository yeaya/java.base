#include <LastErrorString$17.h>
#include <LastErrorString$ClosedRAFTest.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $LastErrorString$ClosedRAFTest = ::LastErrorString$ClosedRAFTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$17::init$($String* name) {
	$LastErrorString$ClosedRAFTest::init$(name);
}

void LastErrorString$17::run() {
	$nc(this->raf)->readShort();
}

LastErrorString$17::LastErrorString$17() {
}

$Class* LastErrorString$17::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$17, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$17, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$17", nullptr, nullptr, 0},
		{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$17",
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
	$loadClass(LastErrorString$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$17);
	});
	return class$;
}

$Class* LastErrorString$17::class$ = nullptr;
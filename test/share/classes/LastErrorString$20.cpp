#include <LastErrorString$20.h>
#include <LastErrorString$ReadOnlyRAFTest.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $LastErrorString$ReadOnlyRAFTest = ::LastErrorString$ReadOnlyRAFTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$20::init$($String* name) {
	$LastErrorString$ReadOnlyRAFTest::init$(name);
}

void LastErrorString$20::run() {
	$nc(this->raf)->writeInt(10);
}

LastErrorString$20::LastErrorString$20() {
}

$Class* LastErrorString$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$20, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$20, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$20", nullptr, nullptr, 0},
		{"LastErrorString$ReadOnlyRAFTest", "LastErrorString", "ReadOnlyRAFTest", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$20",
		"LastErrorString$ReadOnlyRAFTest",
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
	$loadClass(LastErrorString$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$20);
	});
	return class$;
}

$Class* LastErrorString$20::class$ = nullptr;
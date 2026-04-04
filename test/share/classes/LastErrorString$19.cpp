#include <LastErrorString$19.h>
#include <LastErrorString$ReadOnlyRAFTest.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $LastErrorString$ReadOnlyRAFTest = ::LastErrorString$ReadOnlyRAFTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$19::init$($String* name) {
	$LastErrorString$ReadOnlyRAFTest::init$(name);
}

void LastErrorString$19::run() {
	$nc(this->raf)->writeShort(10);
}

LastErrorString$19::LastErrorString$19() {
}

$Class* LastErrorString$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$19, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$19, run, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"LastErrorString",
		"go",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$19", nullptr, nullptr, 0},
		{"LastErrorString$ReadOnlyRAFTest", "LastErrorString", "ReadOnlyRAFTest", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LastErrorString$19",
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
	$loadClass(LastErrorString$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$19);
	});
	return class$;
}

$Class* LastErrorString$19::class$ = nullptr;
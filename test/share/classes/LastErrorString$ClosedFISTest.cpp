#include <LastErrorString$ClosedFISTest.h>
#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

#undef READABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$ClosedFISTest::init$($String* name) {
	$LastErrorString$Test::init$($$str({"FileInputStream."_s, name}));
}

void LastErrorString$ClosedFISTest::go() {
	$init($LastErrorString);
	$set(this, in, $new($FileInputStream, $LastErrorString::READABLE_FILE));
	this->in->close();
	$LastErrorString$Test::go();
}

LastErrorString$ClosedFISTest::LastErrorString$ClosedFISTest() {
}

$Class* LastErrorString$ClosedFISTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"in", "Ljava/io/FileInputStream;", nullptr, 0, $field(LastErrorString$ClosedFISTest, in)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LastErrorString$ClosedFISTest, init$, void, $String*)},
		{"go", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$ClosedFISTest, go, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
		{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"LastErrorString$ClosedFISTest",
		"LastErrorString$Test",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LastErrorString"
	};
	$loadClass(LastErrorString$ClosedFISTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$ClosedFISTest);
	});
	return class$;
}

$Class* LastErrorString$ClosedFISTest::class$ = nullptr;
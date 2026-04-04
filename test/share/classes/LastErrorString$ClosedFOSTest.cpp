#include <LastErrorString$ClosedFOSTest.h>
#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

#undef WRITEABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LastErrorString$ClosedFOSTest::init$($String* name) {
	$LastErrorString$Test::init$($$str({"FileOutputStream."_s, name}));
}

void LastErrorString$ClosedFOSTest::go() {
	$init($LastErrorString);
	$set(this, out, $new($FileOutputStream, $LastErrorString::WRITEABLE_FILE));
	this->out->close();
	$LastErrorString$Test::go();
}

LastErrorString$ClosedFOSTest::LastErrorString$ClosedFOSTest() {
}

$Class* LastErrorString$ClosedFOSTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"out", "Ljava/io/FileOutputStream;", nullptr, 0, $field(LastErrorString$ClosedFOSTest, out)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LastErrorString$ClosedFOSTest, init$, void, $String*)},
		{"go", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$ClosedFOSTest, go, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LastErrorString$ClosedFOSTest", "LastErrorString", "ClosedFOSTest", $STATIC | $ABSTRACT},
		{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"LastErrorString$ClosedFOSTest",
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
	$loadClass(LastErrorString$ClosedFOSTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastErrorString$ClosedFOSTest);
	});
	return class$;
}

$Class* LastErrorString$ClosedFOSTest::class$ = nullptr;
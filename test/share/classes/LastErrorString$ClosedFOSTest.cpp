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

$FieldInfo _LastErrorString$ClosedFOSTest_FieldInfo_[] = {
	{"out", "Ljava/io/FileOutputStream;", nullptr, 0, $field(LastErrorString$ClosedFOSTest, out)},
	{}
};

$MethodInfo _LastErrorString$ClosedFOSTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LastErrorString$ClosedFOSTest::*)($String*)>(&LastErrorString$ClosedFOSTest::init$))},
	{"go", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _LastErrorString$ClosedFOSTest_InnerClassesInfo_[] = {
	{"LastErrorString$ClosedFOSTest", "LastErrorString", "ClosedFOSTest", $STATIC | $ABSTRACT},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$ClosedFOSTest_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"LastErrorString$ClosedFOSTest",
	"LastErrorString$Test",
	nullptr,
	_LastErrorString$ClosedFOSTest_FieldInfo_,
	_LastErrorString$ClosedFOSTest_MethodInfo_,
	nullptr,
	nullptr,
	_LastErrorString$ClosedFOSTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$ClosedFOSTest($Class* clazz) {
	return $of($alloc(LastErrorString$ClosedFOSTest));
}

void LastErrorString$ClosedFOSTest::init$($String* name) {
	$LastErrorString$Test::init$($$str({"FileOutputStream."_s, name}));
}

void LastErrorString$ClosedFOSTest::go() {
	$init($LastErrorString);
	$set(this, out, $new($FileOutputStream, $LastErrorString::WRITEABLE_FILE));
	$nc(this->out)->close();
	$LastErrorString$Test::go();
}

LastErrorString$ClosedFOSTest::LastErrorString$ClosedFOSTest() {
}

$Class* LastErrorString$ClosedFOSTest::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$ClosedFOSTest, name, initialize, &_LastErrorString$ClosedFOSTest_ClassInfo_, allocate$LastErrorString$ClosedFOSTest);
	return class$;
}

$Class* LastErrorString$ClosedFOSTest::class$ = nullptr;
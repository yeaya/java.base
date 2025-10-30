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

$FieldInfo _LastErrorString$ClosedFISTest_FieldInfo_[] = {
	{"in", "Ljava/io/FileInputStream;", nullptr, 0, $field(LastErrorString$ClosedFISTest, in)},
	{}
};

$MethodInfo _LastErrorString$ClosedFISTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LastErrorString$ClosedFISTest::*)($String*)>(&LastErrorString$ClosedFISTest::init$))},
	{"go", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _LastErrorString$ClosedFISTest_InnerClassesInfo_[] = {
	{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$ClosedFISTest_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"LastErrorString$ClosedFISTest",
	"LastErrorString$Test",
	nullptr,
	_LastErrorString$ClosedFISTest_FieldInfo_,
	_LastErrorString$ClosedFISTest_MethodInfo_,
	nullptr,
	nullptr,
	_LastErrorString$ClosedFISTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$ClosedFISTest($Class* clazz) {
	return $of($alloc(LastErrorString$ClosedFISTest));
}

void LastErrorString$ClosedFISTest::init$($String* name) {
	$LastErrorString$Test::init$($$str({"FileInputStream."_s, name}));
}

void LastErrorString$ClosedFISTest::go() {
	$init($LastErrorString);
	$set(this, in, $new($FileInputStream, $LastErrorString::READABLE_FILE));
	$nc(this->in)->close();
	$LastErrorString$Test::go();
}

LastErrorString$ClosedFISTest::LastErrorString$ClosedFISTest() {
}

$Class* LastErrorString$ClosedFISTest::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$ClosedFISTest, name, initialize, &_LastErrorString$ClosedFISTest_ClassInfo_, allocate$LastErrorString$ClosedFISTest);
	return class$;
}

$Class* LastErrorString$ClosedFISTest::class$ = nullptr;
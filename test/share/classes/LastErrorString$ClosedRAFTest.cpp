#include <LastErrorString$ClosedRAFTest.h>

#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef WRITEABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _LastErrorString$ClosedRAFTest_FieldInfo_[] = {
	{"raf", "Ljava/io/RandomAccessFile;", nullptr, 0, $field(LastErrorString$ClosedRAFTest, raf)},
	{}
};

$MethodInfo _LastErrorString$ClosedRAFTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LastErrorString$ClosedRAFTest::*)($String*)>(&LastErrorString$ClosedRAFTest::init$))},
	{"go", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _LastErrorString$ClosedRAFTest_InnerClassesInfo_[] = {
	{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$ClosedRAFTest_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"LastErrorString$ClosedRAFTest",
	"LastErrorString$Test",
	nullptr,
	_LastErrorString$ClosedRAFTest_FieldInfo_,
	_LastErrorString$ClosedRAFTest_MethodInfo_,
	nullptr,
	nullptr,
	_LastErrorString$ClosedRAFTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$ClosedRAFTest($Class* clazz) {
	return $of($alloc(LastErrorString$ClosedRAFTest));
}

void LastErrorString$ClosedRAFTest::init$($String* name) {
	$LastErrorString$Test::init$($$str({"RandomAccessFile."_s, name}));
}

void LastErrorString$ClosedRAFTest::go() {
	$init($LastErrorString);
	$set(this, raf, $new($RandomAccessFile, $LastErrorString::WRITEABLE_FILE, "rw"_s));
	$nc(this->raf)->close();
	$LastErrorString$Test::go();
}

LastErrorString$ClosedRAFTest::LastErrorString$ClosedRAFTest() {
}

$Class* LastErrorString$ClosedRAFTest::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$ClosedRAFTest, name, initialize, &_LastErrorString$ClosedRAFTest_ClassInfo_, allocate$LastErrorString$ClosedRAFTest);
	return class$;
}

$Class* LastErrorString$ClosedRAFTest::class$ = nullptr;
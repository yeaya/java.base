#include <LastErrorString$ReadOnlyRAFTest.h>

#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

#undef READABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _LastErrorString$ReadOnlyRAFTest_FieldInfo_[] = {
	{"raf", "Ljava/io/RandomAccessFile;", nullptr, 0, $field(LastErrorString$ReadOnlyRAFTest, raf)},
	{}
};

$MethodInfo _LastErrorString$ReadOnlyRAFTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LastErrorString$ReadOnlyRAFTest, init$, void, $String*)},
	{"go", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$ReadOnlyRAFTest, go, void), "java.io.IOException"},
	{}
};

$InnerClassInfo _LastErrorString$ReadOnlyRAFTest_InnerClassesInfo_[] = {
	{"LastErrorString$ReadOnlyRAFTest", "LastErrorString", "ReadOnlyRAFTest", $STATIC | $ABSTRACT},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$ReadOnlyRAFTest_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"LastErrorString$ReadOnlyRAFTest",
	"LastErrorString$Test",
	nullptr,
	_LastErrorString$ReadOnlyRAFTest_FieldInfo_,
	_LastErrorString$ReadOnlyRAFTest_MethodInfo_,
	nullptr,
	nullptr,
	_LastErrorString$ReadOnlyRAFTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$ReadOnlyRAFTest($Class* clazz) {
	return $of($alloc(LastErrorString$ReadOnlyRAFTest));
}

void LastErrorString$ReadOnlyRAFTest::init$($String* name) {
	$LastErrorString$Test::init$($$str({"RandomAccessFile."_s, name}));
}

void LastErrorString$ReadOnlyRAFTest::go() {
	$init($LastErrorString);
	$set(this, raf, $new($RandomAccessFile, $LastErrorString::READABLE_FILE, "r"_s));
	$LastErrorString$Test::go();
	$nc(this->raf)->close();
}

LastErrorString$ReadOnlyRAFTest::LastErrorString$ReadOnlyRAFTest() {
}

$Class* LastErrorString$ReadOnlyRAFTest::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$ReadOnlyRAFTest, name, initialize, &_LastErrorString$ReadOnlyRAFTest_ClassInfo_, allocate$LastErrorString$ReadOnlyRAFTest);
	return class$;
}

$Class* LastErrorString$ReadOnlyRAFTest::class$ = nullptr;
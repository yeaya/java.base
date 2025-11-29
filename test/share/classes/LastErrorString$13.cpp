#include <LastErrorString$13.h>

#include <LastErrorString$ClosedRAFTest.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $LastErrorString$ClosedRAFTest = ::LastErrorString$ClosedRAFTest;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$13_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$13::*)($String*)>(&LastErrorString$13::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$13_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$13_InnerClassesInfo_[] = {
	{"LastErrorString$13", nullptr, nullptr, 0},
	{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$13_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$13",
	"LastErrorString$ClosedRAFTest",
	nullptr,
	nullptr,
	_LastErrorString$13_MethodInfo_,
	nullptr,
	&_LastErrorString$13_EnclosingMethodInfo_,
	_LastErrorString$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$13($Class* clazz) {
	return $of($alloc(LastErrorString$13));
}

void LastErrorString$13::init$($String* name) {
	$LastErrorString$ClosedRAFTest::init$(name);
}

void LastErrorString$13::run() {
	$nc(this->raf)->getFilePointer();
}

LastErrorString$13::LastErrorString$13() {
}

$Class* LastErrorString$13::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$13, name, initialize, &_LastErrorString$13_ClassInfo_, allocate$LastErrorString$13);
	return class$;
}

$Class* LastErrorString$13::class$ = nullptr;
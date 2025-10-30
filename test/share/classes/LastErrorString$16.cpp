#include <LastErrorString$16.h>

#include <LastErrorString$ClosedRAFTest.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $LastErrorString = ::LastErrorString;
using $LastErrorString$ClosedRAFTest = ::LastErrorString$ClosedRAFTest;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$16_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$16::*)($String*)>(&LastErrorString$16::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$16_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$16_InnerClassesInfo_[] = {
	{"LastErrorString$16", nullptr, nullptr, 0},
	{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$16_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$16",
	"LastErrorString$ClosedRAFTest",
	nullptr,
	nullptr,
	_LastErrorString$16_MethodInfo_,
	nullptr,
	&_LastErrorString$16_EnclosingMethodInfo_,
	_LastErrorString$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$16($Class* clazz) {
	return $of($alloc(LastErrorString$16));
}

void LastErrorString$16::init$($String* name) {
	$LastErrorString$ClosedRAFTest::init$(name);
}

void LastErrorString$16::run() {
	$nc(this->raf)->setLength(0);
}

LastErrorString$16::LastErrorString$16() {
}

$Class* LastErrorString$16::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$16, name, initialize, &_LastErrorString$16_ClassInfo_, allocate$LastErrorString$16);
	return class$;
}

$Class* LastErrorString$16::class$ = nullptr;
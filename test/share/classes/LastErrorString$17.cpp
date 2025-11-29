#include <LastErrorString$17.h>

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

$MethodInfo _LastErrorString$17_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$17::*)($String*)>(&LastErrorString$17::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$17_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$17_InnerClassesInfo_[] = {
	{"LastErrorString$17", nullptr, nullptr, 0},
	{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$17_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$17",
	"LastErrorString$ClosedRAFTest",
	nullptr,
	nullptr,
	_LastErrorString$17_MethodInfo_,
	nullptr,
	&_LastErrorString$17_EnclosingMethodInfo_,
	_LastErrorString$17_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$17($Class* clazz) {
	return $of($alloc(LastErrorString$17));
}

void LastErrorString$17::init$($String* name) {
	$LastErrorString$ClosedRAFTest::init$(name);
}

void LastErrorString$17::run() {
	$nc(this->raf)->readShort();
}

LastErrorString$17::LastErrorString$17() {
}

$Class* LastErrorString$17::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$17, name, initialize, &_LastErrorString$17_ClassInfo_, allocate$LastErrorString$17);
	return class$;
}

$Class* LastErrorString$17::class$ = nullptr;
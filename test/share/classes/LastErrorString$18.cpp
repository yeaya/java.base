#include <LastErrorString$18.h>

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

$MethodInfo _LastErrorString$18_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$18::*)($String*)>(&LastErrorString$18::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$18_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$18_InnerClassesInfo_[] = {
	{"LastErrorString$18", nullptr, nullptr, 0},
	{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$18_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$18",
	"LastErrorString$ClosedRAFTest",
	nullptr,
	nullptr,
	_LastErrorString$18_MethodInfo_,
	nullptr,
	&_LastErrorString$18_EnclosingMethodInfo_,
	_LastErrorString$18_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$18($Class* clazz) {
	return $of($alloc(LastErrorString$18));
}

void LastErrorString$18::init$($String* name) {
	$LastErrorString$ClosedRAFTest::init$(name);
}

void LastErrorString$18::run() {
	$nc(this->raf)->readInt();
}

LastErrorString$18::LastErrorString$18() {
}

$Class* LastErrorString$18::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$18, name, initialize, &_LastErrorString$18_ClassInfo_, allocate$LastErrorString$18);
	return class$;
}

$Class* LastErrorString$18::class$ = nullptr;
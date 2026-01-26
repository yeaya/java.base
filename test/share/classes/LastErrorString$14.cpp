#include <LastErrorString$14.h>

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

$MethodInfo _LastErrorString$14_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$14, init$, void, $String*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$14, run, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$14_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$14_InnerClassesInfo_[] = {
	{"LastErrorString$14", nullptr, nullptr, 0},
	{"LastErrorString$ClosedRAFTest", "LastErrorString", "ClosedRAFTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$14_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$14",
	"LastErrorString$ClosedRAFTest",
	nullptr,
	nullptr,
	_LastErrorString$14_MethodInfo_,
	nullptr,
	&_LastErrorString$14_EnclosingMethodInfo_,
	_LastErrorString$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$14($Class* clazz) {
	return $of($alloc(LastErrorString$14));
}

void LastErrorString$14::init$($String* name) {
	$LastErrorString$ClosedRAFTest::init$(name);
}

void LastErrorString$14::run() {
	$nc(this->raf)->length();
}

LastErrorString$14::LastErrorString$14() {
}

$Class* LastErrorString$14::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$14, name, initialize, &_LastErrorString$14_ClassInfo_, allocate$LastErrorString$14);
	return class$;
}

$Class* LastErrorString$14::class$ = nullptr;
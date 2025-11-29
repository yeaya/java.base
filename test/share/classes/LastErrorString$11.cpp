#include <LastErrorString$11.h>

#include <LastErrorString$ClosedFOSTest.h>
#include <LastErrorString.h>
#include <java/io/FileOutputStream.h>
#include <jcpp.h>

using $LastErrorString$ClosedFOSTest = ::LastErrorString$ClosedFOSTest;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$11_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$11::*)($String*)>(&LastErrorString$11::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$11_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$11_InnerClassesInfo_[] = {
	{"LastErrorString$11", nullptr, nullptr, 0},
	{"LastErrorString$ClosedFOSTest", "LastErrorString", "ClosedFOSTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$11_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$11",
	"LastErrorString$ClosedFOSTest",
	nullptr,
	nullptr,
	_LastErrorString$11_MethodInfo_,
	nullptr,
	&_LastErrorString$11_EnclosingMethodInfo_,
	_LastErrorString$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$11($Class* clazz) {
	return $of($alloc(LastErrorString$11));
}

void LastErrorString$11::init$($String* name) {
	$LastErrorString$ClosedFOSTest::init$(name);
}

void LastErrorString$11::run() {
	$nc(this->out)->write($$new($bytes, {
		(int8_t)1,
		(int8_t)2,
		(int8_t)3
	}));
}

LastErrorString$11::LastErrorString$11() {
}

$Class* LastErrorString$11::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$11, name, initialize, &_LastErrorString$11_ClassInfo_, allocate$LastErrorString$11);
	return class$;
}

$Class* LastErrorString$11::class$ = nullptr;
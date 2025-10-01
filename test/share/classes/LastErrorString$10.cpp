#include <LastErrorString$10.h>

#include <LastErrorString$ClosedFOSTest.h>
#include <LastErrorString.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LastErrorString = ::LastErrorString;
using $LastErrorString$ClosedFOSTest = ::LastErrorString$ClosedFOSTest;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$10_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$10::*)($String*)>(&LastErrorString$10::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$10_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$10_InnerClassesInfo_[] = {
	{"LastErrorString$10", nullptr, nullptr, 0},
	{"LastErrorString$ClosedFOSTest", "LastErrorString", "ClosedFOSTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$10_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$10",
	"LastErrorString$ClosedFOSTest",
	nullptr,
	nullptr,
	_LastErrorString$10_MethodInfo_,
	nullptr,
	&_LastErrorString$10_EnclosingMethodInfo_,
	_LastErrorString$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$10($Class* clazz) {
	return $of($alloc(LastErrorString$10));
}

void LastErrorString$10::init$($String* name) {
	$LastErrorString$ClosedFOSTest::init$(name);
}

void LastErrorString$10::run() {
	$nc(this->out)->write(10);
}

LastErrorString$10::LastErrorString$10() {
}

$Class* LastErrorString$10::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$10, name, initialize, &_LastErrorString$10_ClassInfo_, allocate$LastErrorString$10);
	return class$;
}

$Class* LastErrorString$10::class$ = nullptr;
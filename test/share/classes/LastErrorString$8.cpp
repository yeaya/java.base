#include <LastErrorString$8.h>

#include <LastErrorString$ClosedFISTest.h>
#include <LastErrorString.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $LastErrorString$ClosedFISTest = ::LastErrorString$ClosedFISTest;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$8::*)($String*)>(&LastErrorString$8::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$8_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$8_InnerClassesInfo_[] = {
	{"LastErrorString$8", nullptr, nullptr, 0},
	{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$8_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$8",
	"LastErrorString$ClosedFISTest",
	nullptr,
	nullptr,
	_LastErrorString$8_MethodInfo_,
	nullptr,
	&_LastErrorString$8_EnclosingMethodInfo_,
	_LastErrorString$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$8($Class* clazz) {
	return $of($alloc(LastErrorString$8));
}

void LastErrorString$8::init$($String* name) {
	$LastErrorString$ClosedFISTest::init$(name);
}

void LastErrorString$8::run() {
	$nc(this->in)->available();
}

LastErrorString$8::LastErrorString$8() {
}

$Class* LastErrorString$8::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$8, name, initialize, &_LastErrorString$8_ClassInfo_, allocate$LastErrorString$8);
	return class$;
}

$Class* LastErrorString$8::class$ = nullptr;
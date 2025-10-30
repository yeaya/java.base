#include <LastErrorString$7.h>

#include <LastErrorString$ClosedFISTest.h>
#include <LastErrorString.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $LastErrorString = ::LastErrorString;
using $LastErrorString$ClosedFISTest = ::LastErrorString$ClosedFISTest;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$7::*)($String*)>(&LastErrorString$7::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$7_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$7_InnerClassesInfo_[] = {
	{"LastErrorString$7", nullptr, nullptr, 0},
	{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$7_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$7",
	"LastErrorString$ClosedFISTest",
	nullptr,
	nullptr,
	_LastErrorString$7_MethodInfo_,
	nullptr,
	&_LastErrorString$7_EnclosingMethodInfo_,
	_LastErrorString$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$7($Class* clazz) {
	return $of($alloc(LastErrorString$7));
}

void LastErrorString$7::init$($String* name) {
	$LastErrorString$ClosedFISTest::init$(name);
}

void LastErrorString$7::run() {
	$nc(this->in)->skip(10);
}

LastErrorString$7::LastErrorString$7() {
}

$Class* LastErrorString$7::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$7, name, initialize, &_LastErrorString$7_ClassInfo_, allocate$LastErrorString$7);
	return class$;
}

$Class* LastErrorString$7::class$ = nullptr;
#include <LastErrorString$5.h>

#include <LastErrorString$ClosedFISTest.h>
#include <LastErrorString.h>
#include <java/io/FileInputStream.h>
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
using $LastErrorString$ClosedFISTest = ::LastErrorString$ClosedFISTest;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$5::*)($String*)>(&LastErrorString$5::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$5_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$5_InnerClassesInfo_[] = {
	{"LastErrorString$5", nullptr, nullptr, 0},
	{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$5_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$5",
	"LastErrorString$ClosedFISTest",
	nullptr,
	nullptr,
	_LastErrorString$5_MethodInfo_,
	nullptr,
	&_LastErrorString$5_EnclosingMethodInfo_,
	_LastErrorString$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$5($Class* clazz) {
	return $of($alloc(LastErrorString$5));
}

void LastErrorString$5::init$($String* name) {
	$LastErrorString$ClosedFISTest::init$(name);
}

void LastErrorString$5::run() {
	$nc(this->in)->read();
}

LastErrorString$5::LastErrorString$5() {
}

$Class* LastErrorString$5::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$5, name, initialize, &_LastErrorString$5_ClassInfo_, allocate$LastErrorString$5);
	return class$;
}

$Class* LastErrorString$5::class$ = nullptr;
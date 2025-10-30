#include <LastErrorString$6.h>

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

$MethodInfo _LastErrorString$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$6::*)($String*)>(&LastErrorString$6::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$6_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$6_InnerClassesInfo_[] = {
	{"LastErrorString$6", nullptr, nullptr, 0},
	{"LastErrorString$ClosedFISTest", "LastErrorString", "ClosedFISTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$6_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$6",
	"LastErrorString$ClosedFISTest",
	nullptr,
	nullptr,
	_LastErrorString$6_MethodInfo_,
	nullptr,
	&_LastErrorString$6_EnclosingMethodInfo_,
	_LastErrorString$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$6($Class* clazz) {
	return $of($alloc(LastErrorString$6));
}

void LastErrorString$6::init$($String* name) {
	$LastErrorString$ClosedFISTest::init$(name);
}

void LastErrorString$6::run() {
	$var($bytes, b, $new($bytes, 10));
	$nc(this->in)->read(b);
}

LastErrorString$6::LastErrorString$6() {
}

$Class* LastErrorString$6::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$6, name, initialize, &_LastErrorString$6_ClassInfo_, allocate$LastErrorString$6);
	return class$;
}

$Class* LastErrorString$6::class$ = nullptr;
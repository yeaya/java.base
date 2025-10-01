#include <LastErrorString$20.h>

#include <LastErrorString$ReadOnlyRAFTest.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
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
using $LastErrorString$ReadOnlyRAFTest = ::LastErrorString$ReadOnlyRAFTest;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$20_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$20::*)($String*)>(&LastErrorString$20::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$20_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$20_InnerClassesInfo_[] = {
	{"LastErrorString$20", nullptr, nullptr, 0},
	{"LastErrorString$ReadOnlyRAFTest", "LastErrorString", "ReadOnlyRAFTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$20_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$20",
	"LastErrorString$ReadOnlyRAFTest",
	nullptr,
	nullptr,
	_LastErrorString$20_MethodInfo_,
	nullptr,
	&_LastErrorString$20_EnclosingMethodInfo_,
	_LastErrorString$20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$20($Class* clazz) {
	return $of($alloc(LastErrorString$20));
}

void LastErrorString$20::init$($String* name) {
	$LastErrorString$ReadOnlyRAFTest::init$(name);
}

void LastErrorString$20::run() {
	$nc(this->raf)->writeInt(10);
}

LastErrorString$20::LastErrorString$20() {
}

$Class* LastErrorString$20::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$20, name, initialize, &_LastErrorString$20_ClassInfo_, allocate$LastErrorString$20);
	return class$;
}

$Class* LastErrorString$20::class$ = nullptr;
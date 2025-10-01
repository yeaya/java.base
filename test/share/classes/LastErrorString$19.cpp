#include <LastErrorString$19.h>

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

$MethodInfo _LastErrorString$19_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$19::*)($String*)>(&LastErrorString$19::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$19_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$19_InnerClassesInfo_[] = {
	{"LastErrorString$19", nullptr, nullptr, 0},
	{"LastErrorString$ReadOnlyRAFTest", "LastErrorString", "ReadOnlyRAFTest", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$19_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$19",
	"LastErrorString$ReadOnlyRAFTest",
	nullptr,
	nullptr,
	_LastErrorString$19_MethodInfo_,
	nullptr,
	&_LastErrorString$19_EnclosingMethodInfo_,
	_LastErrorString$19_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$19($Class* clazz) {
	return $of($alloc(LastErrorString$19));
}

void LastErrorString$19::init$($String* name) {
	$LastErrorString$ReadOnlyRAFTest::init$(name);
}

void LastErrorString$19::run() {
	$nc(this->raf)->writeShort(10);
}

LastErrorString$19::LastErrorString$19() {
}

$Class* LastErrorString$19::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$19, name, initialize, &_LastErrorString$19_ClassInfo_, allocate$LastErrorString$19);
	return class$;
}

$Class* LastErrorString$19::class$ = nullptr;
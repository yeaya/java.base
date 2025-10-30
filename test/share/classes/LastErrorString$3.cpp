#include <LastErrorString$3.h>

#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

#undef UNREADABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$3::*)($String*)>(&LastErrorString$3::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$3_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$3_InnerClassesInfo_[] = {
	{"LastErrorString$3", nullptr, nullptr, 0},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$3_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$3",
	"LastErrorString$Test",
	nullptr,
	nullptr,
	_LastErrorString$3_MethodInfo_,
	nullptr,
	&_LastErrorString$3_EnclosingMethodInfo_,
	_LastErrorString$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$3($Class* clazz) {
	return $of($alloc(LastErrorString$3));
}

void LastErrorString$3::init$($String* name) {
	$LastErrorString$Test::init$(name);
}

void LastErrorString$3::run() {
	$init($LastErrorString);
	$new($FileInputStream, $LastErrorString::UNREADABLE_FILE);
}

LastErrorString$3::LastErrorString$3() {
}

$Class* LastErrorString$3::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$3, name, initialize, &_LastErrorString$3_ClassInfo_, allocate$LastErrorString$3);
	return class$;
}

$Class* LastErrorString$3::class$ = nullptr;
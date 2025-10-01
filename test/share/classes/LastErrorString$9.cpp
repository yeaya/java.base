#include <LastErrorString$9.h>

#include <LastErrorString$Test.h>
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

#undef UNREADABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$9_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$9::*)($String*)>(&LastErrorString$9::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$9_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$9_InnerClassesInfo_[] = {
	{"LastErrorString$9", nullptr, nullptr, 0},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$9_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$9",
	"LastErrorString$Test",
	nullptr,
	nullptr,
	_LastErrorString$9_MethodInfo_,
	nullptr,
	&_LastErrorString$9_EnclosingMethodInfo_,
	_LastErrorString$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$9($Class* clazz) {
	return $of($alloc(LastErrorString$9));
}

void LastErrorString$9::init$($String* name) {
	$LastErrorString$Test::init$(name);
}

void LastErrorString$9::run() {
	$init($LastErrorString);
	$new($FileOutputStream, $LastErrorString::UNREADABLE_FILE);
}

LastErrorString$9::LastErrorString$9() {
}

$Class* LastErrorString$9::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$9, name, initialize, &_LastErrorString$9_ClassInfo_, allocate$LastErrorString$9);
	return class$;
}

$Class* LastErrorString$9::class$ = nullptr;
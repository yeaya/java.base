#include <LastErrorString$1.h>

#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef UNWRITEABLE_DIR

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$1::*)($String*)>(&LastErrorString$1::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$1_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$1_InnerClassesInfo_[] = {
	{"LastErrorString$1", nullptr, nullptr, 0},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$1_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$1",
	"LastErrorString$Test",
	nullptr,
	nullptr,
	_LastErrorString$1_MethodInfo_,
	nullptr,
	&_LastErrorString$1_EnclosingMethodInfo_,
	_LastErrorString$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$1($Class* clazz) {
	return $of($alloc(LastErrorString$1));
}

void LastErrorString$1::init$($String* name) {
	$LastErrorString$Test::init$(name);
}

void LastErrorString$1::run() {
	$init($LastErrorString);
	$$new($File, $LastErrorString::UNWRITEABLE_DIR, "foo"_s)->createNewFile();
}

LastErrorString$1::LastErrorString$1() {
}

$Class* LastErrorString$1::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$1, name, initialize, &_LastErrorString$1_ClassInfo_, allocate$LastErrorString$1);
	return class$;
}

$Class* LastErrorString$1::class$ = nullptr;
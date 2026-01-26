#include <LastErrorString$2.h>

#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/File.h>
#include <jcpp.h>

#undef INVALID_PATH

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$2, init$, void, $String*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$2, run, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$2_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$2_InnerClassesInfo_[] = {
	{"LastErrorString$2", nullptr, nullptr, 0},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$2_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$2",
	"LastErrorString$Test",
	nullptr,
	nullptr,
	_LastErrorString$2_MethodInfo_,
	nullptr,
	&_LastErrorString$2_EnclosingMethodInfo_,
	_LastErrorString$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$2($Class* clazz) {
	return $of($alloc(LastErrorString$2));
}

void LastErrorString$2::init$($String* name) {
	$LastErrorString$Test::init$(name);
}

void LastErrorString$2::run() {
	$init($LastErrorString);
	$$new($File, $LastErrorString::INVALID_PATH)->getCanonicalPath();
}

LastErrorString$2::LastErrorString$2() {
}

$Class* LastErrorString$2::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$2, name, initialize, &_LastErrorString$2_ClassInfo_, allocate$LastErrorString$2);
	return class$;
}

$Class* LastErrorString$2::class$ = nullptr;
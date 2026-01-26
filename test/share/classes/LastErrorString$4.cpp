#include <LastErrorString$4.h>

#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/FileInputStream.h>
#include <jcpp.h>

using $LastErrorString$Test = ::LastErrorString$Test;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(LastErrorString$4, init$, void, $String*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LastErrorString$4, run, void), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$4_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$4_InnerClassesInfo_[] = {
	{"LastErrorString$4", nullptr, nullptr, 0},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$4_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$4",
	"LastErrorString$Test",
	nullptr,
	nullptr,
	_LastErrorString$4_MethodInfo_,
	nullptr,
	&_LastErrorString$4_EnclosingMethodInfo_,
	_LastErrorString$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$4($Class* clazz) {
	return $of($alloc(LastErrorString$4));
}

void LastErrorString$4::init$($String* name) {
	$LastErrorString$Test::init$(name);
}

void LastErrorString$4::run() {
	$new($FileInputStream, "."_s);
}

LastErrorString$4::LastErrorString$4() {
}

$Class* LastErrorString$4::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$4, name, initialize, &_LastErrorString$4_ClassInfo_, allocate$LastErrorString$4);
	return class$;
}

$Class* LastErrorString$4::class$ = nullptr;
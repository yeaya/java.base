#include <LastErrorString$12.h>

#include <LastErrorString$Test.h>
#include <LastErrorString.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

#undef UNREADABLE_FILE

using $LastErrorString = ::LastErrorString;
using $LastErrorString$Test = ::LastErrorString$Test;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LastErrorString$12_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LastErrorString$12::*)($String*)>(&LastErrorString$12::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _LastErrorString$12_EnclosingMethodInfo_ = {
	"LastErrorString",
	"go",
	"()V"
};

$InnerClassInfo _LastErrorString$12_InnerClassesInfo_[] = {
	{"LastErrorString$12", nullptr, nullptr, 0},
	{"LastErrorString$Test", "LastErrorString", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LastErrorString$12_ClassInfo_ = {
	$ACC_SUPER,
	"LastErrorString$12",
	"LastErrorString$Test",
	nullptr,
	nullptr,
	_LastErrorString$12_MethodInfo_,
	nullptr,
	&_LastErrorString$12_EnclosingMethodInfo_,
	_LastErrorString$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LastErrorString"
};

$Object* allocate$LastErrorString$12($Class* clazz) {
	return $of($alloc(LastErrorString$12));
}

void LastErrorString$12::init$($String* name) {
	$LastErrorString$Test::init$(name);
}

void LastErrorString$12::run() {
	$init($LastErrorString);
	$new($RandomAccessFile, $LastErrorString::UNREADABLE_FILE, "r"_s);
}

LastErrorString$12::LastErrorString$12() {
}

$Class* LastErrorString$12::load$($String* name, bool initialize) {
	$loadClass(LastErrorString$12, name, initialize, &_LastErrorString$12_ClassInfo_, allocate$LastErrorString$12);
	return class$;
}

$Class* LastErrorString$12::class$ = nullptr;
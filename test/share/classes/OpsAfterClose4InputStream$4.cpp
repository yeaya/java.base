#include <OpsAfterClose4InputStream$4.h>

#include <OpsAfterClose4InputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OpsAfterClose4InputStream = ::OpsAfterClose4InputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4InputStream$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4InputStream$4::*)($String*,int32_t)>(&OpsAfterClose4InputStream$4::init$))},
	{"check", "(Ljava/io/InputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4InputStream$4_EnclosingMethodInfo_ = {
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4InputStream$4_InnerClassesInfo_[] = {
	{"OpsAfterClose4InputStream$4", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4InputStream$4_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4InputStream$4",
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4InputStream$4_MethodInfo_,
	nullptr,
	&_OpsAfterClose4InputStream$4_EnclosingMethodInfo_,
	_OpsAfterClose4InputStream$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4InputStream"
};

$Object* allocate$OpsAfterClose4InputStream$4($Class* clazz) {
	return $of($alloc(OpsAfterClose4InputStream$4));
}

void OpsAfterClose4InputStream$4::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4InputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4InputStream$4::check($InputStream* is) {
	try {
		int32_t avail = $nc(is)->available();
		$init($System);
		$nc($System::out)->println($$str({"available() returns: "_s, $$str(avail)}));
		return false;
	} catch ($IOException&) {
		$var($IOException, io, $catch());
		$init($System);
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	$shouldNotReachHere();
}

OpsAfterClose4InputStream$4::OpsAfterClose4InputStream$4() {
}

$Class* OpsAfterClose4InputStream$4::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4InputStream$4, name, initialize, &_OpsAfterClose4InputStream$4_ClassInfo_, allocate$OpsAfterClose4InputStream$4);
	return class$;
}

$Class* OpsAfterClose4InputStream$4::class$ = nullptr;
#include <OpsAfterClose4FileOutputStream$1.h>

#include <OpsAfterClose4FileOutputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
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

using $OpsAfterClose4FileOutputStream = ::OpsAfterClose4FileOutputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4FileOutputStream$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4FileOutputStream$1::*)($String*,int32_t)>(&OpsAfterClose4FileOutputStream$1::init$))},
	{"check", "(Ljava/io/FileOutputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4FileOutputStream$1_EnclosingMethodInfo_ = {
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4FileOutputStream$1_InnerClassesInfo_[] = {
	{"OpsAfterClose4FileOutputStream$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4FileOutputStream$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4FileOutputStream$1",
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4FileOutputStream$1_MethodInfo_,
	nullptr,
	&_OpsAfterClose4FileOutputStream$1_EnclosingMethodInfo_,
	_OpsAfterClose4FileOutputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4FileOutputStream"
};

$Object* allocate$OpsAfterClose4FileOutputStream$1($Class* clazz) {
	return $of($alloc(OpsAfterClose4FileOutputStream$1));
}

void OpsAfterClose4FileOutputStream$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4FileOutputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4FileOutputStream$1::check($FileOutputStream* r) {
	try {
		$nc(r)->write(1);
	} catch ($IOException&) {
		$var($IOException, io, $catch());
		$init($System);
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4FileOutputStream$1::OpsAfterClose4FileOutputStream$1() {
}

$Class* OpsAfterClose4FileOutputStream$1::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4FileOutputStream$1, name, initialize, &_OpsAfterClose4FileOutputStream$1_ClassInfo_, allocate$OpsAfterClose4FileOutputStream$1);
	return class$;
}

$Class* OpsAfterClose4FileOutputStream$1::class$ = nullptr;
#include <OpsAfterClose4InputStream$1.h>

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

$MethodInfo _OpsAfterClose4InputStream$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4InputStream$1::*)($String*,int32_t)>(&OpsAfterClose4InputStream$1::init$))},
	{"check", "(Ljava/io/InputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4InputStream$1_EnclosingMethodInfo_ = {
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4InputStream$1_InnerClassesInfo_[] = {
	{"OpsAfterClose4InputStream$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4InputStream$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4InputStream$1",
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4InputStream$1_MethodInfo_,
	nullptr,
	&_OpsAfterClose4InputStream$1_EnclosingMethodInfo_,
	_OpsAfterClose4InputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4InputStream"
};

$Object* allocate$OpsAfterClose4InputStream$1($Class* clazz) {
	return $of($alloc(OpsAfterClose4InputStream$1));
}

void OpsAfterClose4InputStream$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4InputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4InputStream$1::check($InputStream* is) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t read = $nc(is)->read();
		$init($System);
		$nc($System::out)->println($$str({"read returns: "_s, $$str(read)}));
	} catch ($IOException&) {
		$var($IOException, io, $catch());
		$init($System);
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4InputStream$1::OpsAfterClose4InputStream$1() {
}

$Class* OpsAfterClose4InputStream$1::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4InputStream$1, name, initialize, &_OpsAfterClose4InputStream$1_ClassInfo_, allocate$OpsAfterClose4InputStream$1);
	return class$;
}

$Class* OpsAfterClose4InputStream$1::class$ = nullptr;
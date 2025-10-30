#include <OpsAfterClose4InputStream$5.h>

#include <OpsAfterClose4InputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $OpsAfterClose4InputStream = ::OpsAfterClose4InputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4InputStream$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4InputStream$5::*)($String*,int32_t)>(&OpsAfterClose4InputStream$5::init$))},
	{"check", "(Ljava/io/InputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4InputStream$5_EnclosingMethodInfo_ = {
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4InputStream$5_InnerClassesInfo_[] = {
	{"OpsAfterClose4InputStream$5", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4InputStream$5_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4InputStream$5",
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4InputStream$5_MethodInfo_,
	nullptr,
	&_OpsAfterClose4InputStream$5_EnclosingMethodInfo_,
	_OpsAfterClose4InputStream$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4InputStream"
};

$Object* allocate$OpsAfterClose4InputStream$5($Class* clazz) {
	return $of($alloc(OpsAfterClose4InputStream$5));
}

void OpsAfterClose4InputStream$5::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4InputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4InputStream$5::check($InputStream* is) {
	$useLocalCurrentObjectStackCache();
	try {
		int64_t skipped = $nc(is)->skip(1);
		$nc($System::out)->println($$str({"skip() returns: "_s, $$str(skipped)}));
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4InputStream$5::OpsAfterClose4InputStream$5() {
}

$Class* OpsAfterClose4InputStream$5::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4InputStream$5, name, initialize, &_OpsAfterClose4InputStream$5_ClassInfo_, allocate$OpsAfterClose4InputStream$5);
	return class$;
}

$Class* OpsAfterClose4InputStream$5::class$ = nullptr;
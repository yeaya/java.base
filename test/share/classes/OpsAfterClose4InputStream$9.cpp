#include <OpsAfterClose4InputStream$9.h>

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

$MethodInfo _OpsAfterClose4InputStream$9_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4InputStream$9::*)($String*,int32_t)>(&OpsAfterClose4InputStream$9::init$))},
	{"check", "(Ljava/io/InputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4InputStream$9_EnclosingMethodInfo_ = {
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4InputStream$9_InnerClassesInfo_[] = {
	{"OpsAfterClose4InputStream$9", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4InputStream$9_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4InputStream$9",
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4InputStream$9_MethodInfo_,
	nullptr,
	&_OpsAfterClose4InputStream$9_EnclosingMethodInfo_,
	_OpsAfterClose4InputStream$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4InputStream"
};

$Object* allocate$OpsAfterClose4InputStream$9($Class* clazz) {
	return $of($alloc(OpsAfterClose4InputStream$9));
}

void OpsAfterClose4InputStream$9::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4InputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4InputStream$9::check($InputStream* is) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(is)->close();
		return true;
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	$shouldNotReachHere();
}

OpsAfterClose4InputStream$9::OpsAfterClose4InputStream$9() {
}

$Class* OpsAfterClose4InputStream$9::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4InputStream$9, name, initialize, &_OpsAfterClose4InputStream$9_ClassInfo_, allocate$OpsAfterClose4InputStream$9);
	return class$;
}

$Class* OpsAfterClose4InputStream$9::class$ = nullptr;
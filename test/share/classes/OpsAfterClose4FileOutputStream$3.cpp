#include <OpsAfterClose4FileOutputStream$3.h>

#include <OpsAfterClose4FileOutputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $OpsAfterClose4FileOutputStream = ::OpsAfterClose4FileOutputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4FileOutputStream$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4FileOutputStream$3::*)($String*,int32_t)>(&OpsAfterClose4FileOutputStream$3::init$))},
	{"check", "(Ljava/io/FileOutputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4FileOutputStream$3_EnclosingMethodInfo_ = {
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4FileOutputStream$3_InnerClassesInfo_[] = {
	{"OpsAfterClose4FileOutputStream$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4FileOutputStream$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4FileOutputStream$3",
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4FileOutputStream$3_MethodInfo_,
	nullptr,
	&_OpsAfterClose4FileOutputStream$3_EnclosingMethodInfo_,
	_OpsAfterClose4FileOutputStream$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4FileOutputStream"
};

$Object* allocate$OpsAfterClose4FileOutputStream$3($Class* clazz) {
	return $of($alloc(OpsAfterClose4FileOutputStream$3));
}

void OpsAfterClose4FileOutputStream$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4FileOutputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4FileOutputStream$3::check($FileOutputStream* r) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, buf, $new($bytes, 2));
		int32_t len = 1;
		$nc(r)->write(buf, 0, len);
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4FileOutputStream$3::OpsAfterClose4FileOutputStream$3() {
}

$Class* OpsAfterClose4FileOutputStream$3::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4FileOutputStream$3, name, initialize, &_OpsAfterClose4FileOutputStream$3_ClassInfo_, allocate$OpsAfterClose4FileOutputStream$3);
	return class$;
}

$Class* OpsAfterClose4FileOutputStream$3::class$ = nullptr;
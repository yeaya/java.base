#include <OpsAfterClose4FileOutputStream$6.h>

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

$MethodInfo _OpsAfterClose4FileOutputStream$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4FileOutputStream$6::*)($String*,int32_t)>(&OpsAfterClose4FileOutputStream$6::init$))},
	{"check", "(Ljava/io/FileOutputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4FileOutputStream$6_EnclosingMethodInfo_ = {
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4FileOutputStream$6_InnerClassesInfo_[] = {
	{"OpsAfterClose4FileOutputStream$6", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4FileOutputStream$6_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4FileOutputStream$6",
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4FileOutputStream$6_MethodInfo_,
	nullptr,
	&_OpsAfterClose4FileOutputStream$6_EnclosingMethodInfo_,
	_OpsAfterClose4FileOutputStream$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4FileOutputStream"
};

$Object* allocate$OpsAfterClose4FileOutputStream$6($Class* clazz) {
	return $of($alloc(OpsAfterClose4FileOutputStream$6));
}

void OpsAfterClose4FileOutputStream$6::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4FileOutputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4FileOutputStream$6::check($FileOutputStream* r) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(r)->close();
		return true;
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	$shouldNotReachHere();
}

OpsAfterClose4FileOutputStream$6::OpsAfterClose4FileOutputStream$6() {
}

$Class* OpsAfterClose4FileOutputStream$6::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4FileOutputStream$6, name, initialize, &_OpsAfterClose4FileOutputStream$6_ClassInfo_, allocate$OpsAfterClose4FileOutputStream$6);
	return class$;
}

$Class* OpsAfterClose4FileOutputStream$6::class$ = nullptr;
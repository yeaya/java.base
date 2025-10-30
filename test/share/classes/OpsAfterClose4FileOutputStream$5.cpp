#include <OpsAfterClose4FileOutputStream$5.h>

#include <OpsAfterClose4FileOutputStream.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $OpsAfterClose4FileOutputStream = ::OpsAfterClose4FileOutputStream;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4FileOutputStream$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4FileOutputStream$5::*)($String*,int32_t)>(&OpsAfterClose4FileOutputStream$5::init$))},
	{"check", "(Ljava/io/FileOutputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4FileOutputStream$5_EnclosingMethodInfo_ = {
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4FileOutputStream$5_InnerClassesInfo_[] = {
	{"OpsAfterClose4FileOutputStream$5", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4FileOutputStream$5_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4FileOutputStream$5",
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4FileOutputStream$5_MethodInfo_,
	nullptr,
	&_OpsAfterClose4FileOutputStream$5_EnclosingMethodInfo_,
	_OpsAfterClose4FileOutputStream$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4FileOutputStream"
};

$Object* allocate$OpsAfterClose4FileOutputStream$5($Class* clazz) {
	return $of($alloc(OpsAfterClose4FileOutputStream$5));
}

void OpsAfterClose4FileOutputStream$5::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4FileOutputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4FileOutputStream$5::check($FileOutputStream* r) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(r)->getFD();
		return true;
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return false;
	}
	$shouldNotReachHere();
}

OpsAfterClose4FileOutputStream$5::OpsAfterClose4FileOutputStream$5() {
}

$Class* OpsAfterClose4FileOutputStream$5::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4FileOutputStream$5, name, initialize, &_OpsAfterClose4FileOutputStream$5_ClassInfo_, allocate$OpsAfterClose4FileOutputStream$5);
	return class$;
}

$Class* OpsAfterClose4FileOutputStream$5::class$ = nullptr;
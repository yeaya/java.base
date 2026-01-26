#include <OpsAfterClose4DataInputStream$4.h>

#include <OpsAfterClose4DataInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $OpsAfterClose4DataInputStream = ::OpsAfterClose4DataInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4DataInputStream$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4DataInputStream$4, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/DataInputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4DataInputStream$4, check, bool, $DataInputStream*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4DataInputStream$4_EnclosingMethodInfo_ = {
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4DataInputStream$4_InnerClassesInfo_[] = {
	{"OpsAfterClose4DataInputStream$4", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4DataInputStream$4_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4DataInputStream$4",
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4DataInputStream$4_MethodInfo_,
	nullptr,
	&_OpsAfterClose4DataInputStream$4_EnclosingMethodInfo_,
	_OpsAfterClose4DataInputStream$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4DataInputStream"
};

$Object* allocate$OpsAfterClose4DataInputStream$4($Class* clazz) {
	return $of($alloc(OpsAfterClose4DataInputStream$4));
}

void OpsAfterClose4DataInputStream$4::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4DataInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4DataInputStream$4::check($DataInputStream* is) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t avail = $nc(is)->available();
		$nc($System::out)->println($$str({"available() returns: "_s, $$str(avail)}));
		return false;
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	$shouldNotReachHere();
}

OpsAfterClose4DataInputStream$4::OpsAfterClose4DataInputStream$4() {
}

$Class* OpsAfterClose4DataInputStream$4::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4DataInputStream$4, name, initialize, &_OpsAfterClose4DataInputStream$4_ClassInfo_, allocate$OpsAfterClose4DataInputStream$4);
	return class$;
}

$Class* OpsAfterClose4DataInputStream$4::class$ = nullptr;
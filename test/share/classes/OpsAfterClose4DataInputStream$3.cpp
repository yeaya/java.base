#include <OpsAfterClose4DataInputStream$3.h>

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

$MethodInfo _OpsAfterClose4DataInputStream$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4DataInputStream$3::*)($String*,int32_t)>(&OpsAfterClose4DataInputStream$3::init$))},
	{"check", "(Ljava/io/DataInputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4DataInputStream$3_EnclosingMethodInfo_ = {
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4DataInputStream$3_InnerClassesInfo_[] = {
	{"OpsAfterClose4DataInputStream$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4DataInputStream$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4DataInputStream$3",
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4DataInputStream$3_MethodInfo_,
	nullptr,
	&_OpsAfterClose4DataInputStream$3_EnclosingMethodInfo_,
	_OpsAfterClose4DataInputStream$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4DataInputStream"
};

$Object* allocate$OpsAfterClose4DataInputStream$3($Class* clazz) {
	return $of($alloc(OpsAfterClose4DataInputStream$3));
}

void OpsAfterClose4DataInputStream$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4DataInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4DataInputStream$3::check($DataInputStream* is) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, buf, $new($bytes, 2));
		int32_t len = 1;
		int32_t read = $nc(is)->read(buf, 0, len);
		$nc($System::out)->println($$str({"read(buf, 0, len) returns: "_s, $$str(read)}));
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4DataInputStream$3::OpsAfterClose4DataInputStream$3() {
}

$Class* OpsAfterClose4DataInputStream$3::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4DataInputStream$3, name, initialize, &_OpsAfterClose4DataInputStream$3_ClassInfo_, allocate$OpsAfterClose4DataInputStream$3);
	return class$;
}

$Class* OpsAfterClose4DataInputStream$3::class$ = nullptr;
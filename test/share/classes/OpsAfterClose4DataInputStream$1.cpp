#include <OpsAfterClose4DataInputStream$1.h>

#include <OpsAfterClose4DataInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $OpsAfterClose4DataInputStream = ::OpsAfterClose4DataInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4DataInputStream$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4DataInputStream$1::*)($String*,int32_t)>(&OpsAfterClose4DataInputStream$1::init$))},
	{"check", "(Ljava/io/DataInputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4DataInputStream$1_EnclosingMethodInfo_ = {
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4DataInputStream$1_InnerClassesInfo_[] = {
	{"OpsAfterClose4DataInputStream$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4DataInputStream$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4DataInputStream$1",
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4DataInputStream$1_MethodInfo_,
	nullptr,
	&_OpsAfterClose4DataInputStream$1_EnclosingMethodInfo_,
	_OpsAfterClose4DataInputStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4DataInputStream"
};

$Object* allocate$OpsAfterClose4DataInputStream$1($Class* clazz) {
	return $of($alloc(OpsAfterClose4DataInputStream$1));
}

void OpsAfterClose4DataInputStream$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4DataInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4DataInputStream$1::check($DataInputStream* is) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t read = $nc(is)->read();
		$nc($System::out)->println($$str({"read returns: "_s, $$str(read)}));
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4DataInputStream$1::OpsAfterClose4DataInputStream$1() {
}

$Class* OpsAfterClose4DataInputStream$1::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4DataInputStream$1, name, initialize, &_OpsAfterClose4DataInputStream$1_ClassInfo_, allocate$OpsAfterClose4DataInputStream$1);
	return class$;
}

$Class* OpsAfterClose4DataInputStream$1::class$ = nullptr;
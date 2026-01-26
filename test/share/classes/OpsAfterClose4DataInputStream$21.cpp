#include <OpsAfterClose4DataInputStream$21.h>

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

$MethodInfo _OpsAfterClose4DataInputStream$21_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4DataInputStream$21, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/DataInputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4DataInputStream$21, check, bool, $DataInputStream*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4DataInputStream$21_EnclosingMethodInfo_ = {
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4DataInputStream$21_InnerClassesInfo_[] = {
	{"OpsAfterClose4DataInputStream$21", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4DataInputStream$21_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4DataInputStream$21",
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4DataInputStream$21_MethodInfo_,
	nullptr,
	&_OpsAfterClose4DataInputStream$21_EnclosingMethodInfo_,
	_OpsAfterClose4DataInputStream$21_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4DataInputStream"
};

$Object* allocate$OpsAfterClose4DataInputStream$21($Class* clazz) {
	return $of($alloc(OpsAfterClose4DataInputStream$21));
}

void OpsAfterClose4DataInputStream$21::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4DataInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4DataInputStream$21::check($DataInputStream* is) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(is)->readFully($$new($bytes, 1));
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4DataInputStream$21::OpsAfterClose4DataInputStream$21() {
}

$Class* OpsAfterClose4DataInputStream$21::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4DataInputStream$21, name, initialize, &_OpsAfterClose4DataInputStream$21_ClassInfo_, allocate$OpsAfterClose4DataInputStream$21);
	return class$;
}

$Class* OpsAfterClose4DataInputStream$21::class$ = nullptr;
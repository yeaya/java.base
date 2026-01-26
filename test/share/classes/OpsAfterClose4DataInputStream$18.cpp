#include <OpsAfterClose4DataInputStream$18.h>

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

$MethodInfo _OpsAfterClose4DataInputStream$18_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4DataInputStream$18, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/DataInputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4DataInputStream$18, check, bool, $DataInputStream*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4DataInputStream$18_EnclosingMethodInfo_ = {
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4DataInputStream$18_InnerClassesInfo_[] = {
	{"OpsAfterClose4DataInputStream$18", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4DataInputStream$18_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4DataInputStream$18",
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4DataInputStream$18_MethodInfo_,
	nullptr,
	&_OpsAfterClose4DataInputStream$18_EnclosingMethodInfo_,
	_OpsAfterClose4DataInputStream$18_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4DataInputStream"
};

$Object* allocate$OpsAfterClose4DataInputStream$18($Class* clazz) {
	return $of($alloc(OpsAfterClose4DataInputStream$18));
}

void OpsAfterClose4DataInputStream$18::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4DataInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4DataInputStream$18::check($DataInputStream* is) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(is)->readUnsignedShort();
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4DataInputStream$18::OpsAfterClose4DataInputStream$18() {
}

$Class* OpsAfterClose4DataInputStream$18::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4DataInputStream$18, name, initialize, &_OpsAfterClose4DataInputStream$18_ClassInfo_, allocate$OpsAfterClose4DataInputStream$18);
	return class$;
}

$Class* OpsAfterClose4DataInputStream$18::class$ = nullptr;
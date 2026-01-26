#include <OpsAfterClose4FileInputStream$3.h>

#include <OpsAfterClose4FileInputStream.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $OpsAfterClose4FileInputStream = ::OpsAfterClose4FileInputStream;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4FileInputStream$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4FileInputStream$3, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/FileInputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4FileInputStream$3, check, bool, $FileInputStream*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4FileInputStream$3_EnclosingMethodInfo_ = {
	"OpsAfterClose4FileInputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4FileInputStream$3_InnerClassesInfo_[] = {
	{"OpsAfterClose4FileInputStream$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4FileInputStream$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4FileInputStream$3",
	"OpsAfterClose4FileInputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4FileInputStream$3_MethodInfo_,
	nullptr,
	&_OpsAfterClose4FileInputStream$3_EnclosingMethodInfo_,
	_OpsAfterClose4FileInputStream$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4FileInputStream"
};

$Object* allocate$OpsAfterClose4FileInputStream$3($Class* clazz) {
	return $of($alloc(OpsAfterClose4FileInputStream$3));
}

void OpsAfterClose4FileInputStream$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4FileInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4FileInputStream$3::check($FileInputStream* r) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, buf, $new($bytes, 2));
		int32_t len = 1;
		$nc(r)->read(buf, 0, len);
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4FileInputStream$3::OpsAfterClose4FileInputStream$3() {
}

$Class* OpsAfterClose4FileInputStream$3::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4FileInputStream$3, name, initialize, &_OpsAfterClose4FileInputStream$3_ClassInfo_, allocate$OpsAfterClose4FileInputStream$3);
	return class$;
}

$Class* OpsAfterClose4FileInputStream$3::class$ = nullptr;
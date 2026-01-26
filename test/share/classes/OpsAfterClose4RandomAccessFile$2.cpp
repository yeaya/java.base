#include <OpsAfterClose4RandomAccessFile$2.h>

#include <OpsAfterClose4RandomAccessFile.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $OpsAfterClose4RandomAccessFile = ::OpsAfterClose4RandomAccessFile;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4RandomAccessFile$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4RandomAccessFile$2, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/RandomAccessFile;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4RandomAccessFile$2, check, bool, $RandomAccessFile*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4RandomAccessFile$2_EnclosingMethodInfo_ = {
	"OpsAfterClose4RandomAccessFile",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4RandomAccessFile$2_InnerClassesInfo_[] = {
	{"OpsAfterClose4RandomAccessFile$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4RandomAccessFile$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4RandomAccessFile$2",
	"OpsAfterClose4RandomAccessFile",
	nullptr,
	nullptr,
	_OpsAfterClose4RandomAccessFile$2_MethodInfo_,
	nullptr,
	&_OpsAfterClose4RandomAccessFile$2_EnclosingMethodInfo_,
	_OpsAfterClose4RandomAccessFile$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4RandomAccessFile"
};

$Object* allocate$OpsAfterClose4RandomAccessFile$2($Class* clazz) {
	return $of($alloc(OpsAfterClose4RandomAccessFile$2));
}

void OpsAfterClose4RandomAccessFile$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4RandomAccessFile::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4RandomAccessFile$2::check($RandomAccessFile* r) {
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

OpsAfterClose4RandomAccessFile$2::OpsAfterClose4RandomAccessFile$2() {
}

$Class* OpsAfterClose4RandomAccessFile$2::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4RandomAccessFile$2, name, initialize, &_OpsAfterClose4RandomAccessFile$2_ClassInfo_, allocate$OpsAfterClose4RandomAccessFile$2);
	return class$;
}

$Class* OpsAfterClose4RandomAccessFile$2::class$ = nullptr;
#include <OpsAfterClose4RandomAccessFile$4.h>

#include <OpsAfterClose4RandomAccessFile.h>
#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OpsAfterClose4RandomAccessFile = ::OpsAfterClose4RandomAccessFile;
using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4RandomAccessFile$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4RandomAccessFile$4::*)($String*,int32_t)>(&OpsAfterClose4RandomAccessFile$4::init$))},
	{"check", "(Ljava/io/RandomAccessFile;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4RandomAccessFile$4_EnclosingMethodInfo_ = {
	"OpsAfterClose4RandomAccessFile",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4RandomAccessFile$4_InnerClassesInfo_[] = {
	{"OpsAfterClose4RandomAccessFile$4", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4RandomAccessFile$4_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4RandomAccessFile$4",
	"OpsAfterClose4RandomAccessFile",
	nullptr,
	nullptr,
	_OpsAfterClose4RandomAccessFile$4_MethodInfo_,
	nullptr,
	&_OpsAfterClose4RandomAccessFile$4_EnclosingMethodInfo_,
	_OpsAfterClose4RandomAccessFile$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4RandomAccessFile"
};

$Object* allocate$OpsAfterClose4RandomAccessFile$4($Class* clazz) {
	return $of($alloc(OpsAfterClose4RandomAccessFile$4));
}

void OpsAfterClose4RandomAccessFile$4::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4RandomAccessFile::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4RandomAccessFile$4::check($RandomAccessFile* r) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(r)->getFD();
		return true;
	} catch ($IOException&) {
		$var($IOException, io, $catch());
		$init($System);
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return false;
	}
	$shouldNotReachHere();
}

OpsAfterClose4RandomAccessFile$4::OpsAfterClose4RandomAccessFile$4() {
}

$Class* OpsAfterClose4RandomAccessFile$4::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4RandomAccessFile$4, name, initialize, &_OpsAfterClose4RandomAccessFile$4_ClassInfo_, allocate$OpsAfterClose4RandomAccessFile$4);
	return class$;
}

$Class* OpsAfterClose4RandomAccessFile$4::class$ = nullptr;
#include <OpsAfterClose4RandomAccessFile$3.h>

#include <OpsAfterClose4RandomAccessFile.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $OpsAfterClose4RandomAccessFile = ::OpsAfterClose4RandomAccessFile;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;

$MethodInfo _OpsAfterClose4RandomAccessFile$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4RandomAccessFile$3::*)($String*,int32_t)>(&OpsAfterClose4RandomAccessFile$3::init$))},
	{"check", "(Ljava/io/RandomAccessFile;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4RandomAccessFile$3_EnclosingMethodInfo_ = {
	"OpsAfterClose4RandomAccessFile",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4RandomAccessFile$3_InnerClassesInfo_[] = {
	{"OpsAfterClose4RandomAccessFile$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4RandomAccessFile$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4RandomAccessFile$3",
	"OpsAfterClose4RandomAccessFile",
	nullptr,
	nullptr,
	_OpsAfterClose4RandomAccessFile$3_MethodInfo_,
	nullptr,
	&_OpsAfterClose4RandomAccessFile$3_EnclosingMethodInfo_,
	_OpsAfterClose4RandomAccessFile$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4RandomAccessFile"
};

$Object* allocate$OpsAfterClose4RandomAccessFile$3($Class* clazz) {
	return $of($alloc(OpsAfterClose4RandomAccessFile$3));
}

void OpsAfterClose4RandomAccessFile$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4RandomAccessFile::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4RandomAccessFile$3::check($RandomAccessFile* r) {
	$nc(r)->getChannel();
	return true;
}

OpsAfterClose4RandomAccessFile$3::OpsAfterClose4RandomAccessFile$3() {
}

$Class* OpsAfterClose4RandomAccessFile$3::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4RandomAccessFile$3, name, initialize, &_OpsAfterClose4RandomAccessFile$3_ClassInfo_, allocate$OpsAfterClose4RandomAccessFile$3);
	return class$;
}

$Class* OpsAfterClose4RandomAccessFile$3::class$ = nullptr;
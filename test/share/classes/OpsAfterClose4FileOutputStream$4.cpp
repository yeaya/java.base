#include <OpsAfterClose4FileOutputStream$4.h>

#include <OpsAfterClose4FileOutputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $OpsAfterClose4FileOutputStream = ::OpsAfterClose4FileOutputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4FileOutputStream$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4FileOutputStream$4, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/FileOutputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4FileOutputStream$4, check, bool, $FileOutputStream*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4FileOutputStream$4_EnclosingMethodInfo_ = {
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4FileOutputStream$4_InnerClassesInfo_[] = {
	{"OpsAfterClose4FileOutputStream$4", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4FileOutputStream$4_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4FileOutputStream$4",
	"OpsAfterClose4FileOutputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4FileOutputStream$4_MethodInfo_,
	nullptr,
	&_OpsAfterClose4FileOutputStream$4_EnclosingMethodInfo_,
	_OpsAfterClose4FileOutputStream$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4FileOutputStream"
};

$Object* allocate$OpsAfterClose4FileOutputStream$4($Class* clazz) {
	return $of($alloc(OpsAfterClose4FileOutputStream$4));
}

void OpsAfterClose4FileOutputStream$4::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4FileOutputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4FileOutputStream$4::check($FileOutputStream* r) {
	$nc(r)->getChannel();
	return true;
}

OpsAfterClose4FileOutputStream$4::OpsAfterClose4FileOutputStream$4() {
}

$Class* OpsAfterClose4FileOutputStream$4::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4FileOutputStream$4, name, initialize, &_OpsAfterClose4FileOutputStream$4_ClassInfo_, allocate$OpsAfterClose4FileOutputStream$4);
	return class$;
}

$Class* OpsAfterClose4FileOutputStream$4::class$ = nullptr;
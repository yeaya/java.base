#include <OpsAfterClose4DataInputStream$8.h>

#include <OpsAfterClose4DataInputStream.h>
#include <java/io/DataInputStream.h>
#include <jcpp.h>

using $OpsAfterClose4DataInputStream = ::OpsAfterClose4DataInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4DataInputStream$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4DataInputStream$8, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/DataInputStream;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4DataInputStream$8, check, bool, $DataInputStream*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4DataInputStream$8_EnclosingMethodInfo_ = {
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4DataInputStream$8_InnerClassesInfo_[] = {
	{"OpsAfterClose4DataInputStream$8", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4DataInputStream$8_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4DataInputStream$8",
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4DataInputStream$8_MethodInfo_,
	nullptr,
	&_OpsAfterClose4DataInputStream$8_EnclosingMethodInfo_,
	_OpsAfterClose4DataInputStream$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4DataInputStream"
};

$Object* allocate$OpsAfterClose4DataInputStream$8($Class* clazz) {
	return $of($alloc(OpsAfterClose4DataInputStream$8));
}

void OpsAfterClose4DataInputStream$8::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4DataInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4DataInputStream$8::check($DataInputStream* is) {
	$nc(is)->markSupported();
	return true;
}

OpsAfterClose4DataInputStream$8::OpsAfterClose4DataInputStream$8() {
}

$Class* OpsAfterClose4DataInputStream$8::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4DataInputStream$8, name, initialize, &_OpsAfterClose4DataInputStream$8_ClassInfo_, allocate$OpsAfterClose4DataInputStream$8);
	return class$;
}

$Class* OpsAfterClose4DataInputStream$8::class$ = nullptr;
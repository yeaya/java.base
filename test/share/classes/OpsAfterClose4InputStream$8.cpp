#include <OpsAfterClose4InputStream$8.h>

#include <OpsAfterClose4InputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $OpsAfterClose4InputStream = ::OpsAfterClose4InputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4InputStream$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4InputStream$8::*)($String*,int32_t)>(&OpsAfterClose4InputStream$8::init$))},
	{"check", "(Ljava/io/InputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4InputStream$8_EnclosingMethodInfo_ = {
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4InputStream$8_InnerClassesInfo_[] = {
	{"OpsAfterClose4InputStream$8", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4InputStream$8_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4InputStream$8",
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4InputStream$8_MethodInfo_,
	nullptr,
	&_OpsAfterClose4InputStream$8_EnclosingMethodInfo_,
	_OpsAfterClose4InputStream$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4InputStream"
};

$Object* allocate$OpsAfterClose4InputStream$8($Class* clazz) {
	return $of($alloc(OpsAfterClose4InputStream$8));
}

void OpsAfterClose4InputStream$8::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4InputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4InputStream$8::check($InputStream* is) {
	$nc(is)->markSupported();
	return true;
}

OpsAfterClose4InputStream$8::OpsAfterClose4InputStream$8() {
}

$Class* OpsAfterClose4InputStream$8::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4InputStream$8, name, initialize, &_OpsAfterClose4InputStream$8_ClassInfo_, allocate$OpsAfterClose4InputStream$8);
	return class$;
}

$Class* OpsAfterClose4InputStream$8::class$ = nullptr;
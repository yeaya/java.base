#include <OpsAfterClose4InputStream$6.h>

#include <OpsAfterClose4InputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OpsAfterClose4InputStream = ::OpsAfterClose4InputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4InputStream$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4InputStream$6::*)($String*,int32_t)>(&OpsAfterClose4InputStream$6::init$))},
	{"check", "(Ljava/io/InputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4InputStream$6_EnclosingMethodInfo_ = {
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4InputStream$6_InnerClassesInfo_[] = {
	{"OpsAfterClose4InputStream$6", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4InputStream$6_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4InputStream$6",
	"OpsAfterClose4InputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4InputStream$6_MethodInfo_,
	nullptr,
	&_OpsAfterClose4InputStream$6_EnclosingMethodInfo_,
	_OpsAfterClose4InputStream$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4InputStream"
};

$Object* allocate$OpsAfterClose4InputStream$6($Class* clazz) {
	return $of($alloc(OpsAfterClose4InputStream$6));
}

void OpsAfterClose4InputStream$6::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4InputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4InputStream$6::check($InputStream* is) {
	$nc(is)->mark(20);
	return true;
}

OpsAfterClose4InputStream$6::OpsAfterClose4InputStream$6() {
}

$Class* OpsAfterClose4InputStream$6::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4InputStream$6, name, initialize, &_OpsAfterClose4InputStream$6_ClassInfo_, allocate$OpsAfterClose4InputStream$6);
	return class$;
}

$Class* OpsAfterClose4InputStream$6::class$ = nullptr;
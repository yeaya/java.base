#include <OpsAfterClose4DataInputStream$6.h>

#include <OpsAfterClose4DataInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OpsAfterClose4DataInputStream = ::OpsAfterClose4DataInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4DataInputStream$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4DataInputStream$6::*)($String*,int32_t)>(&OpsAfterClose4DataInputStream$6::init$))},
	{"check", "(Ljava/io/DataInputStream;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4DataInputStream$6_EnclosingMethodInfo_ = {
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4DataInputStream$6_InnerClassesInfo_[] = {
	{"OpsAfterClose4DataInputStream$6", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4DataInputStream$6_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4DataInputStream$6",
	"OpsAfterClose4DataInputStream",
	nullptr,
	nullptr,
	_OpsAfterClose4DataInputStream$6_MethodInfo_,
	nullptr,
	&_OpsAfterClose4DataInputStream$6_EnclosingMethodInfo_,
	_OpsAfterClose4DataInputStream$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4DataInputStream"
};

$Object* allocate$OpsAfterClose4DataInputStream$6($Class* clazz) {
	return $of($alloc(OpsAfterClose4DataInputStream$6));
}

void OpsAfterClose4DataInputStream$6::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4DataInputStream::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4DataInputStream$6::check($DataInputStream* is) {
	$nc(is)->mark(20);
	return true;
}

OpsAfterClose4DataInputStream$6::OpsAfterClose4DataInputStream$6() {
}

$Class* OpsAfterClose4DataInputStream$6::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4DataInputStream$6, name, initialize, &_OpsAfterClose4DataInputStream$6_ClassInfo_, allocate$OpsAfterClose4DataInputStream$6);
	return class$;
}

$Class* OpsAfterClose4DataInputStream$6::class$ = nullptr;
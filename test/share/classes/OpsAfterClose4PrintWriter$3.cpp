#include <OpsAfterClose4PrintWriter$3.h>

#include <OpsAfterClose4PrintWriter.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $OpsAfterClose4PrintWriter = ::OpsAfterClose4PrintWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4PrintWriter$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4PrintWriter$3::*)($String*,int32_t)>(&OpsAfterClose4PrintWriter$3::init$))},
	{"check", "(Ljava/io/PrintWriter;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4PrintWriter$3_EnclosingMethodInfo_ = {
	"OpsAfterClose4PrintWriter",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4PrintWriter$3_InnerClassesInfo_[] = {
	{"OpsAfterClose4PrintWriter$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4PrintWriter$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4PrintWriter$3",
	"OpsAfterClose4PrintWriter",
	nullptr,
	nullptr,
	_OpsAfterClose4PrintWriter$3_MethodInfo_,
	nullptr,
	&_OpsAfterClose4PrintWriter$3_EnclosingMethodInfo_,
	_OpsAfterClose4PrintWriter$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4PrintWriter"
};

$Object* allocate$OpsAfterClose4PrintWriter$3($Class* clazz) {
	return $of($alloc(OpsAfterClose4PrintWriter$3));
}

void OpsAfterClose4PrintWriter$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4PrintWriter::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4PrintWriter$3::check($PrintWriter* w) {
	$nc(w)->write(1);
	return w->checkError();
}

OpsAfterClose4PrintWriter$3::OpsAfterClose4PrintWriter$3() {
}

$Class* OpsAfterClose4PrintWriter$3::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4PrintWriter$3, name, initialize, &_OpsAfterClose4PrintWriter$3_ClassInfo_, allocate$OpsAfterClose4PrintWriter$3);
	return class$;
}

$Class* OpsAfterClose4PrintWriter$3::class$ = nullptr;
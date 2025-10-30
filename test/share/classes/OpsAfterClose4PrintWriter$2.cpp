#include <OpsAfterClose4PrintWriter$2.h>

#include <OpsAfterClose4PrintWriter.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $OpsAfterClose4PrintWriter = ::OpsAfterClose4PrintWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4PrintWriter$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4PrintWriter$2::*)($String*,int32_t)>(&OpsAfterClose4PrintWriter$2::init$))},
	{"check", "(Ljava/io/PrintWriter;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4PrintWriter$2_EnclosingMethodInfo_ = {
	"OpsAfterClose4PrintWriter",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4PrintWriter$2_InnerClassesInfo_[] = {
	{"OpsAfterClose4PrintWriter$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4PrintWriter$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4PrintWriter$2",
	"OpsAfterClose4PrintWriter",
	nullptr,
	nullptr,
	_OpsAfterClose4PrintWriter$2_MethodInfo_,
	nullptr,
	&_OpsAfterClose4PrintWriter$2_EnclosingMethodInfo_,
	_OpsAfterClose4PrintWriter$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4PrintWriter"
};

$Object* allocate$OpsAfterClose4PrintWriter$2($Class* clazz) {
	return $of($alloc(OpsAfterClose4PrintWriter$2));
}

void OpsAfterClose4PrintWriter$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4PrintWriter::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4PrintWriter$2::check($PrintWriter* w) {
	$var($chars, buf, $new($chars, 2));
	int32_t len = 1;
	$nc(w)->write(buf, 0, len);
	return w->checkError();
}

OpsAfterClose4PrintWriter$2::OpsAfterClose4PrintWriter$2() {
}

$Class* OpsAfterClose4PrintWriter$2::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4PrintWriter$2, name, initialize, &_OpsAfterClose4PrintWriter$2_ClassInfo_, allocate$OpsAfterClose4PrintWriter$2);
	return class$;
}

$Class* OpsAfterClose4PrintWriter$2::class$ = nullptr;
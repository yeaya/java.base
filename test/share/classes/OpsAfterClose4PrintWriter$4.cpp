#include <OpsAfterClose4PrintWriter$4.h>

#include <OpsAfterClose4PrintWriter.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $OpsAfterClose4PrintWriter = ::OpsAfterClose4PrintWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4PrintWriter$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(OpsAfterClose4PrintWriter$4::*)($String*,int32_t)>(&OpsAfterClose4PrintWriter$4::init$))},
	{"check", "(Ljava/io/PrintWriter;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4PrintWriter$4_EnclosingMethodInfo_ = {
	"OpsAfterClose4PrintWriter",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4PrintWriter$4_InnerClassesInfo_[] = {
	{"OpsAfterClose4PrintWriter$4", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4PrintWriter$4_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4PrintWriter$4",
	"OpsAfterClose4PrintWriter",
	nullptr,
	nullptr,
	_OpsAfterClose4PrintWriter$4_MethodInfo_,
	nullptr,
	&_OpsAfterClose4PrintWriter$4_EnclosingMethodInfo_,
	_OpsAfterClose4PrintWriter$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4PrintWriter"
};

$Object* allocate$OpsAfterClose4PrintWriter$4($Class* clazz) {
	return $of($alloc(OpsAfterClose4PrintWriter$4));
}

void OpsAfterClose4PrintWriter$4::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4PrintWriter::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4PrintWriter$4::check($PrintWriter* w) {
	$var($String, s, "abc"_s);
	$nc(w)->write(s);
	return w->checkError();
}

OpsAfterClose4PrintWriter$4::OpsAfterClose4PrintWriter$4() {
}

$Class* OpsAfterClose4PrintWriter$4::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4PrintWriter$4, name, initialize, &_OpsAfterClose4PrintWriter$4_ClassInfo_, allocate$OpsAfterClose4PrintWriter$4);
	return class$;
}

$Class* OpsAfterClose4PrintWriter$4::class$ = nullptr;
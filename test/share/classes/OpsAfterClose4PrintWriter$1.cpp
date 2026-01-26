#include <OpsAfterClose4PrintWriter$1.h>

#include <OpsAfterClose4PrintWriter.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $OpsAfterClose4PrintWriter = ::OpsAfterClose4PrintWriter;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OpsAfterClose4PrintWriter$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4PrintWriter$1, init$, void, $String*, int32_t)},
	{"check", "(Ljava/io/PrintWriter;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4PrintWriter$1, check, bool, $PrintWriter*)},
	{}
};

$EnclosingMethodInfo _OpsAfterClose4PrintWriter$1_EnclosingMethodInfo_ = {
	"OpsAfterClose4PrintWriter",
	nullptr,
	nullptr
};

$InnerClassInfo _OpsAfterClose4PrintWriter$1_InnerClassesInfo_[] = {
	{"OpsAfterClose4PrintWriter$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _OpsAfterClose4PrintWriter$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"OpsAfterClose4PrintWriter$1",
	"OpsAfterClose4PrintWriter",
	nullptr,
	nullptr,
	_OpsAfterClose4PrintWriter$1_MethodInfo_,
	nullptr,
	&_OpsAfterClose4PrintWriter$1_EnclosingMethodInfo_,
	_OpsAfterClose4PrintWriter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"OpsAfterClose4PrintWriter"
};

$Object* allocate$OpsAfterClose4PrintWriter$1($Class* clazz) {
	return $of($alloc(OpsAfterClose4PrintWriter$1));
}

void OpsAfterClose4PrintWriter$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4PrintWriter::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4PrintWriter$1::check($PrintWriter* w) {
	$var($chars, buf, $new($chars, 2));
	$nc(w)->write(buf);
	return w->checkError();
}

OpsAfterClose4PrintWriter$1::OpsAfterClose4PrintWriter$1() {
}

$Class* OpsAfterClose4PrintWriter$1::load$($String* name, bool initialize) {
	$loadClass(OpsAfterClose4PrintWriter$1, name, initialize, &_OpsAfterClose4PrintWriter$1_ClassInfo_, allocate$OpsAfterClose4PrintWriter$1);
	return class$;
}

$Class* OpsAfterClose4PrintWriter$1::class$ = nullptr;
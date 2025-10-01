#include <SubClass$PW.h>

#include <SubClass.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SubClass = ::SubClass;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SubClass$PW_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, 0, $method(static_cast<void(SubClass$PW::*)($Writer*)>(&SubClass$PW::init$))},
	{"println", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SubClass$PW_InnerClassesInfo_[] = {
	{"SubClass$PW", "SubClass", "PW", $STATIC},
	{}
};

$ClassInfo _SubClass$PW_ClassInfo_ = {
	$ACC_SUPER,
	"SubClass$PW",
	"java.io.PrintWriter",
	nullptr,
	nullptr,
	_SubClass$PW_MethodInfo_,
	nullptr,
	nullptr,
	_SubClass$PW_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SubClass"
};

$Object* allocate$SubClass$PW($Class* clazz) {
	return $of($alloc(SubClass$PW));
}

void SubClass$PW::init$($Writer* out) {
	$PrintWriter::init$(out);
}

void SubClass$PW::println() {
	try {
		$nc(this->out)->write("[EOL]"_s);
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		setError();
	}
	$PrintWriter::println();
}

SubClass$PW::SubClass$PW() {
}

$Class* SubClass$PW::load$($String* name, bool initialize) {
	$loadClass(SubClass$PW, name, initialize, &_SubClass$PW_ClassInfo_, allocate$SubClass$PW);
	return class$;
}

$Class* SubClass$PW::class$ = nullptr;
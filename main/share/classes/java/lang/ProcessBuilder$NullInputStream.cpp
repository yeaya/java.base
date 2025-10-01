#include <java/lang/ProcessBuilder$NullInputStream.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessBuilder.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INSTANCE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

namespace java {
	namespace lang {

$FieldInfo _ProcessBuilder$NullInputStream_FieldInfo_[] = {
	{"INSTANCE", "Ljava/lang/ProcessBuilder$NullInputStream;", nullptr, $STATIC | $FINAL, $staticField(ProcessBuilder$NullInputStream, INSTANCE)},
	{}
};

$MethodInfo _ProcessBuilder$NullInputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProcessBuilder$NullInputStream::*)()>(&ProcessBuilder$NullInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessBuilder$NullInputStream_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$NullInputStream", "java.lang.ProcessBuilder", "NullInputStream", $STATIC},
	{}
};

$ClassInfo _ProcessBuilder$NullInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessBuilder$NullInputStream",
	"java.io.InputStream",
	nullptr,
	_ProcessBuilder$NullInputStream_FieldInfo_,
	_ProcessBuilder$NullInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessBuilder$NullInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$NullInputStream($Class* clazz) {
	return $of($alloc(ProcessBuilder$NullInputStream));
}

ProcessBuilder$NullInputStream* ProcessBuilder$NullInputStream::INSTANCE = nullptr;

void ProcessBuilder$NullInputStream::init$() {
	$InputStream::init$();
}

int32_t ProcessBuilder$NullInputStream::read() {
	return -1;
}

int32_t ProcessBuilder$NullInputStream::available() {
	return 0;
}

void clinit$ProcessBuilder$NullInputStream($Class* class$) {
	$assignStatic(ProcessBuilder$NullInputStream::INSTANCE, $new(ProcessBuilder$NullInputStream));
}

ProcessBuilder$NullInputStream::ProcessBuilder$NullInputStream() {
}

$Class* ProcessBuilder$NullInputStream::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$NullInputStream, name, initialize, &_ProcessBuilder$NullInputStream_ClassInfo_, clinit$ProcessBuilder$NullInputStream, allocate$ProcessBuilder$NullInputStream);
	return class$;
}

$Class* ProcessBuilder$NullInputStream::class$ = nullptr;

	} // lang
} // java
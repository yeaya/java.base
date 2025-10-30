#include <java/lang/ProcessBuilder$NullOutputStream.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/ProcessBuilder.h>
#include <jcpp.h>

#undef INSTANCE

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder = ::java::lang::ProcessBuilder;

namespace java {
	namespace lang {

$FieldInfo _ProcessBuilder$NullOutputStream_FieldInfo_[] = {
	{"INSTANCE", "Ljava/lang/ProcessBuilder$NullOutputStream;", nullptr, $STATIC | $FINAL, $staticField(ProcessBuilder$NullOutputStream, INSTANCE)},
	{}
};

$MethodInfo _ProcessBuilder$NullOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProcessBuilder$NullOutputStream::*)()>(&ProcessBuilder$NullOutputStream::init$))},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ProcessBuilder$NullOutputStream_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$NullOutputStream", "java.lang.ProcessBuilder", "NullOutputStream", $STATIC},
	{}
};

$ClassInfo _ProcessBuilder$NullOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessBuilder$NullOutputStream",
	"java.io.OutputStream",
	nullptr,
	_ProcessBuilder$NullOutputStream_FieldInfo_,
	_ProcessBuilder$NullOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessBuilder$NullOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$NullOutputStream($Class* clazz) {
	return $of($alloc(ProcessBuilder$NullOutputStream));
}

ProcessBuilder$NullOutputStream* ProcessBuilder$NullOutputStream::INSTANCE = nullptr;

void ProcessBuilder$NullOutputStream::init$() {
	$OutputStream::init$();
}

void ProcessBuilder$NullOutputStream::write(int32_t b) {
	$throwNew($IOException, "Stream closed"_s);
}

void clinit$ProcessBuilder$NullOutputStream($Class* class$) {
	$assignStatic(ProcessBuilder$NullOutputStream::INSTANCE, $new(ProcessBuilder$NullOutputStream));
}

ProcessBuilder$NullOutputStream::ProcessBuilder$NullOutputStream() {
}

$Class* ProcessBuilder$NullOutputStream::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$NullOutputStream, name, initialize, &_ProcessBuilder$NullOutputStream_ClassInfo_, clinit$ProcessBuilder$NullOutputStream, allocate$ProcessBuilder$NullOutputStream);
	return class$;
}

$Class* ProcessBuilder$NullOutputStream::class$ = nullptr;

	} // lang
} // java
#include <java/lang/ProcessBuilder$Redirect$1.h>

#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <jcpp.h>

#undef PIPE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;

namespace java {
	namespace lang {

$MethodInfo _ProcessBuilder$Redirect$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ProcessBuilder$Redirect$1, init$, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$1, toString, $String*)},
	{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$1, type, $ProcessBuilder$Redirect$Type*)},
	{}
};

$EnclosingMethodInfo _ProcessBuilder$Redirect$1_EnclosingMethodInfo_ = {
	"java.lang.ProcessBuilder$Redirect",
	nullptr,
	nullptr
};

$InnerClassInfo _ProcessBuilder$Redirect$1_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.lang.ProcessBuilder$Redirect$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProcessBuilder$Redirect$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessBuilder$Redirect$1",
	"java.lang.ProcessBuilder$Redirect",
	nullptr,
	nullptr,
	_ProcessBuilder$Redirect$1_MethodInfo_,
	nullptr,
	&_ProcessBuilder$Redirect$1_EnclosingMethodInfo_,
	_ProcessBuilder$Redirect$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$Redirect$1($Class* clazz) {
	return $of($alloc(ProcessBuilder$Redirect$1));
}

void ProcessBuilder$Redirect$1::init$() {
	$ProcessBuilder$Redirect::init$();
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$1::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::PIPE;
}

$String* ProcessBuilder$Redirect$1::toString() {
	return $nc($(type()))->toString();
}

ProcessBuilder$Redirect$1::ProcessBuilder$Redirect$1() {
}

$Class* ProcessBuilder$Redirect$1::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$Redirect$1, name, initialize, &_ProcessBuilder$Redirect$1_ClassInfo_, allocate$ProcessBuilder$Redirect$1);
	return class$;
}

$Class* ProcessBuilder$Redirect$1::class$ = nullptr;

	} // lang
} // java
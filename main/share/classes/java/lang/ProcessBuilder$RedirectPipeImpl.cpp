#include <java/lang/ProcessBuilder$RedirectPipeImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <java/lang/ProcessBuilder.h>
#include <jcpp.h>

#undef PIPE

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder = ::java::lang::ProcessBuilder;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;

namespace java {
	namespace lang {

$FieldInfo _ProcessBuilder$RedirectPipeImpl_FieldInfo_[] = {
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $FINAL, $field(ProcessBuilder$RedirectPipeImpl, fd)},
	{}
};

$MethodInfo _ProcessBuilder$RedirectPipeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProcessBuilder$RedirectPipeImpl::*)()>(&ProcessBuilder$RedirectPipeImpl::init$))},
	{"getFd", "()Ljava/io/FileDescriptor;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessBuilder$RedirectPipeImpl_InnerClassesInfo_[] = {
	{"java.lang.ProcessBuilder$RedirectPipeImpl", "java.lang.ProcessBuilder", "RedirectPipeImpl", $STATIC},
	{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ProcessBuilder$RedirectPipeImpl_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessBuilder$RedirectPipeImpl",
	"java.lang.ProcessBuilder$Redirect",
	nullptr,
	_ProcessBuilder$RedirectPipeImpl_FieldInfo_,
	_ProcessBuilder$RedirectPipeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessBuilder$RedirectPipeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessBuilder"
};

$Object* allocate$ProcessBuilder$RedirectPipeImpl($Class* clazz) {
	return $of($alloc(ProcessBuilder$RedirectPipeImpl));
}

void ProcessBuilder$RedirectPipeImpl::init$() {
	$ProcessBuilder$Redirect::init$();
	$set(this, fd, $new($FileDescriptor));
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$RedirectPipeImpl::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::PIPE;
}

$String* ProcessBuilder$RedirectPipeImpl::toString() {
	return $nc($(type()))->toString();
}

$FileDescriptor* ProcessBuilder$RedirectPipeImpl::getFd() {
	return this->fd;
}

ProcessBuilder$RedirectPipeImpl::ProcessBuilder$RedirectPipeImpl() {
}

$Class* ProcessBuilder$RedirectPipeImpl::load$($String* name, bool initialize) {
	$loadClass(ProcessBuilder$RedirectPipeImpl, name, initialize, &_ProcessBuilder$RedirectPipeImpl_ClassInfo_, allocate$ProcessBuilder$RedirectPipeImpl);
	return class$;
}

$Class* ProcessBuilder$RedirectPipeImpl::class$ = nullptr;

	} // lang
} // java
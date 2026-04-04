#include <java/lang/ProcessBuilder$RedirectPipeImpl.h>
#include <java/io/FileDescriptor.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <java/lang/ProcessBuilder.h>
#include <jcpp.h>

#undef PIPE

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;

namespace java {
	namespace lang {

void ProcessBuilder$RedirectPipeImpl::init$() {
	$ProcessBuilder$Redirect::init$();
	$set(this, fd, $new($FileDescriptor));
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$RedirectPipeImpl::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::PIPE;
}

$String* ProcessBuilder$RedirectPipeImpl::toString() {
	return $$nc(type())->toString();
}

$FileDescriptor* ProcessBuilder$RedirectPipeImpl::getFd() {
	return this->fd;
}

ProcessBuilder$RedirectPipeImpl::ProcessBuilder$RedirectPipeImpl() {
}

$Class* ProcessBuilder$RedirectPipeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fd", "Ljava/io/FileDescriptor;", nullptr, $FINAL, $field(ProcessBuilder$RedirectPipeImpl, fd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProcessBuilder$RedirectPipeImpl, init$, void)},
		{"getFd", "()Ljava/io/FileDescriptor;", nullptr, 0, $virtualMethod(ProcessBuilder$RedirectPipeImpl, getFd, $FileDescriptor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$RedirectPipeImpl, toString, $String*)},
		{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$RedirectPipeImpl, type, $ProcessBuilder$Redirect$Type*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessBuilder$RedirectPipeImpl", "java.lang.ProcessBuilder", "RedirectPipeImpl", $STATIC},
		{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessBuilder$RedirectPipeImpl",
		"java.lang.ProcessBuilder$Redirect",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessBuilder"
	};
	$loadClass(ProcessBuilder$RedirectPipeImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessBuilder$RedirectPipeImpl);
	});
	return class$;
}

$Class* ProcessBuilder$RedirectPipeImpl::class$ = nullptr;

	} // lang
} // java
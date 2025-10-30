#include <java/lang/module/InvalidModuleDescriptorException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace module {

$FieldInfo _InvalidModuleDescriptorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidModuleDescriptorException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidModuleDescriptorException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidModuleDescriptorException::*)()>(&InvalidModuleDescriptorException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidModuleDescriptorException::*)($String*)>(&InvalidModuleDescriptorException::init$))},
	{}
};

$ClassInfo _InvalidModuleDescriptorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.module.InvalidModuleDescriptorException",
	"java.lang.RuntimeException",
	nullptr,
	_InvalidModuleDescriptorException_FieldInfo_,
	_InvalidModuleDescriptorException_MethodInfo_
};

$Object* allocate$InvalidModuleDescriptorException($Class* clazz) {
	return $of($alloc(InvalidModuleDescriptorException));
}

void InvalidModuleDescriptorException::init$() {
	$RuntimeException::init$();
}

void InvalidModuleDescriptorException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

InvalidModuleDescriptorException::InvalidModuleDescriptorException() {
}

InvalidModuleDescriptorException::InvalidModuleDescriptorException(const InvalidModuleDescriptorException& e) : $RuntimeException(e) {
}

void InvalidModuleDescriptorException::throw$() {
	throw *this;
}

$Class* InvalidModuleDescriptorException::load$($String* name, bool initialize) {
	$loadClass(InvalidModuleDescriptorException, name, initialize, &_InvalidModuleDescriptorException_ClassInfo_, allocate$InvalidModuleDescriptorException);
	return class$;
}

$Class* InvalidModuleDescriptorException::class$ = nullptr;

		} // module
	} // lang
} // java
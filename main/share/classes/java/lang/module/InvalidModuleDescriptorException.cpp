#include <java/lang/module/InvalidModuleDescriptorException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace module {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidModuleDescriptorException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidModuleDescriptorException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidModuleDescriptorException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.module.InvalidModuleDescriptorException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidModuleDescriptorException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidModuleDescriptorException);
	});
	return class$;
}

$Class* InvalidModuleDescriptorException::class$ = nullptr;

		} // module
	} // lang
} // java
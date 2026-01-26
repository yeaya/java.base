#include <java/lang/Compiler.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {

$NamedAttribute Compiler_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Compiler_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Compiler_Attribute_var$0},
	{}
};

$MethodInfo _Compiler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Compiler, init$, void)},
	{"command", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(Compiler, command, $Object*, Object$*)},
	{"compileClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $staticMethod(Compiler, compileClass, bool, $Class*)},
	{"compileClasses", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Compiler, compileClasses, bool, $String*)},
	{"disable", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Compiler, disable, void)},
	{"enable", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Compiler, enable, void)},
	{}
};

$ClassInfo _Compiler_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Compiler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Compiler_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Compiler_Annotations_
};

$Object* allocate$Compiler($Class* clazz) {
	return $of($alloc(Compiler));
}

void Compiler::init$() {
}

bool Compiler::compileClass($Class* clazz) {
	return false;
}

bool Compiler::compileClasses($String* string) {
	return false;
}

$Object* Compiler::command(Object$* any) {
	return $of(nullptr);
}

void Compiler::enable() {
}

void Compiler::disable() {
}

Compiler::Compiler() {
}

$Class* Compiler::load$($String* name, bool initialize) {
	$loadClass(Compiler, name, initialize, &_Compiler_ClassInfo_, allocate$Compiler);
	return class$;
}

$Class* Compiler::class$ = nullptr;

	} // lang
} // java
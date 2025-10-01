#include <java/lang/Compiler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Compiler::*)()>(&Compiler::init$))},
	{"command", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&Compiler::command))},
	{"compileClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*)>(&Compiler::compileClass))},
	{"compileClasses", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Compiler::compileClasses))},
	{"disable", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Compiler::disable))},
	{"enable", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Compiler::enable))},
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
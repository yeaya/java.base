#include <java/lang/reflect/InvocationTargetException.h>

#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _InvocationTargetException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvocationTargetException, serialVersionUID)},
	{"target", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(InvocationTargetException, target)},
	{}
};

$MethodInfo _InvocationTargetException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(InvocationTargetException, init$, void)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvocationTargetException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvocationTargetException, init$, void, $Throwable*, $String*)},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(InvocationTargetException, getCause, $Throwable*)},
	{"getTargetException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(InvocationTargetException, getTargetException, $Throwable*)},
	{}
};

$ClassInfo _InvocationTargetException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.reflect.InvocationTargetException",
	"java.lang.ReflectiveOperationException",
	nullptr,
	_InvocationTargetException_FieldInfo_,
	_InvocationTargetException_MethodInfo_
};

$Object* allocate$InvocationTargetException($Class* clazz) {
	return $of($alloc(InvocationTargetException));
}

void InvocationTargetException::init$() {
	$ReflectiveOperationException::init$(($Throwable*)nullptr);
}

void InvocationTargetException::init$($Throwable* target) {
	$ReflectiveOperationException::init$(($Throwable*)nullptr);
	$set(this, target, target);
}

void InvocationTargetException::init$($Throwable* target, $String* s) {
	$ReflectiveOperationException::init$(s, nullptr);
	$set(this, target, target);
}

$Throwable* InvocationTargetException::getTargetException() {
	return this->target;
}

$Throwable* InvocationTargetException::getCause() {
	return this->target;
}

InvocationTargetException::InvocationTargetException() {
}

InvocationTargetException::InvocationTargetException(const InvocationTargetException& e) : $ReflectiveOperationException(e) {
}

void InvocationTargetException::throw$() {
	throw *this;
}

$Class* InvocationTargetException::load$($String* name, bool initialize) {
	$loadClass(InvocationTargetException, name, initialize, &_InvocationTargetException_ClassInfo_, allocate$InvocationTargetException);
	return class$;
}

$Class* InvocationTargetException::class$ = nullptr;

		} // reflect
	} // lang
} // java
#include <java/lang/LayerInstantiationException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _LayerInstantiationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LayerInstantiationException, serialVersionUID)},
	{}
};

$MethodInfo _LayerInstantiationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LayerInstantiationException::*)()>(&LayerInstantiationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LayerInstantiationException::*)($String*)>(&LayerInstantiationException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(LayerInstantiationException::*)($Throwable*)>(&LayerInstantiationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(LayerInstantiationException::*)($String*,$Throwable*)>(&LayerInstantiationException::init$))},
	{}
};

$ClassInfo _LayerInstantiationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.LayerInstantiationException",
	"java.lang.RuntimeException",
	nullptr,
	_LayerInstantiationException_FieldInfo_,
	_LayerInstantiationException_MethodInfo_
};

$Object* allocate$LayerInstantiationException($Class* clazz) {
	return $of($alloc(LayerInstantiationException));
}

void LayerInstantiationException::init$() {
	$RuntimeException::init$();
}

void LayerInstantiationException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

void LayerInstantiationException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void LayerInstantiationException::init$($String* msg, $Throwable* cause) {
	$RuntimeException::init$(msg, cause);
}

LayerInstantiationException::LayerInstantiationException() {
}

LayerInstantiationException::LayerInstantiationException(const LayerInstantiationException& e) {
}

LayerInstantiationException LayerInstantiationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void LayerInstantiationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* LayerInstantiationException::load$($String* name, bool initialize) {
	$loadClass(LayerInstantiationException, name, initialize, &_LayerInstantiationException_ClassInfo_, allocate$LayerInstantiationException);
	return class$;
}

$Class* LayerInstantiationException::class$ = nullptr;

	} // lang
} // java
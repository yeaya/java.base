#include <java/lang/LayerInstantiationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

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

LayerInstantiationException::LayerInstantiationException(const LayerInstantiationException& e) : $RuntimeException(e) {
}

void LayerInstantiationException::throw$() {
	throw *this;
}

$Class* LayerInstantiationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LayerInstantiationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LayerInstantiationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LayerInstantiationException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(LayerInstantiationException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(LayerInstantiationException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.LayerInstantiationException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LayerInstantiationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LayerInstantiationException);
	});
	return class$;
}

$Class* LayerInstantiationException::class$ = nullptr;

	} // lang
} // java
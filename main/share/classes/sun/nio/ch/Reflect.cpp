#include <sun/nio/ch/Reflect.h>
#include <java/io/IOException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <sun/nio/ch/Reflect$1.h>
#include <sun/nio/ch/Reflect$ReflectionError.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $Reflect$1 = ::sun::nio::ch::Reflect$1;
using $Reflect$ReflectionError = ::sun::nio::ch::Reflect$ReflectionError;

namespace sun {
	namespace nio {
		namespace ch {

void Reflect::init$() {
}

void Reflect::setAccessible($AccessibleObject* ao) {
	$load(Reflect);
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($Reflect$1, ao));
}

$Constructor* Reflect::lookupConstructor($String* className, $ClassArray* paramTypes) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		$Class* cl = $Class::forName(className);
		$var($Constructor, c, cl->getDeclaredConstructor(paramTypes));
		setAccessible(c);
		return c;
	} catch ($ClassNotFoundException& x) {
		$throwNew($Reflect$ReflectionError, x);
	} catch ($NoSuchMethodException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
	$shouldNotReachHere();
}

$Object* Reflect::invoke($Constructor* c, $ObjectArray* args) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		return $nc(c)->newInstance(args);
	} catch ($InstantiationException& x) {
		$throwNew($Reflect$ReflectionError, x);
	} catch ($IllegalAccessException& x) {
		$throwNew($Reflect$ReflectionError, x);
	} catch ($InvocationTargetException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
	$shouldNotReachHere();
}

$Method* Reflect::lookupMethod($String* className, $String* methodName, $ClassArray* paramTypes) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		$Class* cl = $Class::forName(className);
		$var($Method, m, cl->getDeclaredMethod(methodName, paramTypes));
		setAccessible(m);
		return m;
	} catch ($ClassNotFoundException& x) {
		$throwNew($Reflect$ReflectionError, x);
	} catch ($NoSuchMethodException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
	$shouldNotReachHere();
}

$Object* Reflect::invoke($Method* m, Object$* ob, $ObjectArray* args) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		return $nc(m)->invoke(ob, args);
	} catch ($IllegalAccessException& x) {
		$throwNew($Reflect$ReflectionError, x);
	} catch ($InvocationTargetException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
	$shouldNotReachHere();
}

$Object* Reflect::invokeIO($Method* m, Object$* ob, $ObjectArray* args) {
	$useLocalObjectStack();
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		return $nc(m)->invoke(ob, args);
	} catch ($IllegalAccessException& x) {
		$throwNew($Reflect$ReflectionError, x);
	} catch ($InvocationTargetException& x) {
		$load($IOException);
		if ($IOException::class$->isInstance($(x->getCause()))) {
			$throw($$cast($IOException, x->getCause()));
		}
		$throwNew($Reflect$ReflectionError, x);
	}
	$shouldNotReachHere();
}

$Field* Reflect::lookupField($String* className, $String* fieldName) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		$Class* cl = $Class::forName(className);
		$var($Field, f, cl->getDeclaredField(fieldName));
		setAccessible(f);
		return f;
	} catch ($ClassNotFoundException& x) {
		$throwNew($Reflect$ReflectionError, x);
	} catch ($NoSuchFieldException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
	$shouldNotReachHere();
}

$Object* Reflect::get(Object$* ob, $Field* f) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		return $nc(f)->get(ob);
	} catch ($IllegalAccessException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
	$shouldNotReachHere();
}

$Object* Reflect::get($Field* f) {
	return get(nullptr, f);
}

void Reflect::set(Object$* ob, $Field* f, Object$* val) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		$nc(f)->set(ob, val);
	} catch ($IllegalAccessException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
}

void Reflect::setInt(Object$* ob, $Field* f, int32_t val) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		$nc(f)->setInt(ob, val);
	} catch ($IllegalAccessException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
}

void Reflect::setBoolean(Object$* ob, $Field* f, bool val) {
	$load(Reflect);
	$beforeCallerSensitive();
	try {
		$nc(f)->setBoolean(ob, val);
	} catch ($IllegalAccessException& x) {
		$throwNew($Reflect$ReflectionError, x);
	}
}

Reflect::Reflect() {
}

$Class* Reflect::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Reflect, init$, void)},
		{"get", "(Ljava/lang/Object;Ljava/lang/reflect/Field;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(Reflect, get, $Object*, Object$*, $Field*)},
		{"get", "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(Reflect, get, $Object*, $Field*)},
		{"invoke", "(Ljava/lang/reflect/Constructor;[Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/reflect/Constructor<*>;[Ljava/lang/Object;)Ljava/lang/Object;", $STATIC, $staticMethod(Reflect, invoke, $Object*, $Constructor*, $ObjectArray*)},
		{"invoke", "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(Reflect, invoke, $Object*, $Method*, Object$*, $ObjectArray*)},
		{"invokeIO", "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(Reflect, invokeIO, $Object*, $Method*, Object$*, $ObjectArray*), "java.io.IOException"},
		{"lookupConstructor", "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", "(Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Constructor<*>;", $STATIC, $staticMethod(Reflect, lookupConstructor, $Constructor*, $String*, $ClassArray*)},
		{"lookupField", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/reflect/Field;", nullptr, $STATIC, $staticMethod(Reflect, lookupField, $Field*, $String*, $String*)},
		{"lookupMethod", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $STATIC | $TRANSIENT, $staticMethod(Reflect, lookupMethod, $Method*, $String*, $String*, $ClassArray*)},
		{"set", "(Ljava/lang/Object;Ljava/lang/reflect/Field;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(Reflect, set, void, Object$*, $Field*, Object$*)},
		{"setAccessible", "(Ljava/lang/reflect/AccessibleObject;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Reflect, setAccessible, void, $AccessibleObject*)},
		{"setBoolean", "(Ljava/lang/Object;Ljava/lang/reflect/Field;Z)V", nullptr, $STATIC, $staticMethod(Reflect, setBoolean, void, Object$*, $Field*, bool)},
		{"setInt", "(Ljava/lang/Object;Ljava/lang/reflect/Field;I)V", nullptr, $STATIC, $staticMethod(Reflect, setInt, void, Object$*, $Field*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Reflect$ReflectionError", "sun.nio.ch.Reflect", "ReflectionError", $PRIVATE | $STATIC},
		{"sun.nio.ch.Reflect$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.Reflect",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.ch.Reflect$ReflectionError,sun.nio.ch.Reflect$1"
	};
	$loadClass(Reflect, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reflect);
	});
	return class$;
}

$Class* Reflect::class$ = nullptr;

		} // ch
	} // nio
} // sun
#include <jdk/internal/reflect/NativeConstructorAccessorImpl.h>
#include <java/lang/reflect/Constructor.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/reflect/ConstructorAccessor.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jdk/internal/reflect/DelegatingConstructorAccessorImpl.h>
#include <jdk/internal/reflect/MethodAccessorGenerator.h>
#include <jdk/internal/reflect/ReflectionFactory.h>
#include <jcpp.h>

#include <java/lang/reflect/InvocationTargetException.h>

using ::java::lang::reflect::InvocationTargetException;

#undef GENERATED_OFFSET
#undef U

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ConstructorAccessorImpl = ::jdk::internal::reflect::ConstructorAccessorImpl;
using $DelegatingConstructorAccessorImpl = ::jdk::internal::reflect::DelegatingConstructorAccessorImpl;

namespace jdk {
	namespace internal {
		namespace reflect {

$Unsafe* NativeConstructorAccessorImpl::U = nullptr;
int64_t NativeConstructorAccessorImpl::GENERATED_OFFSET = 0;

void NativeConstructorAccessorImpl::init$($Constructor* c) {
	$ConstructorAccessorImpl::init$();
	$set(this, c, c);
}

$Object* NativeConstructorAccessorImpl::newInstance($ObjectArray* args) {
	return NativeConstructorAccessorImpl::newInstance0(this->c, args);
}

void NativeConstructorAccessorImpl::setParent($DelegatingConstructorAccessorImpl* parent) {
	$set(this, parent, parent);
}

$Object* NativeConstructorAccessorImpl::newInstance0($Constructor* c, $ObjectArray* args) {
	try {
		$var($Object, obj, c->clazz->allocateInstance());
		c->initInstance(obj, args);
		return obj;
	} catch (InvocationTargetException& e0) {
		throw e0;
	} catch ($Throwable& e) {
		$throwNew(InvocationTargetException, e);
	}
}

void NativeConstructorAccessorImpl::clinit$($Class* clazz) {
	$assignStatic(NativeConstructorAccessorImpl::U, $Unsafe::getUnsafe());
	NativeConstructorAccessorImpl::GENERATED_OFFSET = $nc(NativeConstructorAccessorImpl::U)->objectFieldOffset(NativeConstructorAccessorImpl::class$, "generated"_s);
}

NativeConstructorAccessorImpl::NativeConstructorAccessorImpl() {
}

$Class* NativeConstructorAccessorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeConstructorAccessorImpl, U)},
		{"GENERATED_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeConstructorAccessorImpl, GENERATED_OFFSET)},
		{"c", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", $PRIVATE | $FINAL, $field(NativeConstructorAccessorImpl, c)},
		{"parent", "Ljdk/internal/reflect/DelegatingConstructorAccessorImpl;", nullptr, $PRIVATE, $field(NativeConstructorAccessorImpl, parent)},
		{"numInvocations", "I", nullptr, $PRIVATE, $field(NativeConstructorAccessorImpl, numInvocations)},
		{"generated", "I", nullptr, $PRIVATE | $VOLATILE, $field(NativeConstructorAccessorImpl, generated)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Constructor;)V", "(Ljava/lang/reflect/Constructor<*>;)V", 0, $method(NativeConstructorAccessorImpl, init$, void, $Constructor*)},
		{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NativeConstructorAccessorImpl, newInstance, $Object*, $ObjectArray*), "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
		{"newInstance0", "(Ljava/lang/reflect/Constructor;[Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/reflect/Constructor<*>;[Ljava/lang/Object;)Ljava/lang/Object;", $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeConstructorAccessorImpl, newInstance0, $Object*, $Constructor*, $ObjectArray*), "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
		{"setParent", "(Ljdk/internal/reflect/DelegatingConstructorAccessorImpl;)V", nullptr, 0, $virtualMethod(NativeConstructorAccessorImpl, setParent, void, $DelegatingConstructorAccessorImpl*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.NativeConstructorAccessorImpl",
		"jdk.internal.reflect.ConstructorAccessorImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NativeConstructorAccessorImpl, name, initialize, &classInfo$$, NativeConstructorAccessorImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(NativeConstructorAccessorImpl));
	});
	return class$;
}

$Class* NativeConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk
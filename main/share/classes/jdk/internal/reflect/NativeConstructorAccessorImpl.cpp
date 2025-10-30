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
using $NullPointerException = ::java::lang::NullPointerException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ConstructorAccessor = ::jdk::internal::reflect::ConstructorAccessor;
using $ConstructorAccessorImpl = ::jdk::internal::reflect::ConstructorAccessorImpl;
using $DelegatingConstructorAccessorImpl = ::jdk::internal::reflect::DelegatingConstructorAccessorImpl;
using $MethodAccessorGenerator = ::jdk::internal::reflect::MethodAccessorGenerator;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _NativeConstructorAccessorImpl_FieldInfo_[] = {
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeConstructorAccessorImpl, U)},
	{"GENERATED_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NativeConstructorAccessorImpl, GENERATED_OFFSET)},
	{"c", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", $PRIVATE | $FINAL, $field(NativeConstructorAccessorImpl, c)},
	{"parent", "Ljdk/internal/reflect/DelegatingConstructorAccessorImpl;", nullptr, $PRIVATE, $field(NativeConstructorAccessorImpl, parent)},
	{"numInvocations", "I", nullptr, $PRIVATE, $field(NativeConstructorAccessorImpl, numInvocations)},
	{"generated", "I", nullptr, $PRIVATE | $VOLATILE, $field(NativeConstructorAccessorImpl, generated)},
	{}
};

$MethodInfo _NativeConstructorAccessorImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Constructor;)V", "(Ljava/lang/reflect/Constructor<*>;)V", 0, $method(static_cast<void(NativeConstructorAccessorImpl::*)($Constructor*)>(&NativeConstructorAccessorImpl::init$))},
	{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
	{"newInstance0", "(Ljava/lang/reflect/Constructor;[Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/reflect/Constructor<*>;[Ljava/lang/Object;)Ljava/lang/Object;", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Object*(*)($Constructor*,$ObjectArray*)>(&NativeConstructorAccessorImpl::newInstance0)), "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
	{"setParent", "(Ljdk/internal/reflect/DelegatingConstructorAccessorImpl;)V", nullptr, 0},
	{}
};

#define _METHOD_INDEX_newInstance0 2

$ClassInfo _NativeConstructorAccessorImpl_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.NativeConstructorAccessorImpl",
	"jdk.internal.reflect.ConstructorAccessorImpl",
	nullptr,
	_NativeConstructorAccessorImpl_FieldInfo_,
	_NativeConstructorAccessorImpl_MethodInfo_
};

$Object* allocate$NativeConstructorAccessorImpl($Class* clazz) {
	return $of($alloc(NativeConstructorAccessorImpl));
}

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

void clinit$NativeConstructorAccessorImpl($Class* class$) {
	$assignStatic(NativeConstructorAccessorImpl::U, $Unsafe::getUnsafe());
	NativeConstructorAccessorImpl::GENERATED_OFFSET = $nc(NativeConstructorAccessorImpl::U)->objectFieldOffset(NativeConstructorAccessorImpl::class$, "generated"_s);
}

NativeConstructorAccessorImpl::NativeConstructorAccessorImpl() {
}

$Class* NativeConstructorAccessorImpl::load$($String* name, bool initialize) {
	$loadClass(NativeConstructorAccessorImpl, name, initialize, &_NativeConstructorAccessorImpl_ClassInfo_, clinit$NativeConstructorAccessorImpl, allocate$NativeConstructorAccessorImpl);
	return class$;
}

$Class* NativeConstructorAccessorImpl::class$ = nullptr;

		} // reflect
	} // internal
} // jdk
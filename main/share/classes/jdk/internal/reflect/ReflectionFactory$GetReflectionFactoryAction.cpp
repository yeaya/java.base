#include <jdk/internal/reflect/ReflectionFactory$GetReflectionFactoryAction.h>

#include <jdk/internal/reflect/ReflectionFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _ReflectionFactory$GetReflectionFactoryAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReflectionFactory$GetReflectionFactoryAction::*)()>(&ReflectionFactory$GetReflectionFactoryAction::init$))},
	{"run", "()Ljdk/internal/reflect/ReflectionFactory;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReflectionFactory$GetReflectionFactoryAction_InnerClassesInfo_[] = {
	{"jdk.internal.reflect.ReflectionFactory$GetReflectionFactoryAction", "jdk.internal.reflect.ReflectionFactory", "GetReflectionFactoryAction", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ReflectionFactory$GetReflectionFactoryAction_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.reflect.ReflectionFactory$GetReflectionFactoryAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ReflectionFactory$GetReflectionFactoryAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljdk/internal/reflect/ReflectionFactory;>;",
	nullptr,
	_ReflectionFactory$GetReflectionFactoryAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.reflect.ReflectionFactory"
};

$Object* allocate$ReflectionFactory$GetReflectionFactoryAction($Class* clazz) {
	return $of($alloc(ReflectionFactory$GetReflectionFactoryAction));
}

void ReflectionFactory$GetReflectionFactoryAction::init$() {
}

$Object* ReflectionFactory$GetReflectionFactoryAction::run() {
	return $of($ReflectionFactory::getReflectionFactory());
}

ReflectionFactory$GetReflectionFactoryAction::ReflectionFactory$GetReflectionFactoryAction() {
}

$Class* ReflectionFactory$GetReflectionFactoryAction::load$($String* name, bool initialize) {
	$loadClass(ReflectionFactory$GetReflectionFactoryAction, name, initialize, &_ReflectionFactory$GetReflectionFactoryAction_ClassInfo_, allocate$ReflectionFactory$GetReflectionFactoryAction);
	return class$;
}

$Class* ReflectionFactory$GetReflectionFactoryAction::class$ = nullptr;

		} // reflect
	} // internal
} // jdk
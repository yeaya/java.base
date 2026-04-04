#include <java/lang/PublicMethods$Key.h>
#include <java/lang/PublicMethods.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/util/Arrays.h>
#include <jdk/internal/reflect/ReflectionFactory$GetReflectionFactoryAction.h>
#include <jdk/internal/reflect/ReflectionFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $Arrays = ::java::util::Arrays;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;
using $ReflectionFactory$GetReflectionFactoryAction = ::jdk::internal::reflect::ReflectionFactory$GetReflectionFactoryAction;

namespace java {
	namespace lang {

$ReflectionFactory* PublicMethods$Key::reflectionFactory = nullptr;

void PublicMethods$Key::init$($Method* method) {
	$set(this, name, $nc(method)->getName());
	$set(this, ptypes, $nc(PublicMethods$Key::reflectionFactory)->getExecutableSharedParameterTypes(method));
}

bool PublicMethods$Key::matches($Method* method, $String* name, $ClassArray* ptypes) {
	$init(PublicMethods$Key);
	$useLocalObjectStack();
	bool var$0 = $$nc($nc(method)->getName())->equals(name);
	return var$0 && $Arrays::equals($($nc(PublicMethods$Key::reflectionFactory)->getExecutableSharedParameterTypes(method)), ptypes);
}

bool PublicMethods$Key::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	$var(PublicMethods$Key, that, nullptr);
	bool var$2 = $instanceOf(PublicMethods$Key, o);
	if (var$2) {
		$assign(that, $cast(PublicMethods$Key, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && this->name == $nc(that)->name;
	return var$0 && $Arrays::equals(this->ptypes, that->ptypes);
}

int32_t PublicMethods$Key::hashCode() {
	int32_t var$0 = $System::identityHashCode(this->name);
	return var$0 + 31 * $Arrays::hashCode(this->ptypes);
}

void PublicMethods$Key::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(PublicMethods$Key::reflectionFactory, $cast($ReflectionFactory, $AccessController::doPrivileged($$new($ReflectionFactory$GetReflectionFactoryAction))));
}

PublicMethods$Key::PublicMethods$Key() {
}

$Class* PublicMethods$Key::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reflectionFactory", "Ljdk/internal/reflect/ReflectionFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PublicMethods$Key, reflectionFactory)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PublicMethods$Key, name)},
		{"ptypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(PublicMethods$Key, ptypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, 0, $method(PublicMethods$Key, init$, void, $Method*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PublicMethods$Key, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PublicMethods$Key, hashCode, int32_t)},
		{"matches", "(Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class;)Z", "(Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class<*>;)Z", $STATIC, $staticMethod(PublicMethods$Key, matches, bool, $Method*, $String*, $ClassArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.PublicMethods$Key", "java.lang.PublicMethods", "Key", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.PublicMethods$Key",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.PublicMethods"
	};
	$loadClass(PublicMethods$Key, name, initialize, &classInfo$$, PublicMethods$Key::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PublicMethods$Key);
	});
	return class$;
}

$Class* PublicMethods$Key::class$ = nullptr;

	} // lang
} // java
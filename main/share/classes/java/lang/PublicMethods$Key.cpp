#include <java/lang/PublicMethods$Key.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/PublicMethods.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <jdk/internal/reflect/ReflectionFactory$GetReflectionFactoryAction.h>
#include <jdk/internal/reflect/ReflectionFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicMethods = ::java::lang::PublicMethods;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;
using $ReflectionFactory$GetReflectionFactoryAction = ::jdk::internal::reflect::ReflectionFactory$GetReflectionFactoryAction;

namespace java {
	namespace lang {

$FieldInfo _PublicMethods$Key_FieldInfo_[] = {
	{"reflectionFactory", "Ljdk/internal/reflect/ReflectionFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PublicMethods$Key, reflectionFactory)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PublicMethods$Key, name)},
	{"ptypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(PublicMethods$Key, ptypes)},
	{}
};

$MethodInfo _PublicMethods$Key_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, 0, $method(static_cast<void(PublicMethods$Key::*)($Method*)>(&PublicMethods$Key::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"matches", "(Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class;)Z", "(Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Method*,$String*,$ClassArray*)>(&PublicMethods$Key::matches))},
	{}
};

$InnerClassInfo _PublicMethods$Key_InnerClassesInfo_[] = {
	{"java.lang.PublicMethods$Key", "java.lang.PublicMethods", "Key", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PublicMethods$Key_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.PublicMethods$Key",
	"java.lang.Object",
	nullptr,
	_PublicMethods$Key_FieldInfo_,
	_PublicMethods$Key_MethodInfo_,
	nullptr,
	nullptr,
	_PublicMethods$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.PublicMethods"
};

$Object* allocate$PublicMethods$Key($Class* clazz) {
	return $of($alloc(PublicMethods$Key));
}

$ReflectionFactory* PublicMethods$Key::reflectionFactory = nullptr;

void PublicMethods$Key::init$($Method* method) {
	$set(this, name, $nc(method)->getName());
	$set(this, ptypes, $nc(PublicMethods$Key::reflectionFactory)->getExecutableSharedParameterTypes(method));
}

bool PublicMethods$Key::matches($Method* method, $String* name, $ClassArray* ptypes) {
	$init(PublicMethods$Key);
	bool var$0 = $nc($($nc(method)->getName()))->equals(name);
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
	bool var$1 = (var$2);
	bool var$0 = var$1 && this->name == $nc(that)->name;
	return var$0 && $Arrays::equals(this->ptypes, that->ptypes);
}

int32_t PublicMethods$Key::hashCode() {
	int32_t var$0 = $System::identityHashCode(this->name);
	return var$0 + 31 * $Arrays::hashCode(this->ptypes);
}

void clinit$PublicMethods$Key($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(PublicMethods$Key::reflectionFactory, $cast($ReflectionFactory, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ReflectionFactory$GetReflectionFactoryAction)))));
}

PublicMethods$Key::PublicMethods$Key() {
}

$Class* PublicMethods$Key::load$($String* name, bool initialize) {
	$loadClass(PublicMethods$Key, name, initialize, &_PublicMethods$Key_ClassInfo_, clinit$PublicMethods$Key, allocate$PublicMethods$Key);
	return class$;
}

$Class* PublicMethods$Key::class$ = nullptr;

	} // lang
} // java
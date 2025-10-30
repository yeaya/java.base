#include <jdk/internal/reflect/ClassDefiner.h>

#include <java/lang/ClassLoader.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/reflect/ClassDefiner$1.h>
#include <jcpp.h>

#undef JLA

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ClassDefiner$1 = ::jdk::internal::reflect::ClassDefiner$1;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _ClassDefiner_FieldInfo_[] = {
	{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $STATIC | $FINAL, $staticField(ClassDefiner, JLA)},
	{}
};

$MethodInfo _ClassDefiner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassDefiner::*)()>(&ClassDefiner::init$))},
	{"defineClass", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($String*,$bytes*,int32_t,int32_t,$ClassLoader*)>(&ClassDefiner::defineClass))},
	{}
};

$InnerClassInfo _ClassDefiner_InnerClassesInfo_[] = {
	{"jdk.internal.reflect.ClassDefiner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassDefiner_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.ClassDefiner",
	"java.lang.Object",
	nullptr,
	_ClassDefiner_FieldInfo_,
	_ClassDefiner_MethodInfo_,
	nullptr,
	nullptr,
	_ClassDefiner_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.reflect.ClassDefiner$1"
};

$Object* allocate$ClassDefiner($Class* clazz) {
	return $of($alloc(ClassDefiner));
}

$JavaLangAccess* ClassDefiner::JLA = nullptr;

void ClassDefiner::init$() {
}

$Class* ClassDefiner::defineClass($String* name, $bytes* bytes, int32_t off, int32_t len, $ClassLoader* parentClassLoader) {
	$init(ClassDefiner);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, newLoader, $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ClassDefiner$1, parentClassLoader)))));
	return $nc(ClassDefiner::JLA)->defineClass(newLoader, name, bytes, nullptr, "__ClassDefiner__"_s);
}

void clinit$ClassDefiner($Class* class$) {
	$assignStatic(ClassDefiner::JLA, $SharedSecrets::getJavaLangAccess());
}

ClassDefiner::ClassDefiner() {
}

$Class* ClassDefiner::load$($String* name, bool initialize) {
	$loadClass(ClassDefiner, name, initialize, &_ClassDefiner_ClassInfo_, clinit$ClassDefiner, allocate$ClassDefiner);
	return class$;
}

$Class* ClassDefiner::class$ = nullptr;

		} // reflect
	} // internal
} // jdk
#include <java/util/ResourceBundle$Control$1.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/ResourceBundle$Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;

namespace java {
	namespace util {

void ResourceBundle$Control$1::init$($ResourceBundle$Control* this$0, $Class* val$bundleClass) {
	$set(this, this$0, this$0);
	$set(this, val$bundleClass, val$bundleClass);
}

$Object* ResourceBundle$Control$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$bundleClass)->getDeclaredConstructor($$new($ClassArray, 0)));
}

ResourceBundle$Control$1::ResourceBundle$Control$1() {
}

$Class* ResourceBundle$Control$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ResourceBundle$Control;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$1, this$0)},
		{"val$bundleClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$1, val$bundleClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ResourceBundle$Control;Ljava/lang/Class;)V", nullptr, 0, $method(ResourceBundle$Control$1, init$, void, $ResourceBundle$Control*, $Class*)},
		{"run", "()Ljava/lang/reflect/Constructor;", "()Ljava/lang/reflect/Constructor<Ljava/util/ResourceBundle;>;", $PUBLIC, $virtualMethod(ResourceBundle$Control$1, run, $Object*), "java.lang.NoSuchMethodException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ResourceBundle$Control",
		"newBundle0",
		"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$Control", "java.util.ResourceBundle", "Control", $PUBLIC | $STATIC},
		{"java.util.ResourceBundle$Control$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$Control$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Constructor<Ljava/util/ResourceBundle;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$Control$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$Control$1);
	});
	return class$;
}

$Class* ResourceBundle$Control$1::class$ = nullptr;

	} // util
} // java
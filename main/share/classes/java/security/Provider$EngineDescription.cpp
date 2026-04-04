#include <java/security/Provider$EngineDescription.h>
#include <java/security/Provider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

void Provider$EngineDescription::init$($String* name, bool sp, $String* paramName) {
	$set(this, name, name);
	this->supportsParameter = sp;
	$set(this, constructorParameterClassName, paramName);
}

$Class* Provider$EngineDescription::getConstructorParameterClass() {
	$beforeCallerSensitive();
	$Class* clazz = this->constructorParameterClass;
	if (clazz == nullptr) {
		clazz = $Class::forName(this->constructorParameterClassName);
		$set(this, constructorParameterClass, clazz);
	}
	return clazz;
}

Provider$EngineDescription::Provider$EngineDescription() {
}

$Class* Provider$EngineDescription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Provider$EngineDescription, name)},
		{"supportsParameter", "Z", nullptr, $FINAL, $field(Provider$EngineDescription, supportsParameter)},
		{"constructorParameterClassName", "Ljava/lang/String;", nullptr, $FINAL, $field(Provider$EngineDescription, constructorParameterClassName)},
		{"constructorParameterClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $VOLATILE, $field(Provider$EngineDescription, constructorParameterClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ZLjava/lang/String;)V", nullptr, 0, $method(Provider$EngineDescription, init$, void, $String*, bool, $String*)},
		{"getConstructorParameterClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $virtualMethod(Provider$EngineDescription, getConstructorParameterClass, $Class*), "java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Provider$EngineDescription", "java.security.Provider", "EngineDescription", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Provider$EngineDescription",
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
		"java.security.Provider"
	};
	$loadClass(Provider$EngineDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Provider$EngineDescription);
	});
	return class$;
}

$Class* Provider$EngineDescription::class$ = nullptr;

	} // security
} // java
#include <InnerClassToString.h>
#include <InnerClassToString$MyEntity.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Parameter.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $InnerClassToString$MyEntity = ::InnerClassToString$MyEntity;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Parameter = ::java::lang::reflect::Parameter;
using $Set = ::java::util::Set;

$ClassArray* InnerClassToString::genericParamClasses = nullptr;
$ClassArray* InnerClassToString::nongenericParamClasses = nullptr;

void InnerClassToString::init$() {
	this->errors = 0;
}

void InnerClassToString::test($Constructor* constructor, $ClassArray* paramClasses) {
	$useLocalObjectStack();
	$var($ParameterArray, params, $nc(constructor)->getParameters());
	for (int32_t i = 0; i < $nc(params)->length; ++i) {
		$var($Parameter, parameter, params->get(i));
		$nc($System::out)->println($($nc(parameter)->toString()));
		if (!$nc(parameter->getType())->equals($nc(paramClasses)->get(i))) {
			++this->errors;
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Expected type "_s);
			var$0->append(paramClasses->get(i));
			var$0->append(" but got "_s);
			var$0->append(parameter->getType());
			$nc($System::err)->println($$str(var$0));
		}
		$System::out->println($(parameter->getParameterizedType()));
		$System::out->println($(parameter->getAnnotatedType()));
	}
}

void InnerClassToString::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($InnerClassToString$MyEntity);
	$load($Set);
	$var($Constructor, genericConstructor, $InnerClassToString$MyEntity::class$->getConstructor($$new($ClassArray, {
		InnerClassToString::class$,
		$Set::class$
	})));
	test(genericConstructor, InnerClassToString::genericParamClasses);
	$var($Constructor, nongenericConstructor, $InnerClassToString$MyEntity::class$->getConstructor($$new($ClassArray, {
		InnerClassToString::class$,
		$String::class$
	})));
	test(nongenericConstructor, InnerClassToString::nongenericParamClasses);
	if (this->errors != 0) {
		$throwNew($RuntimeException, $$str({$$str(this->errors), " errors in test"_s}));
	}
}

void InnerClassToString::main($StringArray* args) {
	$init(InnerClassToString);
	$$new(InnerClassToString)->run();
}

void InnerClassToString::clinit$($Class* clazz) {
	$load($Set);
	$assignStatic(InnerClassToString::genericParamClasses, $new($ClassArray, {
		InnerClassToString::class$,
		$Set::class$
	}));
	$assignStatic(InnerClassToString::nongenericParamClasses, $new($ClassArray, {
		InnerClassToString::class$,
		$String::class$
	}));
}

InnerClassToString::InnerClassToString() {
}

$Class* InnerClassToString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"genericParamClasses", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(InnerClassToString, genericParamClasses)},
		{"nongenericParamClasses", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(InnerClassToString, nongenericParamClasses)},
		{"errors", "I", nullptr, $PRIVATE, $field(InnerClassToString, errors)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InnerClassToString, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InnerClassToString, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PRIVATE, $method(InnerClassToString, run, void), "java.lang.Exception"},
		{"test", "(Ljava/lang/reflect/Constructor;[Ljava/lang/Class;)V", "(Ljava/lang/reflect/Constructor<LInnerClassToString$MyEntity;>;[Ljava/lang/Class<*>;)V", $PRIVATE, $method(InnerClassToString, test, void, $Constructor*, $ClassArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InnerClassToString$MyEntity", "InnerClassToString", "MyEntity", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InnerClassToString",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"InnerClassToString$MyEntity"
	};
	$loadClass(InnerClassToString, name, initialize, &classInfo$$, InnerClassToString::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InnerClassToString);
	});
	return class$;
}

$Class* InnerClassToString::class$ = nullptr;
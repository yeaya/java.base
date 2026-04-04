#include <WithoutParameters.h>
#include <WithoutParameters$ExpectedParameterInfo.h>
#include <WithoutParameters$Foo$Inner.h>
#include <WithoutParameters$Foo.h>
#include <WithoutParameters$ParameterizedInfo.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Parameter.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $WithoutParameters$ExpectedParameterInfo = ::WithoutParameters$ExpectedParameterInfo;
using $WithoutParameters$Foo = ::WithoutParameters$Foo;
using $WithoutParameters$Foo$Inner = ::WithoutParameters$Foo$Inner;
using $WithoutParameters$ParameterizedInfoArray = $Array<WithoutParameters$ParameterizedInfo>;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $Parameter = ::java::lang::reflect::Parameter;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $Objects = ::java::util::Objects;

void WithoutParameters::init$() {
	this->errors = 0;
}

void WithoutParameters::main($StringArray* argv) {
	$useLocalObjectStack();
	$load(WithoutParameters);
	$beforeCallerSensitive();
	$var(WithoutParameters, wp, $new(WithoutParameters));
	$load($WithoutParameters$Foo);
	wp->runTests($($WithoutParameters$Foo::class$->getMethods()));
	$load($WithoutParameters$Foo$Inner);
	wp->runTests($($WithoutParameters$Foo$Inner::class$->getConstructors()));
	wp->checkForErrors();
}

void WithoutParameters::runTests($MethodArray* methods) {
	$useLocalObjectStack();
	$var($MethodArray, arr$, methods);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Method, m, arr$->get(i$));
		{
			runTest(m);
		}
	}
}

void WithoutParameters::runTests($ConstructorArray* constructors) {
	$useLocalObjectStack();
	$var($ConstructorArray, arr$, constructors);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Constructor, c, arr$->get(i$));
		{
			runTest(c);
		}
	}
}

void WithoutParameters::runTest($Executable* e) {
	$useLocalObjectStack();
	$nc($System::err)->println($$str({"Inspecting executable "_s, e}));
	$var($ParameterArray, parameters, $nc(e)->getParameters());
	$Objects::requireNonNull(parameters, "getParameters should never be null"_s);
	$load($WithoutParameters$ExpectedParameterInfo);
	$var($WithoutParameters$ExpectedParameterInfo, epi, $cast($WithoutParameters$ExpectedParameterInfo, e->getAnnotation($WithoutParameters$ExpectedParameterInfo::class$)));
	if (epi != nullptr) {
		int32_t var$1 = epi->parameterCount();
		bool var$0 = var$1 != e->getParameterCount();
		abortIfTrue(var$0, $$str({"Bad parameter count for "_s, e}));
		bool var$3 = epi->isVarArgs();
		bool var$2 = var$3 != e->isVarArgs();
		abortIfTrue(var$2, $$str({"Bad varargs value for "_s, e}));
	}
	abortIfTrue(e->getParameterCount() != $nc(parameters)->length, "Mismatched of parameter counts."_s);
	for (int32_t i = 0; i < parameters->length; ++i) {
		$var($Parameter, p, parameters->get(i));
		bool var$4 = $nc(p)->isNamePresent();
		errorIfTrue(var$4, $$str({p, ".isNamePresent == true"_s}));
		bool var$5 = !$$nc(p->getDeclaringExecutable())->equals(e);
		errorIfTrue(var$5, $$str({p, ".getDeclaringExecutable != "_s, e}));
		$Objects::requireNonNull(p->getType(), "getType() should not be null"_s);
		$Objects::requireNonNull($(p->getParameterizedType()), "getParameterizedType() should not be null"_s);
		if (epi != nullptr) {
			$Class* expectedParameterType = $nc($(epi->parameterTypes()))->get(i);
			bool var$6 = !$nc(p->getType())->equals(expectedParameterType);
			$var($StringBuilder, var$7, $new($StringBuilder));
			var$7->append("Wrong parameter type for "_s);
			var$7->append(p);
			var$7->append(": expected "_s);
			var$7->append(expectedParameterType);
			var$7->append(", but got "_s);
			var$7->append(p->getType());
			errorIfTrue(var$6, $$str(var$7));
			$var($WithoutParameters$ParameterizedInfoArray, expectedParameterizedTypes, epi->parameterizedTypes());
			if ($nc(expectedParameterizedTypes)->length > 0) {
				$var($Type, parameterizedType, p->getParameterizedType());
				$Class* expectedParameterziedTypeType = $nc(expectedParameterizedTypes->get(i))->value();
				bool var$8 = !$nc(expectedParameterziedTypeType)->isAssignableFrom($nc(parameterizedType)->getClass());
				$var($StringBuilder, var$9, $new($StringBuilder));
				var$9->append("Wrong class of parameteried type of "_s);
				var$9->append(p);
				var$9->append(": expected "_s);
				var$9->append(expectedParameterziedTypeType);
				var$9->append(", but got "_s);
				var$9->append(parameterizedType->getClass());
				errorIfTrue(var$8, $$str(var$9));
				if (expectedParameterziedTypeType->equals($Class::class$)) {
					bool var$10 = !parameterizedType->equals(expectedParameterType);
					errorIfTrue(var$10, $$str({"Wrong parameteried type for "_s, p, ": expected "_s, expectedParameterType, ", but got "_s, parameterizedType}));
				} else {
					$load($ParameterizedType);
					if (expectedParameterziedTypeType->equals($ParameterizedType::class$)) {
						$var($ParameterizedType, ptype, $cast($ParameterizedType, parameterizedType));
						bool var$11 = !$$nc(ptype->getRawType())->equals(expectedParameterType);
						$var($StringBuilder, var$12, $new($StringBuilder));
						var$12->append("Wrong raw type for "_s);
						var$12->append(p);
						var$12->append(": expected "_s);
						var$12->append(expectedParameterType);
						var$12->append(", but got "_s);
						var$12->append($(ptype->getRawType()));
						errorIfTrue(var$11, $$str(var$12));
					}
					$var($String, expectedStringOfType, $nc($nc($(epi->parameterizedTypes()))->get(i))->string());
					bool var$13 = !$nc(expectedStringOfType)->equals($(parameterizedType->toString()));
					$var($StringBuilder, var$14, $new($StringBuilder));
					var$14->append("Bad type string"_s);
					var$14->append(p);
					var$14->append(": expected "_s);
					var$14->append(expectedStringOfType);
					var$14->append(", but got "_s);
					var$14->append($(parameterizedType->toString()));
					errorIfTrue(var$13, $$str(var$14));
				}
			}
		}
	}
}

void WithoutParameters::checkForErrors() {
	$useLocalObjectStack();
	if (this->errors > 0) {
		$throwNew($RuntimeException, $$str({"Failed "_s, $$str(this->errors), " tests"_s}));
	}
}

void WithoutParameters::errorIfTrue(bool predicate, $String* errMessage) {
	if (predicate) {
		++this->errors;
		$nc($System::err)->println(errMessage);
	}
}

void WithoutParameters::abortIfTrue(bool predicate, $String* errMessage) {
	if (predicate) {
		$throwNew($RuntimeException, errMessage);
	}
}

WithoutParameters::WithoutParameters() {
}

$Class* WithoutParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"errors", "I", nullptr, 0, $field(WithoutParameters, errors)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WithoutParameters, init$, void)},
		{"abortIfTrue", "(ZLjava/lang/String;)V", nullptr, $PRIVATE, $method(WithoutParameters, abortIfTrue, void, bool, $String*)},
		{"checkForErrors", "()V", nullptr, $PRIVATE, $method(WithoutParameters, checkForErrors, void)},
		{"errorIfTrue", "(ZLjava/lang/String;)V", nullptr, $PRIVATE, $method(WithoutParameters, errorIfTrue, void, bool, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WithoutParameters, main, void, $StringArray*), "java.lang.Exception"},
		{"runTest", "(Ljava/lang/reflect/Executable;)V", nullptr, 0, $virtualMethod(WithoutParameters, runTest, void, $Executable*), "java.lang.Exception"},
		{"runTests", "([Ljava/lang/reflect/Method;)V", nullptr, 0, $virtualMethod(WithoutParameters, runTests, void, $MethodArray*), "java.lang.Exception"},
		{"runTests", "([Ljava/lang/reflect/Constructor;)V", nullptr, 0, $virtualMethod(WithoutParameters, runTests, void, $ConstructorArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithoutParameters$Foo", "WithoutParameters", "Foo", $PUBLIC},
		{"WithoutParameters$ParameterizedInfo", "WithoutParameters", "ParameterizedInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"WithoutParameters$ExpectedParameterInfo", "WithoutParameters", "ExpectedParameterInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WithoutParameters",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"WithoutParameters$Foo,WithoutParameters$Foo$Inner,WithoutParameters$ParameterizedInfo,WithoutParameters$ExpectedParameterInfo"
	};
	$loadClass(WithoutParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithoutParameters);
	});
	return class$;
}

$Class* WithoutParameters::class$ = nullptr;
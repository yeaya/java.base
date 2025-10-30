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
using $WithoutParameters$ParameterizedInfo = ::WithoutParameters$ParameterizedInfo;
using $WithoutParameters$ParameterizedInfoArray = $Array<WithoutParameters$ParameterizedInfo>;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Constructor = ::java::lang::reflect::Constructor;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $Parameter = ::java::lang::reflect::Parameter;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $Objects = ::java::util::Objects;

$FieldInfo _WithoutParameters_FieldInfo_[] = {
	{"errors", "I", nullptr, 0, $field(WithoutParameters, errors)},
	{}
};

$MethodInfo _WithoutParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WithoutParameters::*)()>(&WithoutParameters::init$))},
	{"abortIfTrue", "(ZLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WithoutParameters::*)(bool,$String*)>(&WithoutParameters::abortIfTrue))},
	{"checkForErrors", "()V", nullptr, $PRIVATE, $method(static_cast<void(WithoutParameters::*)()>(&WithoutParameters::checkForErrors))},
	{"errorIfTrue", "(ZLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(WithoutParameters::*)(bool,$String*)>(&WithoutParameters::errorIfTrue))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WithoutParameters::main)), "java.lang.Exception"},
	{"runTest", "(Ljava/lang/reflect/Executable;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"runTests", "([Ljava/lang/reflect/Method;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"runTests", "([Ljava/lang/reflect/Constructor;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _WithoutParameters_InnerClassesInfo_[] = {
	{"WithoutParameters$Foo", "WithoutParameters", "Foo", $PUBLIC},
	{"WithoutParameters$ParameterizedInfo", "WithoutParameters", "ParameterizedInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"WithoutParameters$ExpectedParameterInfo", "WithoutParameters", "ExpectedParameterInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _WithoutParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WithoutParameters",
	"java.lang.Object",
	nullptr,
	_WithoutParameters_FieldInfo_,
	_WithoutParameters_MethodInfo_,
	nullptr,
	nullptr,
	_WithoutParameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	"WithoutParameters$Foo,WithoutParameters$Foo$Inner,WithoutParameters$ParameterizedInfo,WithoutParameters$ExpectedParameterInfo"
};

$Object* allocate$WithoutParameters($Class* clazz) {
	return $of($alloc(WithoutParameters));
}

void WithoutParameters::init$() {
	this->errors = 0;
}

void WithoutParameters::main($StringArray* argv) {
	$load(WithoutParameters);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var(WithoutParameters, wp, $new(WithoutParameters));
	$load($WithoutParameters$Foo);
	wp->runTests($($WithoutParameters$Foo::class$->getMethods()));
	$load($WithoutParameters$Foo$Inner);
	wp->runTests($($WithoutParameters$Foo$Inner::class$->getConstructors()));
	wp->checkForErrors();
}

void WithoutParameters::runTests($MethodArray* methods) {
	$useLocalCurrentObjectStackCache();
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				runTest(m);
			}
		}
	}
}

void WithoutParameters::runTests($ConstructorArray* constructors) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ConstructorArray, arr$, constructors);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Constructor, c, arr$->get(i$));
			{
				runTest(c);
			}
		}
	}
}

void WithoutParameters::runTest($Executable* e) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($$str({"Inspecting executable "_s, e}));
	$var($ParameterArray, parameters, $nc(e)->getParameters());
	$Objects::requireNonNull($of(parameters), "getParameters should never be null"_s);
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
	for (int32_t i = 0; i < $nc(parameters)->length; ++i) {
		$var($Parameter, p, parameters->get(i));
		bool var$4 = $nc(p)->isNamePresent();
		errorIfTrue(var$4, $$str({p, ".isNamePresent == true"_s}));
		bool var$5 = !$nc($of($($nc(p)->getDeclaringExecutable())))->equals(e);
		errorIfTrue(var$5, $$str({p, ".getDeclaringExecutable != "_s, e}));
		$Objects::requireNonNull($of($nc(p)->getType()), "getType() should not be null"_s);
		$Objects::requireNonNull($($of($nc(p)->getParameterizedType())), "getParameterizedType() should not be null"_s);
		if (epi != nullptr) {
			$Class* expectedParameterType = $nc($(epi->parameterTypes()))->get(i);
			bool var$6 = !$nc($of($nc(p)->getType()))->equals(expectedParameterType);
			$var($String, var$7, $$str({"Wrong parameter type for "_s, p, ": expected "_s, expectedParameterType, ", but got "_s}));
			errorIfTrue(var$6, $$concat(var$7, $(p->getType())));
			$var($WithoutParameters$ParameterizedInfoArray, expectedParameterizedTypes, epi->parameterizedTypes());
			if ($nc(expectedParameterizedTypes)->length > 0) {
				$var($Type, parameterizedType, $nc(p)->getParameterizedType());
				$Class* expectedParameterziedTypeType = $nc(expectedParameterizedTypes->get(i))->value();
				bool var$8 = !$nc(expectedParameterziedTypeType)->isAssignableFrom($nc($of(parameterizedType))->getClass());
				$var($String, var$9, $$str({"Wrong class of parameteried type of "_s, p, ": expected "_s, expectedParameterziedTypeType, ", but got "_s}));
				errorIfTrue(var$8, $$concat(var$9, $($nc($of(parameterizedType))->getClass())));
				if ($nc($of(expectedParameterziedTypeType))->equals($Class::class$)) {
					bool var$10 = !$nc($of(parameterizedType))->equals(expectedParameterType);
					errorIfTrue(var$10, $$str({"Wrong parameteried type for "_s, p, ": expected "_s, expectedParameterType, ", but got "_s, parameterizedType}));
				} else {
					$load($ParameterizedType);
					if ($of(expectedParameterziedTypeType)->equals($ParameterizedType::class$)) {
						$var($ParameterizedType, ptype, $cast($ParameterizedType, parameterizedType));
						bool var$11 = !$nc($of($($nc(ptype)->getRawType())))->equals(expectedParameterType);
						$var($String, var$12, $$str({"Wrong raw type for "_s, p, ": expected "_s, expectedParameterType, ", but got "_s}));
						errorIfTrue(var$11, $$concat(var$12, $(ptype->getRawType())));
					}
					$var($String, expectedStringOfType, $nc($nc($(epi->parameterizedTypes()))->get(i))->string());
					bool var$13 = !$nc(expectedStringOfType)->equals($($nc($of(parameterizedType))->toString()));
					$var($String, var$14, $$str({"Bad type string"_s, p, ": expected "_s, expectedStringOfType, ", but got "_s}));
					errorIfTrue(var$13, $$concat(var$14, $($nc($of(parameterizedType))->toString())));
				}
			}
		}
	}
}

void WithoutParameters::checkForErrors() {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(WithoutParameters, name, initialize, &_WithoutParameters_ClassInfo_, allocate$WithoutParameters);
	return class$;
}

$Class* WithoutParameters::class$ = nullptr;
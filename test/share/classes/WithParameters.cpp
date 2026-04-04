#include <WithParameters.h>
#include <WithParameters$Foo.h>
#include <WithParameters$Thing.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Parameter.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/WildcardType.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FINAL
#undef TYPE

using $WithParameters$Foo = ::WithParameters$Foo;
using $WithParameters$Thing = ::WithParameters$Thing;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ParameterArray = $Array<::java::lang::reflect::Parameter>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Parameter = ::java::lang::reflect::Parameter;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $List = ::java::util::List;

$ClassArray* WithParameters::qux_types = nullptr;
$StringArray* WithParameters::qux_names = nullptr;

void WithParameters::init$() {
}

void WithParameters::main($StringArray* argv) {
	$init(WithParameters);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	int32_t error = 0;
	$load($WithParameters$Foo);
	$var($MethodArray, methods, $WithParameters$Foo::class$->getMethods());
	{
		$var($MethodArray, arr$, methods);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$nc($System::err)->println($$str({"Inspecting method "_s, $($nc(m)->getName())}));
				$var($ParameterArray, parameters, m->getParameters());
				if (parameters == nullptr) {
					$throwNew($Exception, "getParameters should never be null"_s);
				}
				for (int32_t i = 0; i < $nc(parameters)->length; ++i) {
					$var($Parameter, p, parameters->get(i));
					if (!$$nc($nc(p)->getDeclaringExecutable())->equals(m)) {
						$System::err->println($$str({p, ".getDeclaringExecutable != "_s, m}));
						++error;
					}
					if (nullptr == p->getType()) {
						$System::err->println($$str({p, ".getType() == null"_s}));
						++error;
					}
					if (nullptr == p->getParameterizedType()) {
						$System::err->println($$str({p, ".getParameterizedType == null"_s}));
						++error;
					}
				}
				if ($$nc(m->getName())->equals("qux"_s)) {
					if (6 != parameters->length) {
						$System::err->println("Wrong number of parameters for qux"_s);
						++error;
					}
					for (int32_t i = 0; i < parameters->length; ++i) {
						$var($Parameter, p, parameters->get(i));
						if (!$nc(p)->isNamePresent()) {
							$System::err->println($$str({p, ".isNamePresent == false"_s}));
							++error;
						}
						if (!$$nc($nc(parameters->get(i))->getName())->equals(WithParameters::qux_names->get(i))) {
							$System::err->println($$str({"Wrong parameter name for "_s, parameters->get(i)}));
							++error;
						}
						if (!$nc($nc(parameters->get(i))->getType())->equals(WithParameters::qux_types->get(i))) {
							$var($StringBuilder, var$0, $new($StringBuilder));
							var$0->append("Wrong parameter type for "_s);
							var$0->append(parameters->get(0));
							var$0->append(": expected "_s);
							var$0->append(WithParameters::qux_types->get(i));
							var$0->append(", but got "_s);
							var$0->append($nc(parameters->get(i))->getType());
							$System::err->println($$str(var$0));
							++error;
						}
					}
					if (!$$nc($nc(parameters->get(0))->toString())->equals("final int quux"_s)) {
						$System::err->println($$str({"toString for quux is wrong, expected \"final int quux\", got \""_s, parameters->get(0), "\""_s}));
						++error;
					}
					if ($nc(parameters->get(0))->getModifiers() != $Modifier::FINAL) {
						$System::err->println("quux is not final"_s);
						++error;
					}
					if ($nc(parameters->get(0))->isVarArgs()) {
						$System::err->println("isVarArg for quux is wrong"_s);
						++error;
					}
					if (!$$nc($nc(parameters->get(0))->getParameterizedType())->equals($Integer::TYPE)) {
						$System::err->println("getParameterizedType for quux is wrong"_s);
						++error;
					}
					if (!$$nc($nc(parameters->get(1))->toString())->equals("WithParameters$Foo quuux"_s)) {
						$System::err->println($$str({"toString for quuux is wrong, expected \"WithParameters$Foo quuux\", got \""_s, parameters->get(1), "\""_s}));
						++error;
					}
					if ($nc(parameters->get(1))->isVarArgs()) {
						$System::err->println("isVarArg for quuux is wrong"_s);
						++error;
					}
					if (!$$nc($nc(parameters->get(1))->getParameterizedType())->equals($WithParameters$Foo::class$)) {
						$System::err->println("getParameterizedType for quuux is wrong"_s);
						++error;
					}
					$var($AnnotationArray, anns, $nc(parameters->get(1))->getAnnotations());
					if (1 != $nc(anns)->length) {
						$System::err->println("getAnnotations missed an annotation"_s);
						++error;
					} else {
						$load($WithParameters$Thing);
						if (!$nc($nc(anns->get(0))->annotationType())->equals($WithParameters$Thing::class$)) {
							$System::err->println("getAnnotations has the wrong annotation"_s);
							++error;
						}
					}
					if (!$$nc($nc(parameters->get(2))->toString())->equals("java.util.List<?> l"_s)) {
						$System::err->println($$str({"toString for l is wrong, expected \"java.util.List<?> l\", got \""_s, parameters->get(2), "\""_s}));
						++error;
					}
					if ($nc(parameters->get(2))->isVarArgs()) {
						$System::err->println("isVarArg for l is wrong"_s);
						++error;
					}
					if (!($instanceOf($ParameterizedType, $($nc(parameters->get(2))->getParameterizedType())))) {
						$System::err->println("getParameterizedType for l is wrong"_s);
						++error;
					} else {
						$var($ParameterizedType, pt, $cast($ParameterizedType, $nc(parameters->get(2))->getParameterizedType()));
						$load($List);
						if (!$$nc($nc(pt)->getRawType())->equals($List::class$)) {
							$System::err->println("Raw type for l is wrong"_s);
							++error;
						}
						if (1 != $nc($(pt->getActualTypeArguments()))->length) {
							$System::err->println("Number of type parameters for l is wrong"_s);
							++error;
						}
						if (!($instanceOf($WildcardType, $nc($(pt->getActualTypeArguments()))->get(0)))) {
							$System::err->println("Type parameter for l is wrong"_s);
							++error;
						}
					}
					if (!$$nc($nc(parameters->get(3))->toString())->equals("java.util.List<WithParameters$Foo> l2"_s)) {
						$System::err->println($$str({"toString for l2 is wrong, expected \"java.util.List<WithParameters$Foo> l2\", got \""_s, parameters->get(3), "\""_s}));
						++error;
					}
					if ($nc(parameters->get(3))->isVarArgs()) {
						$System::err->println("isVarArg for l2 is wrong"_s);
						++error;
					}
					if (!($instanceOf($ParameterizedType, $($nc(parameters->get(3))->getParameterizedType())))) {
						$System::err->println("getParameterizedType for l2 is wrong"_s);
						++error;
					} else {
						$var($ParameterizedType, pt, $cast($ParameterizedType, $nc(parameters->get(3))->getParameterizedType()));
						$load($List);
						if (!$$nc($nc(pt)->getRawType())->equals($List::class$)) {
							$System::err->println("Raw type for l2 is wrong"_s);
							++error;
						}
						if (1 != $nc($(pt->getActualTypeArguments()))->length) {
							$System::err->println("Number of type parameters for l2 is wrong"_s);
							++error;
						}
						if (!($nc($nc($(pt->getActualTypeArguments()))->get(0))->equals($WithParameters$Foo::class$))) {
							$System::err->println("Type parameter for l2 is wrong"_s);
							++error;
						}
					}
					if (!$$nc($nc(parameters->get(4))->toString())->equals("java.util.List<? extends WithParameters$Foo> l3"_s)) {
						$System::err->println($$str({"toString for l3 is wrong, expected \"java.util.List<? extends WithParameters$Foo> l3\", got \""_s, parameters->get(3), "\""_s}));
						++error;
					}
					if ($nc(parameters->get(4))->isVarArgs()) {
						$System::err->println("isVarArg for l3 is wrong"_s);
						++error;
					}
					if (!($instanceOf($ParameterizedType, $($nc(parameters->get(4))->getParameterizedType())))) {
						$System::err->println("getParameterizedType for l3 is wrong"_s);
						++error;
					} else {
						$var($ParameterizedType, pt, $cast($ParameterizedType, $nc(parameters->get(4))->getParameterizedType()));
						$load($List);
						if (!$$nc($nc(pt)->getRawType())->equals($List::class$)) {
							$System::err->println("Raw type for l3 is wrong"_s);
							++error;
						}
						if (1 != $nc($(pt->getActualTypeArguments()))->length) {
							$System::err->println("Number of type parameters for l3 is wrong"_s);
							++error;
						}
						if (!($instanceOf($WildcardType, $nc($(pt->getActualTypeArguments()))->get(0)))) {
							$System::err->println("Type parameter for l3 is wrong"_s);
							++error;
						} else {
							$var($WildcardType, wt, $cast($WildcardType, $nc($(pt->getActualTypeArguments()))->get(0)));
							if (!$nc($nc($($nc(wt)->getUpperBounds()))->get(0))->equals($WithParameters$Foo::class$)) {
								$System::err->println("Upper bounds on type parameter fol l3 is wrong"_s);
								++error;
							}
						}
					}
					if (!$$nc($nc(parameters->get(5))->toString())->equals("java.lang.String... rest"_s)) {
						$System::err->println($$str({"toString for rest is wrong, expected \"java.lang.String... rest\", got \""_s, parameters->get(5), "\""_s}));
						++error;
					}
					if (!$nc(parameters->get(5))->isVarArgs()) {
						$System::err->println("isVarArg for rest is wrong"_s);
						++error;
					}
					if (!($$nc($nc(parameters->get(5))->getParameterizedType())->equals($getClass($StringArray)))) {
						$System::err->println("getParameterizedType for rest is wrong"_s);
						++error;
					}
				}
			}
		}
	}
	if (0 != error) {
		$throwNew($Exception, $$str({"Failed "_s, $$str(error), " tests"_s}));
	}
}

void WithParameters::test(int32_t test) {
}

void WithParameters::clinit$($Class* clazz) {
	$load($WithParameters$Foo);
	$load($List);
	$assignStatic(WithParameters::qux_types, $new($ClassArray, {
		$Integer::TYPE,
		$WithParameters$Foo::class$,
		$List::class$,
		$List::class$,
		$List::class$,
		$getClass($StringArray)
	}));
	$assignStatic(WithParameters::qux_names, $new($StringArray, {
		"quux"_s,
		"quuux"_s,
		"l"_s,
		"l2"_s,
		"l3"_s,
		"rest"_s
	}));
}

WithParameters::WithParameters() {
}

$Class* WithParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"qux_types", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(WithParameters, qux_types)},
		{"qux_names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WithParameters, qux_names)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WithParameters, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WithParameters, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(I)V", nullptr, 0, $virtualMethod(WithParameters, test, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WithParameters$Thing", "WithParameters", "Thing", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{"WithParameters$Foo", "WithParameters", "Foo", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WithParameters",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"WithParameters$Thing,WithParameters$Foo"
	};
	$loadClass(WithParameters, name, initialize, &classInfo$$, WithParameters::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WithParameters);
	});
	return class$;
}

$Class* WithParameters::class$ = nullptr;
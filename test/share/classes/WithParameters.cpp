#include <WithParameters.h>

#include <WithParameters$Foo.h>
#include <WithParameters$Thing.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
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
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Parameter = ::java::lang::reflect::Parameter;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $List = ::java::util::List;

$FieldInfo _WithParameters_FieldInfo_[] = {
	{"qux_types", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(WithParameters, qux_types)},
	{"qux_names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WithParameters, qux_names)},
	{}
};

$MethodInfo _WithParameters_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WithParameters::*)()>(&WithParameters::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WithParameters::main)), "java.lang.Exception"},
	{"test", "(I)V", nullptr, 0},
	{}
};

$InnerClassInfo _WithParameters_InnerClassesInfo_[] = {
	{"WithParameters$Thing", "WithParameters", "Thing", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"WithParameters$Foo", "WithParameters", "Foo", $PUBLIC},
	{}
};

$ClassInfo _WithParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WithParameters",
	"java.lang.Object",
	nullptr,
	_WithParameters_FieldInfo_,
	_WithParameters_MethodInfo_,
	nullptr,
	nullptr,
	_WithParameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	"WithParameters$Thing,WithParameters$Foo"
};

$Object* allocate$WithParameters($Class* clazz) {
	return $of($alloc(WithParameters));
}

$ClassArray* WithParameters::qux_types = nullptr;
$StringArray* WithParameters::qux_names = nullptr;

void WithParameters::init$() {
}

void WithParameters::main($StringArray* argv) {
	$init(WithParameters);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t error = 0;
	$load($WithParameters$Foo);
	$var($MethodArray, methods, $WithParameters$Foo::class$->getMethods());
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$init($System);
				$nc($System::err)->println($$str({"Inspecting method "_s, $($nc(m)->getName())}));
				$var($ParameterArray, parameters, $nc(m)->getParameters());
				if (parameters == nullptr) {
					$throwNew($Exception, "getParameters should never be null"_s);
				}
				for (int32_t i = 0; i < $nc(parameters)->length; ++i) {
					$var($Parameter, p, parameters->get(i));
					if (!$nc($of($($nc(p)->getDeclaringExecutable())))->equals(m)) {
						$nc($System::err)->println($$str({p, ".getDeclaringExecutable != "_s, m}));
						++error;
					}
					if (nullptr == $nc(p)->getType()) {
						$nc($System::err)->println($$str({p, ".getType() == null"_s}));
						++error;
					}
					if (nullptr == $nc(p)->getParameterizedType()) {
						$nc($System::err)->println($$str({p, ".getParameterizedType == null"_s}));
						++error;
					}
				}
				if ($nc($(m->getName()))->equals("qux"_s)) {
					if (6 != $nc(parameters)->length) {
						$nc($System::err)->println("Wrong number of parameters for qux"_s);
						++error;
					}
					for (int32_t i = 0; i < $nc(parameters)->length; ++i) {
						$var($Parameter, p, parameters->get(i));
						if (!$nc(p)->isNamePresent()) {
							$nc($System::err)->println($$str({p, ".isNamePresent == false"_s}));
							++error;
						}
						if (!$nc($($nc(parameters->get(i))->getName()))->equals($nc(WithParameters::qux_names)->get(i))) {
							$nc($System::err)->println($$str({"Wrong parameter name for "_s, parameters->get(i)}));
							++error;
						}
						if (!$nc($of($nc(parameters->get(i))->getType()))->equals($nc(WithParameters::qux_types)->get(i))) {
							$var($String, var$0, $$str({"Wrong parameter type for "_s, parameters->get(0), ": expected "_s, $nc(WithParameters::qux_types)->get(i), ", but got "_s}));
							$nc($System::err)->println($$concat(var$0, $($nc(parameters->get(i))->getType())));
							++error;
						}
					}
					if (!$nc($($nc($nc(parameters)->get(0))->toString()))->equals("final int quux"_s)) {
						$nc($System::err)->println($$str({"toString for quux is wrong, expected \"final int quux\", got \""_s, parameters->get(0), "\""_s}));
						++error;
					}
					if ($nc($nc(parameters)->get(0))->getModifiers() != $Modifier::FINAL) {
						$nc($System::err)->println("quux is not final"_s);
						++error;
					}
					if ($nc($nc(parameters)->get(0))->isVarArgs()) {
						$nc($System::err)->println("isVarArg for quux is wrong"_s);
						++error;
					}
					$init($Integer);
					if (!$nc($of($($nc($nc(parameters)->get(0))->getParameterizedType())))->equals($Integer::TYPE)) {
						$nc($System::err)->println("getParameterizedType for quux is wrong"_s);
						++error;
					}
					if (!$nc($($nc($nc(parameters)->get(1))->toString()))->equals("WithParameters$Foo quuux"_s)) {
						$nc($System::err)->println($$str({"toString for quuux is wrong, expected \"WithParameters$Foo quuux\", got \""_s, parameters->get(1), "\""_s}));
						++error;
					}
					if ($nc($nc(parameters)->get(1))->isVarArgs()) {
						$nc($System::err)->println("isVarArg for quuux is wrong"_s);
						++error;
					}
					if (!$nc($of($($nc($nc(parameters)->get(1))->getParameterizedType())))->equals($WithParameters$Foo::class$)) {
						$nc($System::err)->println("getParameterizedType for quuux is wrong"_s);
						++error;
					}
					$var($AnnotationArray, anns, $nc($nc(parameters)->get(1))->getAnnotations());
					if (1 != $nc(anns)->length) {
						$nc($System::err)->println("getAnnotations missed an annotation"_s);
						++error;
					} else {
						$load($WithParameters$Thing);
						if (!$nc($of($nc(anns->get(0))->annotationType()))->equals($WithParameters$Thing::class$)) {
							$nc($System::err)->println("getAnnotations has the wrong annotation"_s);
							++error;
						}
					}
					if (!$nc($($nc(parameters->get(2))->toString()))->equals("java.util.List<?> l"_s)) {
						$nc($System::err)->println($$str({"toString for l is wrong, expected \"java.util.List<?> l\", got \""_s, parameters->get(2), "\""_s}));
						++error;
					}
					if ($nc(parameters->get(2))->isVarArgs()) {
						$nc($System::err)->println("isVarArg for l is wrong"_s);
						++error;
					}
					if (!($instanceOf($ParameterizedType, $($nc(parameters->get(2))->getParameterizedType())))) {
						$nc($System::err)->println("getParameterizedType for l is wrong"_s);
						++error;
					} else {
						$var($ParameterizedType, pt, $cast($ParameterizedType, $nc(parameters->get(2))->getParameterizedType()));
						$load($List);
						if (!$nc($of($($nc(pt)->getRawType())))->equals($List::class$)) {
							$nc($System::err)->println("Raw type for l is wrong"_s);
							++error;
						}
						if (1 != $nc($($nc(pt)->getActualTypeArguments()))->length) {
							$nc($System::err)->println("Number of type parameters for l is wrong"_s);
							++error;
						}
						if (!($instanceOf($WildcardType, $nc($($nc(pt)->getActualTypeArguments()))->get(0)))) {
							$nc($System::err)->println("Type parameter for l is wrong"_s);
							++error;
						}
					}
					if (!$nc($($nc(parameters->get(3))->toString()))->equals("java.util.List<WithParameters$Foo> l2"_s)) {
						$nc($System::err)->println($$str({"toString for l2 is wrong, expected \"java.util.List<WithParameters$Foo> l2\", got \""_s, parameters->get(3), "\""_s}));
						++error;
					}
					if ($nc(parameters->get(3))->isVarArgs()) {
						$nc($System::err)->println("isVarArg for l2 is wrong"_s);
						++error;
					}
					if (!($instanceOf($ParameterizedType, $($nc(parameters->get(3))->getParameterizedType())))) {
						$nc($System::err)->println("getParameterizedType for l2 is wrong"_s);
						++error;
					} else {
						$var($ParameterizedType, pt, $cast($ParameterizedType, $nc(parameters->get(3))->getParameterizedType()));
						$load($List);
						if (!$nc($of($($nc(pt)->getRawType())))->equals($List::class$)) {
							$nc($System::err)->println("Raw type for l2 is wrong"_s);
							++error;
						}
						if (1 != $nc($($nc(pt)->getActualTypeArguments()))->length) {
							$nc($System::err)->println("Number of type parameters for l2 is wrong"_s);
							++error;
						}
						if (!($nc($of($nc($($nc(pt)->getActualTypeArguments()))->get(0)))->equals($WithParameters$Foo::class$))) {
							$nc($System::err)->println("Type parameter for l2 is wrong"_s);
							++error;
						}
					}
					if (!$nc($($nc(parameters->get(4))->toString()))->equals("java.util.List<? extends WithParameters$Foo> l3"_s)) {
						$nc($System::err)->println($$str({"toString for l3 is wrong, expected \"java.util.List<? extends WithParameters$Foo> l3\", got \""_s, parameters->get(3), "\""_s}));
						++error;
					}
					if ($nc(parameters->get(4))->isVarArgs()) {
						$nc($System::err)->println("isVarArg for l3 is wrong"_s);
						++error;
					}
					if (!($instanceOf($ParameterizedType, $($nc(parameters->get(4))->getParameterizedType())))) {
						$nc($System::err)->println("getParameterizedType for l3 is wrong"_s);
						++error;
					} else {
						$var($ParameterizedType, pt, $cast($ParameterizedType, $nc(parameters->get(4))->getParameterizedType()));
						$load($List);
						if (!$nc($of($($nc(pt)->getRawType())))->equals($List::class$)) {
							$nc($System::err)->println("Raw type for l3 is wrong"_s);
							++error;
						}
						if (1 != $nc($($nc(pt)->getActualTypeArguments()))->length) {
							$nc($System::err)->println("Number of type parameters for l3 is wrong"_s);
							++error;
						}
						if (!($instanceOf($WildcardType, $nc($($nc(pt)->getActualTypeArguments()))->get(0)))) {
							$nc($System::err)->println("Type parameter for l3 is wrong"_s);
							++error;
						} else {
							$var($WildcardType, wt, $cast($WildcardType, $nc($(pt->getActualTypeArguments()))->get(0)));
							if (!$nc($of($nc($($nc(wt)->getUpperBounds()))->get(0)))->equals($WithParameters$Foo::class$)) {
								$nc($System::err)->println("Upper bounds on type parameter fol l3 is wrong"_s);
								++error;
							}
						}
					}
					if (!$nc($($nc(parameters->get(5))->toString()))->equals("java.lang.String... rest"_s)) {
						$nc($System::err)->println($$str({"toString for rest is wrong, expected \"java.lang.String... rest\", got \""_s, parameters->get(5), "\""_s}));
						++error;
					}
					if (!$nc(parameters->get(5))->isVarArgs()) {
						$nc($System::err)->println("isVarArg for rest is wrong"_s);
						++error;
					}
					$load($StringArray);
					if (!($nc($of($($nc(parameters->get(5))->getParameterizedType())))->equals($getClass($StringArray)))) {
						$nc($System::err)->println("getParameterizedType for rest is wrong"_s);
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

void clinit$WithParameters($Class* class$) {
		$init($Integer);
		$load($WithParameters$Foo);
		$load($List);
		$load($StringArray);
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
	$loadClass(WithParameters, name, initialize, &_WithParameters_ClassInfo_, clinit$WithParameters, allocate$WithParameters);
	return class$;
}

$Class* WithParameters::class$ = nullptr;
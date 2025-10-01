#include <TestObjectMethods.h>

#include <TestObjectMethods$1.h>
#include <TestObjectMethods$AnnotTypeInfo.h>
#include <TestObjectMethods$AnnotatedTypeHost.h>
#include <TestObjectMethods$Relation.h>
#include <TestObjectMethods$TypeHost.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedArrayType.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/AnnotatedWildcardType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $TestObjectMethods$1 = ::TestObjectMethods$1;
using $TestObjectMethods$AnnotTypeInfo = ::TestObjectMethods$AnnotTypeInfo;
using $TestObjectMethods$AnnotatedTypeHost = ::TestObjectMethods$AnnotatedTypeHost;
using $TestObjectMethods$Relation = ::TestObjectMethods$Relation;
using $TestObjectMethods$TypeHost = ::TestObjectMethods$TypeHost;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedArrayType = ::java::lang::reflect::AnnotatedArrayType;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $AnnotatedWildcardType = ::java::lang::reflect::AnnotatedWildcardType;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

$FieldInfo _TestObjectMethods_FieldInfo_[] = {
	{"errors", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestObjectMethods, errors)},
	{"annotationRegex", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestObjectMethods, annotationRegex)},
	{}
};

$MethodInfo _TestObjectMethods_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestObjectMethods::*)()>(&TestObjectMethods::init$))},
	{"checkTypesForEquality", "(Ljava/lang/reflect/AnnotatedType;Ljava/lang/reflect/AnnotatedType;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($AnnotatedType*,$AnnotatedType*,bool)>(&TestObjectMethods::checkTypesForEquality))},
	{"extractWildcard", "(Ljava/lang/String;)Ljava/lang/reflect/AnnotatedWildcardType;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AnnotatedWildcardType*(*)($String*)>(&TestObjectMethods::extractWildcard))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestObjectMethods::main))},
	{"testAnnotationsMatterForEquals", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $STATIC, $method(static_cast<void(*)($Class*,$Class*)>(&TestObjectMethods::testAnnotationsMatterForEquals))},
	{"testEquals", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $STATIC, $method(static_cast<void(*)($Class*)>(&TestObjectMethods::testEquals))},
	{"testEqualsReflexivity", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $STATIC, $method(static_cast<void(*)($Class*)>(&TestObjectMethods::testEqualsReflexivity))},
	{"testFbounds", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestObjectMethods::testFbounds))},
	{"testGetAnnotations", "(Ljava/lang/Class;Z)V", "(Ljava/lang/Class<*>;Z)V", $STATIC, $method(static_cast<void(*)($Class*,bool)>(&TestObjectMethods::testGetAnnotations))},
	{"testToString", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $STATIC, $method(static_cast<void(*)($Class*)>(&TestObjectMethods::testToString))},
	{"testWildcards", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestObjectMethods::testWildcards))},
	{}
};

$InnerClassInfo _TestObjectMethods_InnerClassesInfo_[] = {
	{"TestObjectMethods$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"TestObjectMethods$AnnotatedTypeHost", "TestObjectMethods", "AnnotatedTypeHost", $STATIC},
	{"TestObjectMethods$Relation", "TestObjectMethods", "Relation", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"TestObjectMethods$AnnotTypeInfo", "TestObjectMethods", "AnnotTypeInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestObjectMethods$AnnotType", "TestObjectMethods", "AnnotType", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"TestObjectMethods$TypeHost", "TestObjectMethods", "TypeHost", $STATIC},
	{}
};

$ClassInfo _TestObjectMethods_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestObjectMethods",
	"java.lang.Object",
	nullptr,
	_TestObjectMethods_FieldInfo_,
	_TestObjectMethods_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectMethods_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestObjectMethods$1,TestObjectMethods$AnnotatedTypeHost,TestObjectMethods$Relation,TestObjectMethods$AnnotTypeInfo,TestObjectMethods$AnnotType,TestObjectMethods$TypeHost"
};

$Object* allocate$TestObjectMethods($Class* clazz) {
	return $of($alloc(TestObjectMethods));
}

int32_t TestObjectMethods::errors = 0;
$Pattern* TestObjectMethods::annotationRegex = nullptr;

void TestObjectMethods::init$() {
}

void TestObjectMethods::main($StringArray* args) {
	$init(TestObjectMethods);
		$load($TestObjectMethods$TypeHost);
		$load($TestObjectMethods$AnnotatedTypeHost);
	$var($ClassArray, testClasses, $new($ClassArray, {
		$TestObjectMethods$TypeHost::class$,
		$TestObjectMethods$AnnotatedTypeHost::class$
	}));
	{
		$var($ClassArray, arr$, testClasses);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* clazz = arr$->get(i$);
			{
				testEqualsReflexivity(clazz);
				testEquals(clazz);
			}
		}
	}
	testToString($TestObjectMethods$TypeHost::class$);
	testToString($TestObjectMethods$AnnotatedTypeHost::class$);
	testAnnotationsMatterForEquals($TestObjectMethods$TypeHost::class$, $TestObjectMethods$AnnotatedTypeHost::class$);
	testGetAnnotations($TestObjectMethods$TypeHost::class$, false);
	testGetAnnotations($TestObjectMethods$AnnotatedTypeHost::class$, true);
	testWildcards();
	testFbounds();
	if (TestObjectMethods::errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(TestObjectMethods::errors), " errors"_s}));
	}
}

void TestObjectMethods::testToString($Class* clazz) {
	$init(TestObjectMethods);
	$beforeCallerSensitive();
	$init($System);
	$nc($System::err)->println($$str({"Testing toString on methods of class "_s, $($nc(clazz)->getName())}));
	$var($MethodArray, methods, $nc(clazz)->getDeclaredMethods());
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$load($TestObjectMethods$AnnotTypeInfo);
				$var($TestObjectMethods$AnnotTypeInfo, annotTypeInfo, $cast($TestObjectMethods$AnnotTypeInfo, $nc(m)->getAnnotation($TestObjectMethods$AnnotTypeInfo::class$)));
				int32_t expectedAnnotCount = $nc(annotTypeInfo)->count();
				$TestObjectMethods$Relation* relation = annotTypeInfo->relation();
				$var($AnnotatedType, annotType, m->getAnnotatedReturnType());
				$var($String, annotTypeString, $nc($of(annotType))->toString());
				$var($Type, type, m->getGenericReturnType());
				$var($String, typeString, ($instanceOf($Class, type)) ? $nc(type)->getTypeName() : $of(type)->toString());
				bool isArray = $instanceOf($AnnotatedArrayType, annotType);
				bool isVoid = "void"_s->equals(typeString);
				bool valid = false;
					$init($TestObjectMethods$1);
				{
					$var($String, stripped, nullptr)
					$var($AnnotatedType, componentType, nullptr)
					$var($String, componentName, nullptr)
					switch ($nc($TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation)->get($nc((relation))->ordinal())) {
					case 1:
						{
							valid = $nc(annotTypeString)->equals(typeString);
							break;
						}
					case 2:
						{
							bool var$0 = $nc(annotTypeString)->endsWith(typeString);
							valid = var$0 && !annotTypeString->startsWith(typeString);
							break;
						}
					case 3:
						{
							$assign(stripped, $nc($($nc(TestObjectMethods::annotationRegex)->matcher(annotTypeString)))->replaceAll(""_s));
							valid = $($nc(typeString)->replace(static_cast<$CharSequence*>(" "_s), static_cast<$CharSequence*>(""_s)))->equals($($nc(stripped)->replace(static_cast<$CharSequence*>(" "_s), static_cast<$CharSequence*>(""_s))));
							break;
						}
					case 4:
						{
							$assign(typeString, nullptr);
							$assign(componentType, annotType);
							while ($instanceOf($AnnotatedArrayType, componentType)) {
								$var($AnnotatedArrayType, annotatedArrayType, $cast($AnnotatedArrayType, componentType));
								$assign(componentType, $nc(annotatedArrayType)->getAnnotatedGenericComponentType());
							}
							$assign(componentName, $nc($($nc(componentType)->getType()))->getTypeName());
							valid = $nc(annotTypeString)->contains(componentName);
							break;
						}
					case 5:
						{
							valid = true;
							break;
						}
					default:
						{
							$throwNew($AssertionError, $of("Shouldn\'t be reached"_s));
						}
					}
				}
				$var($Matcher, matcher, $nc(TestObjectMethods::annotationRegex)->matcher(annotTypeString));
				if (expectedAnnotCount > 0) {
					int32_t i = expectedAnnotCount;
					int32_t annotCount = 0;
					while (i > 0) {
						bool found = $nc(matcher)->find();
						if (found) {
							--i;
							++annotCount;
						} else {
							++TestObjectMethods::errors;
							$nc($System::err)->println($$str({"\tExpected annotation not found: "_s, annotTypeString}));
						}
					}
				}
				bool found = $nc(matcher)->find();
				if (found) {
					++TestObjectMethods::errors;
					$nc($System::err)->println($$str({"\tAnnotation found unexpectedly: "_s, annotTypeString}));
				}
				if (!valid) {
					++TestObjectMethods::errors;
					$nc($System::err)->println($$str({typeString, "\n"_s, annotTypeString, "\n "_s, $$str(valid), "\n\n"_s}));
				}
			}
		}
	}
}

void TestObjectMethods::testGetAnnotations($Class* clazz, bool annotationsExpectedOnMethods) {
	$init(TestObjectMethods);
	$beforeCallerSensitive();
	$init($System);
	$nc($System::err)->println($$str({"Testing getAnnotations on methods of class "_s, $($nc(clazz)->getName())}));
	$var($MethodArray, methods, $nc(clazz)->getDeclaredMethods());
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$var($Type, type, $nc(m)->getGenericReturnType());
				$var($AnnotatedType, annotType, m->getAnnotatedReturnType());
				$var($AnnotationArray, annotations, $nc(annotType)->getAnnotations());
				bool isVoid = "void"_s->equals($($nc($of(type))->toString()));
				if (annotationsExpectedOnMethods && !isVoid) {
					if ($nc(annotations)->length == 0) {
						++TestObjectMethods::errors;
						$nc($System::err)->println($$str({"Expected annotations missing on "_s, annotType}));
					}
				} else if ($nc(annotations)->length > 0) {
					$init(TestObjectMethods);
					++TestObjectMethods::errors;
					$init($System);
					$nc($System::err)->println($$str({"Unexpected annotations present on "_s, annotType}));
				}
			}
		}
	}
}

void TestObjectMethods::testEqualsReflexivity($Class* clazz) {
	$init(TestObjectMethods);
	$beforeCallerSensitive();
	$init($System);
	$nc($System::err)->println($$str({"Testing reflexivity of equals on methods of class "_s, $($nc(clazz)->getName())}));
	$var($MethodArray, methods, $nc(clazz)->getDeclaredMethods());
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$var($AnnotatedType, var$0, $nc(m)->getAnnotatedReturnType());
				checkTypesForEquality(var$0, $(m->getAnnotatedReturnType()), true);
			}
		}
	}
}

void TestObjectMethods::checkTypesForEquality($AnnotatedType* annotType1, $AnnotatedType* annotType2, bool expected) {
	$init(TestObjectMethods);
	bool comparison = $nc($of(annotType1))->equals(annotType2);
	if (comparison) {
		int32_t hash1 = $of(annotType1)->hashCode();
		int32_t hash2 = $nc($of(annotType2))->hashCode();
		if (hash1 != hash2) {
			++TestObjectMethods::errors;
			$init($System);
			$nc($System::err)->format("Equal AnnotatedTypes with unequal hash codes: %n%s%n%s%n"_s, $$new($ObjectArray, {
				$($of($of(annotType1)->toString())),
				$($of($of(annotType2)->toString()))
			}));
		}
	}
	if (comparison != expected) {
		++TestObjectMethods::errors;
		$init($System);
		$nc($System::err)->println($of(annotType1));
		$nc($System::err)->println(expected ? " is not equal to "_s : " is equal to "_s);
		$nc($System::err)->println($of(annotType2));
		$nc($System::err)->println();
	}
}

void TestObjectMethods::testEquals($Class* clazz) {
	$init(TestObjectMethods);
	$beforeCallerSensitive();
	$var($MethodArray, methods, $nc(clazz)->getDeclaredMethods());
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		for (int32_t j = 0; j < methods->length; ++j) {
			if (i == j) {
				continue;
			} else {
				$var($AnnotatedType, var$0, $nc(methods->get(i))->getAnnotatedReturnType());
				checkTypesForEquality(var$0, $($nc(methods->get(j))->getAnnotatedReturnType()), false);
			}
		}
	}
}

void TestObjectMethods::testAnnotationsMatterForEquals($Class* clazz1, $Class* clazz2) {
	$init(TestObjectMethods);
	$beforeCallerSensitive();
	$init($System);
	$nc($System::err)->println("Testing that presence/absence of annotations matters for equals comparison."_s);
	$var($String, methodName, nullptr);
	{
		$var($MethodArray, arr$, $nc(clazz1)->getDeclaredMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				if ("void"_s->equals($($nc($nc(method)->getReturnType())->toString()))) {
					continue;
				}
				$assign(methodName, $nc(method)->getName());
				try {
					$var($AnnotatedType, var$0, method->getAnnotatedReturnType());
					checkTypesForEquality(var$0, $($nc($($nc(clazz2)->getDeclaredMethod(methodName, $$new($ClassArray, 0))))->getAnnotatedReturnType()), false);
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					++TestObjectMethods::errors;
					$nc($System::err)->println($$str({"Method "_s, methodName, " not found."_s}));
				}
			}
		}
	}
}

void TestObjectMethods::testWildcards() {
	$init(TestObjectMethods);
	$init($System);
	$nc($System::err)->println("Testing wildcards"_s);
	$var($AnnotatedWildcardType, awt1, extractWildcard("fooNumberSet"_s));
	$var($AnnotatedWildcardType, awt2, extractWildcard("fooNumberSet2"_s));
	bool var$0 = !$nc($of(awt1))->equals($(extractWildcard("fooNumberSet"_s)));
	if (var$0 || !$nc($of(awt2))->equals($(extractWildcard("fooNumberSet2"_s)))) {
		++TestObjectMethods::errors;
		$nc($System::err)->println("Bad equality comparison on wildcards."_s);
	}
	checkTypesForEquality(awt1, awt2, false);
	if ($nc($($nc(awt2)->getAnnotations()))->length == 0) {
		++TestObjectMethods::errors;
		$nc($System::err)->println("Expected annotations not found."_s);
	}
}

$AnnotatedWildcardType* TestObjectMethods::extractWildcard($String* methodName) {
	$init(TestObjectMethods);
	$beforeCallerSensitive();
	try {
		$load($TestObjectMethods$AnnotatedTypeHost);
		return ($cast($AnnotatedWildcardType, $nc($($nc((($cast($AnnotatedParameterizedType, $($nc($($TestObjectMethods$AnnotatedTypeHost::class$->getMethod(methodName, $$new($ClassArray, 0))))->getAnnotatedReturnType())))))->getAnnotatedActualTypeArguments()))->get(0)));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void TestObjectMethods::testFbounds() {
	$init(TestObjectMethods);
	$load($Enum);
	$var($AnnotatedTypeArray, types, $Enum::class$->getAnnotatedInterfaces());
	for (int32_t i = 0; i < $nc(types)->length; ++i) {
		for (int32_t j = 0; j < types->length; ++j) {
			checkTypesForEquality(types->get(i), types->get(j), i == j);
		}
	}
}

void clinit$TestObjectMethods($Class* class$) {
	TestObjectMethods::errors = 0;
	$assignStatic(TestObjectMethods::annotationRegex, $Pattern::compile("@TestObjectMethods\\$AnnotType\\((\\p{Digit})+\\)"_s));
}

TestObjectMethods::TestObjectMethods() {
}

$Class* TestObjectMethods::load$($String* name, bool initialize) {
	$loadClass(TestObjectMethods, name, initialize, &_TestObjectMethods_ClassInfo_, clinit$TestObjectMethods, allocate$TestObjectMethods);
	return class$;
}

$Class* TestObjectMethods::class$ = nullptr;
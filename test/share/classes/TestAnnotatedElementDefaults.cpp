#include <TestAnnotatedElementDefaults.h>

#include <AnnotatedElementDelegate.h>
#include <AssociatedDirectOnSuperClass.h>
#include <AssociatedDirectOnSuperClassContainer.h>
#include <AssociatedDirectOnSuperClassIndirectOnSubclass.h>
#include <AssociatedDirectOnSuperClassIndirectOnSubclassContainer.h>
#include <AssociatedIndirectOnSuperClassDirectOnSubclass.h>
#include <AssociatedIndirectOnSuperClassDirectOnSubclassContainer.h>
#include <DirectlyAndIndirectlyPresent.h>
#include <DirectlyAndIndirectlyPresentContainer.h>
#include <DirectlyPresent.h>
#include <IndirectlyPresent.h>
#include <IndirectlyPresentContainer.h>
#include <Missing.h>
#include <MissingRepeatable.h>
#include <TestClass1B.h>
#include <TestClass1SuperB.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AnnotatedElementDelegate = ::AnnotatedElementDelegate;
using $AssociatedDirectOnSuperClass = ::AssociatedDirectOnSuperClass;
using $AssociatedDirectOnSuperClassContainer = ::AssociatedDirectOnSuperClassContainer;
using $AssociatedDirectOnSuperClassIndirectOnSubclass = ::AssociatedDirectOnSuperClassIndirectOnSubclass;
using $AssociatedDirectOnSuperClassIndirectOnSubclassContainer = ::AssociatedDirectOnSuperClassIndirectOnSubclassContainer;
using $AssociatedIndirectOnSuperClassDirectOnSubclass = ::AssociatedIndirectOnSuperClassDirectOnSubclass;
using $AssociatedIndirectOnSuperClassDirectOnSubclassContainer = ::AssociatedIndirectOnSuperClassDirectOnSubclassContainer;
using $DirectlyAndIndirectlyPresent = ::DirectlyAndIndirectlyPresent;
using $DirectlyAndIndirectlyPresentContainer = ::DirectlyAndIndirectlyPresentContainer;
using $DirectlyPresent = ::DirectlyPresent;
using $IndirectlyPresent = ::IndirectlyPresent;
using $IndirectlyPresentContainer = ::IndirectlyPresentContainer;
using $Missing = ::Missing;
using $MissingRepeatable = ::MissingRepeatable;
using $TestClass1B = ::TestClass1B;
using $TestClass1SuperB = ::TestClass1SuperB;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$MethodInfo _TestAnnotatedElementDefaults_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestAnnotatedElementDefaults::*)()>(&TestAnnotatedElementDefaults::init$))},
	{"annotationsToTest", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&TestAnnotatedElementDefaults::annotationsToTest))},
	{"elementsToTest", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/reflect/AnnotatedElement;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&TestAnnotatedElementDefaults::elementsToTest))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestAnnotatedElementDefaults::main)), "java.lang.SecurityException"},
	{"testNullHandling", "(LAnnotatedElementDelegate;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($AnnotatedElementDelegate*)>(&TestAnnotatedElementDefaults::testNullHandling))},
	{}
};

$ClassInfo _TestAnnotatedElementDefaults_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestAnnotatedElementDefaults",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestAnnotatedElementDefaults_MethodInfo_
};

$Object* allocate$TestAnnotatedElementDefaults($Class* clazz) {
	return $of($alloc(TestAnnotatedElementDefaults));
}

void TestAnnotatedElementDefaults::init$() {
}

void TestAnnotatedElementDefaults::main($StringArray* args) {
	int32_t failures = 0;
	{
		$var($Iterator, i$, $nc($(elementsToTest()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotatedElement, annotElement, $cast($AnnotatedElement, i$->next()));
			{
				$init($System);
				$nc($System::out)->println($of(annotElement));
				$var($AnnotatedElementDelegate, delegate, $new($AnnotatedElementDelegate, annotElement));
				failures += testNullHandling(delegate);
				{
					$var($Iterator, i$, $nc($(annotationsToTest()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$Class* annotType = $cast($Class, i$->next());
						{
							failures += $AnnotatedElementDelegate::testDelegate(delegate, annotType);
						}
					}
				}
			}
		}
	}
	if (failures > 0) {
		$init($System);
		$nc($System::err)->printf("%d failures%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(failures)))}));
		$throwNew($RuntimeException);
	}
}

$List* TestAnnotatedElementDefaults::elementsToTest() {
	$load(TestAnnotatedElementDefaults);
	$beforeCallerSensitive();
	$var($List, annotatedElements, $new($ArrayList));
	$load($TestClass1SuperB);
	annotatedElements->add($TestClass1SuperB::class$);
	$load($TestClass1B);
	annotatedElements->add($TestClass1B::class$);
	{
		$var($MethodArray, arr$, $TestClass1B::class$->getDeclaredMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				annotatedElements->add(method);
			}
		}
	}
	return annotatedElements;
}

$List* TestAnnotatedElementDefaults::annotationsToTest() {
	$var($List, annotations, $new($ArrayList));
	$load($Missing);
	annotations->add($Missing::class$);
	$load($MissingRepeatable);
	annotations->add($MissingRepeatable::class$);
	$load($DirectlyPresent);
	annotations->add($DirectlyPresent::class$);
	$load($IndirectlyPresent);
	annotations->add($IndirectlyPresent::class$);
	$load($IndirectlyPresentContainer);
	annotations->add($IndirectlyPresentContainer::class$);
	$load($DirectlyAndIndirectlyPresent);
	annotations->add($DirectlyAndIndirectlyPresent::class$);
	$load($DirectlyAndIndirectlyPresentContainer);
	annotations->add($DirectlyAndIndirectlyPresentContainer::class$);
	$load($AssociatedDirectOnSuperClass);
	annotations->add($AssociatedDirectOnSuperClass::class$);
	$load($AssociatedDirectOnSuperClassContainer);
	annotations->add($AssociatedDirectOnSuperClassContainer::class$);
	$load($AssociatedDirectOnSuperClassIndirectOnSubclass);
	annotations->add($AssociatedDirectOnSuperClassIndirectOnSubclass::class$);
	$load($AssociatedDirectOnSuperClassIndirectOnSubclassContainer);
	annotations->add($AssociatedDirectOnSuperClassIndirectOnSubclassContainer::class$);
	$load($AssociatedIndirectOnSuperClassDirectOnSubclass);
	annotations->add($AssociatedIndirectOnSuperClassDirectOnSubclass::class$);
	$load($AssociatedIndirectOnSuperClassDirectOnSubclassContainer);
	annotations->add($AssociatedIndirectOnSuperClassDirectOnSubclassContainer::class$);
	return annotations;
}

int32_t TestAnnotatedElementDefaults::testNullHandling($AnnotatedElementDelegate* delegate) {
	int32_t failures = 0;
	try {
		$var($Object, result, $nc(delegate)->getDeclaredAnnotationsByType(nullptr));
		++failures;
	} catch ($NullPointerException&) {
		$var($NullPointerException, npe, $catch());
	}
	try {
		$var($Object, result, $nc(delegate)->getAnnotationsByType(nullptr));
		++failures;
	} catch ($NullPointerException&) {
		$var($NullPointerException, npe, $catch());
	}
	try {
		$var($Object, result, $nc(delegate)->getDeclaredAnnotation(nullptr));
		++failures;
	} catch ($NullPointerException&) {
		$var($NullPointerException, npe, $catch());
	}
	return failures;
}

TestAnnotatedElementDefaults::TestAnnotatedElementDefaults() {
}

$Class* TestAnnotatedElementDefaults::load$($String* name, bool initialize) {
	$loadClass(TestAnnotatedElementDefaults, name, initialize, &_TestAnnotatedElementDefaults_ClassInfo_, allocate$TestAnnotatedElementDefaults);
	return class$;
}

$Class* TestAnnotatedElementDefaults::class$ = nullptr;
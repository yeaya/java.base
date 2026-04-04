#include <GetAnnotatedInterfaces.h>
#include <GetAnnotatedInterfaces$1.h>
#include <GetAnnotatedInterfaces$2.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TYPE

using $GetAnnotatedInterfaces$1 = ::GetAnnotatedInterfaces$1;
using $GetAnnotatedInterfaces$2 = ::GetAnnotatedInterfaces$2;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ObjectArray3 = $Array<::java::lang::Object, 3>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $Arrays = ::java::util::Arrays;

$ClassArray* GetAnnotatedInterfaces::testData = nullptr;
int32_t GetAnnotatedInterfaces::failed = 0;
int32_t GetAnnotatedInterfaces::tests = 0;

void GetAnnotatedInterfaces::init$() {
}

void GetAnnotatedInterfaces::main($StringArray* args) {
	$init(GetAnnotatedInterfaces);
	testReturnsZeroLengthArray();
	if (GetAnnotatedInterfaces::failed != 0) {
		$throwNew($RuntimeException, "Test failed, check log for details"_s);
	}
	if (GetAnnotatedInterfaces::tests != 9) {
		$throwNew($RuntimeException, "Not all cases ran, failing"_s);
	}
}

void GetAnnotatedInterfaces::testReturnsZeroLengthArray() {
	$init(GetAnnotatedInterfaces);
	$useLocalObjectStack();
	$var($ClassArray, arr$, GetAnnotatedInterfaces::testData);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$Class* toTest = arr$->get(i$);
		{
			++GetAnnotatedInterfaces::tests;
			$var($AnnotatedTypeArray, res, $nc(toTest)->getAnnotatedInterfaces());
			if (res == nullptr) {
				++GetAnnotatedInterfaces::failed;
				$nc($System::out)->println($$str({toTest, ".class.getAnnotatedInterface() returns\'null\' should zero length array"_s}));
			} else if (res->length != 0) {
				++GetAnnotatedInterfaces::failed;
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append(toTest);
				var$0->append(".class.getAnnotatedInterfaces() returns: "_s);
				var$0->append($($Arrays::asList(res)));
				var$0->append(", should be a zero length array of AnnotatedType"_s);
				$nc($System::out)->println($$str(var$0));
			}
		}
	}
}

void GetAnnotatedInterfaces::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($ObjectArray);
	$load($ObjectArray2);
	$assignStatic(GetAnnotatedInterfaces::testData, $new($ClassArray, {
		GetAnnotatedInterfaces::class$,
		($$new($GetAnnotatedInterfaces$1))->getClass(),
		($$new($GetAnnotatedInterfaces$2))->getClass(),
		$getClass($ObjectArray),
		$getClass($ObjectArray2),
		$getClass($ObjectArray3),
		$Object::class$,
		$Void::TYPE,
		$Integer::TYPE
	}));
	GetAnnotatedInterfaces::failed = 0;
	GetAnnotatedInterfaces::tests = 0;
}

GetAnnotatedInterfaces::GetAnnotatedInterfaces() {
}

$Class* GetAnnotatedInterfaces::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testData", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(GetAnnotatedInterfaces, testData)},
		{"failed", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetAnnotatedInterfaces, failed)},
		{"tests", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetAnnotatedInterfaces, tests)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetAnnotatedInterfaces, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetAnnotatedInterfaces, main, void, $StringArray*), "java.lang.Exception"},
		{"testReturnsZeroLengthArray", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(GetAnnotatedInterfaces, testReturnsZeroLengthArray, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedInterfaces$Clz", "GetAnnotatedInterfaces", "Clz", $STATIC | $ABSTRACT},
		{"GetAnnotatedInterfaces$If", "GetAnnotatedInterfaces", "If", $STATIC | $INTERFACE | $ABSTRACT},
		{"GetAnnotatedInterfaces$2", nullptr, nullptr, 0},
		{"GetAnnotatedInterfaces$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetAnnotatedInterfaces",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetAnnotatedInterfaces$Clz,GetAnnotatedInterfaces$If,GetAnnotatedInterfaces$2,GetAnnotatedInterfaces$1"
	};
	$loadClass(GetAnnotatedInterfaces, name, initialize, &classInfo$$, GetAnnotatedInterfaces::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedInterfaces);
	});
	return class$;
}

$Class* GetAnnotatedInterfaces::class$ = nullptr;
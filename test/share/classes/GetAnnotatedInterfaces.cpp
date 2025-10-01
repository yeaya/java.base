#include <GetAnnotatedInterfaces.h>

#include <GetAnnotatedInterfaces$1.h>
#include <GetAnnotatedInterfaces$2.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TYPE

using $GetAnnotatedInterfaces$1 = ::GetAnnotatedInterfaces$1;
using $GetAnnotatedInterfaces$2 = ::GetAnnotatedInterfaces$2;
using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ObjectArray3 = $Array<::java::lang::Object, 3>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;

$FieldInfo _GetAnnotatedInterfaces_FieldInfo_[] = {
	{"testData", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(GetAnnotatedInterfaces, testData)},
	{"failed", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetAnnotatedInterfaces, failed)},
	{"tests", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetAnnotatedInterfaces, tests)},
	{}
};

$MethodInfo _GetAnnotatedInterfaces_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedInterfaces::*)()>(&GetAnnotatedInterfaces::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetAnnotatedInterfaces::main)), "java.lang.Exception"},
	{"testReturnsZeroLengthArray", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&GetAnnotatedInterfaces::testReturnsZeroLengthArray))},
	{}
};

$InnerClassInfo _GetAnnotatedInterfaces_InnerClassesInfo_[] = {
	{"GetAnnotatedInterfaces$Clz", "GetAnnotatedInterfaces", "Clz", $STATIC | $ABSTRACT},
	{"GetAnnotatedInterfaces$If", "GetAnnotatedInterfaces", "If", $STATIC | $INTERFACE | $ABSTRACT},
	{"GetAnnotatedInterfaces$2", nullptr, nullptr, 0},
	{"GetAnnotatedInterfaces$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetAnnotatedInterfaces_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedInterfaces",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedInterfaces_FieldInfo_,
	_GetAnnotatedInterfaces_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedInterfaces_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetAnnotatedInterfaces$Clz,GetAnnotatedInterfaces$If,GetAnnotatedInterfaces$2,GetAnnotatedInterfaces$1"
};

$Object* allocate$GetAnnotatedInterfaces($Class* clazz) {
	return $of($alloc(GetAnnotatedInterfaces));
}

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
	{
		$var($ClassArray, arr$, GetAnnotatedInterfaces::testData);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* toTest = arr$->get(i$);
			{
				++GetAnnotatedInterfaces::tests;
				$var($AnnotatedTypeArray, res, $nc(toTest)->getAnnotatedInterfaces());
				if (res == nullptr) {
					++GetAnnotatedInterfaces::failed;
					$init($System);
					$nc($System::out)->println($$str({toTest, ".class.getAnnotatedInterface() returns\'null\' should zero length array"_s}));
				} else if ($nc(res)->length != 0) {
					$init(GetAnnotatedInterfaces);
					++GetAnnotatedInterfaces::failed;
					$init($System);
					$var($String, var$1, $$str({toTest, ".class.getAnnotatedInterfaces() returns: "_s}));
					$var($String, var$0, $$concat(var$1, $($Arrays::asList(res))));
					$nc($System::out)->println($$concat(var$0, ", should be a zero length array of AnnotatedType"));
				}
			}
		}
	}
}

void clinit$GetAnnotatedInterfaces($Class* class$) {
		$load($ObjectArray);
		$load($ObjectArray2);
		$load($ObjectArray3);
		$load($Object);
		$init($Void);
		$init($Integer);
	$assignStatic(GetAnnotatedInterfaces::testData, $new($ClassArray, {
		GetAnnotatedInterfaces::class$,
		$of(($$new($GetAnnotatedInterfaces$1)))->getClass(),
		$of(($$new($GetAnnotatedInterfaces$2)))->getClass(),
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
	$loadClass(GetAnnotatedInterfaces, name, initialize, &_GetAnnotatedInterfaces_ClassInfo_, clinit$GetAnnotatedInterfaces, allocate$GetAnnotatedInterfaces);
	return class$;
}

$Class* GetAnnotatedInterfaces::class$ = nullptr;
#include <GetAnnotatedSuperclass.h>

#include <GetAnnotatedSuperclass$1.h>
#include <GetAnnotatedSuperclass$2.h>
#include <GetAnnotatedSuperclass$3.h>
#include <GetAnnotatedSuperclass$If.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TYPE

using $GetAnnotatedSuperclass$1 = ::GetAnnotatedSuperclass$1;
using $GetAnnotatedSuperclass$2 = ::GetAnnotatedSuperclass$2;
using $GetAnnotatedSuperclass$3 = ::GetAnnotatedSuperclass$3;
using $GetAnnotatedSuperclass$If = ::GetAnnotatedSuperclass$If;
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

$FieldInfo _GetAnnotatedSuperclass_FieldInfo_[] = {
	{"nullTestData", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(GetAnnotatedSuperclass, nullTestData)},
	{"nonNullTestData", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(GetAnnotatedSuperclass, nonNullTestData)},
	{"failed", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetAnnotatedSuperclass, failed)},
	{"tests", "I", nullptr, $PRIVATE | $STATIC, $staticField(GetAnnotatedSuperclass, tests)},
	{}
};

$MethodInfo _GetAnnotatedSuperclass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetAnnotatedSuperclass::*)()>(&GetAnnotatedSuperclass::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetAnnotatedSuperclass::main)), "java.lang.Exception"},
	{"testReturnsEmptyAT", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&GetAnnotatedSuperclass::testReturnsEmptyAT))},
	{"testReturnsNull", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&GetAnnotatedSuperclass::testReturnsNull))},
	{}
};

$InnerClassInfo _GetAnnotatedSuperclass_InnerClassesInfo_[] = {
	{"GetAnnotatedSuperclass$Clz", "GetAnnotatedSuperclass", "Clz", $STATIC | $ABSTRACT},
	{"GetAnnotatedSuperclass$If", "GetAnnotatedSuperclass", "If", $STATIC | $INTERFACE | $ABSTRACT},
	{"GetAnnotatedSuperclass$3", nullptr, nullptr, 0},
	{"GetAnnotatedSuperclass$2", nullptr, nullptr, 0},
	{"GetAnnotatedSuperclass$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetAnnotatedSuperclass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetAnnotatedSuperclass",
	"java.lang.Object",
	nullptr,
	_GetAnnotatedSuperclass_FieldInfo_,
	_GetAnnotatedSuperclass_MethodInfo_,
	nullptr,
	nullptr,
	_GetAnnotatedSuperclass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetAnnotatedSuperclass$Clz,GetAnnotatedSuperclass$If,GetAnnotatedSuperclass$3,GetAnnotatedSuperclass$2,GetAnnotatedSuperclass$1"
};

$Object* allocate$GetAnnotatedSuperclass($Class* clazz) {
	return $of($alloc(GetAnnotatedSuperclass));
}

$ClassArray* GetAnnotatedSuperclass::nullTestData = nullptr;
$ClassArray* GetAnnotatedSuperclass::nonNullTestData = nullptr;
int32_t GetAnnotatedSuperclass::failed = 0;
int32_t GetAnnotatedSuperclass::tests = 0;

void GetAnnotatedSuperclass::init$() {
}

void GetAnnotatedSuperclass::main($StringArray* args) {
	$init(GetAnnotatedSuperclass);
	testReturnsNull();
	testReturnsEmptyAT();
	if (GetAnnotatedSuperclass::failed != 0) {
		$throwNew($RuntimeException, "Test failed, check log for details"_s);
	}
	if (GetAnnotatedSuperclass::tests != 10) {
		$throwNew($RuntimeException, "Not all cases ran, failing"_s);
	}
}

void GetAnnotatedSuperclass::testReturnsNull() {
	$init(GetAnnotatedSuperclass);
	$useLocalCurrentObjectStackCache();
	{
		$var($ClassArray, arr$, GetAnnotatedSuperclass::nullTestData);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* toTest = arr$->get(i$);
			{
				++GetAnnotatedSuperclass::tests;
				$var($Object, res, $nc(toTest)->getAnnotatedSuperclass());
				if (res != nullptr) {
					++GetAnnotatedSuperclass::failed;
					$nc($System::out)->println($$str({toTest, ".getAnnotatedSuperclass() returns: "_s, res, ", should be null"_s}));
				}
			}
		}
	}
}

void GetAnnotatedSuperclass::testReturnsEmptyAT() {
	$init(GetAnnotatedSuperclass);
	$useLocalCurrentObjectStackCache();
	{
		$var($ClassArray, arr$, GetAnnotatedSuperclass::nonNullTestData);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* toTest = arr$->get(i$);
			{
				++GetAnnotatedSuperclass::tests;
				$var($AnnotatedType, res, $nc(toTest)->getAnnotatedSuperclass());
				if (res == nullptr) {
					++GetAnnotatedSuperclass::failed;
					$nc($System::out)->println($$str({toTest, ".getAnnotatedSuperclass() returns \'null\' should  be non-null"_s}));
				} else if ($nc($($nc(res)->getAnnotations()))->length != 0) {
					++GetAnnotatedSuperclass::failed;
					$var($String, var$1, $$str({toTest, ".getAnnotatedSuperclass() returns: "_s}));
					$var($String, var$0, $$concat(var$1, $($Arrays::asList($(res->getAnnotations())))));
					$nc($System::out)->println($$concat(var$0, ", should be an empty AnnotatedType"));
				}
			}
		}
	}
}

void clinit$GetAnnotatedSuperclass($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($GetAnnotatedSuperclass$If);
	$load($ObjectArray);
	$init($Void);
	$init($Integer);
	$assignStatic(GetAnnotatedSuperclass::nullTestData, $new($ClassArray, {
		$Object::class$,
		$GetAnnotatedSuperclass$If::class$,
		$getClass($ObjectArray),
		$Void::TYPE,
		$Integer::TYPE
	}));
	$assignStatic(GetAnnotatedSuperclass::nonNullTestData, $new($ClassArray, {
		$Class::class$,
		GetAnnotatedSuperclass::class$,
		$of(($$new($GetAnnotatedSuperclass$1)))->getClass(),
		$of(($$new($GetAnnotatedSuperclass$2)))->getClass(),
		$of(($$new($GetAnnotatedSuperclass$3)))->getClass()
	}));
	GetAnnotatedSuperclass::failed = 0;
	GetAnnotatedSuperclass::tests = 0;
}

GetAnnotatedSuperclass::GetAnnotatedSuperclass() {
}

$Class* GetAnnotatedSuperclass::load$($String* name, bool initialize) {
	$loadClass(GetAnnotatedSuperclass, name, initialize, &_GetAnnotatedSuperclass_ClassInfo_, clinit$GetAnnotatedSuperclass, allocate$GetAnnotatedSuperclass);
	return class$;
}

$Class* GetAnnotatedSuperclass::class$ = nullptr;
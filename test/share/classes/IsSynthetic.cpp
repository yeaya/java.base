#include <IsSynthetic.h>

#include <IsSynthetic$1.h>
#include <IsSynthetic$1LocalClass.h>
#include <IsSynthetic$NestedClass.h>
#include <Tricky.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IsSynthetic$1 = ::IsSynthetic$1;
using $IsSynthetic$1LocalClass = ::IsSynthetic$1LocalClass;
using $IsSynthetic$NestedClass = ::IsSynthetic$NestedClass;
using $Tricky = ::Tricky;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;

$MethodInfo _IsSynthetic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsSynthetic::*)()>(&IsSynthetic::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IsSynthetic::main))},
	{"test", "(Ljava/lang/Class;Z)I", "(Ljava/lang/Class<*>;Z)I", $STATIC, $method(static_cast<int32_t(*)($Class*,bool)>(&IsSynthetic::test))},
	{}
};

$InnerClassInfo _IsSynthetic_InnerClassesInfo_[] = {
	{"IsSynthetic$NestedClass", "IsSynthetic", "NestedClass", $STATIC},
	{"IsSynthetic$1", nullptr, nullptr, 0},
	{"IsSynthetic$1LocalClass", nullptr, "LocalClass", 0},
	{}
};

$ClassInfo _IsSynthetic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsSynthetic",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsSynthetic_MethodInfo_,
	nullptr,
	nullptr,
	_IsSynthetic_InnerClassesInfo_,
	nullptr,
	nullptr,
	"IsSynthetic$NestedClass,IsSynthetic$1,IsSynthetic$1LocalClass"
};

$Object* allocate$IsSynthetic($Class* clazz) {
	return $of($alloc(IsSynthetic));
}

void IsSynthetic::init$() {
}

int32_t IsSynthetic::test($Class* clazz, bool expected) {
	if ($nc(clazz)->isSynthetic() == expected) {
		return 0;
	} else {
		$init($System);
		$nc($System::err)->println($$str({"Unexpected synthetic status for "_s, $(clazz->getName()), " expected: "_s, $$str(expected), " got: "_s, $$str((!expected))}));
		return 1;
	}
}

void IsSynthetic::main($StringArray* argv) {
	$load(IsSynthetic);
	$beforeCallerSensitive();
	int32_t failures = 0;
	{
	}
	$var($Cloneable, clone, $new($IsSynthetic$1));
	failures += test(IsSynthetic::class$, false);
	$load($String);
	failures += test($String::class$, false);
	$load($IsSynthetic$1LocalClass);
	failures += test($IsSynthetic$1LocalClass::class$, false);
	$load($IsSynthetic$NestedClass);
	failures += test($IsSynthetic$NestedClass::class$, false);
	failures += test($of(clone)->getClass(), false);
	{
		$load($Tricky);
		$var($ConstructorArray, arr$, $Tricky::class$->getDeclaredConstructors());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Constructor, c, arr$->get(i$));
			{
				$var($ClassArray, paramTypes, $nc(c)->getParameterTypes());
				if ($nc(paramTypes)->length > 0) {
					$init($System);
					$nc($System::out)->println("Testing class that should be synthetic."_s);
					{
						$var($ClassArray, arr$, paramTypes);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$Class* paramType = arr$->get(i$);
							{
								failures += test(paramType, true);
							}
						}
					}
				}
			}
		}
	}
	if (failures != 0) {
		$throwNew($RuntimeException, $$str({"Test failed with "_s, $$str(failures), " failures."_s}));
	}
}

IsSynthetic::IsSynthetic() {
}

$Class* IsSynthetic::load$($String* name, bool initialize) {
	$loadClass(IsSynthetic, name, initialize, &_IsSynthetic_ClassInfo_, allocate$IsSynthetic);
	return class$;
}

$Class* IsSynthetic::class$ = nullptr;
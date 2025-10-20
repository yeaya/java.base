#include <test/FindSpecial.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <test/FindSpecial$MyComparator.h>
#include <jcpp.h>

#undef LOOKUP

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Comparator = ::java::util::Comparator;
using $FindSpecial$MyComparator = ::test::FindSpecial$MyComparator;

namespace test {

$FieldInfo _FindSpecial_FieldInfo_[] = {
	{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FindSpecial, LOOKUP)},
	{}
};

$MethodInfo _FindSpecial_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindSpecial::*)()>(&FindSpecial::init$))},
	{"findSpecialTest", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FindSpecial::findSpecialTest)), "java.lang.Throwable"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&FindSpecial::main)), "java.lang.Throwable"},
	{"reflectMethodInvoke", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FindSpecial::reflectMethodInvoke)), "java.lang.Throwable"},
	{"unreflectSpecialTest", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&FindSpecial::unreflectSpecialTest)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _FindSpecial_InnerClassesInfo_[] = {
	{"test.FindSpecial$MyComparator", "test.FindSpecial", "MyComparator", $STATIC},
	{}
};

$ClassInfo _FindSpecial_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.FindSpecial",
	"java.lang.Object",
	nullptr,
	_FindSpecial_FieldInfo_,
	_FindSpecial_MethodInfo_,
	nullptr,
	nullptr,
	_FindSpecial_InnerClassesInfo_,
	nullptr,
	nullptr,
	"test.FindSpecial$MyComparator"
};

$Object* allocate$FindSpecial($Class* clazz) {
	return $of($alloc(FindSpecial));
}

$MethodHandles$Lookup* FindSpecial::LOOKUP = nullptr;

void FindSpecial::init$() {
}

void FindSpecial::main($StringArray* args) {
	$init(FindSpecial);
	findSpecialTest();
	unreflectSpecialTest();
	reflectMethodInvoke();
}

void FindSpecial::findSpecialTest() {
	$init(FindSpecial);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($Comparator);
	$var($Method, m, $Comparator::class$->getMethod("reversed"_s, $$new($ClassArray, 0)));
	$Class* var$0 = $nc(m)->getReturnType();
	$var($MethodType, mt, $MethodType::methodType(var$0, $(m->getParameterTypes())));
	$var($MethodHandle, mh, $nc(FindSpecial::LOOKUP)->findSpecial($Comparator::class$, $($nc(m)->getName()), mt, $Comparator::class$));
	$Class* var$1 = $nc(m)->getDeclaringClass();
	$load($FindSpecial$MyComparator);
	$var($MethodHandle, mh1, $nc(FindSpecial::LOOKUP)->findSpecial(var$1, $(m->getName()), mt, $FindSpecial$MyComparator::class$));
	$var($Comparator, cmp, $new($FindSpecial$MyComparator));
	$var($Object, o, $nc(mh)->invoke($$new($ObjectArray, {$of(cmp)})));
	$var($Object, o1, $nc(mh1)->invoke($$new($ObjectArray, {$of(cmp)})));
}

void FindSpecial::unreflectSpecialTest() {
	$init(FindSpecial);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($Comparator);
	$var($Method, m, $Comparator::class$->getMethod("reversed"_s, $$new($ClassArray, 0)));
	$var($MethodHandle, mh, $nc(FindSpecial::LOOKUP)->unreflectSpecial(m, $Comparator::class$));
	$load($FindSpecial$MyComparator);
	$var($MethodHandle, mh1, $nc(FindSpecial::LOOKUP)->unreflectSpecial(m, $FindSpecial$MyComparator::class$));
	$var($Comparator, cmp, $new($FindSpecial$MyComparator));
	$var($Object, o, $nc(mh)->invoke($$new($ObjectArray, {$of(cmp)})));
	$var($Object, o1, $nc(mh1)->invoke($$new($ObjectArray, {$of(cmp)})));
}

void FindSpecial::reflectMethodInvoke() {
	$init(FindSpecial);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($Comparator);
	$var($Method, m, $Comparator::class$->getMethod("reversed"_s, $$new($ClassArray, 0)));
	try {
		$var($Object, o, $nc(m)->invoke($$new($FindSpecial$MyComparator), $$new($ObjectArray, 0)));
		$throwNew($RuntimeException, "should throw an exception"_s);
	} catch ($InvocationTargetException&) {
		$var($InvocationTargetException, e, $catch());
		bool var$0 = $instanceOf($Error, $(e->getCause()));
		if (!(var$0 && $nc($($nc($(e->getCause()))->getMessage()))->equals("should not reach here"_s))) {
			$throw($(e->getCause()));
		}
	}
}

void clinit$FindSpecial($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(FindSpecial::LOOKUP, $MethodHandles::lookup());
}

FindSpecial::FindSpecial() {
}

$Class* FindSpecial::load$($String* name, bool initialize) {
	$loadClass(FindSpecial, name, initialize, &_FindSpecial_ClassInfo_, clinit$FindSpecial, allocate$FindSpecial);
	return class$;
}

$Class* FindSpecial::class$ = nullptr;

} // test
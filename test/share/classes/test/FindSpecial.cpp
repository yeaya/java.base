#include <test/FindSpecial.h>
#include <java/lang/Error.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
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
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($Comparator);
	$var($Method, m, $Comparator::class$->getMethod("reversed"_s, $$new($ClassArray, 0)));
	$Class* var$0 = $nc(m)->getReturnType();
	$var($MethodType, mt, $MethodType::methodType(var$0, $(m->getParameterTypes())));
	$var($MethodHandle, mh, $nc(FindSpecial::LOOKUP)->findSpecial($Comparator::class$, $(m->getName()), mt, $Comparator::class$));
	$Class* var$1 = m->getDeclaringClass();
	$load($FindSpecial$MyComparator);
	$var($MethodHandle, mh1, FindSpecial::LOOKUP->findSpecial(var$1, $(m->getName()), mt, $FindSpecial$MyComparator::class$));
	$var($Comparator, cmp, $new($FindSpecial$MyComparator));
	$var($Object, o, $nc(mh)->invoke($$new($ObjectArray, {cmp})));
	$var($Object, o1, $nc(mh1)->invoke($$new($ObjectArray, {cmp})));
}

void FindSpecial::unreflectSpecialTest() {
	$init(FindSpecial);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($Comparator);
	$var($Method, m, $Comparator::class$->getMethod("reversed"_s, $$new($ClassArray, 0)));
	$var($MethodHandle, mh, $nc(FindSpecial::LOOKUP)->unreflectSpecial(m, $Comparator::class$));
	$load($FindSpecial$MyComparator);
	$var($MethodHandle, mh1, FindSpecial::LOOKUP->unreflectSpecial(m, $FindSpecial$MyComparator::class$));
	$var($Comparator, cmp, $new($FindSpecial$MyComparator));
	$var($Object, o, $nc(mh)->invoke($$new($ObjectArray, {cmp})));
	$var($Object, o1, $nc(mh1)->invoke($$new($ObjectArray, {cmp})));
}

void FindSpecial::reflectMethodInvoke() {
	$init(FindSpecial);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($Comparator);
	$var($Method, m, $Comparator::class$->getMethod("reversed"_s, $$new($ClassArray, 0)));
	try {
		$var($Object, o, $nc(m)->invoke($$new($FindSpecial$MyComparator), $$new($ObjectArray, 0)));
		$throwNew($RuntimeException, "should throw an exception"_s);
	} catch ($InvocationTargetException& e) {
		bool var$0 = $instanceOf($Error, $(e->getCause()));
		if (!(var$0 && $$nc($$nc(e->getCause())->getMessage())->equals("should not reach here"_s))) {
			$throw($(e->getCause()));
		}
	}
}

void FindSpecial::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(FindSpecial::LOOKUP, $MethodHandles::lookup());
}

FindSpecial::FindSpecial() {
}

$Class* FindSpecial::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FindSpecial, LOOKUP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FindSpecial, init$, void)},
		{"findSpecialTest", "()V", nullptr, $STATIC, $staticMethod(FindSpecial, findSpecialTest, void), "java.lang.Throwable"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(FindSpecial, main, void, $StringArray*), "java.lang.Throwable"},
		{"reflectMethodInvoke", "()V", nullptr, $STATIC, $staticMethod(FindSpecial, reflectMethodInvoke, void), "java.lang.Throwable"},
		{"unreflectSpecialTest", "()V", nullptr, $STATIC, $staticMethod(FindSpecial, unreflectSpecialTest, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"test.FindSpecial$MyComparator", "test.FindSpecial", "MyComparator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"test.FindSpecial",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"test.FindSpecial$MyComparator"
	};
	$loadClass(FindSpecial, name, initialize, &classInfo$$, FindSpecial::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FindSpecial);
	});
	return class$;
}

$Class* FindSpecial::class$ = nullptr;

} // test
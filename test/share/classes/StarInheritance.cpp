#include <StarInheritance.h>

#include <A1.h>
#include <A2.h>
#include <A3.h>
#include <A4.h>
#include <B3.h>
#include <B4.h>
#include <C3.h>
#include <D1.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

using $A1 = ::A1;
using $A2 = ::A2;
using $A3 = ::A3;
using $A4 = ::A4;
using $B3 = ::B3;
using $B4 = ::B4;
using $C3 = ::C3;
using $D1 = ::D1;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;

$FieldInfo _StarInheritance_FieldInfo_[] = {
	{"n", "I", nullptr, $PRIVATE | $STATIC, $staticField(StarInheritance, n)},
	{}
};

$MethodInfo _StarInheritance_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StarInheritance::*)()>(&StarInheritance::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StarInheritance::main))},
	{"test", "([Ljava/lang/reflect/Method;Ljava/util/ArrayList;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MethodArray*,$ArrayList*)>(&StarInheritance::test))},
	{}
};

$ClassInfo _StarInheritance_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StarInheritance",
	"java.lang.Object",
	nullptr,
	_StarInheritance_FieldInfo_,
	_StarInheritance_MethodInfo_
};

$Object* allocate$StarInheritance($Class* clazz) {
	return $of($alloc(StarInheritance));
}

int32_t StarInheritance::n = 0;

void StarInheritance::init$() {
}

void StarInheritance::test($MethodArray* ma, $ArrayList* expect) {
	$init(StarInheritance);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "Test "_s);
	$nc($System::out)->println($$concat(var$0, $$str(StarInheritance::n++)));
	if ($nc(expect)->size() != $nc(ma)->length) {
		$nc($System::err)->println($$str({"  found methods: "_s, $($Arrays::asList(ma))}));
		$nc($System::err)->println($$str({"  expected locations: "_s, expect}));
		$throwNew($RuntimeException, $$str({"found = "_s, $$str(ma->length), "; expected = "_s, $$str(expect->size())}));
	}
	for (int32_t i = 0; i < $nc(ma)->length; ++i) {
		$var($Method, m, ma->get(i));
		$nc($System::out)->println($$str({"  "_s, $($nc(m)->toString())}));
		int32_t n = 0;
		bool var$1 = $nc($($nc(m)->getName()))->equals("m"_s);
		if (var$1 && (n = $nc(expect)->indexOf(m->getDeclaringClass())) != -1) {
			expect->remove(n);
		} else {
			$throwNew($RuntimeException, $$str({"unable to locate method in class: "_s, m->getDeclaringClass()}));
		}
	}
}

void StarInheritance::main($StringArray* args) {
	$init(StarInheritance);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($D1);
	$var($ClassArray, l1, $new($ClassArray, {$D1::class$}));
	$load($A1);
	$var($MethodArray, var$0, $A1::class$->getMethods());
	test(var$0, $$new($ArrayList, $(static_cast<$Collection*>($Arrays::asList(l1)))));
	$load($A2);
	$var($ClassArray, l2, $new($ClassArray, {$A2::class$}));
	$var($MethodArray, var$1, $A2::class$->getMethods());
	test(var$1, $$new($ArrayList, $(static_cast<$Collection*>($Arrays::asList(l2)))));
	$load($B3);
	$load($C3);
	$var($ClassArray, l3, $new($ClassArray, {
		$B3::class$,
		$C3::class$
	}));
	$load($A3);
	$var($MethodArray, var$2, $A3::class$->getMethods());
	test(var$2, $$new($ArrayList, $(static_cast<$Collection*>($Arrays::asList(l3)))));
	$load($B4);
	$var($ClassArray, l4, $new($ClassArray, {$B4::class$}));
	$load($A4);
	$var($MethodArray, var$3, $A4::class$->getMethods());
	test(var$3, $$new($ArrayList, $(static_cast<$Collection*>($Arrays::asList(l4)))));
}

void clinit$StarInheritance($Class* class$) {
	StarInheritance::n = 1;
}

StarInheritance::StarInheritance() {
}

$Class* StarInheritance::load$($String* name, bool initialize) {
	$loadClass(StarInheritance, name, initialize, &_StarInheritance_ClassInfo_, clinit$StarInheritance, allocate$StarInheritance);
	return class$;
}

$Class* StarInheritance::class$ = nullptr;
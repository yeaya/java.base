#include <DefaultMethodModeling.h>
#include <B1B.h>
#include <BB.h>
#include <Base.h>
#include <CB.h>
#include <Combo1.h>
#include <Combo2.h>
#include <D1B.h>
#include <DB.h>
#include <DaughterSuperIwithDefault.h>
#include <ExpectedModel.h>
#include <GrandchildSuperIwithDefault.h>
#include <SonSuperIwithDefault.h>
#include <SuperC.h>
#include <SuperCchild.h>
#include <SuperI.h>
#include <SuperIchild.h>
#include <SuperIwithDefault.h>
#include <SuperIwithDefaultChild.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $B1B = ::B1B;
using $BB = ::BB;
using $Base = ::Base;
using $CB = ::CB;
using $Combo1 = ::Combo1;
using $Combo2 = ::Combo2;
using $D1B = ::D1B;
using $DB = ::DB;
using $DaughterSuperIwithDefault = ::DaughterSuperIwithDefault;
using $ExpectedModel = ::ExpectedModel;
using $GrandchildSuperIwithDefault = ::GrandchildSuperIwithDefault;
using $SonSuperIwithDefault = ::SonSuperIwithDefault;
using $SuperC = ::SuperC;
using $SuperCchild = ::SuperCchild;
using $SuperI = ::SuperI;
using $SuperIchild = ::SuperIchild;
using $SuperIwithDefault = ::SuperIwithDefault;
using $SuperIwithDefaultChild = ::SuperIwithDefaultChild;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Objects = ::java::util::Objects;

void DefaultMethodModeling::init$() {
}

void DefaultMethodModeling::main($StringArray* args) {
	$useLocalObjectStack();
	$load(DefaultMethodModeling);
	$beforeCallerSensitive();
	int32_t failures = 0;
	$load($SuperC);
	$load($SuperCchild);
	$load($SuperI);
	$load($SuperIchild);
	$load($SuperIwithDefault);
	$load($SuperIwithDefaultChild);
	$load($Base);
	$load($Combo1);
	$load($Combo2);
	$load($SonSuperIwithDefault);
	$load($DaughterSuperIwithDefault);
	$load($GrandchildSuperIwithDefault);
	$load($DB);
	$load($BB);
	$load($CB);
	$load($B1B);
	$load($D1B);
	$var($ClassArray, classes, $new($ClassArray, {
		$SuperC::class$,
		$SuperCchild::class$,
		$SuperI::class$,
		$SuperIchild::class$,
		$SuperIwithDefault::class$,
		$SuperIwithDefaultChild::class$,
		$Base::class$,
		$Combo1::class$,
		$Combo2::class$,
		$SonSuperIwithDefault::class$,
		$DaughterSuperIwithDefault::class$,
		$GrandchildSuperIwithDefault::class$,
		$DB::class$,
		$BB::class$,
		$CB::class$,
		$B1B::class$,
		$D1B::class$
	}));
	{
		$var($ClassArray, arr$, classes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* clazz = arr$->get(i$);
			{
				$nc($System::err)->println($($nc(clazz)->toString()));
				{
					$var($MethodArray, arr$, clazz->getMethods());
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						$var($Method, m, arr$->get(i$));
						if ($nc(m)->getDeclaringClass() != $Object::class$) {
							failures += testMethod(m);
						}
					}
				}
			}
		}
	}
	if (failures > 0) {
		$throwNew($RuntimeException);
	}
}

int32_t DefaultMethodModeling::testMethod($Method* m) {
	$useLocalObjectStack();
	$load($ExpectedModel);
	$var($ExpectedModel, em, $cast($ExpectedModel, $Objects::requireNonNull($$cast($ExpectedModel, $nc(m)->getAnnotation($ExpectedModel::class$)))));
	bool failed = false;
	int32_t var$0 = m->getModifiers();
	if (var$0 != $nc(em)->modifiers()) {
		failed = true;
		$nc($System::err)->printf("Unexpected modifiers %d; expected %d%n"_s, $$new($ObjectArray, {
			$($Integer::valueOf(m->getModifiers())),
			$($Integer::valueOf(em->modifiers()))
		}));
	}
	bool var$1 = m->isDefault();
	if (var$1 != em->isDefault()) {
		failed = true;
		$nc($System::err)->printf("Unexpected isDefualt %b; expected b%n"_s, $$new($ObjectArray, {
			$($Boolean::valueOf(m->isDefault())),
			$($Boolean::valueOf(em->isDefault()))
		}));
	}
	if (!$nc(m->getDeclaringClass())->equals(em->declaringClass())) {
		failed = true;
		$nc($System::err)->printf("Unexpected isDefualt %s; expected %s%n"_s, $$new($ObjectArray, {
			$($nc(m->getDeclaringClass())->toString()),
			$($nc(em->declaringClass())->toString())
		}));
	}
	return (!failed) ? 0 : 1;
}

DefaultMethodModeling::DefaultMethodModeling() {
}

$Class* DefaultMethodModeling::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultMethodModeling, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(DefaultMethodModeling, main, void, $StringArray*)},
		{"testMethod", "(Ljava/lang/reflect/Method;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(DefaultMethodModeling, testMethod, int32_t, $Method*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DefaultMethodModeling",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultMethodModeling, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMethodModeling);
	});
	return class$;
}

$Class* DefaultMethodModeling::class$ = nullptr;
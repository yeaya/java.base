#include <AnnotationToStringTest$PrimHost.h>
#include <AnnotationToStringTest.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void AnnotationToStringTest$PrimHost::init$() {
}

AnnotationToStringTest$PrimHost::AnnotationToStringTest$PrimHost() {
}

$Class* AnnotationToStringTest$PrimHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AnnotationToStringTest$PrimHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnnotationToStringTest$PrimHost", "AnnotationToStringTest", "PrimHost", $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "@MostlyPrimitive(c0=\'a\', c1=\'\\\'\', b0=(byte)0x01, i0=1, i1=2, f0=1.0f, f1=0.0f/0.0f, d0=0.0, d1=1.0/0.0, l0=5L, l1=9223372036854775807L, l2=-9223372036854775808L, l3=-2147483648L, s0=\"Hello world.\", s1=\"a\\\"b\", class0=Obj[].class, classArray={Obj[].class})"},
		{}
	};
	$Attribute $attribute[] = {
		{'c', "[LObj;"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"c0", 'C', "a"},
		{"c1", 'C', "\'"},
		{"b0", 'B', "1"},
		{"i0", 'I', "1"},
		{"i1", 'I', "2"},
		{"f0", 'F', "1.0"},
		{"f1", 'F', "NaN"},
		{"d0", 'D', "0.0"},
		{"d1", 'D', "Infinity"},
		{"l0", 'J', "5"},
		{"l1", 'J', "9223372036854775807"},
		{"l2", 'J', "-9223372036854775808"},
		{"l3", 'J', "-2147483648"},
		{"s0", 's', "Hello world."},
		{"s1", 's', "a\"b"},
		{"class0", 'c', "[LObj;"},
		{"classArray", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LExpectedString;", annotations$$$namedAttribute},
		{"LMostlyPrimitive;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AnnotationToStringTest$PrimHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"AnnotationToStringTest"
	};
	$loadClass(AnnotationToStringTest$PrimHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationToStringTest$PrimHost);
	});
	return class$;
}

$Class* AnnotationToStringTest$PrimHost::class$ = nullptr;
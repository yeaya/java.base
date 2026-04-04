#include <AnnotationToStringTest$AnnotationHost.h>
#include <AnnotationToStringTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void AnnotationToStringTest$AnnotationHost::init$() {
}

AnnotationToStringTest$AnnotationHost::AnnotationToStringTest$AnnotationHost() {
}

$Class* AnnotationToStringTest$AnnotationHost::load$($String* name, bool initialize) {
	$NamedAttribute f0fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@Classy(Obj.class)"},
		{}
	};
	$NamedAttribute f0fieldAnnotations$$$namedAttribute$1[] = {
		{"value", 'c', "LObj;"},
		{}
	};
	$CompoundAttribute f0fieldAnnotations$$[] = {
		{"LExpectedString;", f0fieldAnnotations$$$namedAttribute},
		{"LClassy;", f0fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f1fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@Classy(Obj[].class)"},
		{}
	};
	$NamedAttribute f1fieldAnnotations$$$namedAttribute$1[] = {
		{"value", 'c', "[LObj;"},
		{}
	};
	$CompoundAttribute f1fieldAnnotations$$[] = {
		{"LExpectedString;", f1fieldAnnotations$$$namedAttribute},
		{"LClassy;", f1fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f2fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@Classy(Obj[][].class)"},
		{}
	};
	$NamedAttribute f2fieldAnnotations$$$namedAttribute$1[] = {
		{"value", 'c', "[[LObj;"},
		{}
	};
	$CompoundAttribute f2fieldAnnotations$$[] = {
		{"LExpectedString;", f2fieldAnnotations$$$namedAttribute},
		{"LClassy;", f2fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f3fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@Classy(Obj[][][].class)"},
		{}
	};
	$NamedAttribute f3fieldAnnotations$$$namedAttribute$1[] = {
		{"value", 'c', "[[[LObj;"},
		{}
	};
	$CompoundAttribute f3fieldAnnotations$$[] = {
		{"LExpectedString;", f3fieldAnnotations$$$namedAttribute},
		{"LClassy;", f3fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f4fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@Classy(int.class)"},
		{}
	};
	$NamedAttribute f4fieldAnnotations$$$namedAttribute$1[] = {
		{"value", 'c', "I"},
		{}
	};
	$CompoundAttribute f4fieldAnnotations$$[] = {
		{"LExpectedString;", f4fieldAnnotations$$$namedAttribute},
		{"LClassy;", f4fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f5fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@Classy(int[][][].class)"},
		{}
	};
	$NamedAttribute f5fieldAnnotations$$$namedAttribute$1[] = {
		{"value", 'c', "[[[I"},
		{}
	};
	$CompoundAttribute f5fieldAnnotations$$[] = {
		{"LExpectedString;", f5fieldAnnotations$$$namedAttribute},
		{"LClassy;", f5fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"f0", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f0), f0fieldAnnotations$$},
		{"f1", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f1), f1fieldAnnotations$$},
		{"f2", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f2), f2fieldAnnotations$$},
		{"f3", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f3), f3fieldAnnotations$$},
		{"f4", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f4), f4fieldAnnotations$$},
		{"f5", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f5), f5fieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AnnotationToStringTest$AnnotationHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnnotationToStringTest$AnnotationHost", "AnnotationToStringTest", "AnnotationHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AnnotationToStringTest$AnnotationHost",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AnnotationToStringTest"
	};
	$loadClass(AnnotationToStringTest$AnnotationHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationToStringTest$AnnotationHost);
	});
	return class$;
}

$Class* AnnotationToStringTest$AnnotationHost::class$ = nullptr;
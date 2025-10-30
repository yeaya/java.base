#include <AnnotationToStringTest$PrimHost.h>

#include <AnnotationToStringTest.h>
#include <jcpp.h>

using $AnnotationToStringTest = ::AnnotationToStringTest;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AnnotationToStringTest$PrimHost_Attribute_var$0[] = {
	{"value", 's', "@MostlyPrimitive(c0=\'a\', c1=\'\\\'\', b0=(byte)0x01, i0=1, i1=2, f0=1.0f, f1=0.0f/0.0f, d0=0.0, d1=1.0/0.0, l0=5L, l1=9223372036854775807L, l2=-9223372036854775808L, l3=-2147483648L, s0=\"Hello world.\", s1=\"a\\\"b\", class0=Obj[].class, classArray={Obj[].class})"},
	{}
};

$Attribute AnnotationToStringTest$PrimHost_Attribute_var$2[] = {
	{'c', "[LObj;"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$PrimHost_Attribute_var$1[] = {
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
	{"classArray", '[', AnnotationToStringTest$PrimHost_Attribute_var$2},
	{}
};

$CompoundAttribute _AnnotationToStringTest$PrimHost_Annotations_[] = {
	{"LExpectedString;", AnnotationToStringTest$PrimHost_Attribute_var$0},
	{"LMostlyPrimitive;", AnnotationToStringTest$PrimHost_Attribute_var$1},
	{}
};

$MethodInfo _AnnotationToStringTest$PrimHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AnnotationToStringTest$PrimHost::*)()>(&AnnotationToStringTest$PrimHost::init$))},
	{}
};

$InnerClassInfo _AnnotationToStringTest$PrimHost_InnerClassesInfo_[] = {
	{"AnnotationToStringTest$PrimHost", "AnnotationToStringTest", "PrimHost", $STATIC},
	{}
};

$ClassInfo _AnnotationToStringTest$PrimHost_ClassInfo_ = {
	$ACC_SUPER,
	"AnnotationToStringTest$PrimHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AnnotationToStringTest$PrimHost_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationToStringTest$PrimHost_InnerClassesInfo_,
	_AnnotationToStringTest$PrimHost_Annotations_,
	nullptr,
	nullptr,
	"AnnotationToStringTest"
};

$Object* allocate$AnnotationToStringTest$PrimHost($Class* clazz) {
	return $of($alloc(AnnotationToStringTest$PrimHost));
}

void AnnotationToStringTest$PrimHost::init$() {
}

AnnotationToStringTest$PrimHost::AnnotationToStringTest$PrimHost() {
}

$Class* AnnotationToStringTest$PrimHost::load$($String* name, bool initialize) {
	$loadClass(AnnotationToStringTest$PrimHost, name, initialize, &_AnnotationToStringTest$PrimHost_ClassInfo_, allocate$AnnotationToStringTest$PrimHost);
	return class$;
}

$Class* AnnotationToStringTest$PrimHost::class$ = nullptr;
#include <AnnotationToStringTest$AnnotationHost.h>

#include <AnnotationToStringTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$0[] = {
	{"value", 's', "@Classy(Obj.class)"},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$1[] = {
	{"value", 'c', "LObj;"},
	{}
};

$CompoundAttribute _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f0[] = {
	{"LExpectedString;", AnnotationToStringTest$AnnotationHost_Attribute_var$0},
	{"LClassy;", AnnotationToStringTest$AnnotationHost_Attribute_var$1},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$2[] = {
	{"value", 's', "@Classy(Obj[].class)"},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$3[] = {
	{"value", 'c', "[LObj;"},
	{}
};

$CompoundAttribute _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f1[] = {
	{"LExpectedString;", AnnotationToStringTest$AnnotationHost_Attribute_var$2},
	{"LClassy;", AnnotationToStringTest$AnnotationHost_Attribute_var$3},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$4[] = {
	{"value", 's', "@Classy(Obj[][].class)"},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$5[] = {
	{"value", 'c', "[[LObj;"},
	{}
};

$CompoundAttribute _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f2[] = {
	{"LExpectedString;", AnnotationToStringTest$AnnotationHost_Attribute_var$4},
	{"LClassy;", AnnotationToStringTest$AnnotationHost_Attribute_var$5},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$6[] = {
	{"value", 's', "@Classy(Obj[][][].class)"},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$7[] = {
	{"value", 'c', "[[[LObj;"},
	{}
};

$CompoundAttribute _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f3[] = {
	{"LExpectedString;", AnnotationToStringTest$AnnotationHost_Attribute_var$6},
	{"LClassy;", AnnotationToStringTest$AnnotationHost_Attribute_var$7},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$8[] = {
	{"value", 's', "@Classy(int.class)"},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$9[] = {
	{"value", 'c', "I"},
	{}
};

$CompoundAttribute _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f4[] = {
	{"LExpectedString;", AnnotationToStringTest$AnnotationHost_Attribute_var$8},
	{"LClassy;", AnnotationToStringTest$AnnotationHost_Attribute_var$9},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$10[] = {
	{"value", 's', "@Classy(int[][][].class)"},
	{}
};

$NamedAttribute AnnotationToStringTest$AnnotationHost_Attribute_var$11[] = {
	{"value", 'c', "[[[I"},
	{}
};

$CompoundAttribute _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f5[] = {
	{"LExpectedString;", AnnotationToStringTest$AnnotationHost_Attribute_var$10},
	{"LClassy;", AnnotationToStringTest$AnnotationHost_Attribute_var$11},
	{}
};

$FieldInfo _AnnotationToStringTest$AnnotationHost_FieldInfo_[] = {
	{"f0", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f0), _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f0},
	{"f1", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f1), _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f1},
	{"f2", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f2), _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f2},
	{"f3", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f3), _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f3},
	{"f4", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f4), _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f4},
	{"f5", "I", nullptr, $PUBLIC, $field(AnnotationToStringTest$AnnotationHost, f5), _AnnotationToStringTest$AnnotationHost_FieldAnnotations_f5},
	{}
};

$MethodInfo _AnnotationToStringTest$AnnotationHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AnnotationToStringTest$AnnotationHost, init$, void)},
	{}
};

$InnerClassInfo _AnnotationToStringTest$AnnotationHost_InnerClassesInfo_[] = {
	{"AnnotationToStringTest$AnnotationHost", "AnnotationToStringTest", "AnnotationHost", $STATIC},
	{}
};

$ClassInfo _AnnotationToStringTest$AnnotationHost_ClassInfo_ = {
	$ACC_SUPER,
	"AnnotationToStringTest$AnnotationHost",
	"java.lang.Object",
	nullptr,
	_AnnotationToStringTest$AnnotationHost_FieldInfo_,
	_AnnotationToStringTest$AnnotationHost_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationToStringTest$AnnotationHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AnnotationToStringTest"
};

$Object* allocate$AnnotationToStringTest$AnnotationHost($Class* clazz) {
	return $of($alloc(AnnotationToStringTest$AnnotationHost));
}

void AnnotationToStringTest$AnnotationHost::init$() {
}

AnnotationToStringTest$AnnotationHost::AnnotationToStringTest$AnnotationHost() {
}

$Class* AnnotationToStringTest$AnnotationHost::load$($String* name, bool initialize) {
	$loadClass(AnnotationToStringTest$AnnotationHost, name, initialize, &_AnnotationToStringTest$AnnotationHost_ClassInfo_, allocate$AnnotationToStringTest$AnnotationHost);
	return class$;
}

$Class* AnnotationToStringTest$AnnotationHost::class$ = nullptr;
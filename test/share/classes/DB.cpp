#include <DB.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DB

using $GrandchildSuperIwithDefault = ::GrandchildSuperIwithDefault;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute DB_Attribute_var$0[] = {
	{"declaringClass", 'c', "LDB;"},
	{}
};

$CompoundAttribute _DB_MethodAnnotations_baz1[] = {
	{"LExpectedModel;", DB_Attribute_var$0},
	{}
};

$NamedAttribute DB_Attribute_var$1[] = {
	{"declaringClass", 'c', "LDB;"},
	{}
};

$CompoundAttribute _DB_MethodAnnotations_foo2[] = {
	{"LExpectedModel;", DB_Attribute_var$1},
	{}
};

$NamedAttribute DB_Attribute_var$2[] = {
	{"declaringClass", 'c', "LDB;"},
	{}
};

$CompoundAttribute _DB_MethodAnnotations_quux3[] = {
	{"LExpectedModel;", DB_Attribute_var$2},
	{}
};

$NamedAttribute DB_Attribute_var$3[] = {
	{"declaringClass", 'c', "LDB;"},
	{}
};

$CompoundAttribute _DB_MethodAnnotations_wombat4[] = {
	{"LExpectedModel;", DB_Attribute_var$3},
	{}
};

$MethodInfo _DB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DB::*)()>(&DB::init$))},
	{"baz", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DB_MethodAnnotations_baz1},
	{"foo", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DB_MethodAnnotations_foo2},
	{"quux", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DB_MethodAnnotations_quux3},
	{"wombat", "()V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _DB_MethodAnnotations_wombat4},
	{}
};

$ClassInfo _DB_ClassInfo_ = {
	$ACC_SUPER,
	"DB",
	"java.lang.Object",
	"GrandchildSuperIwithDefault",
	nullptr,
	_DB_MethodInfo_
};

$Object* allocate$DB($Class* clazz) {
	return $of($alloc(DB));
}

void DB::init$() {
}

void DB::wombat() {
}

void DB::baz() {
}

void DB::foo() {
}

void DB::quux() {
}

DB::DB() {
}

$Class* DB::load$($String* name, bool initialize) {
	$loadClass(DB, name, initialize, &_DB_ClassInfo_, allocate$DB);
	return class$;
}

$Class* DB::class$ = nullptr;
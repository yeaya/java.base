#include <GetBoolean.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetBoolean_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetBoolean::*)()>(&GetBoolean::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetBoolean::main))},
	{}
};

$ClassInfo _GetBoolean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetBoolean",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetBoolean_MethodInfo_
};

$Object* allocate$GetBoolean($Class* clazz) {
	return $of($alloc(GetBoolean));
}

void GetBoolean::init$() {
}

void GetBoolean::main($StringArray* args) {
	$Boolean::getBoolean(""_s);
	$Boolean::getBoolean(nullptr);
}

GetBoolean::GetBoolean() {
}

$Class* GetBoolean::load$($String* name, bool initialize) {
	$loadClass(GetBoolean, name, initialize, &_GetBoolean_ClassInfo_, allocate$GetBoolean);
	return class$;
}

$Class* GetBoolean::class$ = nullptr;
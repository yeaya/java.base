#include <GetLong.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetLong_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetLong::*)()>(&GetLong::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GetLong::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _GetLong_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetLong",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetLong_MethodInfo_
};

$Object* allocate$GetLong($Class* clazz) {
	return $of($alloc(GetLong));
}

void GetLong::init$() {
}

void GetLong::main($StringArray* args) {
	$Long::getLong(""_s, (int64_t)1);
	$Long::getLong(($String*)nullptr, (int64_t)1);
}

GetLong::GetLong() {
}

$Class* GetLong::load$($String* name, bool initialize) {
	$loadClass(GetLong, name, initialize, &_GetLong_ClassInfo_, allocate$GetLong);
	return class$;
}

$Class* GetLong::class$ = nullptr;
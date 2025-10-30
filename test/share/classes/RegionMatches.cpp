#include <RegionMatches.h>

#include <jcpp.h>

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _RegionMatches_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RegionMatches::*)()>(&RegionMatches::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RegionMatches::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _RegionMatches_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RegionMatches",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RegionMatches_MethodInfo_
};

$Object* allocate$RegionMatches($Class* clazz) {
	return $of($alloc(RegionMatches));
}

void RegionMatches::init$() {
}

void RegionMatches::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, s1, "abc"_s);
	$var($String, s2, "def"_s);
	if (!s1->regionMatches(0, s2, 0, $Integer::MIN_VALUE)) {
		$throwNew($RuntimeException, "Integer overflow in RegionMatches"_s);
	}
}

RegionMatches::RegionMatches() {
}

$Class* RegionMatches::load$($String* name, bool initialize) {
	$loadClass(RegionMatches, name, initialize, &_RegionMatches_ClassInfo_, allocate$RegionMatches);
	return class$;
}

$Class* RegionMatches::class$ = nullptr;
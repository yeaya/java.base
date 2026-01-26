#include <IntGenerator.h>

#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;

$FieldInfo _IntGenerator_FieldInfo_[] = {
	{"r", "Ljava/util/Random;", nullptr, 0, $field(IntGenerator, r)},
	{}
};

$MethodInfo _IntGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IntGenerator, init$, void)},
	{"next", "(I)I", nullptr, $PUBLIC, $virtualMethod(IntGenerator, next, int32_t, int32_t)},
	{}
};

$ClassInfo _IntGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IntGenerator",
	"java.lang.Object",
	nullptr,
	_IntGenerator_FieldInfo_,
	_IntGenerator_MethodInfo_
};

$Object* allocate$IntGenerator($Class* clazz) {
	return $of($alloc(IntGenerator));
}

void IntGenerator::init$() {
	$set(this, r, $new($Random, 0));
}

int32_t IntGenerator::next(int32_t max) {
	if (max <= 0) {
		return 0;
	}
	int32_t x = $nc(this->r)->nextInt();
	if (x < 0) {
		x = 0 - x;
	}
	return $mod(x, (max + 1));
}

IntGenerator::IntGenerator() {
}

$Class* IntGenerator::load$($String* name, bool initialize) {
	$loadClass(IntGenerator, name, initialize, &_IntGenerator_ClassInfo_, allocate$IntGenerator);
	return class$;
}

$Class* IntGenerator::class$ = nullptr;
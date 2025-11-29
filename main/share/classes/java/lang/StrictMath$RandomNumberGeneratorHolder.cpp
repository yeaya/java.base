#include <java/lang/StrictMath$RandomNumberGeneratorHolder.h>

#include <java/lang/StrictMath.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;

namespace java {
	namespace lang {

$FieldInfo _StrictMath$RandomNumberGeneratorHolder_FieldInfo_[] = {
	{"randomNumberGenerator", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(StrictMath$RandomNumberGeneratorHolder, randomNumberGenerator)},
	{}
};

$MethodInfo _StrictMath$RandomNumberGeneratorHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StrictMath$RandomNumberGeneratorHolder::*)()>(&StrictMath$RandomNumberGeneratorHolder::init$))},
	{}
};

$InnerClassInfo _StrictMath$RandomNumberGeneratorHolder_InnerClassesInfo_[] = {
	{"java.lang.StrictMath$RandomNumberGeneratorHolder", "java.lang.StrictMath", "RandomNumberGeneratorHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StrictMath$RandomNumberGeneratorHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StrictMath$RandomNumberGeneratorHolder",
	"java.lang.Object",
	nullptr,
	_StrictMath$RandomNumberGeneratorHolder_FieldInfo_,
	_StrictMath$RandomNumberGeneratorHolder_MethodInfo_,
	nullptr,
	nullptr,
	_StrictMath$RandomNumberGeneratorHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StrictMath"
};

$Object* allocate$StrictMath$RandomNumberGeneratorHolder($Class* clazz) {
	return $of($alloc(StrictMath$RandomNumberGeneratorHolder));
}

$Random* StrictMath$RandomNumberGeneratorHolder::randomNumberGenerator = nullptr;

void StrictMath$RandomNumberGeneratorHolder::init$() {
}

void clinit$StrictMath$RandomNumberGeneratorHolder($Class* class$) {
	$assignStatic(StrictMath$RandomNumberGeneratorHolder::randomNumberGenerator, $new($Random));
}

StrictMath$RandomNumberGeneratorHolder::StrictMath$RandomNumberGeneratorHolder() {
}

$Class* StrictMath$RandomNumberGeneratorHolder::load$($String* name, bool initialize) {
	$loadClass(StrictMath$RandomNumberGeneratorHolder, name, initialize, &_StrictMath$RandomNumberGeneratorHolder_ClassInfo_, clinit$StrictMath$RandomNumberGeneratorHolder, allocate$StrictMath$RandomNumberGeneratorHolder);
	return class$;
}

$Class* StrictMath$RandomNumberGeneratorHolder::class$ = nullptr;

	} // lang
} // java
#include <java/lang/Math$RandomNumberGeneratorHolder.h>

#include <java/lang/Math.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Random = ::java::util::Random;

namespace java {
	namespace lang {

$FieldInfo _Math$RandomNumberGeneratorHolder_FieldInfo_[] = {
	{"randomNumberGenerator", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(Math$RandomNumberGeneratorHolder, randomNumberGenerator)},
	{}
};

$MethodInfo _Math$RandomNumberGeneratorHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Math$RandomNumberGeneratorHolder, init$, void)},
	{}
};

$InnerClassInfo _Math$RandomNumberGeneratorHolder_InnerClassesInfo_[] = {
	{"java.lang.Math$RandomNumberGeneratorHolder", "java.lang.Math", "RandomNumberGeneratorHolder", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Math$RandomNumberGeneratorHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.Math$RandomNumberGeneratorHolder",
	"java.lang.Object",
	nullptr,
	_Math$RandomNumberGeneratorHolder_FieldInfo_,
	_Math$RandomNumberGeneratorHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Math$RandomNumberGeneratorHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Math"
};

$Object* allocate$Math$RandomNumberGeneratorHolder($Class* clazz) {
	return $of($alloc(Math$RandomNumberGeneratorHolder));
}

$Random* Math$RandomNumberGeneratorHolder::randomNumberGenerator = nullptr;

void Math$RandomNumberGeneratorHolder::init$() {
}

void clinit$Math$RandomNumberGeneratorHolder($Class* class$) {
	$assignStatic(Math$RandomNumberGeneratorHolder::randomNumberGenerator, $new($Random));
}

Math$RandomNumberGeneratorHolder::Math$RandomNumberGeneratorHolder() {
}

$Class* Math$RandomNumberGeneratorHolder::load$($String* name, bool initialize) {
	$loadClass(Math$RandomNumberGeneratorHolder, name, initialize, &_Math$RandomNumberGeneratorHolder_ClassInfo_, clinit$Math$RandomNumberGeneratorHolder, allocate$Math$RandomNumberGeneratorHolder);
	return class$;
}

$Class* Math$RandomNumberGeneratorHolder::class$ = nullptr;

	} // lang
} // java
#include <java/util/SplittableRandom$AbstractSplittableGeneratorProxy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/SplittableRandom.h>
#include <java/util/random/RandomGenerator$SplittableGenerator.h>
#include <java/util/random/RandomGenerator.h>
#include <jdk/internal/util/random/RandomSupport$AbstractSplittableGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SplittableRandom = ::java::util::SplittableRandom;
using $RandomGenerator = ::java::util::random::RandomGenerator;
using $RandomGenerator$SplittableGenerator = ::java::util::random::RandomGenerator$SplittableGenerator;
using $RandomSupport$AbstractSplittableGenerator = ::jdk::internal::util::random::RandomSupport$AbstractSplittableGenerator;

namespace java {
	namespace util {

$FieldInfo _SplittableRandom$AbstractSplittableGeneratorProxy_FieldInfo_[] = {
	{"this$0", "Ljava/util/SplittableRandom;", nullptr, $FINAL | $SYNTHETIC, $field(SplittableRandom$AbstractSplittableGeneratorProxy, this$0)},
	{}
};

$MethodInfo _SplittableRandom$AbstractSplittableGeneratorProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/util/SplittableRandom;)V", nullptr, $PRIVATE, $method(static_cast<void(SplittableRandom$AbstractSplittableGeneratorProxy::*)($SplittableRandom*)>(&SplittableRandom$AbstractSplittableGeneratorProxy::init$))},
	{"nextInt", "()I", nullptr, $PUBLIC},
	{"nextLong", "()J", nullptr, $PUBLIC},
	{"split", "(Ljava/util/random/RandomGenerator$SplittableGenerator;)Ljava/util/SplittableRandom;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SplittableRandom$AbstractSplittableGeneratorProxy_InnerClassesInfo_[] = {
	{"java.util.SplittableRandom$AbstractSplittableGeneratorProxy", "java.util.SplittableRandom", "AbstractSplittableGeneratorProxy", $PRIVATE},
	{"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator", "jdk.internal.util.random.RandomSupport", "AbstractSplittableGenerator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SplittableRandom$AbstractSplittableGeneratorProxy_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.SplittableRandom$AbstractSplittableGeneratorProxy",
	"jdk.internal.util.random.RandomSupport$AbstractSplittableGenerator",
	nullptr,
	_SplittableRandom$AbstractSplittableGeneratorProxy_FieldInfo_,
	_SplittableRandom$AbstractSplittableGeneratorProxy_MethodInfo_,
	nullptr,
	nullptr,
	_SplittableRandom$AbstractSplittableGeneratorProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.SplittableRandom"
};

$Object* allocate$SplittableRandom$AbstractSplittableGeneratorProxy($Class* clazz) {
	return $of($alloc(SplittableRandom$AbstractSplittableGeneratorProxy));
}

void SplittableRandom$AbstractSplittableGeneratorProxy::init$($SplittableRandom* this$0) {
	$set(this, this$0, this$0);
	$RandomSupport$AbstractSplittableGenerator::init$();
}

int32_t SplittableRandom$AbstractSplittableGeneratorProxy::nextInt() {
	return this->this$0->nextInt();
}

int64_t SplittableRandom$AbstractSplittableGeneratorProxy::nextLong() {
	return this->this$0->nextLong();
}

$RandomGenerator$SplittableGenerator* SplittableRandom$AbstractSplittableGeneratorProxy::split($RandomGenerator$SplittableGenerator* source) {
	int64_t var$0 = $nc(source)->nextLong();
	return $new($SplittableRandom, var$0, $SplittableRandom::mixGamma(source->nextLong()));
}

SplittableRandom$AbstractSplittableGeneratorProxy::SplittableRandom$AbstractSplittableGeneratorProxy() {
}

$Class* SplittableRandom$AbstractSplittableGeneratorProxy::load$($String* name, bool initialize) {
	$loadClass(SplittableRandom$AbstractSplittableGeneratorProxy, name, initialize, &_SplittableRandom$AbstractSplittableGeneratorProxy_ClassInfo_, allocate$SplittableRandom$AbstractSplittableGeneratorProxy);
	return class$;
}

$Class* SplittableRandom$AbstractSplittableGeneratorProxy::class$ = nullptr;

	} // util
} // java
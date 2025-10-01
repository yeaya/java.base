#include <java/util/PrimitiveIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$MethodInfo _PrimitiveIterator_MethodInfo_[] = {
	{"forEachRemaining", "(Ljava/lang/Object;)V", "(TT_CONS;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PrimitiveIterator_InnerClassesInfo_[] = {
	{"java.util.PrimitiveIterator$OfDouble", "java.util.PrimitiveIterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.PrimitiveIterator$OfLong", "java.util.PrimitiveIterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.PrimitiveIterator$OfInt", "java.util.PrimitiveIterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrimitiveIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.PrimitiveIterator",
	nullptr,
	"java.util.Iterator",
	nullptr,
	_PrimitiveIterator_MethodInfo_,
	"<T:Ljava/lang/Object;T_CONS:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	nullptr,
	_PrimitiveIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.PrimitiveIterator$OfDouble,java.util.PrimitiveIterator$OfLong,java.util.PrimitiveIterator$OfInt"
};

$Object* allocate$PrimitiveIterator($Class* clazz) {
	return $of($alloc(PrimitiveIterator));
}

$Class* PrimitiveIterator::load$($String* name, bool initialize) {
	$loadClass(PrimitiveIterator, name, initialize, &_PrimitiveIterator_ClassInfo_, allocate$PrimitiveIterator);
	return class$;
}

$Class* PrimitiveIterator::class$ = nullptr;

	} // util
} // java
#include <java/lang/Comparable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _Comparable_MethodInfo_[] = {
	{"compareTo", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Comparable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.Comparable",
	nullptr,
	nullptr,
	nullptr,
	_Comparable_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$Comparable($Class* clazz) {
	return $of($alloc(Comparable));
}

$Class* Comparable::load$($String* name, bool initialize) {
	$loadClass(Comparable, name, initialize, &_Comparable_ClassInfo_, allocate$Comparable);
	return class$;
}

$Class* Comparable::class$ = nullptr;

	} // lang
} // java
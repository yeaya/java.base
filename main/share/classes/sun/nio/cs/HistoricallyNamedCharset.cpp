#include <sun/nio/cs/HistoricallyNamedCharset.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _HistoricallyNamedCharset_MethodInfo_[] = {
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _HistoricallyNamedCharset_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	nullptr,
	nullptr,
	_HistoricallyNamedCharset_MethodInfo_
};

$Object* allocate$HistoricallyNamedCharset($Class* clazz) {
	return $of($alloc(HistoricallyNamedCharset));
}

$Class* HistoricallyNamedCharset::load$($String* name, bool initialize) {
	$loadClass(HistoricallyNamedCharset, name, initialize, &_HistoricallyNamedCharset_ClassInfo_, allocate$HistoricallyNamedCharset);
	return class$;
}

$Class* HistoricallyNamedCharset::class$ = nullptr;

		} // cs
	} // nio
} // sun
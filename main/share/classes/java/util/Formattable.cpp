#include <java/util/Formattable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Formatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Formatter = ::java::util::Formatter;

namespace java {
	namespace util {

$MethodInfo _Formattable_MethodInfo_[] = {
	{"formatTo", "(Ljava/util/Formatter;III)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Formattable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Formattable",
	nullptr,
	nullptr,
	nullptr,
	_Formattable_MethodInfo_
};

$Object* allocate$Formattable($Class* clazz) {
	return $of($alloc(Formattable));
}

$Class* Formattable::load$($String* name, bool initialize) {
	$loadClass(Formattable, name, initialize, &_Formattable_ClassInfo_, allocate$Formattable);
	return class$;
}

$Class* Formattable::class$ = nullptr;

	} // util
} // java
#include <java/lang/Appendable.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _Appendable_MethodInfo_[] = {
	{"append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"append", "(C)Ljava/lang/Appendable;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Appendable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.Appendable",
	nullptr,
	nullptr,
	nullptr,
	_Appendable_MethodInfo_
};

$Object* allocate$Appendable($Class* clazz) {
	return $of($alloc(Appendable));
}

$Class* Appendable::load$($String* name, bool initialize) {
	$loadClass(Appendable, name, initialize, &_Appendable_ClassInfo_, allocate$Appendable);
	return class$;
}

$Class* Appendable::class$ = nullptr;

	} // lang
} // java
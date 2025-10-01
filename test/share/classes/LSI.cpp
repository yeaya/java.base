#include <LSI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LSI_MethodInfo_[] = {
	{"convert", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LSI_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"LSI",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_LSI_MethodInfo_
};

$Object* allocate$LSI($Class* clazz) {
	return $of($alloc(LSI));
}

$Class* LSI::load$($String* name, bool initialize) {
	$loadClass(LSI, name, initialize, &_LSI_ClassInfo_, allocate$LSI);
	return class$;
}

$Class* LSI::class$ = nullptr;
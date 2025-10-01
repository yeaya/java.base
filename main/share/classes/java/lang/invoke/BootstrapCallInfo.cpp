#include <java/lang/invoke/BootstrapCallInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/AbstractConstantGroup$BSCIWithCache.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NOT_PRESENT
#undef NP

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractConstantGroup$BSCIWithCache = ::java::lang::invoke::AbstractConstantGroup$BSCIWithCache;
using $AbstractConstantGroup$WithCache = ::java::lang::invoke::AbstractConstantGroup$WithCache;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _BootstrapCallInfo_MethodInfo_[] = {
	{"bootstrapMethod", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"invocationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"invocationType", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT},
	{"makeBootstrapCallInfo", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/invoke/ConstantGroup;)Ljava/lang/invoke/BootstrapCallInfo;", "<T:Ljava/lang/Object;>(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;TT;Ljava/lang/invoke/ConstantGroup;)Ljava/lang/invoke/BootstrapCallInfo<TT;>;", $PUBLIC | $STATIC, $method(static_cast<BootstrapCallInfo*(*)($MethodHandle*,$String*,Object$*,$ConstantGroup*)>(&BootstrapCallInfo::makeBootstrapCallInfo))},
	{}
};

$ClassInfo _BootstrapCallInfo_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.lang.invoke.BootstrapCallInfo",
	nullptr,
	"java.lang.invoke.ConstantGroup",
	nullptr,
	_BootstrapCallInfo_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/invoke/ConstantGroup;"
};

$Object* allocate$BootstrapCallInfo($Class* clazz) {
	return $of($alloc(BootstrapCallInfo));
}

BootstrapCallInfo* BootstrapCallInfo::makeBootstrapCallInfo($MethodHandle* bsm, $String* name, Object$* type, $ConstantGroup* constants) {
	$init(BootstrapCallInfo);
	$var($AbstractConstantGroup$BSCIWithCache, bsci, $new($AbstractConstantGroup$BSCIWithCache, bsm, name, type, $nc(constants)->size()));
	$init($AbstractConstantGroup$BSCIWithCache);
	$var($Object, NP, $AbstractConstantGroup$BSCIWithCache::NOT_PRESENT);
	bsci->initializeCache($($nc(constants)->asList(NP)), NP);
	return bsci;
}

$Class* BootstrapCallInfo::load$($String* name, bool initialize) {
	$loadClass(BootstrapCallInfo, name, initialize, &_BootstrapCallInfo_ClassInfo_, allocate$BootstrapCallInfo);
	return class$;
}

$Class* BootstrapCallInfo::class$ = nullptr;

		} // invoke
	} // lang
} // java
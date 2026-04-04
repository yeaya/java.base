#include <java/lang/invoke/BootstrapCallInfo.h>
#include <java/lang/invoke/AbstractConstantGroup$BSCIWithCache.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NOT_PRESENT
#undef NP

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractConstantGroup$BSCIWithCache = ::java::lang::invoke::AbstractConstantGroup$BSCIWithCache;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace java {
	namespace lang {
		namespace invoke {

BootstrapCallInfo* BootstrapCallInfo::makeBootstrapCallInfo($MethodHandle* bsm, $String* name, Object$* type, $ConstantGroup* constants) {
	$init(BootstrapCallInfo);
	$useLocalObjectStack();
	$var($AbstractConstantGroup$BSCIWithCache, bsci, $new($AbstractConstantGroup$BSCIWithCache, bsm, name, type, $nc(constants)->size()));
	$var($Object, NP, $AbstractConstantGroup$BSCIWithCache::NOT_PRESENT);
	bsci->initializeCache($(constants->asList(NP)), NP);
	return bsci;
}

$Class* BootstrapCallInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"bootstrapMethod", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BootstrapCallInfo, bootstrapMethod, $MethodHandle*)},
		{"invocationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BootstrapCallInfo, invocationName, $String*)},
		{"invocationType", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(BootstrapCallInfo, invocationType, $Object*)},
		{"makeBootstrapCallInfo", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/invoke/ConstantGroup;)Ljava/lang/invoke/BootstrapCallInfo;", "<T:Ljava/lang/Object;>(Ljava/lang/invoke/MethodHandle;Ljava/lang/String;TT;Ljava/lang/invoke/ConstantGroup;)Ljava/lang/invoke/BootstrapCallInfo<TT;>;", $PUBLIC | $STATIC, $staticMethod(BootstrapCallInfo, makeBootstrapCallInfo, BootstrapCallInfo*, $MethodHandle*, $String*, Object$*, $ConstantGroup*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.lang.invoke.BootstrapCallInfo",
		nullptr,
		"java.lang.invoke.ConstantGroup",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/invoke/ConstantGroup;"
	};
	$loadClass(BootstrapCallInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapCallInfo);
	});
	return class$;
}

$Class* BootstrapCallInfo::class$ = nullptr;

		} // invoke
	} // lang
} // java
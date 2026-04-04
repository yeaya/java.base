#include <sun/util/cldr/CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Stream.h>
#include <sun/util/calendar/ZoneInfoFile.h>
#include <sun/util/cldr/CLDRTimeZoneNameProviderImpl.h>
#include <jcpp.h>

#undef INSTANCE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $IntFunction = ::java::util::function::IntFunction;
using $ZoneInfoFile = ::sun::util::calendar::ZoneInfoFile;

namespace sun {
	namespace util {
		namespace cldr {

class CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0 : public $IntFunction {
	$class(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::lambda$static$0(x$0);
	}
};
$Class* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0, init$, void)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.util.function.IntFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::class$ = nullptr;

$StringArray* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::INSTANCE = nullptr;

void CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::init$() {
}

$StringArray* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::lambda$static$0(int32_t x$0) {
	$init(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS);
	return $new($StringArray, x$0);
}

void CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::INSTANCE, $cast($StringArray, $$nc($$nc($Arrays::stream($($ZoneInfoFile::getZoneIds())))->sorted())->toArray($$new(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0))));
}

CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS() {
}

$Class* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0")) {
			return CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS, init$, void)},
		{"lambda$static$0", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS, lambda$static$0, $StringArray*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS", "sun.util.cldr.CLDRTimeZoneNameProviderImpl", "AVAILABLE_IDS", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.cldr.CLDRTimeZoneNameProviderImpl"
	};
	$loadClass(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS, name, initialize, &classInfo$$, CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS);
	});
	return class$;
}

$Class* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::class$ = nullptr;

		} // cldr
	} // util
} // sun
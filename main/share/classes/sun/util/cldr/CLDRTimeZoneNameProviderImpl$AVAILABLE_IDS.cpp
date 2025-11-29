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
using $Stream = ::java::util::stream::Stream;
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
		 return $of(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::lambda$static$0(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::*)()>(&CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS_FieldInfo_[] = {
	{"INSTANCE", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS, INSTANCE)},
	{}
};

$MethodInfo _CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::*)()>(&CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::init$))},
	{"lambda$static$0", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)(int32_t)>(&CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::lambda$static$0))},
	{}
};

$InnerClassInfo _CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS_InnerClassesInfo_[] = {
	{"sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS", "sun.util.cldr.CLDRTimeZoneNameProviderImpl", "AVAILABLE_IDS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.cldr.CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS",
	"java.lang.Object",
	nullptr,
	_CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS_FieldInfo_,
	_CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS_MethodInfo_,
	nullptr,
	nullptr,
	_CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.cldr.CLDRTimeZoneNameProviderImpl"
};

$Object* allocate$CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS($Class* clazz) {
	return $of($alloc(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS));
}

$StringArray* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::INSTANCE = nullptr;

void CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::init$() {
}

$StringArray* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::lambda$static$0(int32_t x$0) {
	$init(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS);
	return $new($StringArray, x$0);
}

void clinit$CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::INSTANCE, $fcast($StringArray, $nc($($nc($($Arrays::stream($($ZoneInfoFile::getZoneIds()))))->sorted()))->toArray(static_cast<$IntFunction*>($$new(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0)))));
}

CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS() {
}

$Class* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::classInfo$.name)) {
			return CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS, name, initialize, &_CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS_ClassInfo_, clinit$CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS, allocate$CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS);
	return class$;
}

$Class* CLDRTimeZoneNameProviderImpl$AVAILABLE_IDS::class$ = nullptr;

		} // cldr
	} // util
} // sun
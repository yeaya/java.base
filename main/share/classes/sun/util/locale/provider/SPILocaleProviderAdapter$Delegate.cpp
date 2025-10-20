#include <sun/util/locale/provider/SPILocaleProviderAdapter$Delegate.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <java/util/stream/Stream.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <sun/util/locale/provider/SPILocaleProviderAdapter.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;
using $Stream = ::java::util::stream::Stream;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleServiceProviderPool = ::sun::util::locale::provider::LocaleServiceProviderPool;
using $SPILocaleProviderAdapter = ::sun::util::locale::provider::SPILocaleProviderAdapter;

namespace sun {
	namespace util {
		namespace locale {
			namespace provider {

class SPILocaleProviderAdapter$Delegate$$Lambda$equals : public $Predicate {
	$class(SPILocaleProviderAdapter$Delegate$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Locale* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		 return $nc(inst$)->equals(obj);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SPILocaleProviderAdapter$Delegate$$Lambda$equals>());
	}
	$Locale* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SPILocaleProviderAdapter$Delegate$$Lambda$equals::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SPILocaleProviderAdapter$Delegate$$Lambda$equals, inst$)},
	{}
};
$MethodInfo SPILocaleProviderAdapter$Delegate$$Lambda$equals::methodInfos[3] = {
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(SPILocaleProviderAdapter$Delegate$$Lambda$equals::*)($Locale*)>(&SPILocaleProviderAdapter$Delegate$$Lambda$equals::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo SPILocaleProviderAdapter$Delegate$$Lambda$equals::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate$$Lambda$equals",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* SPILocaleProviderAdapter$Delegate$$Lambda$equals::load$($String* name, bool initialize) {
	$loadClass(SPILocaleProviderAdapter$Delegate$$Lambda$equals, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SPILocaleProviderAdapter$Delegate$$Lambda$equals::class$ = nullptr;

$MethodInfo _SPILocaleProviderAdapter$Delegate_MethodInfo_[] = {
	{"addImpl", "(Ljava/util/spi/LocaleServiceProvider;)V", "(TP;)V", $PUBLIC},
	{"getAvailableLocalesDelegate", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getDelegateMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Locale;TP;>;", $PUBLIC | $ABSTRACT},
	{"getImpl", "(Ljava/util/Locale;)Ljava/util/spi/LocaleServiceProvider;", "(Ljava/util/Locale;)TP;", $PUBLIC},
	{"isSupportedLocaleDelegate", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SPILocaleProviderAdapter$Delegate_InnerClassesInfo_[] = {
	{"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate", "sun.util.locale.provider.SPILocaleProviderAdapter", "Delegate", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SPILocaleProviderAdapter$Delegate_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.util.locale.provider.SPILocaleProviderAdapter$Delegate",
	nullptr,
	nullptr,
	nullptr,
	_SPILocaleProviderAdapter$Delegate_MethodInfo_,
	"<P:Ljava/util/spi/LocaleServiceProvider;>Ljava/lang/Object;",
	nullptr,
	_SPILocaleProviderAdapter$Delegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.locale.provider.SPILocaleProviderAdapter"
};

$Object* allocate$SPILocaleProviderAdapter$Delegate($Class* clazz) {
	return $of($alloc(SPILocaleProviderAdapter$Delegate));
}

void SPILocaleProviderAdapter$Delegate::addImpl($LocaleServiceProvider* impl) {
	$useLocalCurrentObjectStackCache();
	{
		$var($LocaleArray, arr$, $nc(impl)->getAvailableLocales());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, l, arr$->get(i$));
			{
				$nc($(getDelegateMap()))->putIfAbsent(l, impl);
			}
		}
	}
}

$LocaleServiceProvider* SPILocaleProviderAdapter$Delegate::getImpl($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($LocaleServiceProviderPool::getLookupLocales($($nc(locale)->stripExtensions()))))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Locale, l, $cast($Locale, i$->next()));
			{
				$var($LocaleServiceProvider, ret, $cast($LocaleServiceProvider, $nc($(getDelegateMap()))->get(l)));
				if (ret != nullptr) {
					return ret;
				}
			}
		}
	}
	return nullptr;
}

$LocaleArray* SPILocaleProviderAdapter$Delegate::getAvailableLocalesDelegate() {
	$useLocalCurrentObjectStackCache();
	return $fcast($LocaleArray, $nc($($nc($(getDelegateMap()))->keySet()))->toArray($$new($LocaleArray, 0)));
}

bool SPILocaleProviderAdapter$Delegate::isSupportedLocaleDelegate($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, getDelegateMap());
	$var($Locale, override$, $CalendarDataUtility::findRegionOverride(locale));
	$var($LocaleServiceProvider, impl, $cast($LocaleServiceProvider, $nc(map)->get(override$)));
	if (impl != nullptr) {
		return impl->isSupportedLocale(override$);
	} else {
		$var($Locale, overrideNoExt, $nc(override$)->stripExtensions());
		$assign(impl, $cast($LocaleServiceProvider, map->get(overrideNoExt)));
		if (impl != nullptr) {
			return $nc($($Arrays::stream($(impl->getAvailableLocales()))))->anyMatch(static_cast<$Predicate*>($$new(SPILocaleProviderAdapter$Delegate$$Lambda$equals, static_cast<$Locale*>($nc(overrideNoExt)))));
		}
	}
	return false;
}

$Class* SPILocaleProviderAdapter$Delegate::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SPILocaleProviderAdapter$Delegate$$Lambda$equals::classInfo$.name)) {
			return SPILocaleProviderAdapter$Delegate$$Lambda$equals::load$(name, initialize);
		}
	}
	$loadClass(SPILocaleProviderAdapter$Delegate, name, initialize, &_SPILocaleProviderAdapter$Delegate_ClassInfo_, allocate$SPILocaleProviderAdapter$Delegate);
	return class$;
}

$Class* SPILocaleProviderAdapter$Delegate::class$ = nullptr;

			} // provider
		} // locale
	} // util
} // sun
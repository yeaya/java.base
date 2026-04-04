#include <sun/net/dns/ResolverConfigurationImpl.h>
#include <java/lang/AssertionError.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/net/dns/OptionsImpl.h>
#include <sun/net/dns/ResolverConfiguration$Options.h>
#include <sun/net/dns/ResolverConfiguration.h>
#include <sun/net/dns/ResolverConfigurationImpl$AddressChangeListener.h>
#include <jcpp.h>

#undef SECONDS
#undef TIMEOUT_NANOS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $OptionsImpl = ::sun::net::dns::OptionsImpl;
using $ResolverConfiguration = ::sun::net::dns::ResolverConfiguration;
using $ResolverConfiguration$Options = ::sun::net::dns::ResolverConfiguration$Options;
using $ResolverConfigurationImpl$AddressChangeListener = ::sun::net::dns::ResolverConfigurationImpl$AddressChangeListener;

namespace sun {
	namespace net {
		namespace dns {

bool ResolverConfigurationImpl::$assertionsDisabled = false;
$Object* ResolverConfigurationImpl::lock = nullptr;
bool ResolverConfigurationImpl::changed = false;
int64_t ResolverConfigurationImpl::lastRefresh = 0;
int64_t ResolverConfigurationImpl::TIMEOUT_NANOS = 0;
$String* ResolverConfigurationImpl::os_searchlist = nullptr;
$String* ResolverConfigurationImpl::os_nameservers = nullptr;
$ArrayList* ResolverConfigurationImpl::searchlist$ = nullptr;
$ArrayList* ResolverConfigurationImpl::nameservers$ = nullptr;

$ArrayList* ResolverConfigurationImpl::stringToList($String* str) {
	$useLocalObjectStack();
	$var($StringArray, tokens, $nc(str)->split(","_s));
	$var($ArrayList, l, $new($ArrayList, tokens->length));
	{
		$var($StringArray, arr$, tokens);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				bool var$0 = !$nc(s)->isEmpty();
				if (var$0 && !l->contains(s)) {
					l->add(s);
				}
			}
		}
	}
	l->trimToSize();
	return l;
}

$ArrayList* ResolverConfigurationImpl::addressesToList($String* str) {
	$useLocalObjectStack();
	$var($StringArray, tokens, $nc(str)->split(","_s));
	$var($ArrayList, l, $new($ArrayList, tokens->length));
	{
		$var($StringArray, arr$, tokens);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			if (!$nc(s)->isEmpty()) {
				bool var$0 = s->indexOf(u':') >= 0;
				if (var$0 && s->charAt(0) != u'[') {
					$assign(s, $str({$$str(u'['), s, $$str(u']')}));
				}
				bool var$1 = !s->isEmpty();
				if (var$1 && !l->contains(s)) {
					l->add(s);
				}
			}
		}
	}
	l->trimToSize();
	return l;
}

void ResolverConfigurationImpl::loadConfig() {
	if (!ResolverConfigurationImpl::$assertionsDisabled && !$Thread::holdsLock(ResolverConfigurationImpl::lock)) {
		$throwNew($AssertionError);
	}
	if (ResolverConfigurationImpl::changed) {
		ResolverConfigurationImpl::changed = false;
	} else {
		int64_t currTime = $System::nanoTime();
		if ((currTime - ResolverConfigurationImpl::lastRefresh) < ResolverConfigurationImpl::TIMEOUT_NANOS) {
			return;
		}
	}
	loadDNSconfig0();
	ResolverConfigurationImpl::lastRefresh = $System::nanoTime();
	$assignStatic(ResolverConfigurationImpl::searchlist$, stringToList(ResolverConfigurationImpl::os_searchlist));
	$assignStatic(ResolverConfigurationImpl::nameservers$, addressesToList(ResolverConfigurationImpl::os_nameservers));
	$assignStatic(ResolverConfigurationImpl::os_searchlist, nullptr);
	$assignStatic(ResolverConfigurationImpl::os_nameservers, nullptr);
}

void ResolverConfigurationImpl::init$() {
	$ResolverConfiguration::init$();
	$set(this, opts, $new($OptionsImpl));
}

$List* ResolverConfigurationImpl::searchlist() {
	$synchronized(ResolverConfigurationImpl::lock) {
		loadConfig();
		return $cast($List, $nc(ResolverConfigurationImpl::searchlist$)->clone());
	}
}

$List* ResolverConfigurationImpl::nameservers() {
	$synchronized(ResolverConfigurationImpl::lock) {
		loadConfig();
		return $cast($List, $nc(ResolverConfigurationImpl::nameservers$)->clone());
	}
}

$ResolverConfiguration$Options* ResolverConfigurationImpl::options() {
	return this->opts;
}

void ResolverConfigurationImpl::init0() {
	$init(ResolverConfigurationImpl);
	$prepareNativeStatic(init0, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void ResolverConfigurationImpl::loadDNSconfig0() {
	$init(ResolverConfigurationImpl);
	$prepareNativeStatic(loadDNSconfig0, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

int32_t ResolverConfigurationImpl::notifyAddrChange0() {
	$init(ResolverConfigurationImpl);
	$prepareNativeStatic(notifyAddrChange0, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void ResolverConfigurationImpl::clinit$($Class* clazz) {
	ResolverConfigurationImpl::$assertionsDisabled = !ResolverConfigurationImpl::class$->desiredAssertionStatus();
	$assignStatic(ResolverConfigurationImpl::lock, $new($Object));
	ResolverConfigurationImpl::changed = true;
	$init($TimeUnit);
	ResolverConfigurationImpl::TIMEOUT_NANOS = $TimeUnit::SECONDS->toNanos(120);
	{
		$BootLoader::loadLibrary("net"_s);
		ResolverConfigurationImpl::init0();
		$var($ResolverConfigurationImpl$AddressChangeListener, thr, $new($ResolverConfigurationImpl$AddressChangeListener));
		thr->setDaemon(true);
		thr->start();
	}
}

ResolverConfigurationImpl::ResolverConfigurationImpl() {
}

$Class* ResolverConfigurationImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResolverConfigurationImpl, $assertionsDisabled)},
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, lock)},
		{"opts", "Lsun/net/dns/ResolverConfiguration$Options;", nullptr, $PRIVATE | $FINAL, $field(ResolverConfigurationImpl, opts)},
		{"changed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, changed)},
		{"lastRefresh", "J", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, lastRefresh)},
		{"TIMEOUT_NANOS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverConfigurationImpl, TIMEOUT_NANOS)},
		{"os_searchlist", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, os_searchlist)},
		{"os_nameservers", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, os_nameservers)},
		{"searchlist", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, searchlist$)},
		{"nameservers", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, nameservers$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ResolverConfigurationImpl, init$, void)},
		{"addressesToList", "(Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljava/lang/String;)Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE, $method(ResolverConfigurationImpl, addressesToList, $ArrayList*, $String*)},
		{"init0", "()V", nullptr, $STATIC | $NATIVE, $staticMethod(ResolverConfigurationImpl, init0, void)},
		{"loadConfig", "()V", nullptr, $PRIVATE, $method(ResolverConfigurationImpl, loadConfig, void)},
		{"loadDNSconfig0", "()V", nullptr, $STATIC | $NATIVE, $staticMethod(ResolverConfigurationImpl, loadDNSconfig0, void)},
		{"nameservers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ResolverConfigurationImpl, nameservers, $List*)},
		{"notifyAddrChange0", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(ResolverConfigurationImpl, notifyAddrChange0, int32_t)},
		{"options", "()Lsun/net/dns/ResolverConfiguration$Options;", nullptr, $PUBLIC, $virtualMethod(ResolverConfigurationImpl, options, $ResolverConfiguration$Options*)},
		{"searchlist", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ResolverConfigurationImpl, searchlist, $List*)},
		{"stringToList", "(Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljava/lang/String;)Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE, $method(ResolverConfigurationImpl, stringToList, $ArrayList*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.dns.ResolverConfigurationImpl$AddressChangeListener", "sun.net.dns.ResolverConfigurationImpl", "AddressChangeListener", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.dns.ResolverConfigurationImpl",
		"sun.net.dns.ResolverConfiguration",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.dns.ResolverConfigurationImpl$AddressChangeListener"
	};
	$loadClass(ResolverConfigurationImpl, name, initialize, &classInfo$$, ResolverConfigurationImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResolverConfigurationImpl);
	});
	return class$;
}

$Class* ResolverConfigurationImpl::class$ = nullptr;

		} // dns
	} // net
} // sun
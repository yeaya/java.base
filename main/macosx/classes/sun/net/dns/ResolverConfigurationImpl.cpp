#include <sun/net/dns/ResolverConfigurationImpl.h>

#include <java/io/BufferedReader.h>
#include <java/io/FileReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/StringTokenizer.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/net/dns/OptionsImpl.h>
#include <sun/net/dns/ResolverConfiguration$Options.h>
#include <sun/net/dns/ResolverConfiguration.h>
#include <sun/net/dns/ResolverConfigurationImpl$1.h>
#include <sun/net/dns/ResolverConfigurationImpl$2.h>
#include <sun/net/dns/ResolverConfigurationImpl$3.h>
#include <jcpp.h>

#undef TIMEOUT

using $BufferedReader = ::java::io::BufferedReader;
using $FileReader = ::java::io::FileReader;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $StringTokenizer = ::java::util::StringTokenizer;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $OptionsImpl = ::sun::net::dns::OptionsImpl;
using $ResolverConfiguration = ::sun::net::dns::ResolverConfiguration;
using $ResolverConfiguration$Options = ::sun::net::dns::ResolverConfiguration$Options;
using $ResolverConfigurationImpl$1 = ::sun::net::dns::ResolverConfigurationImpl$1;
using $ResolverConfigurationImpl$2 = ::sun::net::dns::ResolverConfigurationImpl$2;
using $ResolverConfigurationImpl$3 = ::sun::net::dns::ResolverConfigurationImpl$3;

namespace sun {
	namespace net {
		namespace dns {

$FieldInfo _ResolverConfigurationImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResolverConfigurationImpl, $assertionsDisabled)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, lock)},
	{"lastRefresh", "J", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfigurationImpl, lastRefresh)},
	{"TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolverConfigurationImpl, TIMEOUT)},
	{"opts", "Lsun/net/dns/ResolverConfiguration$Options;", nullptr, $PRIVATE | $FINAL, $field(ResolverConfigurationImpl, opts)},
	{"searchlist", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/lang/String;>;", $PRIVATE, $field(ResolverConfigurationImpl, searchlist$)},
	{"nameservers", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/lang/String;>;", $PRIVATE, $field(ResolverConfigurationImpl, nameservers$)},
	{}
};

$MethodInfo _ResolverConfigurationImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ResolverConfigurationImpl::*)()>(&ResolverConfigurationImpl::init$))},
	{"fallbackDomain0", "()Ljava/lang/String;", nullptr, $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&ResolverConfigurationImpl::fallbackDomain0))},
	{"getSearchList", "()Ljava/util/LinkedList;", "()Ljava/util/LinkedList<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$LinkedList*(ResolverConfigurationImpl::*)()>(&ResolverConfigurationImpl::getSearchList))},
	{"loadConfig", "()V", nullptr, $PRIVATE, $method(static_cast<void(ResolverConfigurationImpl::*)()>(&ResolverConfigurationImpl::loadConfig))},
	{"nameservers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"options", "()Lsun/net/dns/ResolverConfiguration$Options;", nullptr, $PUBLIC},
	{"resolvconf", "(Ljava/lang/String;II)Ljava/util/LinkedList;", "(Ljava/lang/String;II)Ljava/util/LinkedList<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$LinkedList*(ResolverConfigurationImpl::*)($String*,int32_t,int32_t)>(&ResolverConfigurationImpl::resolvconf))},
	{"searchlist", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{}
};

#define _METHOD_INDEX_fallbackDomain0 1

$InnerClassInfo _ResolverConfigurationImpl_InnerClassesInfo_[] = {
	{"sun.net.dns.ResolverConfigurationImpl$3", nullptr, nullptr, 0},
	{"sun.net.dns.ResolverConfigurationImpl$2", nullptr, nullptr, 0},
	{"sun.net.dns.ResolverConfigurationImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResolverConfigurationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.dns.ResolverConfigurationImpl",
	"sun.net.dns.ResolverConfiguration",
	nullptr,
	_ResolverConfigurationImpl_FieldInfo_,
	_ResolverConfigurationImpl_MethodInfo_,
	nullptr,
	nullptr,
	_ResolverConfigurationImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.dns.ResolverConfigurationImpl$3,sun.net.dns.ResolverConfigurationImpl$2,sun.net.dns.ResolverConfigurationImpl$1"
};

$Object* allocate$ResolverConfigurationImpl($Class* clazz) {
	return $of($alloc(ResolverConfigurationImpl));
}

bool ResolverConfigurationImpl::$assertionsDisabled = false;
$Object* ResolverConfigurationImpl::lock = nullptr;
int64_t ResolverConfigurationImpl::lastRefresh = 0;

$LinkedList* ResolverConfigurationImpl::resolvconf($String* keyword, int32_t maxperkeyword, int32_t maxkeywords) {
	$var($LinkedList, ll, $new($LinkedList));
	try {
		$var($BufferedReader, in, $new($BufferedReader, $$new($FileReader, "/etc/resolv.conf"_s)));
		$var($String, line, nullptr);
		while (($assign(line, in->readLine())) != nullptr) {
			int32_t maxvalues = maxperkeyword;
			if ($nc(line)->isEmpty()) {
				continue;
			}
			bool var$0 = $nc(line)->charAt(0) == u'#';
			if (var$0 || $nc(line)->charAt(0) == u';') {
				continue;
			}
			if (!$nc(line)->startsWith(keyword)) {
				continue;
			}
			$var($String, value, $nc(line)->substring($nc(keyword)->length()));
			if (value->isEmpty()) {
				continue;
			}
			bool var$1 = value->charAt(0) != u' ';
			if (var$1 && value->charAt(0) != u'\t') {
				continue;
			}
			$var($StringTokenizer, st, $new($StringTokenizer, value, " \t"_s));
			while (st->hasMoreTokens()) {
				$var($String, val, st->nextToken());
				bool var$2 = $nc(val)->charAt(0) == u'#';
				if (var$2 || $nc(val)->charAt(0) == u';') {
					break;
				}
				if ("nameserver"_s->equals(keyword)) {
					bool var$5 = $nc(val)->indexOf((int32_t)u':') >= 0;
					bool var$4 = var$5 && val->indexOf((int32_t)u'.') < 0;
					bool var$3 = var$4 && val->indexOf((int32_t)u'[') < 0;
					if (var$3 && val->indexOf((int32_t)u']') < 0) {
						$assign(val, $str({"["_s, val, "]"_s}));
					}
				}
				ll->add(val);
				if (--maxvalues == 0) {
					break;
				}
			}
			if (--maxkeywords == 0) {
				break;
			}
		}
		in->close();
	} catch ($IOException&) {
		$catch();
	}
	return ll;
}

void ResolverConfigurationImpl::loadConfig() {
	$beforeCallerSensitive();
	if (!ResolverConfigurationImpl::$assertionsDisabled && !$Thread::holdsLock(ResolverConfigurationImpl::lock)) {
		$throwNew($AssertionError);
	}
	if (ResolverConfigurationImpl::lastRefresh >= 0) {
		int64_t currTime = $System::currentTimeMillis();
		if ((currTime - ResolverConfigurationImpl::lastRefresh) < ResolverConfigurationImpl::TIMEOUT) {
			return;
		}
	}
	$set(this, nameservers$, $cast($LinkedList, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ResolverConfigurationImpl$1, this)))));
	$set(this, searchlist$, getSearchList());
	ResolverConfigurationImpl::lastRefresh = $System::currentTimeMillis();
}

$LinkedList* ResolverConfigurationImpl::getSearchList() {
	$beforeCallerSensitive();
	$var($LinkedList, sl, nullptr);
	$assign(sl, $cast($LinkedList, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ResolverConfigurationImpl$2, this)))));
	if (sl != nullptr) {
		return sl;
	}
	$assign(sl, $cast($LinkedList, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ResolverConfigurationImpl$3, this)))));
	if (sl != nullptr) {
		return sl;
	}
	$assign(sl, $new($LinkedList));
	$var($String, domain, fallbackDomain0());
	if (domain != nullptr && !domain->isEmpty()) {
		sl->add(domain);
	}
	return sl;
}

void ResolverConfigurationImpl::init$() {
	$ResolverConfiguration::init$();
	$set(this, opts, $new($OptionsImpl));
}

$List* ResolverConfigurationImpl::searchlist() {
	$synchronized(ResolverConfigurationImpl::lock) {
		loadConfig();
		return $cast($List, $nc(this->searchlist$)->clone());
	}
}

$List* ResolverConfigurationImpl::nameservers() {
	$synchronized(ResolverConfigurationImpl::lock) {
		loadConfig();
		return $cast($List, $nc(this->nameservers$)->clone());
	}
}

$ResolverConfiguration$Options* ResolverConfigurationImpl::options() {
	return this->opts;
}

$String* ResolverConfigurationImpl::fallbackDomain0() {
	$init(ResolverConfigurationImpl);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(ResolverConfigurationImpl, fallbackDomain0, $String*);
	$assign($ret, $invokeNativeStatic(ResolverConfigurationImpl, fallbackDomain0));
	$finishNativeStatic();
	return $ret;
}

void clinit$ResolverConfigurationImpl($Class* class$) {
	ResolverConfigurationImpl::$assertionsDisabled = !ResolverConfigurationImpl::class$->desiredAssertionStatus();
	$assignStatic(ResolverConfigurationImpl::lock, $new($Object));
	ResolverConfigurationImpl::lastRefresh = -1;
	{
		$BootLoader::loadLibrary("net"_s);
	}
}

ResolverConfigurationImpl::ResolverConfigurationImpl() {
}

$Class* ResolverConfigurationImpl::load$($String* name, bool initialize) {
	$loadClass(ResolverConfigurationImpl, name, initialize, &_ResolverConfigurationImpl_ClassInfo_, clinit$ResolverConfigurationImpl, allocate$ResolverConfigurationImpl);
	return class$;
}

$Class* ResolverConfigurationImpl::class$ = nullptr;

		} // dns
	} // net
} // sun
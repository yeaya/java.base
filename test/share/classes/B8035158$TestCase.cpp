#include <B8035158$TestCase.h>
#include <B8035158$TestCase$1.h>
#include <B8035158.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/ProxySelector.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

#undef DIRECT

using $B8035158 = ::B8035158;
using $B8035158$TestCase$1 = ::B8035158$TestCase$1;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $ProxySelector = ::java::net::ProxySelector;
using $URI = ::java::net::URI;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Callable = ::java::util::concurrent::Callable;

class B8035158$TestCase$$Lambda$lambda$run$0 : public $Callable {
	$class(B8035158$TestCase$$Lambda$lambda$run$0, $NO_CLASS_INIT, $Callable)
public:
	void init$(B8035158$TestCase* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* call() override {
		 return $nc(inst$)->lambda$run$0();
	}
	B8035158$TestCase* inst$ = nullptr;
};
$Class* B8035158$TestCase$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(B8035158$TestCase$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LB8035158$TestCase;)V", nullptr, $PUBLIC, $method(B8035158$TestCase$$Lambda$lambda$run$0, init$, void, B8035158$TestCase*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(B8035158$TestCase$$Lambda$lambda$run$0, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"B8035158$TestCase$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(B8035158$TestCase$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B8035158$TestCase$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* B8035158$TestCase$$Lambda$lambda$run$0::class$ = nullptr;

void B8035158$TestCase::init$($String* nonProxyHosts, $String* urlhost, bool expectedProxying) {
	B8035158$TestCase::init$(nonProxyHosts, "proxy.example.com"_s, urlhost, expectedProxying);
}

void B8035158$TestCase::init$($String* nonProxyHosts, $String* proxyHost, $String* urlhost, bool expectedProxying) {
	B8035158$TestCase::init$($$new($B8035158$TestCase$1, nonProxyHosts, proxyHost), urlhost, expectedProxying);
}

void B8035158$TestCase::init$($Map* localProperties, $String* urlhost, bool expectedProxying) {
	$set(this, localProperties, localProperties);
	$set(this, urlhost, urlhost);
	this->expectedProxying = expectedProxying;
}

void B8035158$TestCase::run() {
	$useLocalObjectStack();
	$nc($System::out)->printf("urlhost=%s properties=%s: proxied? %s%n"_s, $$new($ObjectArray, {
		this->urlhost,
		this->localProperties,
		$($Boolean::valueOf(this->expectedProxying))
	}));
	$var($List, proxies, $cast($List, $B8035158::withSystemPropertiesSet(this->localProperties, $$new(B8035158$TestCase$$Lambda$lambda$run$0, this))));
	verify(proxies);
}

void B8035158$TestCase::verify($List* proxies) {
	$useLocalObjectStack();
	bool var$0 = $nc(proxies)->size() == 1;
	$init($Proxy$Type);
	bool actualProxying = !(var$0 && $$sure($Proxy, proxies->get(0))->type() == $Proxy$Type::DIRECT);
	if (actualProxying != this->expectedProxying) {
		$throwNew($AssertionError, $$of($String::format("Expected %s connection for %s (given properties=%s). Here\'s the list of proxies returned: %s"_s, $$new($ObjectArray, {
			this->expectedProxying ? "proxied"_s : "direct"_s,
			this->urlhost,
			this->localProperties,
			proxies
		}))));
	}
}

$List* B8035158$TestCase::lambda$run$0() {
	$useLocalObjectStack();
	return $$nc($ProxySelector::getDefault())->select($($URI::create(this->urlhost)));
}

B8035158$TestCase::B8035158$TestCase() {
}

$Class* B8035158$TestCase::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("B8035158$TestCase$$Lambda$lambda$run$0")) {
			return B8035158$TestCase$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"localProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $FINAL, $field(B8035158$TestCase, localProperties)},
		{"urlhost", "Ljava/lang/String;", nullptr, $FINAL, $field(B8035158$TestCase, urlhost)},
		{"expectedProxying", "Z", nullptr, $FINAL, $field(B8035158$TestCase, expectedProxying)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(B8035158$TestCase, init$, void, $String*, $String*, bool)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(B8035158$TestCase, init$, void, $String*, $String*, $String*, bool)},
		{"<init>", "(Ljava/util/Map;Ljava/lang/String;Z)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;Ljava/lang/String;Z)V", 0, $method(B8035158$TestCase, init$, void, $Map*, $String*, bool)},
		{"lambda$run$0", "()Ljava/util/List;", nullptr, $PRIVATE | $SYNTHETIC, $method(B8035158$TestCase, lambda$run$0, $List*), "java.lang.Exception"},
		{"run", "()V", nullptr, 0, $virtualMethod(B8035158$TestCase, run, void)},
		{"verify", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/net/Proxy;>;)V", 0, $virtualMethod(B8035158$TestCase, verify, void, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B8035158$TestCase", "B8035158", "TestCase", $PRIVATE | $STATIC},
		{"B8035158$TestCase$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B8035158$TestCase",
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
		"B8035158"
	};
	$loadClass(B8035158$TestCase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B8035158$TestCase);
	});
	return class$;
}

$Class* B8035158$TestCase::class$ = nullptr;
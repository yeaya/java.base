#include <java/net/CookieManager$CookieComparator.h>
#include <java/net/CookieManager.h>
#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

void CookieManager$CookieComparator::init$() {
}

int32_t CookieManager$CookieComparator::compare($HttpCookie* c1, $HttpCookie* c2) {
	$useLocalObjectStack();
	if (c1 == c2) {
		return 0;
	}
	if (c1 == nullptr) {
		return -1;
	}
	if (c2 == nullptr) {
		return 1;
	}
	$var($String, p1, $nc(c1)->getPath());
	$var($String, p2, $nc(c2)->getPath());
	$assign(p1, (p1 == nullptr) ? ""_s : p1);
	$assign(p2, (p2 == nullptr) ? ""_s : p2);
	int32_t len1 = $nc(p1)->length();
	int32_t len2 = $nc(p2)->length();
	if (len1 > len2) {
		return -1;
	}
	if (len2 > len1) {
		return 1;
	}
	int64_t creation1 = c1->getCreationTime();
	int64_t creation2 = c2->getCreationTime();
	if (creation1 < creation2) {
		return -1;
	}
	if (creation1 > creation2) {
		return 1;
	}
	return 0;
}

int32_t CookieManager$CookieComparator::compare(Object$* c1, Object$* c2) {
	return this->compare($cast($HttpCookie, c1), $cast($HttpCookie, c2));
}

CookieManager$CookieComparator::CookieManager$CookieComparator() {
}

$Class* CookieManager$CookieComparator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CookieManager$CookieComparator, init$, void)},
		{"compare", "(Ljava/net/HttpCookie;Ljava/net/HttpCookie;)I", nullptr, $PUBLIC, $virtualMethod(CookieManager$CookieComparator, compare, int32_t, $HttpCookie*, $HttpCookie*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CookieManager$CookieComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.CookieManager$CookieComparator", "java.net.CookieManager", "CookieComparator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.CookieManager$CookieComparator",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/net/HttpCookie;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.CookieManager"
	};
	$loadClass(CookieManager$CookieComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CookieManager$CookieComparator);
	});
	return class$;
}

$Class* CookieManager$CookieComparator::class$ = nullptr;

	} // net
} // java
#include <sun/security/x509/AVAComparator.h>
#include <java/util/Comparator.h>
#include <sun/security/x509/AVA.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $AVA = ::sun::security::x509::AVA;

namespace sun {
	namespace security {
		namespace x509 {

$Comparator* AVAComparator::INSTANCE = nullptr;

void AVAComparator::init$() {
}

$Comparator* AVAComparator::getInstance() {
	$init(AVAComparator);
	return AVAComparator::INSTANCE;
}

int32_t AVAComparator::compare($AVA* a1, $AVA* a2) {
	$useLocalObjectStack();
	bool a1Has2253 = $nc(a1)->hasRFC2253Keyword();
	bool a2Has2253 = $nc(a2)->hasRFC2253Keyword();
	if (a1Has2253 == a2Has2253) {
		return $$nc(a1->toRFC2253CanonicalString())->compareTo($(a2->toRFC2253CanonicalString()));
	} else if (a1Has2253) {
		return -1;
	} else {
		return 1;
	}
}

int32_t AVAComparator::compare(Object$* a1, Object$* a2) {
	return this->compare($cast($AVA, a1), $cast($AVA, a2));
}

void AVAComparator::clinit$($Class* clazz) {
	$assignStatic(AVAComparator::INSTANCE, $new(AVAComparator));
}

AVAComparator::AVAComparator() {
}

$Class* AVAComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/util/Comparator;", "Ljava/util/Comparator<Lsun/security/x509/AVA;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AVAComparator, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AVAComparator, init$, void)},
		{"compare", "(Lsun/security/x509/AVA;Lsun/security/x509/AVA;)I", nullptr, $PUBLIC, $virtualMethod(AVAComparator, compare, int32_t, $AVA*, $AVA*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AVAComparator, compare, int32_t, Object$*, Object$*)},
		{"getInstance", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Lsun/security/x509/AVA;>;", $STATIC, $staticMethod(AVAComparator, getInstance, $Comparator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.x509.AVAComparator",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lsun/security/x509/AVA;>;"
	};
	$loadClass(AVAComparator, name, initialize, &classInfo$$, AVAComparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AVAComparator);
	});
	return class$;
}

$Class* AVAComparator::class$ = nullptr;

		} // x509
	} // security
} // sun
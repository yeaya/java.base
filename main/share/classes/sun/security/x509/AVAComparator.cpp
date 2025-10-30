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

$FieldInfo _AVAComparator_FieldInfo_[] = {
	{"INSTANCE", "Ljava/util/Comparator;", "Ljava/util/Comparator<Lsun/security/x509/AVA;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AVAComparator, INSTANCE)},
	{}
};

$MethodInfo _AVAComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AVAComparator::*)()>(&AVAComparator::init$))},
	{"compare", "(Lsun/security/x509/AVA;Lsun/security/x509/AVA;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getInstance", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Lsun/security/x509/AVA;>;", $STATIC, $method(static_cast<$Comparator*(*)()>(&AVAComparator::getInstance))},
	{}
};

$ClassInfo _AVAComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.x509.AVAComparator",
	"java.lang.Object",
	"java.util.Comparator",
	_AVAComparator_FieldInfo_,
	_AVAComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lsun/security/x509/AVA;>;"
};

$Object* allocate$AVAComparator($Class* clazz) {
	return $of($alloc(AVAComparator));
}

$Comparator* AVAComparator::INSTANCE = nullptr;

void AVAComparator::init$() {
}

$Comparator* AVAComparator::getInstance() {
	$init(AVAComparator);
	return AVAComparator::INSTANCE;
}

int32_t AVAComparator::compare($AVA* a1, $AVA* a2) {
	$useLocalCurrentObjectStackCache();
	bool a1Has2253 = $nc(a1)->hasRFC2253Keyword();
	bool a2Has2253 = $nc(a2)->hasRFC2253Keyword();
	if (a1Has2253 == a2Has2253) {
		return $nc($(a1->toRFC2253CanonicalString()))->compareTo($(a2->toRFC2253CanonicalString()));
	} else if (a1Has2253) {
		return -1;
	} else {
		return 1;
	}
}

int32_t AVAComparator::compare(Object$* a1, Object$* a2) {
	return this->compare($cast($AVA, a1), $cast($AVA, a2));
}

void clinit$AVAComparator($Class* class$) {
	$assignStatic(AVAComparator::INSTANCE, $new(AVAComparator));
}

AVAComparator::AVAComparator() {
}

$Class* AVAComparator::load$($String* name, bool initialize) {
	$loadClass(AVAComparator, name, initialize, &_AVAComparator_ClassInfo_, clinit$AVAComparator, allocate$AVAComparator);
	return class$;
}

$Class* AVAComparator::class$ = nullptr;

		} // x509
	} // security
} // sun
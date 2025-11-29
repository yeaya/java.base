#include <java/lang/ProcessEnvironment$NameComparator.h>

#include <java/lang/Math.h>
#include <java/lang/ProcessEnvironment.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _ProcessEnvironment$NameComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProcessEnvironment$NameComparator::*)()>(&ProcessEnvironment$NameComparator::init$))},
	{"compare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(ProcessEnvironment$NameComparator::*)($String*,$String*)>(&ProcessEnvironment$NameComparator::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _ProcessEnvironment$NameComparator_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$NameComparator", "java.lang.ProcessEnvironment", "NameComparator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ProcessEnvironment$NameComparator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.ProcessEnvironment$NameComparator",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ProcessEnvironment$NameComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/String;>;",
	nullptr,
	_ProcessEnvironment$NameComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$NameComparator($Class* clazz) {
	return $of($alloc(ProcessEnvironment$NameComparator));
}

void ProcessEnvironment$NameComparator::init$() {
}

int32_t ProcessEnvironment$NameComparator::compare($String* s1, $String* s2) {
	int32_t n1 = $nc(s1)->length();
	int32_t n2 = $nc(s2)->length();
	int32_t min = $Math::min(n1, n2);
	for (int32_t i = 0; i < min; ++i) {
		char16_t c1 = s1->charAt(i);
		char16_t c2 = s2->charAt(i);
		if (c1 != c2) {
			c1 = $Character::toUpperCase(c1);
			c2 = $Character::toUpperCase(c2);
			if (c1 != c2) {
				return c1 - c2;
			}
		}
	}
	return n1 - n2;
}

int32_t ProcessEnvironment$NameComparator::compare(Object$* s1, Object$* s2) {
	return this->compare($cast($String, s1), $cast($String, s2));
}

ProcessEnvironment$NameComparator::ProcessEnvironment$NameComparator() {
}

$Class* ProcessEnvironment$NameComparator::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$NameComparator, name, initialize, &_ProcessEnvironment$NameComparator_ClassInfo_, allocate$ProcessEnvironment$NameComparator);
	return class$;
}

$Class* ProcessEnvironment$NameComparator::class$ = nullptr;

	} // lang
} // java
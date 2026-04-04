#include <java/io/ObjectStreamClass$5.h>
#include <java/io/ObjectStreamClass$MemberSignature.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $ObjectStreamClass$MemberSignature = ::java::io::ObjectStreamClass$MemberSignature;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void ObjectStreamClass$5::init$() {
}

int32_t ObjectStreamClass$5::compare($ObjectStreamClass$MemberSignature* ms1, $ObjectStreamClass$MemberSignature* ms2) {
	int32_t comp = $nc($nc(ms1)->name)->compareTo($nc(ms2)->name);
	if (comp == 0) {
		comp = $nc(ms1->signature)->compareTo(ms2->signature);
	}
	return comp;
}

int32_t ObjectStreamClass$5::compare(Object$* ms1, Object$* ms2) {
	return this->compare($cast($ObjectStreamClass$MemberSignature, ms1), $cast($ObjectStreamClass$MemberSignature, ms2));
}

ObjectStreamClass$5::ObjectStreamClass$5() {
}

$Class* ObjectStreamClass$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ObjectStreamClass$5, init$, void)},
		{"compare", "(Ljava/io/ObjectStreamClass$MemberSignature;Ljava/io/ObjectStreamClass$MemberSignature;)I", nullptr, $PUBLIC, $virtualMethod(ObjectStreamClass$5, compare, int32_t, $ObjectStreamClass$MemberSignature*, $ObjectStreamClass$MemberSignature*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ObjectStreamClass$5, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.ObjectStreamClass",
		"computeDefaultSUID",
		"(Ljava/lang/Class;)J"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectStreamClass$5", nullptr, nullptr, 0},
		{"java.io.ObjectStreamClass$MemberSignature", "java.io.ObjectStreamClass", "MemberSignature", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectStreamClass$5",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/io/ObjectStreamClass$MemberSignature;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectStreamClass"
	};
	$loadClass(ObjectStreamClass$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamClass$5);
	});
	return class$;
}

$Class* ObjectStreamClass$5::class$ = nullptr;

	} // io
} // java